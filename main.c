/*
   Identify Organisms from a Stream of DNA Sequences
   Copyright (C) 2016  Tony E. Nazzal

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA

   How to contact the author by electronic mail: tony.e.nazzal@gmail.com

*/


#include "common.h"
#include "database.h"
#include "thread.h"
#include "config.h"
#include "log.h"

int main(int argc, char **argv)
{
    int x = 0, s = 1, i = 0;

    char *config_file = "config.cnf", *logfilename = "log.txt", *config_logfilename;
    int opt = 0;
    uint32_t start_index= 0, end_index= 0;
    int match_low = -1, match_high = -1;
    while ((opt = getopt(argc, argv, "s::e::m::b::lhc:")) != -1) {
        switch (opt)
        {
	    case 's':
		if(TRUE == check_string(optarg))
			start_index = atol(optarg);
	     break;
	    case 'e':
		if(TRUE == check_string(optarg))
			end_index = atol(optarg);
            break;
	    case 'm':
		if(TRUE == check_string(optarg))
			match_high = atol(optarg);
	     break;
	    case 'b':
		if(TRUE == check_string(optarg))
			match_low = atol(optarg);
            break;
	     case 'c':
                if(TRUE == check_string(optarg))
                    config_file = strdup(optarg);
                break;
            case 'l':
                if(TRUE == check_string(optarg))
                    logfilename = strdup(optarg);
                break;
            case 'h':
            case '?': 
                fprintf(stderr, "Usage: %s [-c] \"config file\"\n", argv[0]);
                exit(EXIT_SUCCESS);
            break;
            default:
            break;
        }
    }
    //printf("start index = %u end index = %u optind %i\n",start_index, end_index, optind);
    main_config = read_config(config_file);

    if(FAILURE == get_config_string("logfile", main_config, &config_logfilename))
        mylogfile = log_open(logfilename);
    else
        mylogfile = log_open(config_logfilename);
    if(match_low >= 0)
	main_config->match_bail_percentage = match_low;
    if(match_high >= 0)
	main_config->match_percentage = match_high;
    indexdb = open_db(main_config->index_database);
    ls("Opened index database %s", main_config->index_database);
    FILE * indexf = fdopen(indexdb->fd, "r");
	char buf[65535];
    list_container_t ncbi_nt_index;
    init_list_container(&ncbi_nt_index);
    uint32_t count = 0;
    while(NULL != fgets(buf, 65535, indexf) && (0 == end_index || (end_index > 0 && count < end_index))) {
        add_string_to_list(&ncbi_nt_index, buf);
	count++;
    }
    index_size = ncbi_nt_index.size;
    ls("Index database line count is %i", index_size);
    index_offset = malloc(index_size * sizeof(long *));
    index_entry = malloc(index_size * sizeof(char *));
    index_len = malloc(index_size * sizeof(uint32_t *));

    string_list_t *list;
    db_index_t entry;
    
    for(list = ncbi_nt_index.root; list && (0 == end_index || (end_index > 0 && x < end_index)); list = (string_list_t *)list->next, x++)
    {
        index_entry[x] = list->str;
        index_offset[x] = malloc(sizeof(long));
        index_len[x] = malloc(sizeof(uint32_t));
        entry.str = list->str;
        *index_offset[x] = get_data_index(&entry);
        *index_len[x] = entry.datalen;
    }

    char *search_string = argv[1];

    int search_len = strlen(search_string);
    int search_data_len = 0;
    long nprocessors = sysconf(_SC_NPROCESSORS_ONLN);
    global_thread_count = 0;

    pthread_t *threads[nprocessors];
    database_t *thread_db[nprocessors];
    for(x = 0; x< nprocessors; x++)
        {
            threads[x] = NULL;
            thread_db[x] = NULL;
        }
    while(global_thread_count)
        sleep(1);
    void *thread_result;
    int step_size = index_size/1000, launch_thread = FALSE;
    if(step_size <= 0)
	step_size+=50;
    list_container_t main_list;
    init_list_container(&main_list);
    list_container_t search_list;
    data_list_container_t search_list_data;
    init_list_container(&search_list);
    init_data_list_container(&search_list_data);
    for(x = optind;x < argc; x++)
    {
        //printf("arguments %i %s\n", x, argv[x]);
        ls("arguments %i: %s", x, argv[x]);
        add_string_to_list(&search_list, argv[x]);
        unsigned int str_len = strlen(argv[x]);
        uint8_t data[str_len];
        uint32_t data_len = 0;
        compress_dna(data, argv[x], str_len, &data_len);
        add_data_to_list(&search_list_data, data, data_len, argv[x], str_len);
    }


    //loop through index segments
    long total = 0;
    for(i = 0; i < index_size+step_size; i+=step_size, launch_thread = FALSE)
    {
        //loop until thread is launched for this index segment
        while(FALSE == launch_thread)
        {
            //loop through each thread
            for(x = 0; x< nprocessors; x++)
            {
                //check if thread position is running
                if(NULL != threads[x])
                {
                    //check if thread is done and get results
                    s = pthread_tryjoin_np(*threads[x], &thread_result);
                    if(FALSE == s)
                    {
                        list_container_t *temp_list = (list_container_t *) thread_result;
                        string_list_t *last = NULL;
                        if(temp_list->size)
                        for(list = temp_list->root; list && list->str; list = (string_list_t *)list->next)
                        {
                            if(last)
                            {
                                if(last->str)
				{
                                    free(last->str);
				    free(last->score);
				}
                                free(last);
                            }

                            add_string_to_list(&main_list, list->str);
			    main_list.end->score = memcpy(malloc(sizeof(float)), list->score, sizeof(float));
                            last = list;
		
                        }
                        if(last)
                            free(last);
                        free(temp_list);
                        threads[x] = NULL;
                        total += step_size;
                        ls("%li completion = %0.2f\tthread count = %i\tlist size = %li", total, (float)i/(float)index_size, global_thread_count, main_list.size);
                    }

                }
                else //launch a new thread
                {
                     threads[x] = start_thread((void **)&thread_db[x], x, i, i+step_size, (void *)&search_list_data);
                     launch_thread = TRUE;
                     break;
                }
            }
            usleep(10);
        }
    }
    // print final match results
    for(list = main_list.root; list; list = (string_list_t *)list->next)
    {
        ls("%.4f %s", *list->score, list->str);
	printf("%.4f %s", *list->score, list->str);
    }
    close_db(indexdb);
    return EXIT_SUCCESS;
}
