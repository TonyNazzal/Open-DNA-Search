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

#include "thread.h"
#include "database.h"
#include "config.h"
#include "log.h"

static void *thread_start(void *arg)
{
    thread_info *tinfo = (thread_info *) arg;

    database_t * maindb = tinfo->maindb;

    int x;
    list_container_t *top_list = malloc(sizeof(list_container_t)), *search_list = (list_container_t *)tinfo->search_list;
    data_list_t *list = NULL;

    init_list_container(top_list);

    int match_percentage_i = main_config->match_percentage;
    float match_percentage = ((float)match_percentage_i)/1000.0f;
    uint8_t *data = NULL;
    for(x = tinfo->start_index; x< tinfo->stop_index && x<index_size; x++)
    {

        long index = *index_offset[x];
        int dnalen;
        data = get_db_data(maindb, index, *index_len[x], data);
        for(list = (data_list_t *)search_list->root; list; list = (data_list_t *)list->next)
        {
            tinfo->len = list->str_len;
            tinfo->search_string = list->str;
            float best_possible_score = (float)(((STRONG_MATCH_MULT *tinfo->len)+((tinfo->len<<1))));
            unsigned int best_match = best_match_score(data, list->data, *index_len[x] * 2, list->str_len, best_possible_score, match_percentage);
            float score = ((float)best_match/best_possible_score);
            //printf("T%i SCORE %f %i\n", tinfo->thread_num, score, x);
            if(score >= match_percentage)
            {
                add_string_to_list(top_list, index_entry[x]);
		top_list->end->score = memcpy(malloc(sizeof(float)), &score, sizeof(float));
                ls("MATCH %0.4f:%s:%s", score, tinfo->search_string, index_entry[x]);
                //printf("MATCH %0.4f:%s:%s", score, tinfo->search_string, index_entry[x]);
            }
        }

    }
    free(data);
    global_thread_count--;
    return (void *)top_list;
}


pthread_t *start_thread(void ** maindb, int id, long start, long stop, void *search_list)
{
    pthread_attr_t attr;
    pthread_attr_init(&attr);
    thread_info *tinfo = calloc(sizeof(thread_info), 1);
    tinfo->start_index = start;
    tinfo->stop_index = stop;
    tinfo->thread_num = id;
    tinfo->search_list = search_list;

    if(NULL == *maindb)
    {
        *maindb = open_db(main_config->main_database);
        ls("Opened main database %s for thread %i", main_config->main_database, id);
    }
    tinfo->maindb = *maindb;
    global_thread_count++;
    pthread_create (&tinfo->thread_id, &attr, &thread_start, tinfo);
    pthread_attr_destroy(&attr);
    return &tinfo->thread_id;
}
