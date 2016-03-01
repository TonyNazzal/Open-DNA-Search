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

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "common.h"
#ifndef CONFIG
#define CONFIG
#define MAX_CONFIG_LINES 1024
#define MAX_LINE_LENGTH 1024

typedef struct _config
{
    string filename;
    string items[MAX_CONFIG_LINES];
    string index_database;
    string main_database;
    string logfile;
    int match_percentage;
    int match_bail_percentage;
}config;

config *main_config;


config *read_config(string filename);
int get_config_int(string name, config *myconfig, int *value);
int get_config_string(string name, config *myconfig, string *value);
int is_comment(char * str);

#endif
