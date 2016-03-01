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

#include <string.h>
#include "database.h"
#include "config.h"
#include "case.h"

const static uint8_t adenosine[] = {0,0,0,0,1,1,0,0,1,0,1,0,1,1,1,1};
const static uint8_t cytidine[] =  {0,1,0,0,0,0,1,0,1,1,0,1,0,1,1,1};
const static uint8_t guanosine[] = {0,0,1,0,0,1,0,1,0,1,0,1,1,0,1,1};
const static uint8_t thymidine[] = {0,0,0,1,0,0,1,1,0,0,1,1,1,1,0,1};


database_t *open_db(char *path)
{
    database_t * db = malloc(sizeof(database_t));
    db->fd = open(path, O_RDONLY);
    db->open = TRUE;
    pthread_mutex_init(&db->lock, NULL);
    return db;
}

void close_db(database_t * db)
{
    close(db->fd);
    db->open = FALSE;
    pthread_mutex_destroy(&db->lock);
    free(db);
}

int check_db(database_t *db)
{
    if(NULL != db && TRUE == db->open)
        return TRUE;
    return FALSE;
}

int check_string(char *str)
{
    if(NULL == str)
        return FALSE;
    if(0 == strcmp(str,""))
        return FALSE;
    return TRUE;

}

long get_data_index(db_index_t *entry)
{
        char *buf = strdup(entry->str);
        char *last = NULL;
        char *data_pos = strtok_r(buf, ":", &last);
        char *data_len = strtok_r(NULL, ":", &last);
        long ret = atol(data_pos);
        entry->offset = ret;
        entry->datalen = atoi(data_len);
        //printf("datalen %i\n", entry->datalen);
        free(buf);

        return ret;
}

void add_unique_string_to_list(string_list_t *list, char * str)
{
    if(!check_string(str))
        return;
    string_list_t *tmp = list;
    while(NULL != tmp->next)
    {
        if(FALSE == check_string(tmp->str))
            tmp = (string_list_t *)tmp->next;
        else if(0 == strcmp(tmp->str, str))
            return;
    }
    if(FALSE == check_string(tmp->str))
        tmp->str = strdup(str);
    else
    {
        if(0 == strcmp(tmp->str, str))
            return;
        tmp->next = malloc(sizeof(string_list_t));
        tmp = (string_list_t *)tmp->next;
        tmp->next = NULL;
        tmp->str = strdup(str);
    }
    //printf("add string:%s\n", str);
    return;
}

int find_genes(list_container_t *list_container, char *str, uint64_t len)
{
    char *buf = malloc(1);
    char *last = NULL;
    static string start_codon = "ATG";
    static string stop_codon[3] = {"TAA", "TGA", "TAG"};
    uint64_t x = 0, start_pos = 0, stop_pos = 0;
    uint16_t count = 0;
    uint8_t open = FALSE;

    while(x+2 < len)
    {
        if(str[x] == start_codon[0] && str[x+1] == start_codon[1] && str[x+2] == start_codon[2])
        {
            start_pos = x;
            open = TRUE;
            x+=3;
        }
        else if(TRUE == open && (str[x] == stop_codon[0][0] && str[x+1] == stop_codon[0][1] && str[x+2] == stop_codon[0][2]||
                str[x] == stop_codon[1][0] && str[x+1] == stop_codon[1][1] && str[x+2] == stop_codon[1][2]||
                str[x] == stop_codon[2][0] && str[x+1] == stop_codon[2][1] && str[x+2] == stop_codon[2][2]))
        {
            stop_pos = x+3;
            uint64_t gene_len = (stop_pos - start_pos);
            buf = realloc(buf, gene_len + 1);
            strncpy(buf, str+start_pos, gene_len);
            buf[gene_len] = '\0';
            add_string_to_list(list_container, buf);
            count++;
            open = FALSE;
            x+=3;
        }
        else
            x++;

    }
    free(buf);
    return count;
}

