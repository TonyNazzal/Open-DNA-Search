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

#include "config.h"
#include "common.h"
config *read_config(string filename)
{
	FILE * configfile = fopen(filename, "r");
	config *myconfig = malloc(sizeof(config));
	myconfig->filename = strdup(filename);
	int linecount = 0;
	char line[MAX_LINE_LENGTH];
	while(NULL != configfile && NULL != fgets(line, MAX_LINE_LENGTH, configfile) && linecount < MAX_CONFIG_LINES)
		myconfig->items[linecount++] = strdup(line);
	myconfig->items[linecount] = NULL;


	if(FAILURE == get_config_string("main_database", myconfig, &myconfig->main_database))
		exit(EXIT_FAILURE);
	if(FAILURE == get_config_string("index_database", myconfig, &myconfig->index_database))
		exit(EXIT_FAILURE);
	if(FAILURE == get_config_int("match_percentage", myconfig, &myconfig->match_percentage))
		exit(EXIT_FAILURE);
	if(FAILURE == get_config_int("match_bail_percentage", myconfig, &myconfig->match_bail_percentage))
		exit(EXIT_FAILURE);

	return myconfig;
}

int get_config_int(string name, config *myconfig, int *value)
{
	string temp;
	string last;
	int x = 0;
	for(;x<MAX_CONFIG_LINES;x++)
	{
		if(NULL == myconfig->items[x])
			return FAILURE;
		if(is_comment(myconfig->items[x]))
			continue;
		char buf[strlen(myconfig->items[x]) + 1];
		strcpy(buf, myconfig->items[x]);
		temp = strtok_r(buf, "=", &last);
		if(0 == strcmp(name, temp))
		{
			*value = atoi(strtok_r(NULL, "=", &last));
			return SUCCESS;

		}
	}
	return FAILURE;
}

int get_config_string(string name, config *myconfig, string *value)
{
	string temp;
	string last;
	int x = 0;

	for(;x<MAX_CONFIG_LINES;x++)
	{
		if(NULL == myconfig->items[x])
			return FAILURE;
		if(is_comment(myconfig->items[x]))
			continue;
		char buf[strlen(myconfig->items[x]) + 1];
		strcpy(buf, myconfig->items[x]);
		temp = strtok_r(buf, "=", &last);
		if(0 == strcmp(name, temp))
		{
			char * str = strtok_r(NULL, "=", &last);
			if('\n' == str[strlen(str)-1])
				str[strlen(str)-1] = '\0';
			*value = strdup(str);
			return SUCCESS;

		}
	}
	return FAILURE;
}

int is_comment(char * str)
{
	if(NULL == str)
		return 0;
	int len = strlen(str);
	if(0 == len)
		return 0;
	int pos = -1;
	while(pos++ < len)
		if(' ' == str[pos] || '\t' == str[pos])
			continue;
		else if('#' == str[pos])
			return 1;
		else return 0;
	return 0;
}










