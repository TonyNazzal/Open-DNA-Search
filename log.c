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

#include "log.h"

logfile * log_open(string filename)
{

	logfile *mylogfile = malloc(sizeof(logfile));
	mylogfile->filename = strdup(filename);
	mylogfile->pointer = fopen(mylogfile->filename, "a+");	 
	pthread_mutex_init(&mylogfile->lock, NULL);
	return mylogfile;
}

void l(string line, logfile *mylogfile)
{
	char buf[strlen(line) + 255];
	strcpy(buf,"");
	time_t t;
	time(&t);
	string now = ctime_r(&t, buf);
	buf[strlen(buf)-1] = '\0';
	strcat(buf, " : ");
	strcat(buf, line);
	strcat(buf, "\n");
	pthread_mutex_lock(&mylogfile->lock);
	fputs(buf, mylogfile->pointer);
	fflush(mylogfile->pointer);
	pthread_mutex_unlock(&mylogfile->lock);

};

void lf(string line)
{
    //logfile *mylogfile;
	char buf[strlen(line) + 255];
	strcpy(buf,"");
	time_t t;
	time(&t);
	string now = ctime_r(&t, buf);
	buf[strlen(buf)-1] = '\0';
	strcat(buf, " : ");
	strcat(buf, line);
	strcat(buf, "\n");
	pthread_mutex_lock(&mylogfile->lock);
	fputs(buf, mylogfile->pointer);
	fflush(mylogfile->pointer);
	pthread_mutex_unlock(&mylogfile->lock);
    free(line);
};

void ls(const string fmt, ...)
{
    int n, size = 40;
    string p;
    string np;
    va_list ap;
    int result;
    p = malloc(size);
    if(NULL == p)
        return lf("logging error");

    while (TRUE)
    {

        va_start(ap, fmt);
        n = vsnprintf(p, size, fmt, ap);
        va_end(ap);

        if (n > -1 && n < size)
           break;
        if (n > -1)
           size = n+1;
        else
           size *= 2;
        integer *result;
        if (NULL == (np = realloc(p, size))) {
           free(p);
           return lf("logging error");
        } else {
           p = np;
        }
    }
    lf(p);
}