void add_string_to_list(list_container_t *list_container, char * str)
{

    if(!check_string(str))
        return;
    string_list_t *tmp = list_container->end;
    while(NULL != tmp->next)
        tmp = (string_list_t *)tmp->next;
    if(FALSE == check_string(tmp->str))
    {
        tmp->str = strdup(str);
        list_container->size++;
    }
    else
    {
        tmp->next = malloc(sizeof(string_list_t));
        tmp = (string_list_t *)tmp->next;
        tmp->next = NULL;
        tmp->str = strdup(str);
        list_container->size++;
        list_container->end = tmp;
    }
      return;
}

/*
typedef struct _data_list_t
{
    char *str;
    uint8_t *data;
    uint32_t length;
    void *next;
}data_list_t;
*/

void add_data_to_list(data_list_container_t *list_container, uint8_t *data, unsigned int len, char *str, unsigned int str_len)
{

    data_list_t *tmp = (data_list_t *)list_container->end;
    while(NULL != tmp->next)
        tmp = (data_list_t *)tmp->next;
    if(NULL == (tmp->data))
    {
        tmp->data = memcpy(malloc(len), data, len);
        tmp->length = len;
        tmp->str = strdup(str);
	tmp->score = NULL;
        tmp->str_len = str_len;
        list_container->size++;
    }
    else
    {
        tmp->next = malloc(sizeof(data_list_t));
        tmp = (data_list_t *)tmp->next;
        tmp->next = NULL;
        tmp->data = memcpy(malloc(len), data, len);
        tmp->length = len;
        tmp->str = strdup(str);
	tmp->score = NULL;
        tmp->str_len = str_len;
        list_container->size++;
        list_container->end = (data_list_t *)tmp;
    }
      return;
}

list_container_t *init_list_container(list_container_t *list_container)
{
    list_container->root = malloc(sizeof(string_list_t));
    list_container->root->next = NULL;
    list_container->root->str = NULL;
    list_container->root->score = NULL;
    list_container->size = 0;
    list_container->end = list_container->root;
    list_container->extra_data = NULL;
    return list_container;
}

data_list_container_t *init_data_list_container(data_list_container_t *list_container)
{
    list_container->root = malloc(sizeof(data_list_t));
    list_container->root->next = NULL;
    list_container->root->str = NULL;
    list_container->root->score = NULL;
    list_container->root->data = NULL;
    list_container->size = 0;
    list_container->end = list_container->root;
    list_container->extra_data = NULL;
    return list_container;
}


