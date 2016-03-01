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

//#define BASECODES
const static uint8_t U = 0, C = 1, G = 2, T = 3, A = 4, R = 5, Y = 6, K = 7, M = 8, S = 9, W = 10, B = 11, D = 12, H = 13, V = 14, N = 15;



#define match_adenosine(code) \
    adenosine[code]
    //code == A || code == W || code == M || code == R || code == D || code == H || code == V || code == N
#define match_cytidine(code) \
    cytidine[code]
    //code == C || code == S || code == M || code == Y || code == B || code == H || code == V || code == N
#define match_guanosine(code) \
    guanosine[code]
    //code == G || code == S || code == K || code == R || code == B || code == D || code == V || code == N
#define match_thymidine(code) \
    thymidine[code]
    //code == T || code == W || code == K || code == Y || code == B || code == D || code == H || code == N


#define get_code_from_data(data, position) \
    (((position)&0x01) ? ((data[(position)/2])&0x0F) : ((data[((position)/2)]>>4)&0x0F))

#define get_code_from_data_fast(data, position) \
    (((position)&0x01) ? ((data[fast_divide[position]])&0x0F) : ((data[fast_divide[position]]>>4)&0x0F))


typedef struct _database_t
{
    int fd;
    int open;
	pthread_mutex_t lock;
}database_t;

typedef struct _db_index_t
{
    int offset;
    int datalen;
    char *str;
}db_index_t;

database_t /**maindb,*/ *indexdb;
unsigned int index_size;
char **index_entry;
long **index_offset;
uint32_t **index_len;

typedef struct _string_list_t
{
    char *str;
    float *score;
    void *next;
}string_list_t;

typedef struct _data_list_t
{
    char *str;
    float *score;
    uint8_t *data;
    uint32_t length;
    uint32_t str_len;
    void *next;
}data_list_t;


typedef struct _list_container_t
{
    string_list_t *root;
    string_list_t *end;
    void *extra_data;
    long size;
}list_container_t;

typedef struct _data_list_container_t
{
    data_list_t *root;
    data_list_t *end;
    void *extra_data;
    long size;
}data_list_container_t;

#define STRONG_MATCH 4
#define MEDIUM_MATCH 3
#define WEAK_MATCH 2
#define VERY_WEAK_MATCH 1

#define STRONG_MATCH_MULT 8
#define MEDIUM_MATCH_MULT 4
#define WEAK_MATCH_MULT 2
#define VERY_WEAK_MATCH_MULT 1
#define STRING_LENGTH_MULT 16

#define MIN_MATCH_LENGTH 10

typedef struct _match_counts
{
    uint32_t strong;
    uint32_t medium;
    uint32_t weak;
    uint32_t very_weak;
    uint32_t string_len;
    uint32_t string_weight;
    uint32_t none;
}match_counts;

database_t *open_db(char *path);
void close_db(database_t * db);
int check_db(database_t *db);
void expand_dna(char *cdata, uint8_t  *src, int length, int *reslen);
void compress_dna(uint8_t *cdata, char *src, int length, int *reslen);
void add_string_to_list(list_container_t *list, char * str);
string_list_t *expand_string(list_container_t *list, char * str);
int check_string(char *str);
char code_to_base(uint8_t byte);
char *get_item(database_t *db, long index);
uint8_t *get_db_data(database_t *db, long index, uint32_t length, uint8_t *data);
uint8_t match_bytecodes(uint8_t bc1, uint8_t bc2);
long get_data_index(db_index_t *entry);
void match_data(uint8_t *str1, uint8_t* str2, unsigned int length, match_counts *score);
float best_match_score(uint8_t *str1, uint8_t *str2, int len1, int len2, float best_possible_score, float match_percentage);

unsigned int calculate_score(match_counts *score);
uint8_t base_to_code(char code);
void match_dna(char *str1, char* str2, unsigned int length, match_counts *score);
void make_match_string(char *dest, char *str1, char* str2, unsigned int length);
list_container_t *init_list_container(list_container_t *list_container);
int find_genes(list_container_t *list_container, char *str, uint64_t len);

void match_dna_data(uint8_t *str1, uint8_t* str2, uint32_t offset1, uint32_t offset2, uint64_t length, match_counts *score);

data_list_container_t *init_data_list_container(data_list_container_t *list_container);
void add_data_to_list(data_list_container_t *list_container, uint8_t *data, unsigned int len, char *str, unsigned int str_len);

uint8_t score_results(uint8_t res, match_counts *score, int bail);
uint8_t score_result(uint8_t res, match_counts *score);
