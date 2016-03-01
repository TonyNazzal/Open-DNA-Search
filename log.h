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

#include<pthread.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<stdarg.h>
#include "common.h"
#ifndef LOG
#define LOG

#if __STDC_VERSION__ < 199901L
# if __GNUC__ >= 2
#  define __func__ __FUNCTION__
# else
#  define __func__ "<unknown>"
# endif
#endif

typedef struct _logfile
{
	string filename;
	pthread_mutex_t lock;
	FILE *pointer;
}logfile;
logfile *mylogfile;

logfile * log_open(string filename);
void l(string line, logfile *mylogfile);
void lf(string line);
void ls(const string fmt, ...);
#endif