string_list_t *expand_string(list_container_t *list, char * str)
{
/*

                             STANDARD BASE CODES

These are the official IUPAC-IUB single-letter base codes (reference 1 below).

     Code      Base Description
     ----      --------------------------------------------------------------
     G         Guanine
     A         Adenine
     T         Thymine
     C         Cytosine
     R         Purine               (A or G)
     Y         Pyrimidine           (C or T or U)
     M         Amino                (A or C)
     K         Ketone               (G or T)
     S         Strong interaction   (C or G)
     W         Weak interaction     (A or T)
     H         Not-G                (A or C or T) H follows G in the alphabet
     B         Not-A                (C or G or T) B follows A
     V         Not-T (not-U)        (A or C or G) V follows U(T)
     D         Not-C                (A or G or T) D follows C
     N         Any                  (A or C or G or T)
     U         Uracil               (Used to denote unused position)

 */
    list_container_t temp_container;
    if(NULL == list)
    {
        list = &temp_container;

        list->root = malloc(sizeof(string_list_t));
        list->root->next = NULL;
        list->root->str = NULL;
        list->size = 0;
        list->end = list->root;
    }

    int length = strlen(str);
    int x, count;
    for(x = 0, count = 0;(0 == count) && (x<length); x++)
    {
        char tmp_str[length];
        switch(str[x])
        {
			case 'R':

                strcpy(tmp_str, str);
                tmp_str[x] = 'A';
                expand_string(list, tmp_str);
                tmp_str[x] = 'G';
                expand_string(list, tmp_str);
                count++;
			break;
			case 'Y':
                strcpy(tmp_str, str);
                tmp_str[x] = 'C';
                expand_string(list, tmp_str);
                tmp_str[x] = 'T';
                expand_string(list, tmp_str);
                count++;
			break;
			case 'K':
                strcpy(tmp_str, str);
                tmp_str[x] = 'G';
                expand_string(list, tmp_str);
                tmp_str[x] = 'T';
                expand_string(list, tmp_str);
                count++;
			break;
			case 'M':
                strcpy(tmp_str, str);
                tmp_str[x] = 'C';
                expand_string(list, tmp_str);
                tmp_str[x] = 'A';
                expand_string(list, tmp_str);
                count++;
			break;
			case 'S':
                strcpy(tmp_str, str);
                tmp_str[x] = 'C';
                expand_string(list, tmp_str);
                tmp_str[x] = 'G';
                expand_string(list, tmp_str);
                count++;
			break;
			case 'W':
                strcpy(tmp_str, str);
                tmp_str[x] = 'A';
                expand_string(list, tmp_str);
                tmp_str[x] = 'T';
                expand_string(list, tmp_str);
                count++;
			break;
			case 'B':
                strcpy(tmp_str, str);
                tmp_str[x] = 'C';
                expand_string(list, tmp_str);
                tmp_str[x] = 'G';
                expand_string(list, tmp_str);
                tmp_str[x] = 'T';
                expand_string(list, tmp_str);
                count++;
			break;
			case 'D':
                strcpy(tmp_str, str);
                tmp_str[x] = 'A';
                expand_string(list, tmp_str);
                tmp_str[x] = 'G';
                expand_string(list, tmp_str);
                tmp_str[x] = 'T';
                expand_string(list, tmp_str);
                count++;
			break;
			case 'H':
                strcpy(tmp_str, str);
                tmp_str[x] = 'A';
                expand_string(list, tmp_str);
                tmp_str[x] = 'C';
                expand_string(list, tmp_str);
                tmp_str[x] = 'T';
                expand_string(list, tmp_str);
                count++;
			break;
			case 'V':
                strcpy(tmp_str, str);
                tmp_str[x] = 'A';
                expand_string(list, tmp_str);
                tmp_str[x] = 'C';
                expand_string(list, tmp_str);
                tmp_str[x] = 'G';
                expand_string(list, tmp_str);
                count++;
			break;
			case 'N':
                strcpy(tmp_str, str);
                tmp_str[x] = 'A';
                expand_string(list, tmp_str);
                tmp_str[x] = 'C';
                expand_string(list, tmp_str);
                tmp_str[x] = 'G';
                expand_string(list, tmp_str);
                tmp_str[x] = 'T';
                expand_string(list, tmp_str);
                count++;
			break;
            default:
            break;
        }
    }
    if(0 == count)
        add_string_to_list(list, str);
    string_list_t *ret = list->root;
    return ret;
}

char *get_item(database_t *db, long index)
{
    if(!check_db(db))
        return NULL;
    lseek(db->fd, index, SEEK_SET);
    int size = 1024;
    uint8_t *data = calloc(size*2, 1);
    int x =0;
    int get_data = TRUE;
    while(TRUE == get_data && read(db->fd, data+(size - 1024), 1024))
        {
        //printf("size %i x %i\n",size, x);
        for(; x < size; x++)
            if(0x00 == data[x])
            {
                get_data = FALSE;
                break;
            }
        if(TRUE == get_data)
        {
             size+=1024;

             data = realloc(data, size);
             if(NULL == data)
             {

                 break;
             }
                //printf("\nREALLOC %i\n", size);
        }
        }
    char *cdata = malloc((x*2) + 1);

    int res = 0;
    expand_dna(cdata, data, x, &res);
    free(data);
    //printf("%s\n", cdata);
    return cdata;
}

uint8_t *get_db_data(database_t *db, long index, uint32_t length, uint8_t *data)
{
    if(!check_db(db))
        return NULL;
    lseek(db->fd, index, SEEK_SET);
    data = realloc(data, length);
    int res = read(db->fd, data, length);
    return data;
}



