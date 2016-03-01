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
#include<stdint.h>
#include<stdlib.h>
#include<math.h>


typedef uint8_t byte;
typedef uint32_t integer;

typedef struct
_db_entry
{

    char *title;
    integer data_length;
    char *data;

}db_entry;


#define TRUE 1
#define FALSE 0
#define EQ ==
#define AND &&
#define OR ||


#define MAXLINESIZE 2048



void main()
{
	FILE * db = fopen("nt", "r");
	char buf[65535], name[65535];

	int len = 0;
	FILE * output = fopen("db/outputdb", "w");
	FILE * index = fopen("db/indexdb", "w");
	unsigned long int filepos = 0;
	long offset = 0, loffset = 0;

	while(fgets(buf, MAXLINESIZE, db))
	{
	    offset = ftell(output);
		if(buf[0] == '>')
		{
            if(filepos)
                {
                    uint8_t stopbyte = 0x00;
                    fwrite(&stopbyte, 1, 1, output);
                    filepos++;

                    fprintf(index,"%li:%li:%s", loffset, offset - loffset, name);

                    loffset = offset+1;

                }


                strcpy(name, buf);
                fflush(output);
		}
		else
		{
			int datalen = strlen(buf);

			if(datalen > 0)
       			{
                    int reslen = 0;
                    uint8_t cdata[(datalen/2) + 1];
                    compress_dna(cdata, buf, datalen, &reslen);

                    if(reslen)
                    {
                        filepos += reslen;
                        fwrite(cdata, reslen, 1, output);
                        //printf("\n%s",buf);
                        int x = 0;

                    }
        		}

		}


	}
	fclose(output);
	fclose(index);
}