float best_match_score(uint8_t *str1, uint8_t *str2, int len1, int len2, float best_possible_score, float match_percentage)
{
    match_counts score;
    unsigned int score_value = 0, best_score = 0;
    int  best_offset = -1, x, haystack_len, needle_len;
    uint8_t *haystack, *needle;

     if(len1 >= len2)
     {
        haystack = str1;
        needle = str2;
        haystack_len = len1;
        needle_len = len2;
     }
     else
     {
        haystack = str2;
        needle = str1;
        haystack_len = len2;
        needle_len = len1;
     }

    int min_match_len = 1 + (needle_len - (int)((float)needle_len*((float)main_config->match_bail_percentage/1000.0f)));

    for(x = needle_len - min_match_len; x >= 0; x--)
    {

        match_dna_data(haystack, needle, 0, x, haystack_len > needle_len - x ?needle_len-x:haystack_len, &score);
        score_value = calculate_score(&score);

        if(score_value > best_score)
            {
            best_score = score_value;

	    }
    }

    for(x = 0; x < (haystack_len - min_match_len); x++)
    {

        match_dna_data(haystack, needle, x, 0, haystack_len -x > needle_len ?needle_len:haystack_len -x, &score);
        score_value = calculate_score(&score);

        if(score_value > best_score)
            {
            best_score = score_value;
            }
    }
    return (float)best_score;
}

unsigned int calculate_score(match_counts *score)
{
    if(0 == score->strong || (score->very_weak > (score->strong + score->medium + score->weak)))
        return 0;
    return score->string_weight +
        (score->strong * STRONG_MATCH_MULT) +
        (score->medium * MEDIUM_MATCH_MULT) +
        (score->weak * WEAK_MATCH_MULT) +
        score->very_weak;
}

void match_dna(char *str1, char* str2, unsigned int length, match_counts *score)
{

	int x, pos, bytepos = 0;
	char databyte = '\0';
	uint8_t basecode1, basecode2, res;
	unsigned int match_count = 0;
	score->none = score->strong = score->medium = score->weak = score->very_weak = score->string_len = score->string_weight = 0;

    int bail = (int)((float)length*((float)main_config->match_bail_percentage/1000.0f));

    for(x = 0, pos = 0; x < length; x++)
    {

        basecode1 = base_to_code(str1[x]) , basecode2 = base_to_code(str2[x]);
        res = match_bytecodes(basecode1, basecode2);
        switch(res)
        {
            case STRONG_MATCH:
                score->strong++;
                score->string_len++;

            break;
            case MEDIUM_MATCH:
                score->medium++;
                score->string_len++;

            break;
            case WEAK_MATCH:
                score->weak++;
                score->string_len++;

            break;
            case VERY_WEAK_MATCH:
                score->very_weak++;
                score->string_len++;

            break;
            default:
                score->string_weight += (score->string_len<<1) * STRING_LENGTH_MULT;
                score->string_len = 0;
                score->none++;
                if(score->none >= bail)
                    return;
            break;
        }
    }

	if(score->string_len)
	    score->string_weight += (score->string_len<<1) * STRING_LENGTH_MULT;
	return;
}

void match_dna_data(uint8_t *str1, uint8_t* str2, uint32_t offset1, uint32_t offset2, uint64_t length, match_counts *score)
{

	auto uint32_t x = 0;
    auto uint32_t offs1 = offset1, offs2 = offset2, doff1 = offset1/2, doff2 = offset2/2;
	auto uint8_t basecode1, basecode2, res;


	memset(score, 0x00, sizeof(match_counts));
    uint32_t dlength = length/2;
    int bail = (int)((float)length*((float)main_config->match_bail_percentage/1000.0f));
    if((offs1&0x01)&&(!(offs2&0x01)))
    {
        for(; x < dlength ; x++)
        {
            if(score_results(match_data_bytes((str1[doff1+x]<<4)|((str1[doff1+x+1]>>4)&0x0F), str2[doff2+x]), score, bail))
                return;
        }
    }else
    if((offs2&0x01)&&(!(offs1&0x01)))
    {
        for(; x < dlength ; x++)
        {
            if(score_results(match_data_bytes(str1[doff1+x], (str2[doff2+x]<<4)|((str2[doff2+x+1]>>4)&0x0F)), score, bail))
                return;
        }
    }else
    if((offs2&0x01)&&(offs1&0x01))
    {

            if(score_results(match_data_bytes((str1[doff1+x]<<4)|((str1[doff1+x+1]>>4)&0x0F), (str2[doff2+x]<<4)|((str2[doff2+x+1]>>4)&0x0F)), score, bail))
                return;

    }else
    for(; x < dlength ; x++)
    {
        if(score_results(match_data_bytes(str1[doff1+x], str2[doff2+x]), score, bail))
            return;
    }
    if(length&0x01)
    {
        score_result(match_bytecodes(get_code_from_data(str1, offs1+length-1),get_code_from_data(str2, offs2+length-1)), score);
    }
	if(score->string_len)
	    score->string_weight += (score->string_len<<1);
	return;
}

uint8_t score_result(uint8_t res, match_counts *score)
{
    switch(res)
    {
        case STRONG_MATCH:
            score->strong++;
            score->string_len++;

        break;
        case MEDIUM_MATCH:
            score->medium++;
            score->string_len++;

        break;
        case WEAK_MATCH:
            score->weak++;
            score->string_len++;

        break;
        case VERY_WEAK_MATCH:
            score->very_weak++;
            score->string_len++;

        break;
        default:
            score->string_weight += (score->string_len<<1);
            score->string_len = 0;
            score->none++;
        break;
    }
    return 0;
}

uint8_t score_results(uint8_t res, match_counts *score, int bail)
{
    switch(res&0x0F)
    {
        case STRONG_MATCH:
            score->strong++;
            score->string_len++;

        break;
        case MEDIUM_MATCH:
            score->medium++;
            score->string_len++;

        break;
        case WEAK_MATCH:
            score->weak++;
            score->string_len++;

        break;
        case VERY_WEAK_MATCH:
            score->very_weak++;
            score->string_len++;

        break;
        default:
            score->string_weight += (score->string_len<<1);
            score->string_len = 0;
            score->none++;
            if(score->none >= bail)
                return 1;
        break;
    }
    switch((res>>4)&0x0F)
    {
        case STRONG_MATCH:
            score->strong++;
            score->string_len++;

        break;
        case MEDIUM_MATCH:
            score->medium++;
            score->string_len++;

        break;
        case WEAK_MATCH:
            score->weak++;
            score->string_len++;

        break;
        case VERY_WEAK_MATCH:
            score->very_weak++;
            score->string_len++;

        break;
        default:
            score->string_weight += (score->string_len<<1);
            score->string_len = 0;
            score->none++;
            if(score->none >= bail)
                return 1;
        break;
    }
    return 0;
}

void make_match_string(char *dest, char *str1, char* str2, unsigned int length)
{

	int x, pos, bytepos = 0;
	char databyte = '\0';
	uint8_t basecode1, basecode2, res;
	unsigned int match_count = 0;

    char red[13];
    sprintf(red, "%c[%d;%d;%dm", 0x1B, 1, 31, 40);

    char green[13];
    sprintf(green, "%c[%d;%d;%dm", 0x1B, 1, 32, 40);


    char yellow[13];
    sprintf(yellow, "%c[%d;%d;%dm", 0x1B, 1, 33, 40);

    char blue[13];
    sprintf(blue, "%c[%d;%d;%dm", 0x1B, 1, 34, 40);

    char magenta[13];
    sprintf(magenta, "%c[%d;%d;%dm", 0x1B, 1, 35, 40);

    char reset[13];
    sprintf(reset, "%c[%d;%d;%dm", 0x1B, 0, 37, 40);

	int len1 = strlen(str1), len2 = strlen(str2);
    char match_str[length*15];
    strcpy(match_str,"");
	for(x = 0, pos = 0; x < length; x++)
	{
        basecode1 = base_to_code(str1[x]) , basecode2 = base_to_code(str2[x]);
        res = match_bytecodes(basecode1, basecode2);
        switch(res)
        {
            case STRONG_MATCH:
                strcat(match_str, red);
                strncat(match_str, str1+x, 1);
            break;
            case MEDIUM_MATCH:
                strcat(match_str, magenta);
                strncat(match_str, str1+x, 1);
            break;
            case WEAK_MATCH:
                strcat(match_str, yellow);
                strncat(match_str, str1+x, 1);
            break;
            case VERY_WEAK_MATCH:
                strcat(match_str, blue);
                strncat(match_str, str1+x, 1);
            break;
            default:
                strcat(match_str, reset);
                strncat(match_str, str1+x, 1);
            break;
        }
	}
	strcat(dest, match_str);
	return;
}


uint8_t match_bytecodes(uint8_t bc1, uint8_t bc2)
{
//        BASECODES

        switch(bc1)
        {
        			case 1:
        				if(bc1 == bc2 || match_cytidine(bc2))
        				    return STRONG_MATCH;
        			break;
        			case 2:
        				if(bc1 == bc2 || match_guanosine(bc2))
        				    return STRONG_MATCH;
        			break;
        			case 3:
        				if(bc1 == bc2 || match_thymidine(bc2))
        				    return STRONG_MATCH;
        			break;
        			case 4:
        				if(bc1 == bc2 || match_adenosine(bc2))
        				    return STRONG_MATCH;
        			break;
        			case 5: //R
        				if(match_adenosine(bc2) || match_guanosine(bc2))
        				    return MEDIUM_MATCH;
        			break;
        			case 6: //Y
        				if(match_cytidine(bc2) || match_thymidine(bc2))
        				    return MEDIUM_MATCH;
        			break;
        			case 7: //K
        				if(match_guanosine(bc2) || match_thymidine(bc2))
        				    return MEDIUM_MATCH;
        			break; 
        			case 8: //M
        				if(match_adenosine(bc2) || match_cytidine(bc2))
        				    return MEDIUM_MATCH;
        			break;
        			case 9: //S
        				if(match_cytidine(bc2) || match_guanosine(bc2))
        				    return MEDIUM_MATCH;
        			break;
        			case 10: //W
        				if(match_adenosine(bc2) || match_thymidine(bc2))
        				    return MEDIUM_MATCH;
        			break;
        			case 11: //B
        				if(match_cytidine(bc2) || match_guanosine(bc2) || match_thymidine(bc2))
        				    return WEAK_MATCH;
        			break;
        			case 12: //D
        				if(match_adenosine(bc2) || match_guanosine(bc2) || match_thymidine(bc2))
        				    return WEAK_MATCH;
        			break;
        			case 13: //H
        				if(match_adenosine(bc2) || match_cytidine(bc2) || match_thymidine(bc2))
        				    return WEAK_MATCH;
        			break;
        			case 14: //V
        				if(match_adenosine(bc2) || match_cytidine(bc2) || match_guanosine(bc2))
        				    return WEAK_MATCH;
        			break;
        			case 15:
        				//return 'N';
                        //Match any
                        return VERY_WEAK_MATCH;
        			break;
                    default:
                        return FALSE;
                    break;
        }
        return FALSE;
}


void expand_dna(char *cdata, uint8_t  *src, int length, int *reslen)
{

/*

                             STANDARD BASE CODES

These are the official IUPAC-IUB single-letter base codes (reference 1 below).

     Code      Base Description
     ----      --------------------------------------------------------------
     G         Guanine
     A         Adenine
     T         Thymine
     C         Cytosine
     R         Purine               (A or G)
     Y         Pyrimidine           (C or T or U)
     M         Amino                (A or C)
     K         Ketone               (G or T)
     S         Strong interaction   (C or G)
     W         Weak interaction     (A or T)
     H         Not-G                (A or C or T) H follows G in the alphabet
     B         Not-A                (C or G or T) B follows A
     V         Not-T (not-U)        (A or C or G) V follows U
     D         Not-C                (A or G or T) D follows C
     N         Any                  (A or C or G or T)
     U         Uracil               (Used to denote unused position)

 */


    //printf("expand_dna length %i\n" , length);
	int cdatalen = 0;
	int x, pos, bytepos = 0;
	char databyte = '\0';
	uint8_t U = 0;
	for(x = 0, pos = 0; x < length; x++)
	{
        uint8_t basecode = 0x00;

        basecode = (src[x]>>4)&0x0F;

        if(U == basecode)
            break;

        cdata[pos++] = code_to_base(basecode);

		basecode = src[x]&0x0F;

        if(U == basecode)
            break;

        cdata[pos++] = code_to_base(basecode);

	}
	cdata[pos] = '\0';
	*reslen = pos;

	return;
}

char code_to_base(uint8_t byte)
{
		switch(byte)
		{
			case 1:
				return 'C';
			break;
			case 2:
				return 'G';
			break;
			case 3:
				return 'T';
			break;
			case 4:
				return 'A';
			break;
			case 5:
				return 'R';
			break;
			case 6:
				return 'Y';
			break;
			case 7:
				return 'K';
			break;
			case 8:
				return 'M';
			break;
			case 9:
				return 'S';
			break;
			case 10:
				return 'W';
			break;
			case 11:
				return 'B';
			break;
			case 12:
				return 'D';
			break;
			case 13:
				return 'H';
			break;
			case 14:
				return 'V';
			break;
			case 15:
				return 'N';
			break;
            default:
                return 'U';
            break;
		}
}

uint8_t base_to_code(char code)
{
		switch(code)
		{
			case 'C':
				return 1;
			break;
			case 'G':
				return 2;
			break;
			case 'T':
				return 3;
			break;
			case 'A':
				return 4;
			break;
			case 'R':
				return 5;
			break;
			case 'Y':
				return 6;
			break;
			case 'K':
				return 7;
			break;
			case 'M':
				return 8;
			break;
			case 'S':
				return 9;
			break;
			case 'W':
				return 10;
			break;
			case 'B':
				return 11;
			break;
			case 'D':
				return 12;
			break;
			case 'H':
				return 13;
			break;
			case 'V':
				return 14;
			break;
			case 'N':
				return 15;
			break;
            default:
                return 0;
            break;
		}
}


void compress_dna(uint8_t *cdata, char *src, int length, int *reslen)
{

/*

                             STANDARD BASE CODES

These are the official IUPAC-IUB single-letter base codes (reference 1 below).

     Code      Base Description
     ----      --------------------------------------------------------------
     G         Guanine
     A         Adenine
     T         Thymine
     C         Cytosine
     R         Purine               (A or G)
     Y         Pyrimidine           (C or T or U)
     M         Amino                (A or C)
     K         Ketone               (G or T)
     S         Strong interaction   (C or G)
     W         Weak interaction     (A or T)
     H         Not-G                (A or C or T) H follows G in the alphabet
     B         Not-A                (C or G or T) B follows A
     V         Not-T (not-U)        (A or C or G) V follows U
     D         Not-C                (A or G or T) D follows C
     N         Any                  (A or C or G or T)
     U         Uracil               (Used to denote unused position)

 */



	int cdatalen = 0;
	int x, pos;
	uint8_t databyte = 0x00;
//	BASECODES
	for(x = 0, pos = 0; x < length; x++)
	{

		switch(src[x])
		{
			case 'A':
				databyte = databyte|(A<<((1 - pos)*4));
				pos++;
			break;
			case 'C':
				databyte = databyte|(C<<((1 - pos)*4));
				pos++;
			break;
			case 'G':
				databyte = databyte|(G<<((1 - pos)*4));
				pos++;
			break;
			case 'T':
				databyte = databyte|(T<<((1 - pos)*4));
				pos++;
			break;
			case 'U':
				databyte = databyte|(U<<((1 - pos)*4)); /* used to represent unused position */
			break;
			case 'R':
				databyte = databyte|(R<<((1 - pos)*4));
				pos++;
			break;
			case 'Y':
				databyte = databyte|(Y<<((1 - pos)*4));
				pos++;
			break;
			case 'K':
				databyte = databyte|(K<<((1 - pos)*4));
				pos++;
			break;
			case 'M':
				databyte = databyte|(M<<((1 - pos)*4));
				pos++;
			break;
			case 'S':
				databyte = databyte|(S<<((1 - pos)*4));
				pos++;
			break;
			case 'W':
				databyte = databyte|(W<<((1 - pos)*4));
				pos++;
			break;
			case 'B':
				databyte = databyte|(B<<((1 - pos)*4));
				pos++;
			break;
			case 'D':
				databyte = databyte|(D<<((1 - pos)*4));
				pos++;
			break;
			case 'H':
				databyte = databyte|(H<<((1 - pos)*4));
				pos++;
			break;
			case 'V':
				databyte = databyte|(V<<((1 - pos)*4));
				pos++;
			break;
			case 'N':
				databyte = databyte|(N<<((1 - pos)*4));
				pos++;
			break;
            default:
            break;
		}
		if(2 == pos)
		{
			cdata[cdatalen++] = databyte;
			databyte = 0x00;
			pos = 0;
		}
	}
	if(1 == pos)
		cdata[cdatalen++] = databyte|U;
	*reslen = cdatalen;
	return;
}
