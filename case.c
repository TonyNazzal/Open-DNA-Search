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

#include<stdint.h>

uint8_t match_data_bytes(uint8_t b1, uint8_t b2)
{
uint16_t data = ((b1)<<8)|b2;
switch(data)
	{
	case 0://(0,0) (0, 0)
		return 0;//0 0
	break;
	case 1://(0,0) (0, 1)
		return 0;//0 0
	break;
	case 2://(0,0) (0, 2)
		return 0;//0 0
	break;
	case 3://(0,0) (0, 3)
		return 0;//0 0
	break;
	case 4://(0,0) (0, 4)
		return 0;//0 0
	break;
	case 5://(0,0) (0, 5)
		return 0;//0 0
	break;
	case 6://(0,0) (0, 6)
		return 0;//0 0
	break;
	case 7://(0,0) (0, 7)
		return 0;//0 0
	break;
	case 8://(0,0) (0, 8)
		return 0;//0 0
	break;
	case 9://(0,0) (0, 9)
		return 0;//0 0
	break;
	case 10://(0,0) (0, 10)
		return 0;//0 0
	break;
	case 11://(0,0) (0, 11)
		return 0;//0 0
	break;
	case 12://(0,0) (0, 12)
		return 0;//0 0
	break;
	case 13://(0,0) (0, 13)
		return 0;//0 0
	break;
	case 14://(0,0) (0, 14)
		return 0;//0 0
	break;
	case 15://(0,0) (0, 15)
		return 0;//0 0
	break;
	case 16://(0,0) (1, 0)
		return 0;//0 0
	break;
	case 17://(0,0) (1, 1)
		return 0;//0 0
	break;
	case 18://(0,0) (1, 2)
		return 0;//0 0
	break;
	case 19://(0,0) (1, 3)
		return 0;//0 0
	break;
	case 20://(0,0) (1, 4)
		return 0;//0 0
	break;
	case 21://(0,0) (1, 5)
		return 0;//0 0
	break;
	case 22://(0,0) (1, 6)
		return 0;//0 0
	break;
	case 23://(0,0) (1, 7)
		return 0;//0 0
	break;
	case 24://(0,0) (1, 8)
		return 0;//0 0
	break;
	case 25://(0,0) (1, 9)
		return 0;//0 0
	break;
	case 26://(0,0) (1, 10)
		return 0;//0 0
	break;
	case 27://(0,0) (1, 11)
		return 0;//0 0
	break;
	case 28://(0,0) (1, 12)
		return 0;//0 0
	break;
	case 29://(0,0) (1, 13)
		return 0;//0 0
	break;
	case 30://(0,0) (1, 14)
		return 0;//0 0
	break;
	case 31://(0,0) (1, 15)
		return 0;//0 0
	break;
	case 32://(0,0) (2, 0)
		return 0;//0 0
	break;
	case 33://(0,0) (2, 1)
		return 0;//0 0
	break;
	case 34://(0,0) (2, 2)
		return 0;//0 0
	break;
	case 35://(0,0) (2, 3)
		return 0;//0 0
	break;
	case 36://(0,0) (2, 4)
		return 0;//0 0
	break;
	case 37://(0,0) (2, 5)
		return 0;//0 0
	break;
	case 38://(0,0) (2, 6)
		return 0;//0 0
	break;
	case 39://(0,0) (2, 7)
		return 0;//0 0
	break;
	case 40://(0,0) (2, 8)
		return 0;//0 0
	break;
	case 41://(0,0) (2, 9)
		return 0;//0 0
	break;
	case 42://(0,0) (2, 10)
		return 0;//0 0
	break;
	case 43://(0,0) (2, 11)
		return 0;//0 0
	break;
	case 44://(0,0) (2, 12)
		return 0;//0 0
	break;
	case 45://(0,0) (2, 13)
		return 0;//0 0
	break;
	case 46://(0,0) (2, 14)
		return 0;//0 0
	break;
	case 47://(0,0) (2, 15)
		return 0;//0 0
	break;
	case 48://(0,0) (3, 0)
		return 0;//0 0
	break;
	case 49://(0,0) (3, 1)
		return 0;//0 0
	break;
	case 50://(0,0) (3, 2)
		return 0;//0 0
	break;
	case 51://(0,0) (3, 3)
		return 0;//0 0
	break;
	case 52://(0,0) (3, 4)
		return 0;//0 0
	break;
	case 53://(0,0) (3, 5)
		return 0;//0 0
	break;
	case 54://(0,0) (3, 6)
		return 0;//0 0
	break;
	case 55://(0,0) (3, 7)
		return 0;//0 0
	break;
	case 56://(0,0) (3, 8)
		return 0;//0 0
	break;
	case 57://(0,0) (3, 9)
		return 0;//0 0
	break;
	case 58://(0,0) (3, 10)
		return 0;//0 0
	break;
	case 59://(0,0) (3, 11)
		return 0;//0 0
	break;
	case 60://(0,0) (3, 12)
		return 0;//0 0
	break;
	case 61://(0,0) (3, 13)
		return 0;//0 0
	break;
	case 62://(0,0) (3, 14)
		return 0;//0 0
	break;
	case 63://(0,0) (3, 15)
		return 0;//0 0
	break;
	case 64://(0,0) (4, 0)
		return 0;//0 0
	break;
	case 65://(0,0) (4, 1)
		return 0;//0 0
	break;
	case 66://(0,0) (4, 2)
		return 0;//0 0
	break;
	case 67://(0,0) (4, 3)
		return 0;//0 0
	break;
	case 68://(0,0) (4, 4)
		return 0;//0 0
	break;
	case 69://(0,0) (4, 5)
		return 0;//0 0
	break;
	case 70://(0,0) (4, 6)
		return 0;//0 0
	break;
	case 71://(0,0) (4, 7)
		return 0;//0 0
	break;
	case 72://(0,0) (4, 8)
		return 0;//0 0
	break;
	case 73://(0,0) (4, 9)
		return 0;//0 0
	break;
	case 74://(0,0) (4, 10)
		return 0;//0 0
	break;
	case 75://(0,0) (4, 11)
		return 0;//0 0
	break;
	case 76://(0,0) (4, 12)
		return 0;//0 0
	break;
	case 77://(0,0) (4, 13)
		return 0;//0 0
	break;
	case 78://(0,0) (4, 14)
		return 0;//0 0
	break;
	case 79://(0,0) (4, 15)
		return 0;//0 0
	break;
	case 80://(0,0) (5, 0)
		return 0;//0 0
	break;
	case 81://(0,0) (5, 1)
		return 0;//0 0
	break;
	case 82://(0,0) (5, 2)
		return 0;//0 0
	break;
	case 83://(0,0) (5, 3)
		return 0;//0 0
	break;
	case 84://(0,0) (5, 4)
		return 0;//0 0
	break;
	case 85://(0,0) (5, 5)
		return 0;//0 0
	break;
	case 86://(0,0) (5, 6)
		return 0;//0 0
	break;
	case 87://(0,0) (5, 7)
		return 0;//0 0
	break;
	case 88://(0,0) (5, 8)
		return 0;//0 0
	break;
	case 89://(0,0) (5, 9)
		return 0;//0 0
	break;
	case 90://(0,0) (5, 10)
		return 0;//0 0
	break;
	case 91://(0,0) (5, 11)
		return 0;//0 0
	break;
	case 92://(0,0) (5, 12)
		return 0;//0 0
	break;
	case 93://(0,0) (5, 13)
		return 0;//0 0
	break;
	case 94://(0,0) (5, 14)
		return 0;//0 0
	break;
	case 95://(0,0) (5, 15)
		return 0;//0 0
	break;
	case 96://(0,0) (6, 0)
		return 0;//0 0
	break;
	case 97://(0,0) (6, 1)
		return 0;//0 0
	break;
	case 98://(0,0) (6, 2)
		return 0;//0 0
	break;
	case 99://(0,0) (6, 3)
		return 0;//0 0
	break;
	case 100://(0,0) (6, 4)
		return 0;//0 0
	break;
	case 101://(0,0) (6, 5)
		return 0;//0 0
	break;
	case 102://(0,0) (6, 6)
		return 0;//0 0
	break;
	case 103://(0,0) (6, 7)
		return 0;//0 0
	break;
	case 104://(0,0) (6, 8)
		return 0;//0 0
	break;
	case 105://(0,0) (6, 9)
		return 0;//0 0
	break;
	case 106://(0,0) (6, 10)
		return 0;//0 0
	break;
	case 107://(0,0) (6, 11)
		return 0;//0 0
	break;
	case 108://(0,0) (6, 12)
		return 0;//0 0
	break;
	case 109://(0,0) (6, 13)
		return 0;//0 0
	break;
	case 110://(0,0) (6, 14)
		return 0;//0 0
	break;
	case 111://(0,0) (6, 15)
		return 0;//0 0
	break;
	case 112://(0,0) (7, 0)
		return 0;//0 0
	break;
	case 113://(0,0) (7, 1)
		return 0;//0 0
	break;
	case 114://(0,0) (7, 2)
		return 0;//0 0
	break;
	case 115://(0,0) (7, 3)
		return 0;//0 0
	break;
	case 116://(0,0) (7, 4)
		return 0;//0 0
	break;
	case 117://(0,0) (7, 5)
		return 0;//0 0
	break;
	case 118://(0,0) (7, 6)
		return 0;//0 0
	break;
	case 119://(0,0) (7, 7)
		return 0;//0 0
	break;
	case 120://(0,0) (7, 8)
		return 0;//0 0
	break;
	case 121://(0,0) (7, 9)
		return 0;//0 0
	break;
	case 122://(0,0) (7, 10)
		return 0;//0 0
	break;
	case 123://(0,0) (7, 11)
		return 0;//0 0
	break;
	case 124://(0,0) (7, 12)
		return 0;//0 0
	break;
	case 125://(0,0) (7, 13)
		return 0;//0 0
	break;
	case 126://(0,0) (7, 14)
		return 0;//0 0
	break;
	case 127://(0,0) (7, 15)
		return 0;//0 0
	break;
	case 128://(0,0) (8, 0)
		return 0;//0 0
	break;
	case 129://(0,0) (8, 1)
		return 0;//0 0
	break;
	case 130://(0,0) (8, 2)
		return 0;//0 0
	break;
	case 131://(0,0) (8, 3)
		return 0;//0 0
	break;
	case 132://(0,0) (8, 4)
		return 0;//0 0
	break;
	case 133://(0,0) (8, 5)
		return 0;//0 0
	break;
	case 134://(0,0) (8, 6)
		return 0;//0 0
	break;
	case 135://(0,0) (8, 7)
		return 0;//0 0
	break;
	case 136://(0,0) (8, 8)
		return 0;//0 0
	break;
	case 137://(0,0) (8, 9)
		return 0;//0 0
	break;
	case 138://(0,0) (8, 10)
		return 0;//0 0
	break;
	case 139://(0,0) (8, 11)
		return 0;//0 0
	break;
	case 140://(0,0) (8, 12)
		return 0;//0 0
	break;
	case 141://(0,0) (8, 13)
		return 0;//0 0
	break;
	case 142://(0,0) (8, 14)
		return 0;//0 0
	break;
	case 143://(0,0) (8, 15)
		return 0;//0 0
	break;
	case 144://(0,0) (9, 0)
		return 0;//0 0
	break;
	case 145://(0,0) (9, 1)
		return 0;//0 0
	break;
	case 146://(0,0) (9, 2)
		return 0;//0 0
	break;
	case 147://(0,0) (9, 3)
		return 0;//0 0
	break;
	case 148://(0,0) (9, 4)
		return 0;//0 0
	break;
	case 149://(0,0) (9, 5)
		return 0;//0 0
	break;
	case 150://(0,0) (9, 6)
		return 0;//0 0
	break;
	case 151://(0,0) (9, 7)
		return 0;//0 0
	break;
	case 152://(0,0) (9, 8)
		return 0;//0 0
	break;
	case 153://(0,0) (9, 9)
		return 0;//0 0
	break;
	case 154://(0,0) (9, 10)
		return 0;//0 0
	break;
	case 155://(0,0) (9, 11)
		return 0;//0 0
	break;
	case 156://(0,0) (9, 12)
		return 0;//0 0
	break;
	case 157://(0,0) (9, 13)
		return 0;//0 0
	break;
	case 158://(0,0) (9, 14)
		return 0;//0 0
	break;
	case 159://(0,0) (9, 15)
		return 0;//0 0
	break;
	case 160://(0,0) (10, 0)
		return 0;//0 0
	break;
	case 161://(0,0) (10, 1)
		return 0;//0 0
	break;
	case 162://(0,0) (10, 2)
		return 0;//0 0
	break;
	case 163://(0,0) (10, 3)
		return 0;//0 0
	break;
	case 164://(0,0) (10, 4)
		return 0;//0 0
	break;
	case 165://(0,0) (10, 5)
		return 0;//0 0
	break;
	case 166://(0,0) (10, 6)
		return 0;//0 0
	break;
	case 167://(0,0) (10, 7)
		return 0;//0 0
	break;
	case 168://(0,0) (10, 8)
		return 0;//0 0
	break;
	case 169://(0,0) (10, 9)
		return 0;//0 0
	break;
	case 170://(0,0) (10, 10)
		return 0;//0 0
	break;
	case 171://(0,0) (10, 11)
		return 0;//0 0
	break;
	case 172://(0,0) (10, 12)
		return 0;//0 0
	break;
	case 173://(0,0) (10, 13)
		return 0;//0 0
	break;
	case 174://(0,0) (10, 14)
		return 0;//0 0
	break;
	case 175://(0,0) (10, 15)
		return 0;//0 0
	break;
	case 176://(0,0) (11, 0)
		return 0;//0 0
	break;
	case 177://(0,0) (11, 1)
		return 0;//0 0
	break;
	case 178://(0,0) (11, 2)
		return 0;//0 0
	break;
	case 179://(0,0) (11, 3)
		return 0;//0 0
	break;
	case 180://(0,0) (11, 4)
		return 0;//0 0
	break;
	case 181://(0,0) (11, 5)
		return 0;//0 0
	break;
	case 182://(0,0) (11, 6)
		return 0;//0 0
	break;
	case 183://(0,0) (11, 7)
		return 0;//0 0
	break;
	case 184://(0,0) (11, 8)
		return 0;//0 0
	break;
	case 185://(0,0) (11, 9)
		return 0;//0 0
	break;
	case 186://(0,0) (11, 10)
		return 0;//0 0
	break;
	case 187://(0,0) (11, 11)
		return 0;//0 0
	break;
	case 188://(0,0) (11, 12)
		return 0;//0 0
	break;
	case 189://(0,0) (11, 13)
		return 0;//0 0
	break;
	case 190://(0,0) (11, 14)
		return 0;//0 0
	break;
	case 191://(0,0) (11, 15)
		return 0;//0 0
	break;
	case 192://(0,0) (12, 0)
		return 0;//0 0
	break;
	case 193://(0,0) (12, 1)
		return 0;//0 0
	break;
	case 194://(0,0) (12, 2)
		return 0;//0 0
	break;
	case 195://(0,0) (12, 3)
		return 0;//0 0
	break;
	case 196://(0,0) (12, 4)
		return 0;//0 0
	break;
	case 197://(0,0) (12, 5)
		return 0;//0 0
	break;
	case 198://(0,0) (12, 6)
		return 0;//0 0
	break;
	case 199://(0,0) (12, 7)
		return 0;//0 0
	break;
	case 200://(0,0) (12, 8)
		return 0;//0 0
	break;
	case 201://(0,0) (12, 9)
		return 0;//0 0
	break;
	case 202://(0,0) (12, 10)
		return 0;//0 0
	break;
	case 203://(0,0) (12, 11)
		return 0;//0 0
	break;
	case 204://(0,0) (12, 12)
		return 0;//0 0
	break;
	case 205://(0,0) (12, 13)
		return 0;//0 0
	break;
	case 206://(0,0) (12, 14)
		return 0;//0 0
	break;
	case 207://(0,0) (12, 15)
		return 0;//0 0
	break;
	case 208://(0,0) (13, 0)
		return 0;//0 0
	break;
	case 209://(0,0) (13, 1)
		return 0;//0 0
	break;
	case 210://(0,0) (13, 2)
		return 0;//0 0
	break;
	case 211://(0,0) (13, 3)
		return 0;//0 0
	break;
	case 212://(0,0) (13, 4)
		return 0;//0 0
	break;
	case 213://(0,0) (13, 5)
		return 0;//0 0
	break;
	case 214://(0,0) (13, 6)
		return 0;//0 0
	break;
	case 215://(0,0) (13, 7)
		return 0;//0 0
	break;
	case 216://(0,0) (13, 8)
		return 0;//0 0
	break;
	case 217://(0,0) (13, 9)
		return 0;//0 0
	break;
	case 218://(0,0) (13, 10)
		return 0;//0 0
	break;
	case 219://(0,0) (13, 11)
		return 0;//0 0
	break;
	case 220://(0,0) (13, 12)
		return 0;//0 0
	break;
	case 221://(0,0) (13, 13)
		return 0;//0 0
	break;
	case 222://(0,0) (13, 14)
		return 0;//0 0
	break;
	case 223://(0,0) (13, 15)
		return 0;//0 0
	break;
	case 224://(0,0) (14, 0)
		return 0;//0 0
	break;
	case 225://(0,0) (14, 1)
		return 0;//0 0
	break;
	case 226://(0,0) (14, 2)
		return 0;//0 0
	break;
	case 227://(0,0) (14, 3)
		return 0;//0 0
	break;
	case 228://(0,0) (14, 4)
		return 0;//0 0
	break;
	case 229://(0,0) (14, 5)
		return 0;//0 0
	break;
	case 230://(0,0) (14, 6)
		return 0;//0 0
	break;
	case 231://(0,0) (14, 7)
		return 0;//0 0
	break;
	case 232://(0,0) (14, 8)
		return 0;//0 0
	break;
	case 233://(0,0) (14, 9)
		return 0;//0 0
	break;
	case 234://(0,0) (14, 10)
		return 0;//0 0
	break;
	case 235://(0,0) (14, 11)
		return 0;//0 0
	break;
	case 236://(0,0) (14, 12)
		return 0;//0 0
	break;
	case 237://(0,0) (14, 13)
		return 0;//0 0
	break;
	case 238://(0,0) (14, 14)
		return 0;//0 0
	break;
	case 239://(0,0) (14, 15)
		return 0;//0 0
	break;
	case 240://(0,0) (15, 0)
		return 0;//0 0
	break;
	case 241://(0,0) (15, 1)
		return 0;//0 0
	break;
	case 242://(0,0) (15, 2)
		return 0;//0 0
	break;
	case 243://(0,0) (15, 3)
		return 0;//0 0
	break;
	case 244://(0,0) (15, 4)
		return 0;//0 0
	break;
	case 245://(0,0) (15, 5)
		return 0;//0 0
	break;
	case 246://(0,0) (15, 6)
		return 0;//0 0
	break;
	case 247://(0,0) (15, 7)
		return 0;//0 0
	break;
	case 248://(0,0) (15, 8)
		return 0;//0 0
	break;
	case 249://(0,0) (15, 9)
		return 0;//0 0
	break;
	case 250://(0,0) (15, 10)
		return 0;//0 0
	break;
	case 251://(0,0) (15, 11)
		return 0;//0 0
	break;
	case 252://(0,0) (15, 12)
		return 0;//0 0
	break;
	case 253://(0,0) (15, 13)
		return 0;//0 0
	break;
	case 254://(0,0) (15, 14)
		return 0;//0 0
	break;
	case 255://(0,0) (15, 15)
		return 0;//0 0
	break;
	case 256://(0,1) (0, 0)
		return 0;//0 0
	break;
	case 257://(0,1) (0, 1)
		return 4;//0 4
	break;
	case 258://(0,1) (0, 2)
		return 0;//0 0
	break;
	case 259://(0,1) (0, 3)
		return 0;//0 0
	break;
	case 260://(0,1) (0, 4)
		return 0;//0 0
	break;
	case 261://(0,1) (0, 5)
		return 0;//0 0
	break;
	case 262://(0,1) (0, 6)
		return 4;//0 4
	break;
	case 263://(0,1) (0, 7)
		return 0;//0 0
	break;
	case 264://(0,1) (0, 8)
		return 4;//0 4
	break;
	case 265://(0,1) (0, 9)
		return 4;//0 4
	break;
	case 266://(0,1) (0, 10)
		return 0;//0 0
	break;
	case 267://(0,1) (0, 11)
		return 4;//0 4
	break;
	case 268://(0,1) (0, 12)
		return 0;//0 0
	break;
	case 269://(0,1) (0, 13)
		return 4;//0 4
	break;
	case 270://(0,1) (0, 14)
		return 4;//0 4
	break;
	case 271://(0,1) (0, 15)
		return 4;//0 4
	break;
	case 272://(0,1) (1, 0)
		return 0;//0 0
	break;
	case 273://(0,1) (1, 1)
		return 4;//0 4
	break;
	case 274://(0,1) (1, 2)
		return 0;//0 0
	break;
	case 275://(0,1) (1, 3)
		return 0;//0 0
	break;
	case 276://(0,1) (1, 4)
		return 0;//0 0
	break;
	case 277://(0,1) (1, 5)
		return 0;//0 0
	break;
	case 278://(0,1) (1, 6)
		return 4;//0 4
	break;
	case 279://(0,1) (1, 7)
		return 0;//0 0
	break;
	case 280://(0,1) (1, 8)
		return 4;//0 4
	break;
	case 281://(0,1) (1, 9)
		return 4;//0 4
	break;
	case 282://(0,1) (1, 10)
		return 0;//0 0
	break;
	case 283://(0,1) (1, 11)
		return 4;//0 4
	break;
	case 284://(0,1) (1, 12)
		return 0;//0 0
	break;
	case 285://(0,1) (1, 13)
		return 4;//0 4
	break;
	case 286://(0,1) (1, 14)
		return 4;//0 4
	break;
	case 287://(0,1) (1, 15)
		return 4;//0 4
	break;
	case 288://(0,1) (2, 0)
		return 0;//0 0
	break;
	case 289://(0,1) (2, 1)
		return 4;//0 4
	break;
	case 290://(0,1) (2, 2)
		return 0;//0 0
	break;
	case 291://(0,1) (2, 3)
		return 0;//0 0
	break;
	case 292://(0,1) (2, 4)
		return 0;//0 0
	break;
	case 293://(0,1) (2, 5)
		return 0;//0 0
	break;
	case 294://(0,1) (2, 6)
		return 4;//0 4
	break;
	case 295://(0,1) (2, 7)
		return 0;//0 0
	break;
	case 296://(0,1) (2, 8)
		return 4;//0 4
	break;
	case 297://(0,1) (2, 9)
		return 4;//0 4
	break;
	case 298://(0,1) (2, 10)
		return 0;//0 0
	break;
	case 299://(0,1) (2, 11)
		return 4;//0 4
	break;
	case 300://(0,1) (2, 12)
		return 0;//0 0
	break;
	case 301://(0,1) (2, 13)
		return 4;//0 4
	break;
	case 302://(0,1) (2, 14)
		return 4;//0 4
	break;
	case 303://(0,1) (2, 15)
		return 4;//0 4
	break;
	case 304://(0,1) (3, 0)
		return 0;//0 0
	break;
	case 305://(0,1) (3, 1)
		return 4;//0 4
	break;
	case 306://(0,1) (3, 2)
		return 0;//0 0
	break;
	case 307://(0,1) (3, 3)
		return 0;//0 0
	break;
	case 308://(0,1) (3, 4)
		return 0;//0 0
	break;
	case 309://(0,1) (3, 5)
		return 0;//0 0
	break;
	case 310://(0,1) (3, 6)
		return 4;//0 4
	break;
	case 311://(0,1) (3, 7)
		return 0;//0 0
	break;
	case 312://(0,1) (3, 8)
		return 4;//0 4
	break;
	case 313://(0,1) (3, 9)
		return 4;//0 4
	break;
	case 314://(0,1) (3, 10)
		return 0;//0 0
	break;
	case 315://(0,1) (3, 11)
		return 4;//0 4
	break;
	case 316://(0,1) (3, 12)
		return 0;//0 0
	break;
	case 317://(0,1) (3, 13)
		return 4;//0 4
	break;
	case 318://(0,1) (3, 14)
		return 4;//0 4
	break;
	case 319://(0,1) (3, 15)
		return 4;//0 4
	break;
	case 320://(0,1) (4, 0)
		return 0;//0 0
	break;
	case 321://(0,1) (4, 1)
		return 4;//0 4
	break;
	case 322://(0,1) (4, 2)
		return 0;//0 0
	break;
	case 323://(0,1) (4, 3)
		return 0;//0 0
	break;
	case 324://(0,1) (4, 4)
		return 0;//0 0
	break;
	case 325://(0,1) (4, 5)
		return 0;//0 0
	break;
	case 326://(0,1) (4, 6)
		return 4;//0 4
	break;
	case 327://(0,1) (4, 7)
		return 0;//0 0
	break;
	case 328://(0,1) (4, 8)
		return 4;//0 4
	break;
	case 329://(0,1) (4, 9)
		return 4;//0 4
	break;
	case 330://(0,1) (4, 10)
		return 0;//0 0
	break;
	case 331://(0,1) (4, 11)
		return 4;//0 4
	break;
	case 332://(0,1) (4, 12)
		return 0;//0 0
	break;
	case 333://(0,1) (4, 13)
		return 4;//0 4
	break;
	case 334://(0,1) (4, 14)
		return 4;//0 4
	break;
	case 335://(0,1) (4, 15)
		return 4;//0 4
	break;
	case 336://(0,1) (5, 0)
		return 0;//0 0
	break;
	case 337://(0,1) (5, 1)
		return 4;//0 4
	break;
	case 338://(0,1) (5, 2)
		return 0;//0 0
	break;
	case 339://(0,1) (5, 3)
		return 0;//0 0
	break;
	case 340://(0,1) (5, 4)
		return 0;//0 0
	break;
	case 341://(0,1) (5, 5)
		return 0;//0 0
	break;
	case 342://(0,1) (5, 6)
		return 4;//0 4
	break;
	case 343://(0,1) (5, 7)
		return 0;//0 0
	break;
	case 344://(0,1) (5, 8)
		return 4;//0 4
	break;
	case 345://(0,1) (5, 9)
		return 4;//0 4
	break;
	case 346://(0,1) (5, 10)
		return 0;//0 0
	break;
	case 347://(0,1) (5, 11)
		return 4;//0 4
	break;
	case 348://(0,1) (5, 12)
		return 0;//0 0
	break;
	case 349://(0,1) (5, 13)
		return 4;//0 4
	break;
	case 350://(0,1) (5, 14)
		return 4;//0 4
	break;
	case 351://(0,1) (5, 15)
		return 4;//0 4
	break;
	case 352://(0,1) (6, 0)
		return 0;//0 0
	break;
	case 353://(0,1) (6, 1)
		return 4;//0 4
	break;
	case 354://(0,1) (6, 2)
		return 0;//0 0
	break;
	case 355://(0,1) (6, 3)
		return 0;//0 0
	break;
	case 356://(0,1) (6, 4)
		return 0;//0 0
	break;
	case 357://(0,1) (6, 5)
		return 0;//0 0
	break;
	case 358://(0,1) (6, 6)
		return 4;//0 4
	break;
	case 359://(0,1) (6, 7)
		return 0;//0 0
	break;
	case 360://(0,1) (6, 8)
		return 4;//0 4
	break;
	case 361://(0,1) (6, 9)
		return 4;//0 4
	break;
	case 362://(0,1) (6, 10)
		return 0;//0 0
	break;
	case 363://(0,1) (6, 11)
		return 4;//0 4
	break;
	case 364://(0,1) (6, 12)
		return 0;//0 0
	break;
	case 365://(0,1) (6, 13)
		return 4;//0 4
	break;
	case 366://(0,1) (6, 14)
		return 4;//0 4
	break;
	case 367://(0,1) (6, 15)
		return 4;//0 4
	break;
	case 368://(0,1) (7, 0)
		return 0;//0 0
	break;
	case 369://(0,1) (7, 1)
		return 4;//0 4
	break;
	case 370://(0,1) (7, 2)
		return 0;//0 0
	break;
	case 371://(0,1) (7, 3)
		return 0;//0 0
	break;
	case 372://(0,1) (7, 4)
		return 0;//0 0
	break;
	case 373://(0,1) (7, 5)
		return 0;//0 0
	break;
	case 374://(0,1) (7, 6)
		return 4;//0 4
	break;
	case 375://(0,1) (7, 7)
		return 0;//0 0
	break;
	case 376://(0,1) (7, 8)
		return 4;//0 4
	break;
	case 377://(0,1) (7, 9)
		return 4;//0 4
	break;
	case 378://(0,1) (7, 10)
		return 0;//0 0
	break;
	case 379://(0,1) (7, 11)
		return 4;//0 4
	break;
	case 380://(0,1) (7, 12)
		return 0;//0 0
	break;
	case 381://(0,1) (7, 13)
		return 4;//0 4
	break;
	case 382://(0,1) (7, 14)
		return 4;//0 4
	break;
	case 383://(0,1) (7, 15)
		return 4;//0 4
	break;
	case 384://(0,1) (8, 0)
		return 0;//0 0
	break;
	case 385://(0,1) (8, 1)
		return 4;//0 4
	break;
	case 386://(0,1) (8, 2)
		return 0;//0 0
	break;
	case 387://(0,1) (8, 3)
		return 0;//0 0
	break;
	case 388://(0,1) (8, 4)
		return 0;//0 0
	break;
	case 389://(0,1) (8, 5)
		return 0;//0 0
	break;
	case 390://(0,1) (8, 6)
		return 4;//0 4
	break;
	case 391://(0,1) (8, 7)
		return 0;//0 0
	break;
	case 392://(0,1) (8, 8)
		return 4;//0 4
	break;
	case 393://(0,1) (8, 9)
		return 4;//0 4
	break;
	case 394://(0,1) (8, 10)
		return 0;//0 0
	break;
	case 395://(0,1) (8, 11)
		return 4;//0 4
	break;
	case 396://(0,1) (8, 12)
		return 0;//0 0
	break;
	case 397://(0,1) (8, 13)
		return 4;//0 4
	break;
	case 398://(0,1) (8, 14)
		return 4;//0 4
	break;
	case 399://(0,1) (8, 15)
		return 4;//0 4
	break;
	case 400://(0,1) (9, 0)
		return 0;//0 0
	break;
	case 401://(0,1) (9, 1)
		return 4;//0 4
	break;
	case 402://(0,1) (9, 2)
		return 0;//0 0
	break;
	case 403://(0,1) (9, 3)
		return 0;//0 0
	break;
	case 404://(0,1) (9, 4)
		return 0;//0 0
	break;
	case 405://(0,1) (9, 5)
		return 0;//0 0
	break;
	case 406://(0,1) (9, 6)
		return 4;//0 4
	break;
	case 407://(0,1) (9, 7)
		return 0;//0 0
	break;
	case 408://(0,1) (9, 8)
		return 4;//0 4
	break;
	case 409://(0,1) (9, 9)
		return 4;//0 4
	break;
	case 410://(0,1) (9, 10)
		return 0;//0 0
	break;
	case 411://(0,1) (9, 11)
		return 4;//0 4
	break;
	case 412://(0,1) (9, 12)
		return 0;//0 0
	break;
	case 413://(0,1) (9, 13)
		return 4;//0 4
	break;
	case 414://(0,1) (9, 14)
		return 4;//0 4
	break;
	case 415://(0,1) (9, 15)
		return 4;//0 4
	break;
	case 416://(0,1) (10, 0)
		return 0;//0 0
	break;
	case 417://(0,1) (10, 1)
		return 4;//0 4
	break;
	case 418://(0,1) (10, 2)
		return 0;//0 0
	break;
	case 419://(0,1) (10, 3)
		return 0;//0 0
	break;
	case 420://(0,1) (10, 4)
		return 0;//0 0
	break;
	case 421://(0,1) (10, 5)
		return 0;//0 0
	break;
	case 422://(0,1) (10, 6)
		return 4;//0 4
	break;
	case 423://(0,1) (10, 7)
		return 0;//0 0
	break;
	case 424://(0,1) (10, 8)
		return 4;//0 4
	break;
	case 425://(0,1) (10, 9)
		return 4;//0 4
	break;
	case 426://(0,1) (10, 10)
		return 0;//0 0
	break;
	case 427://(0,1) (10, 11)
		return 4;//0 4
	break;
	case 428://(0,1) (10, 12)
		return 0;//0 0
	break;
	case 429://(0,1) (10, 13)
		return 4;//0 4
	break;
	case 430://(0,1) (10, 14)
		return 4;//0 4
	break;
	case 431://(0,1) (10, 15)
		return 4;//0 4
	break;
	case 432://(0,1) (11, 0)
		return 0;//0 0
	break;
	case 433://(0,1) (11, 1)
		return 4;//0 4
	break;
	case 434://(0,1) (11, 2)
		return 0;//0 0
	break;
	case 435://(0,1) (11, 3)
		return 0;//0 0
	break;
	case 436://(0,1) (11, 4)
		return 0;//0 0
	break;
	case 437://(0,1) (11, 5)
		return 0;//0 0
	break;
	case 438://(0,1) (11, 6)
		return 4;//0 4
	break;
	case 439://(0,1) (11, 7)
		return 0;//0 0
	break;
	case 440://(0,1) (11, 8)
		return 4;//0 4
	break;
	case 441://(0,1) (11, 9)
		return 4;//0 4
	break;
	case 442://(0,1) (11, 10)
		return 0;//0 0
	break;
	case 443://(0,1) (11, 11)
		return 4;//0 4
	break;
	case 444://(0,1) (11, 12)
		return 0;//0 0
	break;
	case 445://(0,1) (11, 13)
		return 4;//0 4
	break;
	case 446://(0,1) (11, 14)
		return 4;//0 4
	break;
	case 447://(0,1) (11, 15)
		return 4;//0 4
	break;
	case 448://(0,1) (12, 0)
		return 0;//0 0
	break;
	case 449://(0,1) (12, 1)
		return 4;//0 4
	break;
	case 450://(0,1) (12, 2)
		return 0;//0 0
	break;
	case 451://(0,1) (12, 3)
		return 0;//0 0
	break;
	case 452://(0,1) (12, 4)
		return 0;//0 0
	break;
	case 453://(0,1) (12, 5)
		return 0;//0 0
	break;
	case 454://(0,1) (12, 6)
		return 4;//0 4
	break;
	case 455://(0,1) (12, 7)
		return 0;//0 0
	break;
	case 456://(0,1) (12, 8)
		return 4;//0 4
	break;
	case 457://(0,1) (12, 9)
		return 4;//0 4
	break;
	case 458://(0,1) (12, 10)
		return 0;//0 0
	break;
	case 459://(0,1) (12, 11)
		return 4;//0 4
	break;
	case 460://(0,1) (12, 12)
		return 0;//0 0
	break;
	case 461://(0,1) (12, 13)
		return 4;//0 4
	break;
	case 462://(0,1) (12, 14)
		return 4;//0 4
	break;
	case 463://(0,1) (12, 15)
		return 4;//0 4
	break;
	case 464://(0,1) (13, 0)
		return 0;//0 0
	break;
	case 465://(0,1) (13, 1)
		return 4;//0 4
	break;
	case 466://(0,1) (13, 2)
		return 0;//0 0
	break;
	case 467://(0,1) (13, 3)
		return 0;//0 0
	break;
	case 468://(0,1) (13, 4)
		return 0;//0 0
	break;
	case 469://(0,1) (13, 5)
		return 0;//0 0
	break;
	case 470://(0,1) (13, 6)
		return 4;//0 4
	break;
	case 471://(0,1) (13, 7)
		return 0;//0 0
	break;
	case 472://(0,1) (13, 8)
		return 4;//0 4
	break;
	case 473://(0,1) (13, 9)
		return 4;//0 4
	break;
	case 474://(0,1) (13, 10)
		return 0;//0 0
	break;
	case 475://(0,1) (13, 11)
		return 4;//0 4
	break;
	case 476://(0,1) (13, 12)
		return 0;//0 0
	break;
	case 477://(0,1) (13, 13)
		return 4;//0 4
	break;
	case 478://(0,1) (13, 14)
		return 4;//0 4
	break;
	case 479://(0,1) (13, 15)
		return 4;//0 4
	break;
	case 480://(0,1) (14, 0)
		return 0;//0 0
	break;
	case 481://(0,1) (14, 1)
		return 4;//0 4
	break;
	case 482://(0,1) (14, 2)
		return 0;//0 0
	break;
	case 483://(0,1) (14, 3)
		return 0;//0 0
	break;
	case 484://(0,1) (14, 4)
		return 0;//0 0
	break;
	case 485://(0,1) (14, 5)
		return 0;//0 0
	break;
	case 486://(0,1) (14, 6)
		return 4;//0 4
	break;
	case 487://(0,1) (14, 7)
		return 0;//0 0
	break;
	case 488://(0,1) (14, 8)
		return 4;//0 4
	break;
	case 489://(0,1) (14, 9)
		return 4;//0 4
	break;
	case 490://(0,1) (14, 10)
		return 0;//0 0
	break;
	case 491://(0,1) (14, 11)
		return 4;//0 4
	break;
	case 492://(0,1) (14, 12)
		return 0;//0 0
	break;
	case 493://(0,1) (14, 13)
		return 4;//0 4
	break;
	case 494://(0,1) (14, 14)
		return 4;//0 4
	break;
	case 495://(0,1) (14, 15)
		return 4;//0 4
	break;
	case 496://(0,1) (15, 0)
		return 0;//0 0
	break;
	case 497://(0,1) (15, 1)
		return 4;//0 4
	break;
	case 498://(0,1) (15, 2)
		return 0;//0 0
	break;
	case 499://(0,1) (15, 3)
		return 0;//0 0
	break;
	case 500://(0,1) (15, 4)
		return 0;//0 0
	break;
	case 501://(0,1) (15, 5)
		return 0;//0 0
	break;
	case 502://(0,1) (15, 6)
		return 4;//0 4
	break;
	case 503://(0,1) (15, 7)
		return 0;//0 0
	break;
	case 504://(0,1) (15, 8)
		return 4;//0 4
	break;
	case 505://(0,1) (15, 9)
		return 4;//0 4
	break;
	case 506://(0,1) (15, 10)
		return 0;//0 0
	break;
	case 507://(0,1) (15, 11)
		return 4;//0 4
	break;
	case 508://(0,1) (15, 12)
		return 0;//0 0
	break;
	case 509://(0,1) (15, 13)
		return 4;//0 4
	break;
	case 510://(0,1) (15, 14)
		return 4;//0 4
	break;
	case 511://(0,1) (15, 15)
		return 4;//0 4
	break;
	case 512://(0,2) (0, 0)
		return 0;//0 0
	break;
	case 513://(0,2) (0, 1)
		return 0;//0 0
	break;
	case 514://(0,2) (0, 2)
		return 4;//0 4
	break;
	case 515://(0,2) (0, 3)
		return 0;//0 0
	break;
	case 516://(0,2) (0, 4)
		return 0;//0 0
	break;
	case 517://(0,2) (0, 5)
		return 4;//0 4
	break;
	case 518://(0,2) (0, 6)
		return 0;//0 0
	break;
	case 519://(0,2) (0, 7)
		return 4;//0 4
	break;
	case 520://(0,2) (0, 8)
		return 0;//0 0
	break;
	case 521://(0,2) (0, 9)
		return 4;//0 4
	break;
	case 522://(0,2) (0, 10)
		return 0;//0 0
	break;
	case 523://(0,2) (0, 11)
		return 4;//0 4
	break;
	case 524://(0,2) (0, 12)
		return 4;//0 4
	break;
	case 525://(0,2) (0, 13)
		return 0;//0 0
	break;
	case 526://(0,2) (0, 14)
		return 4;//0 4
	break;
	case 527://(0,2) (0, 15)
		return 4;//0 4
	break;
	case 528://(0,2) (1, 0)
		return 0;//0 0
	break;
	case 529://(0,2) (1, 1)
		return 0;//0 0
	break;
	case 530://(0,2) (1, 2)
		return 4;//0 4
	break;
	case 531://(0,2) (1, 3)
		return 0;//0 0
	break;
	case 532://(0,2) (1, 4)
		return 0;//0 0
	break;
	case 533://(0,2) (1, 5)
		return 4;//0 4
	break;
	case 534://(0,2) (1, 6)
		return 0;//0 0
	break;
	case 535://(0,2) (1, 7)
		return 4;//0 4
	break;
	case 536://(0,2) (1, 8)
		return 0;//0 0
	break;
	case 537://(0,2) (1, 9)
		return 4;//0 4
	break;
	case 538://(0,2) (1, 10)
		return 0;//0 0
	break;
	case 539://(0,2) (1, 11)
		return 4;//0 4
	break;
	case 540://(0,2) (1, 12)
		return 4;//0 4
	break;
	case 541://(0,2) (1, 13)
		return 0;//0 0
	break;
	case 542://(0,2) (1, 14)
		return 4;//0 4
	break;
	case 543://(0,2) (1, 15)
		return 4;//0 4
	break;
	case 544://(0,2) (2, 0)
		return 0;//0 0
	break;
	case 545://(0,2) (2, 1)
		return 0;//0 0
	break;
	case 546://(0,2) (2, 2)
		return 4;//0 4
	break;
	case 547://(0,2) (2, 3)
		return 0;//0 0
	break;
	case 548://(0,2) (2, 4)
		return 0;//0 0
	break;
	case 549://(0,2) (2, 5)
		return 4;//0 4
	break;
	case 550://(0,2) (2, 6)
		return 0;//0 0
	break;
	case 551://(0,2) (2, 7)
		return 4;//0 4
	break;
	case 552://(0,2) (2, 8)
		return 0;//0 0
	break;
	case 553://(0,2) (2, 9)
		return 4;//0 4
	break;
	case 554://(0,2) (2, 10)
		return 0;//0 0
	break;
	case 555://(0,2) (2, 11)
		return 4;//0 4
	break;
	case 556://(0,2) (2, 12)
		return 4;//0 4
	break;
	case 557://(0,2) (2, 13)
		return 0;//0 0
	break;
	case 558://(0,2) (2, 14)
		return 4;//0 4
	break;
	case 559://(0,2) (2, 15)
		return 4;//0 4
	break;
	case 560://(0,2) (3, 0)
		return 0;//0 0
	break;
	case 561://(0,2) (3, 1)
		return 0;//0 0
	break;
	case 562://(0,2) (3, 2)
		return 4;//0 4
	break;
	case 563://(0,2) (3, 3)
		return 0;//0 0
	break;
	case 564://(0,2) (3, 4)
		return 0;//0 0
	break;
	case 565://(0,2) (3, 5)
		return 4;//0 4
	break;
	case 566://(0,2) (3, 6)
		return 0;//0 0
	break;
	case 567://(0,2) (3, 7)
		return 4;//0 4
	break;
	case 568://(0,2) (3, 8)
		return 0;//0 0
	break;
	case 569://(0,2) (3, 9)
		return 4;//0 4
	break;
	case 570://(0,2) (3, 10)
		return 0;//0 0
	break;
	case 571://(0,2) (3, 11)
		return 4;//0 4
	break;
	case 572://(0,2) (3, 12)
		return 4;//0 4
	break;
	case 573://(0,2) (3, 13)
		return 0;//0 0
	break;
	case 574://(0,2) (3, 14)
		return 4;//0 4
	break;
	case 575://(0,2) (3, 15)
		return 4;//0 4
	break;
	case 576://(0,2) (4, 0)
		return 0;//0 0
	break;
	case 577://(0,2) (4, 1)
		return 0;//0 0
	break;
	case 578://(0,2) (4, 2)
		return 4;//0 4
	break;
	case 579://(0,2) (4, 3)
		return 0;//0 0
	break;
	case 580://(0,2) (4, 4)
		return 0;//0 0
	break;
	case 581://(0,2) (4, 5)
		return 4;//0 4
	break;
	case 582://(0,2) (4, 6)
		return 0;//0 0
	break;
	case 583://(0,2) (4, 7)
		return 4;//0 4
	break;
	case 584://(0,2) (4, 8)
		return 0;//0 0
	break;
	case 585://(0,2) (4, 9)
		return 4;//0 4
	break;
	case 586://(0,2) (4, 10)
		return 0;//0 0
	break;
	case 587://(0,2) (4, 11)
		return 4;//0 4
	break;
	case 588://(0,2) (4, 12)
		return 4;//0 4
	break;
	case 589://(0,2) (4, 13)
		return 0;//0 0
	break;
	case 590://(0,2) (4, 14)
		return 4;//0 4
	break;
	case 591://(0,2) (4, 15)
		return 4;//0 4
	break;
	case 592://(0,2) (5, 0)
		return 0;//0 0
	break;
	case 593://(0,2) (5, 1)
		return 0;//0 0
	break;
	case 594://(0,2) (5, 2)
		return 4;//0 4
	break;
	case 595://(0,2) (5, 3)
		return 0;//0 0
	break;
	case 596://(0,2) (5, 4)
		return 0;//0 0
	break;
	case 597://(0,2) (5, 5)
		return 4;//0 4
	break;
	case 598://(0,2) (5, 6)
		return 0;//0 0
	break;
	case 599://(0,2) (5, 7)
		return 4;//0 4
	break;
	case 600://(0,2) (5, 8)
		return 0;//0 0
	break;
	case 601://(0,2) (5, 9)
		return 4;//0 4
	break;
	case 602://(0,2) (5, 10)
		return 0;//0 0
	break;
	case 603://(0,2) (5, 11)
		return 4;//0 4
	break;
	case 604://(0,2) (5, 12)
		return 4;//0 4
	break;
	case 605://(0,2) (5, 13)
		return 0;//0 0
	break;
	case 606://(0,2) (5, 14)
		return 4;//0 4
	break;
	case 607://(0,2) (5, 15)
		return 4;//0 4
	break;
	case 608://(0,2) (6, 0)
		return 0;//0 0
	break;
	case 609://(0,2) (6, 1)
		return 0;//0 0
	break;
	case 610://(0,2) (6, 2)
		return 4;//0 4
	break;
	case 611://(0,2) (6, 3)
		return 0;//0 0
	break;
	case 612://(0,2) (6, 4)
		return 0;//0 0
	break;
	case 613://(0,2) (6, 5)
		return 4;//0 4
	break;
	case 614://(0,2) (6, 6)
		return 0;//0 0
	break;
	case 615://(0,2) (6, 7)
		return 4;//0 4
	break;
	case 616://(0,2) (6, 8)
		return 0;//0 0
	break;
	case 617://(0,2) (6, 9)
		return 4;//0 4
	break;
	case 618://(0,2) (6, 10)
		return 0;//0 0
	break;
	case 619://(0,2) (6, 11)
		return 4;//0 4
	break;
	case 620://(0,2) (6, 12)
		return 4;//0 4
	break;
	case 621://(0,2) (6, 13)
		return 0;//0 0
	break;
	case 622://(0,2) (6, 14)
		return 4;//0 4
	break;
	case 623://(0,2) (6, 15)
		return 4;//0 4
	break;
	case 624://(0,2) (7, 0)
		return 0;//0 0
	break;
	case 625://(0,2) (7, 1)
		return 0;//0 0
	break;
	case 626://(0,2) (7, 2)
		return 4;//0 4
	break;
	case 627://(0,2) (7, 3)
		return 0;//0 0
	break;
	case 628://(0,2) (7, 4)
		return 0;//0 0
	break;
	case 629://(0,2) (7, 5)
		return 4;//0 4
	break;
	case 630://(0,2) (7, 6)
		return 0;//0 0
	break;
	case 631://(0,2) (7, 7)
		return 4;//0 4
	break;
	case 632://(0,2) (7, 8)
		return 0;//0 0
	break;
	case 633://(0,2) (7, 9)
		return 4;//0 4
	break;
	case 634://(0,2) (7, 10)
		return 0;//0 0
	break;
	case 635://(0,2) (7, 11)
		return 4;//0 4
	break;
	case 636://(0,2) (7, 12)
		return 4;//0 4
	break;
	case 637://(0,2) (7, 13)
		return 0;//0 0
	break;
	case 638://(0,2) (7, 14)
		return 4;//0 4
	break;
	case 639://(0,2) (7, 15)
		return 4;//0 4
	break;
	case 640://(0,2) (8, 0)
		return 0;//0 0
	break;
	case 641://(0,2) (8, 1)
		return 0;//0 0
	break;
	case 642://(0,2) (8, 2)
		return 4;//0 4
	break;
	case 643://(0,2) (8, 3)
		return 0;//0 0
	break;
	case 644://(0,2) (8, 4)
		return 0;//0 0
	break;
	case 645://(0,2) (8, 5)
		return 4;//0 4
	break;
	case 646://(0,2) (8, 6)
		return 0;//0 0
	break;
	case 647://(0,2) (8, 7)
		return 4;//0 4
	break;
	case 648://(0,2) (8, 8)
		return 0;//0 0
	break;
	case 649://(0,2) (8, 9)
		return 4;//0 4
	break;
	case 650://(0,2) (8, 10)
		return 0;//0 0
	break;
	case 651://(0,2) (8, 11)
		return 4;//0 4
	break;
	case 652://(0,2) (8, 12)
		return 4;//0 4
	break;
	case 653://(0,2) (8, 13)
		return 0;//0 0
	break;
	case 654://(0,2) (8, 14)
		return 4;//0 4
	break;
	case 655://(0,2) (8, 15)
		return 4;//0 4
	break;
	case 656://(0,2) (9, 0)
		return 0;//0 0
	break;
	case 657://(0,2) (9, 1)
		return 0;//0 0
	break;
	case 658://(0,2) (9, 2)
		return 4;//0 4
	break;
	case 659://(0,2) (9, 3)
		return 0;//0 0
	break;
	case 660://(0,2) (9, 4)
		return 0;//0 0
	break;
	case 661://(0,2) (9, 5)
		return 4;//0 4
	break;
	case 662://(0,2) (9, 6)
		return 0;//0 0
	break;
	case 663://(0,2) (9, 7)
		return 4;//0 4
	break;
	case 664://(0,2) (9, 8)
		return 0;//0 0
	break;
	case 665://(0,2) (9, 9)
		return 4;//0 4
	break;
	case 666://(0,2) (9, 10)
		return 0;//0 0
	break;
	case 667://(0,2) (9, 11)
		return 4;//0 4
	break;
	case 668://(0,2) (9, 12)
		return 4;//0 4
	break;
	case 669://(0,2) (9, 13)
		return 0;//0 0
	break;
	case 670://(0,2) (9, 14)
		return 4;//0 4
	break;
	case 671://(0,2) (9, 15)
		return 4;//0 4
	break;
	case 672://(0,2) (10, 0)
		return 0;//0 0
	break;
	case 673://(0,2) (10, 1)
		return 0;//0 0
	break;
	case 674://(0,2) (10, 2)
		return 4;//0 4
	break;
	case 675://(0,2) (10, 3)
		return 0;//0 0
	break;
	case 676://(0,2) (10, 4)
		return 0;//0 0
	break;
	case 677://(0,2) (10, 5)
		return 4;//0 4
	break;
	case 678://(0,2) (10, 6)
		return 0;//0 0
	break;
	case 679://(0,2) (10, 7)
		return 4;//0 4
	break;
	case 680://(0,2) (10, 8)
		return 0;//0 0
	break;
	case 681://(0,2) (10, 9)
		return 4;//0 4
	break;
	case 682://(0,2) (10, 10)
		return 0;//0 0
	break;
	case 683://(0,2) (10, 11)
		return 4;//0 4
	break;
	case 684://(0,2) (10, 12)
		return 4;//0 4
	break;
	case 685://(0,2) (10, 13)
		return 0;//0 0
	break;
	case 686://(0,2) (10, 14)
		return 4;//0 4
	break;
	case 687://(0,2) (10, 15)
		return 4;//0 4
	break;
	case 688://(0,2) (11, 0)
		return 0;//0 0
	break;
	case 689://(0,2) (11, 1)
		return 0;//0 0
	break;
	case 690://(0,2) (11, 2)
		return 4;//0 4
	break;
	case 691://(0,2) (11, 3)
		return 0;//0 0
	break;
	case 692://(0,2) (11, 4)
		return 0;//0 0
	break;
	case 693://(0,2) (11, 5)
		return 4;//0 4
	break;
	case 694://(0,2) (11, 6)
		return 0;//0 0
	break;
	case 695://(0,2) (11, 7)
		return 4;//0 4
	break;
	case 696://(0,2) (11, 8)
		return 0;//0 0
	break;
	case 697://(0,2) (11, 9)
		return 4;//0 4
	break;
	case 698://(0,2) (11, 10)
		return 0;//0 0
	break;
	case 699://(0,2) (11, 11)
		return 4;//0 4
	break;
	case 700://(0,2) (11, 12)
		return 4;//0 4
	break;
	case 701://(0,2) (11, 13)
		return 0;//0 0
	break;
	case 702://(0,2) (11, 14)
		return 4;//0 4
	break;
	case 703://(0,2) (11, 15)
		return 4;//0 4
	break;
	case 704://(0,2) (12, 0)
		return 0;//0 0
	break;
	case 705://(0,2) (12, 1)
		return 0;//0 0
	break;
	case 706://(0,2) (12, 2)
		return 4;//0 4
	break;
	case 707://(0,2) (12, 3)
		return 0;//0 0
	break;
	case 708://(0,2) (12, 4)
		return 0;//0 0
	break;
	case 709://(0,2) (12, 5)
		return 4;//0 4
	break;
	case 710://(0,2) (12, 6)
		return 0;//0 0
	break;
	case 711://(0,2) (12, 7)
		return 4;//0 4
	break;
	case 712://(0,2) (12, 8)
		return 0;//0 0
	break;
	case 713://(0,2) (12, 9)
		return 4;//0 4
	break;
	case 714://(0,2) (12, 10)
		return 0;//0 0
	break;
	case 715://(0,2) (12, 11)
		return 4;//0 4
	break;
	case 716://(0,2) (12, 12)
		return 4;//0 4
	break;
	case 717://(0,2) (12, 13)
		return 0;//0 0
	break;
	case 718://(0,2) (12, 14)
		return 4;//0 4
	break;
	case 719://(0,2) (12, 15)
		return 4;//0 4
	break;
	case 720://(0,2) (13, 0)
		return 0;//0 0
	break;
	case 721://(0,2) (13, 1)
		return 0;//0 0
	break;
	case 722://(0,2) (13, 2)
		return 4;//0 4
	break;
	case 723://(0,2) (13, 3)
		return 0;//0 0
	break;
	case 724://(0,2) (13, 4)
		return 0;//0 0
	break;
	case 725://(0,2) (13, 5)
		return 4;//0 4
	break;
	case 726://(0,2) (13, 6)
		return 0;//0 0
	break;
	case 727://(0,2) (13, 7)
		return 4;//0 4
	break;
	case 728://(0,2) (13, 8)
		return 0;//0 0
	break;
	case 729://(0,2) (13, 9)
		return 4;//0 4
	break;
	case 730://(0,2) (13, 10)
		return 0;//0 0
	break;
	case 731://(0,2) (13, 11)
		return 4;//0 4
	break;
	case 732://(0,2) (13, 12)
		return 4;//0 4
	break;
	case 733://(0,2) (13, 13)
		return 0;//0 0
	break;
	case 734://(0,2) (13, 14)
		return 4;//0 4
	break;
	case 735://(0,2) (13, 15)
		return 4;//0 4
	break;
	case 736://(0,2) (14, 0)
		return 0;//0 0
	break;
	case 737://(0,2) (14, 1)
		return 0;//0 0
	break;
	case 738://(0,2) (14, 2)
		return 4;//0 4
	break;
	case 739://(0,2) (14, 3)
		return 0;//0 0
	break;
	case 740://(0,2) (14, 4)
		return 0;//0 0
	break;
	case 741://(0,2) (14, 5)
		return 4;//0 4
	break;
	case 742://(0,2) (14, 6)
		return 0;//0 0
	break;
	case 743://(0,2) (14, 7)
		return 4;//0 4
	break;
	case 744://(0,2) (14, 8)
		return 0;//0 0
	break;
	case 745://(0,2) (14, 9)
		return 4;//0 4
	break;
	case 746://(0,2) (14, 10)
		return 0;//0 0
	break;
	case 747://(0,2) (14, 11)
		return 4;//0 4
	break;
	case 748://(0,2) (14, 12)
		return 4;//0 4
	break;
	case 749://(0,2) (14, 13)
		return 0;//0 0
	break;
	case 750://(0,2) (14, 14)
		return 4;//0 4
	break;
	case 751://(0,2) (14, 15)
		return 4;//0 4
	break;
	case 752://(0,2) (15, 0)
		return 0;//0 0
	break;
	case 753://(0,2) (15, 1)
		return 0;//0 0
	break;
	case 754://(0,2) (15, 2)
		return 4;//0 4
	break;
	case 755://(0,2) (15, 3)
		return 0;//0 0
	break;
	case 756://(0,2) (15, 4)
		return 0;//0 0
	break;
	case 757://(0,2) (15, 5)
		return 4;//0 4
	break;
	case 758://(0,2) (15, 6)
		return 0;//0 0
	break;
	case 759://(0,2) (15, 7)
		return 4;//0 4
	break;
	case 760://(0,2) (15, 8)
		return 0;//0 0
	break;
	case 761://(0,2) (15, 9)
		return 4;//0 4
	break;
	case 762://(0,2) (15, 10)
		return 0;//0 0
	break;
	case 763://(0,2) (15, 11)
		return 4;//0 4
	break;
	case 764://(0,2) (15, 12)
		return 4;//0 4
	break;
	case 765://(0,2) (15, 13)
		return 0;//0 0
	break;
	case 766://(0,2) (15, 14)
		return 4;//0 4
	break;
	case 767://(0,2) (15, 15)
		return 4;//0 4
	break;
	case 768://(0,3) (0, 0)
		return 0;//0 0
	break;
	case 769://(0,3) (0, 1)
		return 0;//0 0
	break;
	case 770://(0,3) (0, 2)
		return 0;//0 0
	break;
	case 771://(0,3) (0, 3)
		return 4;//0 4
	break;
	case 772://(0,3) (0, 4)
		return 0;//0 0
	break;
	case 773://(0,3) (0, 5)
		return 0;//0 0
	break;
	case 774://(0,3) (0, 6)
		return 4;//0 4
	break;
	case 775://(0,3) (0, 7)
		return 4;//0 4
	break;
	case 776://(0,3) (0, 8)
		return 0;//0 0
	break;
	case 777://(0,3) (0, 9)
		return 0;//0 0
	break;
	case 778://(0,3) (0, 10)
		return 4;//0 4
	break;
	case 779://(0,3) (0, 11)
		return 4;//0 4
	break;
	case 780://(0,3) (0, 12)
		return 4;//0 4
	break;
	case 781://(0,3) (0, 13)
		return 4;//0 4
	break;
	case 782://(0,3) (0, 14)
		return 0;//0 0
	break;
	case 783://(0,3) (0, 15)
		return 4;//0 4
	break;
	case 784://(0,3) (1, 0)
		return 0;//0 0
	break;
	case 785://(0,3) (1, 1)
		return 0;//0 0
	break;
	case 786://(0,3) (1, 2)
		return 0;//0 0
	break;
	case 787://(0,3) (1, 3)
		return 4;//0 4
	break;
	case 788://(0,3) (1, 4)
		return 0;//0 0
	break;
	case 789://(0,3) (1, 5)
		return 0;//0 0
	break;
	case 790://(0,3) (1, 6)
		return 4;//0 4
	break;
	case 791://(0,3) (1, 7)
		return 4;//0 4
	break;
	case 792://(0,3) (1, 8)
		return 0;//0 0
	break;
	case 793://(0,3) (1, 9)
		return 0;//0 0
	break;
	case 794://(0,3) (1, 10)
		return 4;//0 4
	break;
	case 795://(0,3) (1, 11)
		return 4;//0 4
	break;
	case 796://(0,3) (1, 12)
		return 4;//0 4
	break;
	case 797://(0,3) (1, 13)
		return 4;//0 4
	break;
	case 798://(0,3) (1, 14)
		return 0;//0 0
	break;
	case 799://(0,3) (1, 15)
		return 4;//0 4
	break;
	case 800://(0,3) (2, 0)
		return 0;//0 0
	break;
	case 801://(0,3) (2, 1)
		return 0;//0 0
	break;
	case 802://(0,3) (2, 2)
		return 0;//0 0
	break;
	case 803://(0,3) (2, 3)
		return 4;//0 4
	break;
	case 804://(0,3) (2, 4)
		return 0;//0 0
	break;
	case 805://(0,3) (2, 5)
		return 0;//0 0
	break;
	case 806://(0,3) (2, 6)
		return 4;//0 4
	break;
	case 807://(0,3) (2, 7)
		return 4;//0 4
	break;
	case 808://(0,3) (2, 8)
		return 0;//0 0
	break;
	case 809://(0,3) (2, 9)
		return 0;//0 0
	break;
	case 810://(0,3) (2, 10)
		return 4;//0 4
	break;
	case 811://(0,3) (2, 11)
		return 4;//0 4
	break;
	case 812://(0,3) (2, 12)
		return 4;//0 4
	break;
	case 813://(0,3) (2, 13)
		return 4;//0 4
	break;
	case 814://(0,3) (2, 14)
		return 0;//0 0
	break;
	case 815://(0,3) (2, 15)
		return 4;//0 4
	break;
	case 816://(0,3) (3, 0)
		return 0;//0 0
	break;
	case 817://(0,3) (3, 1)
		return 0;//0 0
	break;
	case 818://(0,3) (3, 2)
		return 0;//0 0
	break;
	case 819://(0,3) (3, 3)
		return 4;//0 4
	break;
	case 820://(0,3) (3, 4)
		return 0;//0 0
	break;
	case 821://(0,3) (3, 5)
		return 0;//0 0
	break;
	case 822://(0,3) (3, 6)
		return 4;//0 4
	break;
	case 823://(0,3) (3, 7)
		return 4;//0 4
	break;
	case 824://(0,3) (3, 8)
		return 0;//0 0
	break;
	case 825://(0,3) (3, 9)
		return 0;//0 0
	break;
	case 826://(0,3) (3, 10)
		return 4;//0 4
	break;
	case 827://(0,3) (3, 11)
		return 4;//0 4
	break;
	case 828://(0,3) (3, 12)
		return 4;//0 4
	break;
	case 829://(0,3) (3, 13)
		return 4;//0 4
	break;
	case 830://(0,3) (3, 14)
		return 0;//0 0
	break;
	case 831://(0,3) (3, 15)
		return 4;//0 4
	break;
	case 832://(0,3) (4, 0)
		return 0;//0 0
	break;
	case 833://(0,3) (4, 1)
		return 0;//0 0
	break;
	case 834://(0,3) (4, 2)
		return 0;//0 0
	break;
	case 835://(0,3) (4, 3)
		return 4;//0 4
	break;
	case 836://(0,3) (4, 4)
		return 0;//0 0
	break;
	case 837://(0,3) (4, 5)
		return 0;//0 0
	break;
	case 838://(0,3) (4, 6)
		return 4;//0 4
	break;
	case 839://(0,3) (4, 7)
		return 4;//0 4
	break;
	case 840://(0,3) (4, 8)
		return 0;//0 0
	break;
	case 841://(0,3) (4, 9)
		return 0;//0 0
	break;
	case 842://(0,3) (4, 10)
		return 4;//0 4
	break;
	case 843://(0,3) (4, 11)
		return 4;//0 4
	break;
	case 844://(0,3) (4, 12)
		return 4;//0 4
	break;
	case 845://(0,3) (4, 13)
		return 4;//0 4
	break;
	case 846://(0,3) (4, 14)
		return 0;//0 0
	break;
	case 847://(0,3) (4, 15)
		return 4;//0 4
	break;
	case 848://(0,3) (5, 0)
		return 0;//0 0
	break;
	case 849://(0,3) (5, 1)
		return 0;//0 0
	break;
	case 850://(0,3) (5, 2)
		return 0;//0 0
	break;
	case 851://(0,3) (5, 3)
		return 4;//0 4
	break;
	case 852://(0,3) (5, 4)
		return 0;//0 0
	break;
	case 853://(0,3) (5, 5)
		return 0;//0 0
	break;
	case 854://(0,3) (5, 6)
		return 4;//0 4
	break;
	case 855://(0,3) (5, 7)
		return 4;//0 4
	break;
	case 856://(0,3) (5, 8)
		return 0;//0 0
	break;
	case 857://(0,3) (5, 9)
		return 0;//0 0
	break;
	case 858://(0,3) (5, 10)
		return 4;//0 4
	break;
	case 859://(0,3) (5, 11)
		return 4;//0 4
	break;
	case 860://(0,3) (5, 12)
		return 4;//0 4
	break;
	case 861://(0,3) (5, 13)
		return 4;//0 4
	break;
	case 862://(0,3) (5, 14)
		return 0;//0 0
	break;
	case 863://(0,3) (5, 15)
		return 4;//0 4
	break;
	case 864://(0,3) (6, 0)
		return 0;//0 0
	break;
	case 865://(0,3) (6, 1)
		return 0;//0 0
	break;
	case 866://(0,3) (6, 2)
		return 0;//0 0
	break;
	case 867://(0,3) (6, 3)
		return 4;//0 4
	break;
	case 868://(0,3) (6, 4)
		return 0;//0 0
	break;
	case 869://(0,3) (6, 5)
		return 0;//0 0
	break;
	case 870://(0,3) (6, 6)
		return 4;//0 4
	break;
	case 871://(0,3) (6, 7)
		return 4;//0 4
	break;
	case 872://(0,3) (6, 8)
		return 0;//0 0
	break;
	case 873://(0,3) (6, 9)
		return 0;//0 0
	break;
	case 874://(0,3) (6, 10)
		return 4;//0 4
	break;
	case 875://(0,3) (6, 11)
		return 4;//0 4
	break;
	case 876://(0,3) (6, 12)
		return 4;//0 4
	break;
	case 877://(0,3) (6, 13)
		return 4;//0 4
	break;
	case 878://(0,3) (6, 14)
		return 0;//0 0
	break;
	case 879://(0,3) (6, 15)
		return 4;//0 4
	break;
	case 880://(0,3) (7, 0)
		return 0;//0 0
	break;
	case 881://(0,3) (7, 1)
		return 0;//0 0
	break;
	case 882://(0,3) (7, 2)
		return 0;//0 0
	break;
	case 883://(0,3) (7, 3)
		return 4;//0 4
	break;
	case 884://(0,3) (7, 4)
		return 0;//0 0
	break;
	case 885://(0,3) (7, 5)
		return 0;//0 0
	break;
	case 886://(0,3) (7, 6)
		return 4;//0 4
	break;
	case 887://(0,3) (7, 7)
		return 4;//0 4
	break;
	case 888://(0,3) (7, 8)
		return 0;//0 0
	break;
	case 889://(0,3) (7, 9)
		return 0;//0 0
	break;
	case 890://(0,3) (7, 10)
		return 4;//0 4
	break;
	case 891://(0,3) (7, 11)
		return 4;//0 4
	break;
	case 892://(0,3) (7, 12)
		return 4;//0 4
	break;
	case 893://(0,3) (7, 13)
		return 4;//0 4
	break;
	case 894://(0,3) (7, 14)
		return 0;//0 0
	break;
	case 895://(0,3) (7, 15)
		return 4;//0 4
	break;
	case 896://(0,3) (8, 0)
		return 0;//0 0
	break;
	case 897://(0,3) (8, 1)
		return 0;//0 0
	break;
	case 898://(0,3) (8, 2)
		return 0;//0 0
	break;
	case 899://(0,3) (8, 3)
		return 4;//0 4
	break;
	case 900://(0,3) (8, 4)
		return 0;//0 0
	break;
	case 901://(0,3) (8, 5)
		return 0;//0 0
	break;
	case 902://(0,3) (8, 6)
		return 4;//0 4
	break;
	case 903://(0,3) (8, 7)
		return 4;//0 4
	break;
	case 904://(0,3) (8, 8)
		return 0;//0 0
	break;
	case 905://(0,3) (8, 9)
		return 0;//0 0
	break;
	case 906://(0,3) (8, 10)
		return 4;//0 4
	break;
	case 907://(0,3) (8, 11)
		return 4;//0 4
	break;
	case 908://(0,3) (8, 12)
		return 4;//0 4
	break;
	case 909://(0,3) (8, 13)
		return 4;//0 4
	break;
	case 910://(0,3) (8, 14)
		return 0;//0 0
	break;
	case 911://(0,3) (8, 15)
		return 4;//0 4
	break;
	case 912://(0,3) (9, 0)
		return 0;//0 0
	break;
	case 913://(0,3) (9, 1)
		return 0;//0 0
	break;
	case 914://(0,3) (9, 2)
		return 0;//0 0
	break;
	case 915://(0,3) (9, 3)
		return 4;//0 4
	break;
	case 916://(0,3) (9, 4)
		return 0;//0 0
	break;
	case 917://(0,3) (9, 5)
		return 0;//0 0
	break;
	case 918://(0,3) (9, 6)
		return 4;//0 4
	break;
	case 919://(0,3) (9, 7)
		return 4;//0 4
	break;
	case 920://(0,3) (9, 8)
		return 0;//0 0
	break;
	case 921://(0,3) (9, 9)
		return 0;//0 0
	break;
	case 922://(0,3) (9, 10)
		return 4;//0 4
	break;
	case 923://(0,3) (9, 11)
		return 4;//0 4
	break;
	case 924://(0,3) (9, 12)
		return 4;//0 4
	break;
	case 925://(0,3) (9, 13)
		return 4;//0 4
	break;
	case 926://(0,3) (9, 14)
		return 0;//0 0
	break;
	case 927://(0,3) (9, 15)
		return 4;//0 4
	break;
	case 928://(0,3) (10, 0)
		return 0;//0 0
	break;
	case 929://(0,3) (10, 1)
		return 0;//0 0
	break;
	case 930://(0,3) (10, 2)
		return 0;//0 0
	break;
	case 931://(0,3) (10, 3)
		return 4;//0 4
	break;
	case 932://(0,3) (10, 4)
		return 0;//0 0
	break;
	case 933://(0,3) (10, 5)
		return 0;//0 0
	break;
	case 934://(0,3) (10, 6)
		return 4;//0 4
	break;
	case 935://(0,3) (10, 7)
		return 4;//0 4
	break;
	case 936://(0,3) (10, 8)
		return 0;//0 0
	break;
	case 937://(0,3) (10, 9)
		return 0;//0 0
	break;
	case 938://(0,3) (10, 10)
		return 4;//0 4
	break;
	case 939://(0,3) (10, 11)
		return 4;//0 4
	break;
	case 940://(0,3) (10, 12)
		return 4;//0 4
	break;
	case 941://(0,3) (10, 13)
		return 4;//0 4
	break;
	case 942://(0,3) (10, 14)
		return 0;//0 0
	break;
	case 943://(0,3) (10, 15)
		return 4;//0 4
	break;
	case 944://(0,3) (11, 0)
		return 0;//0 0
	break;
	case 945://(0,3) (11, 1)
		return 0;//0 0
	break;
	case 946://(0,3) (11, 2)
		return 0;//0 0
	break;
	case 947://(0,3) (11, 3)
		return 4;//0 4
	break;
	case 948://(0,3) (11, 4)
		return 0;//0 0
	break;
	case 949://(0,3) (11, 5)
		return 0;//0 0
	break;
	case 950://(0,3) (11, 6)
		return 4;//0 4
	break;
	case 951://(0,3) (11, 7)
		return 4;//0 4
	break;
	case 952://(0,3) (11, 8)
		return 0;//0 0
	break;
	case 953://(0,3) (11, 9)
		return 0;//0 0
	break;
	case 954://(0,3) (11, 10)
		return 4;//0 4
	break;
	case 955://(0,3) (11, 11)
		return 4;//0 4
	break;
	case 956://(0,3) (11, 12)
		return 4;//0 4
	break;
	case 957://(0,3) (11, 13)
		return 4;//0 4
	break;
	case 958://(0,3) (11, 14)
		return 0;//0 0
	break;
	case 959://(0,3) (11, 15)
		return 4;//0 4
	break;
	case 960://(0,3) (12, 0)
		return 0;//0 0
	break;
	case 961://(0,3) (12, 1)
		return 0;//0 0
	break;
	case 962://(0,3) (12, 2)
		return 0;//0 0
	break;
	case 963://(0,3) (12, 3)
		return 4;//0 4
	break;
	case 964://(0,3) (12, 4)
		return 0;//0 0
	break;
	case 965://(0,3) (12, 5)
		return 0;//0 0
	break;
	case 966://(0,3) (12, 6)
		return 4;//0 4
	break;
	case 967://(0,3) (12, 7)
		return 4;//0 4
	break;
	case 968://(0,3) (12, 8)
		return 0;//0 0
	break;
	case 969://(0,3) (12, 9)
		return 0;//0 0
	break;
	case 970://(0,3) (12, 10)
		return 4;//0 4
	break;
	case 971://(0,3) (12, 11)
		return 4;//0 4
	break;
	case 972://(0,3) (12, 12)
		return 4;//0 4
	break;
	case 973://(0,3) (12, 13)
		return 4;//0 4
	break;
	case 974://(0,3) (12, 14)
		return 0;//0 0
	break;
	case 975://(0,3) (12, 15)
		return 4;//0 4
	break;
	case 976://(0,3) (13, 0)
		return 0;//0 0
	break;
	case 977://(0,3) (13, 1)
		return 0;//0 0
	break;
	case 978://(0,3) (13, 2)
		return 0;//0 0
	break;
	case 979://(0,3) (13, 3)
		return 4;//0 4
	break;
	case 980://(0,3) (13, 4)
		return 0;//0 0
	break;
	case 981://(0,3) (13, 5)
		return 0;//0 0
	break;
	case 982://(0,3) (13, 6)
		return 4;//0 4
	break;
	case 983://(0,3) (13, 7)
		return 4;//0 4
	break;
	case 984://(0,3) (13, 8)
		return 0;//0 0
	break;
	case 985://(0,3) (13, 9)
		return 0;//0 0
	break;
	case 986://(0,3) (13, 10)
		return 4;//0 4
	break;
	case 987://(0,3) (13, 11)
		return 4;//0 4
	break;
	case 988://(0,3) (13, 12)
		return 4;//0 4
	break;
	case 989://(0,3) (13, 13)
		return 4;//0 4
	break;
	case 990://(0,3) (13, 14)
		return 0;//0 0
	break;
	case 991://(0,3) (13, 15)
		return 4;//0 4
	break;
	case 992://(0,3) (14, 0)
		return 0;//0 0
	break;
	case 993://(0,3) (14, 1)
		return 0;//0 0
	break;
	case 994://(0,3) (14, 2)
		return 0;//0 0
	break;
	case 995://(0,3) (14, 3)
		return 4;//0 4
	break;
	case 996://(0,3) (14, 4)
		return 0;//0 0
	break;
	case 997://(0,3) (14, 5)
		return 0;//0 0
	break;
	case 998://(0,3) (14, 6)
		return 4;//0 4
	break;
	case 999://(0,3) (14, 7)
		return 4;//0 4
	break;
	case 1000://(0,3) (14, 8)
		return 0;//0 0
	break;
	case 1001://(0,3) (14, 9)
		return 0;//0 0
	break;
	case 1002://(0,3) (14, 10)
		return 4;//0 4
	break;
	case 1003://(0,3) (14, 11)
		return 4;//0 4
	break;
	case 1004://(0,3) (14, 12)
		return 4;//0 4
	break;
	case 1005://(0,3) (14, 13)
		return 4;//0 4
	break;
	case 1006://(0,3) (14, 14)
		return 0;//0 0
	break;
	case 1007://(0,3) (14, 15)
		return 4;//0 4
	break;
	case 1008://(0,3) (15, 0)
		return 0;//0 0
	break;
	case 1009://(0,3) (15, 1)
		return 0;//0 0
	break;
	case 1010://(0,3) (15, 2)
		return 0;//0 0
	break;
	case 1011://(0,3) (15, 3)
		return 4;//0 4
	break;
	case 1012://(0,3) (15, 4)
		return 0;//0 0
	break;
	case 1013://(0,3) (15, 5)
		return 0;//0 0
	break;
	case 1014://(0,3) (15, 6)
		return 4;//0 4
	break;
	case 1015://(0,3) (15, 7)
		return 4;//0 4
	break;
	case 1016://(0,3) (15, 8)
		return 0;//0 0
	break;
	case 1017://(0,3) (15, 9)
		return 0;//0 0
	break;
	case 1018://(0,3) (15, 10)
		return 4;//0 4
	break;
	case 1019://(0,3) (15, 11)
		return 4;//0 4
	break;
	case 1020://(0,3) (15, 12)
		return 4;//0 4
	break;
	case 1021://(0,3) (15, 13)
		return 4;//0 4
	break;
	case 1022://(0,3) (15, 14)
		return 0;//0 0
	break;
	case 1023://(0,3) (15, 15)
		return 4;//0 4
	break;
	case 1024://(0,4) (0, 0)
		return 0;//0 0
	break;
	case 1025://(0,4) (0, 1)
		return 0;//0 0
	break;
	case 1026://(0,4) (0, 2)
		return 0;//0 0
	break;
	case 1027://(0,4) (0, 3)
		return 0;//0 0
	break;
	case 1028://(0,4) (0, 4)
		return 4;//0 4
	break;
	case 1029://(0,4) (0, 5)
		return 4;//0 4
	break;
	case 1030://(0,4) (0, 6)
		return 0;//0 0
	break;
	case 1031://(0,4) (0, 7)
		return 0;//0 0
	break;
	case 1032://(0,4) (0, 8)
		return 4;//0 4
	break;
	case 1033://(0,4) (0, 9)
		return 0;//0 0
	break;
	case 1034://(0,4) (0, 10)
		return 4;//0 4
	break;
	case 1035://(0,4) (0, 11)
		return 0;//0 0
	break;
	case 1036://(0,4) (0, 12)
		return 4;//0 4
	break;
	case 1037://(0,4) (0, 13)
		return 4;//0 4
	break;
	case 1038://(0,4) (0, 14)
		return 4;//0 4
	break;
	case 1039://(0,4) (0, 15)
		return 4;//0 4
	break;
	case 1040://(0,4) (1, 0)
		return 0;//0 0
	break;
	case 1041://(0,4) (1, 1)
		return 0;//0 0
	break;
	case 1042://(0,4) (1, 2)
		return 0;//0 0
	break;
	case 1043://(0,4) (1, 3)
		return 0;//0 0
	break;
	case 1044://(0,4) (1, 4)
		return 4;//0 4
	break;
	case 1045://(0,4) (1, 5)
		return 4;//0 4
	break;
	case 1046://(0,4) (1, 6)
		return 0;//0 0
	break;
	case 1047://(0,4) (1, 7)
		return 0;//0 0
	break;
	case 1048://(0,4) (1, 8)
		return 4;//0 4
	break;
	case 1049://(0,4) (1, 9)
		return 0;//0 0
	break;
	case 1050://(0,4) (1, 10)
		return 4;//0 4
	break;
	case 1051://(0,4) (1, 11)
		return 0;//0 0
	break;
	case 1052://(0,4) (1, 12)
		return 4;//0 4
	break;
	case 1053://(0,4) (1, 13)
		return 4;//0 4
	break;
	case 1054://(0,4) (1, 14)
		return 4;//0 4
	break;
	case 1055://(0,4) (1, 15)
		return 4;//0 4
	break;
	case 1056://(0,4) (2, 0)
		return 0;//0 0
	break;
	case 1057://(0,4) (2, 1)
		return 0;//0 0
	break;
	case 1058://(0,4) (2, 2)
		return 0;//0 0
	break;
	case 1059://(0,4) (2, 3)
		return 0;//0 0
	break;
	case 1060://(0,4) (2, 4)
		return 4;//0 4
	break;
	case 1061://(0,4) (2, 5)
		return 4;//0 4
	break;
	case 1062://(0,4) (2, 6)
		return 0;//0 0
	break;
	case 1063://(0,4) (2, 7)
		return 0;//0 0
	break;
	case 1064://(0,4) (2, 8)
		return 4;//0 4
	break;
	case 1065://(0,4) (2, 9)
		return 0;//0 0
	break;
	case 1066://(0,4) (2, 10)
		return 4;//0 4
	break;
	case 1067://(0,4) (2, 11)
		return 0;//0 0
	break;
	case 1068://(0,4) (2, 12)
		return 4;//0 4
	break;
	case 1069://(0,4) (2, 13)
		return 4;//0 4
	break;
	case 1070://(0,4) (2, 14)
		return 4;//0 4
	break;
	case 1071://(0,4) (2, 15)
		return 4;//0 4
	break;
	case 1072://(0,4) (3, 0)
		return 0;//0 0
	break;
	case 1073://(0,4) (3, 1)
		return 0;//0 0
	break;
	case 1074://(0,4) (3, 2)
		return 0;//0 0
	break;
	case 1075://(0,4) (3, 3)
		return 0;//0 0
	break;
	case 1076://(0,4) (3, 4)
		return 4;//0 4
	break;
	case 1077://(0,4) (3, 5)
		return 4;//0 4
	break;
	case 1078://(0,4) (3, 6)
		return 0;//0 0
	break;
	case 1079://(0,4) (3, 7)
		return 0;//0 0
	break;
	case 1080://(0,4) (3, 8)
		return 4;//0 4
	break;
	case 1081://(0,4) (3, 9)
		return 0;//0 0
	break;
	case 1082://(0,4) (3, 10)
		return 4;//0 4
	break;
	case 1083://(0,4) (3, 11)
		return 0;//0 0
	break;
	case 1084://(0,4) (3, 12)
		return 4;//0 4
	break;
	case 1085://(0,4) (3, 13)
		return 4;//0 4
	break;
	case 1086://(0,4) (3, 14)
		return 4;//0 4
	break;
	case 1087://(0,4) (3, 15)
		return 4;//0 4
	break;
	case 1088://(0,4) (4, 0)
		return 0;//0 0
	break;
	case 1089://(0,4) (4, 1)
		return 0;//0 0
	break;
	case 1090://(0,4) (4, 2)
		return 0;//0 0
	break;
	case 1091://(0,4) (4, 3)
		return 0;//0 0
	break;
	case 1092://(0,4) (4, 4)
		return 4;//0 4
	break;
	case 1093://(0,4) (4, 5)
		return 4;//0 4
	break;
	case 1094://(0,4) (4, 6)
		return 0;//0 0
	break;
	case 1095://(0,4) (4, 7)
		return 0;//0 0
	break;
	case 1096://(0,4) (4, 8)
		return 4;//0 4
	break;
	case 1097://(0,4) (4, 9)
		return 0;//0 0
	break;
	case 1098://(0,4) (4, 10)
		return 4;//0 4
	break;
	case 1099://(0,4) (4, 11)
		return 0;//0 0
	break;
	case 1100://(0,4) (4, 12)
		return 4;//0 4
	break;
	case 1101://(0,4) (4, 13)
		return 4;//0 4
	break;
	case 1102://(0,4) (4, 14)
		return 4;//0 4
	break;
	case 1103://(0,4) (4, 15)
		return 4;//0 4
	break;
	case 1104://(0,4) (5, 0)
		return 0;//0 0
	break;
	case 1105://(0,4) (5, 1)
		return 0;//0 0
	break;
	case 1106://(0,4) (5, 2)
		return 0;//0 0
	break;
	case 1107://(0,4) (5, 3)
		return 0;//0 0
	break;
	case 1108://(0,4) (5, 4)
		return 4;//0 4
	break;
	case 1109://(0,4) (5, 5)
		return 4;//0 4
	break;
	case 1110://(0,4) (5, 6)
		return 0;//0 0
	break;
	case 1111://(0,4) (5, 7)
		return 0;//0 0
	break;
	case 1112://(0,4) (5, 8)
		return 4;//0 4
	break;
	case 1113://(0,4) (5, 9)
		return 0;//0 0
	break;
	case 1114://(0,4) (5, 10)
		return 4;//0 4
	break;
	case 1115://(0,4) (5, 11)
		return 0;//0 0
	break;
	case 1116://(0,4) (5, 12)
		return 4;//0 4
	break;
	case 1117://(0,4) (5, 13)
		return 4;//0 4
	break;
	case 1118://(0,4) (5, 14)
		return 4;//0 4
	break;
	case 1119://(0,4) (5, 15)
		return 4;//0 4
	break;
	case 1120://(0,4) (6, 0)
		return 0;//0 0
	break;
	case 1121://(0,4) (6, 1)
		return 0;//0 0
	break;
	case 1122://(0,4) (6, 2)
		return 0;//0 0
	break;
	case 1123://(0,4) (6, 3)
		return 0;//0 0
	break;
	case 1124://(0,4) (6, 4)
		return 4;//0 4
	break;
	case 1125://(0,4) (6, 5)
		return 4;//0 4
	break;
	case 1126://(0,4) (6, 6)
		return 0;//0 0
	break;
	case 1127://(0,4) (6, 7)
		return 0;//0 0
	break;
	case 1128://(0,4) (6, 8)
		return 4;//0 4
	break;
	case 1129://(0,4) (6, 9)
		return 0;//0 0
	break;
	case 1130://(0,4) (6, 10)
		return 4;//0 4
	break;
	case 1131://(0,4) (6, 11)
		return 0;//0 0
	break;
	case 1132://(0,4) (6, 12)
		return 4;//0 4
	break;
	case 1133://(0,4) (6, 13)
		return 4;//0 4
	break;
	case 1134://(0,4) (6, 14)
		return 4;//0 4
	break;
	case 1135://(0,4) (6, 15)
		return 4;//0 4
	break;
	case 1136://(0,4) (7, 0)
		return 0;//0 0
	break;
	case 1137://(0,4) (7, 1)
		return 0;//0 0
	break;
	case 1138://(0,4) (7, 2)
		return 0;//0 0
	break;
	case 1139://(0,4) (7, 3)
		return 0;//0 0
	break;
	case 1140://(0,4) (7, 4)
		return 4;//0 4
	break;
	case 1141://(0,4) (7, 5)
		return 4;//0 4
	break;
	case 1142://(0,4) (7, 6)
		return 0;//0 0
	break;
	case 1143://(0,4) (7, 7)
		return 0;//0 0
	break;
	case 1144://(0,4) (7, 8)
		return 4;//0 4
	break;
	case 1145://(0,4) (7, 9)
		return 0;//0 0
	break;
	case 1146://(0,4) (7, 10)
		return 4;//0 4
	break;
	case 1147://(0,4) (7, 11)
		return 0;//0 0
	break;
	case 1148://(0,4) (7, 12)
		return 4;//0 4
	break;
	case 1149://(0,4) (7, 13)
		return 4;//0 4
	break;
	case 1150://(0,4) (7, 14)
		return 4;//0 4
	break;
	case 1151://(0,4) (7, 15)
		return 4;//0 4
	break;
	case 1152://(0,4) (8, 0)
		return 0;//0 0
	break;
	case 1153://(0,4) (8, 1)
		return 0;//0 0
	break;
	case 1154://(0,4) (8, 2)
		return 0;//0 0
	break;
	case 1155://(0,4) (8, 3)
		return 0;//0 0
	break;
	case 1156://(0,4) (8, 4)
		return 4;//0 4
	break;
	case 1157://(0,4) (8, 5)
		return 4;//0 4
	break;
	case 1158://(0,4) (8, 6)
		return 0;//0 0
	break;
	case 1159://(0,4) (8, 7)
		return 0;//0 0
	break;
	case 1160://(0,4) (8, 8)
		return 4;//0 4
	break;
	case 1161://(0,4) (8, 9)
		return 0;//0 0
	break;
	case 1162://(0,4) (8, 10)
		return 4;//0 4
	break;
	case 1163://(0,4) (8, 11)
		return 0;//0 0
	break;
	case 1164://(0,4) (8, 12)
		return 4;//0 4
	break;
	case 1165://(0,4) (8, 13)
		return 4;//0 4
	break;
	case 1166://(0,4) (8, 14)
		return 4;//0 4
	break;
	case 1167://(0,4) (8, 15)
		return 4;//0 4
	break;
	case 1168://(0,4) (9, 0)
		return 0;//0 0
	break;
	case 1169://(0,4) (9, 1)
		return 0;//0 0
	break;
	case 1170://(0,4) (9, 2)
		return 0;//0 0
	break;
	case 1171://(0,4) (9, 3)
		return 0;//0 0
	break;
	case 1172://(0,4) (9, 4)
		return 4;//0 4
	break;
	case 1173://(0,4) (9, 5)
		return 4;//0 4
	break;
	case 1174://(0,4) (9, 6)
		return 0;//0 0
	break;
	case 1175://(0,4) (9, 7)
		return 0;//0 0
	break;
	case 1176://(0,4) (9, 8)
		return 4;//0 4
	break;
	case 1177://(0,4) (9, 9)
		return 0;//0 0
	break;
	case 1178://(0,4) (9, 10)
		return 4;//0 4
	break;
	case 1179://(0,4) (9, 11)
		return 0;//0 0
	break;
	case 1180://(0,4) (9, 12)
		return 4;//0 4
	break;
	case 1181://(0,4) (9, 13)
		return 4;//0 4
	break;
	case 1182://(0,4) (9, 14)
		return 4;//0 4
	break;
	case 1183://(0,4) (9, 15)
		return 4;//0 4
	break;
	case 1184://(0,4) (10, 0)
		return 0;//0 0
	break;
	case 1185://(0,4) (10, 1)
		return 0;//0 0
	break;
	case 1186://(0,4) (10, 2)
		return 0;//0 0
	break;
	case 1187://(0,4) (10, 3)
		return 0;//0 0
	break;
	case 1188://(0,4) (10, 4)
		return 4;//0 4
	break;
	case 1189://(0,4) (10, 5)
		return 4;//0 4
	break;
	case 1190://(0,4) (10, 6)
		return 0;//0 0
	break;
	case 1191://(0,4) (10, 7)
		return 0;//0 0
	break;
	case 1192://(0,4) (10, 8)
		return 4;//0 4
	break;
	case 1193://(0,4) (10, 9)
		return 0;//0 0
	break;
	case 1194://(0,4) (10, 10)
		return 4;//0 4
	break;
	case 1195://(0,4) (10, 11)
		return 0;//0 0
	break;
	case 1196://(0,4) (10, 12)
		return 4;//0 4
	break;
	case 1197://(0,4) (10, 13)
		return 4;//0 4
	break;
	case 1198://(0,4) (10, 14)
		return 4;//0 4
	break;
	case 1199://(0,4) (10, 15)
		return 4;//0 4
	break;
	case 1200://(0,4) (11, 0)
		return 0;//0 0
	break;
	case 1201://(0,4) (11, 1)
		return 0;//0 0
	break;
	case 1202://(0,4) (11, 2)
		return 0;//0 0
	break;
	case 1203://(0,4) (11, 3)
		return 0;//0 0
	break;
	case 1204://(0,4) (11, 4)
		return 4;//0 4
	break;
	case 1205://(0,4) (11, 5)
		return 4;//0 4
	break;
	case 1206://(0,4) (11, 6)
		return 0;//0 0
	break;
	case 1207://(0,4) (11, 7)
		return 0;//0 0
	break;
	case 1208://(0,4) (11, 8)
		return 4;//0 4
	break;
	case 1209://(0,4) (11, 9)
		return 0;//0 0
	break;
	case 1210://(0,4) (11, 10)
		return 4;//0 4
	break;
	case 1211://(0,4) (11, 11)
		return 0;//0 0
	break;
	case 1212://(0,4) (11, 12)
		return 4;//0 4
	break;
	case 1213://(0,4) (11, 13)
		return 4;//0 4
	break;
	case 1214://(0,4) (11, 14)
		return 4;//0 4
	break;
	case 1215://(0,4) (11, 15)
		return 4;//0 4
	break;
	case 1216://(0,4) (12, 0)
		return 0;//0 0
	break;
	case 1217://(0,4) (12, 1)
		return 0;//0 0
	break;
	case 1218://(0,4) (12, 2)
		return 0;//0 0
	break;
	case 1219://(0,4) (12, 3)
		return 0;//0 0
	break;
	case 1220://(0,4) (12, 4)
		return 4;//0 4
	break;
	case 1221://(0,4) (12, 5)
		return 4;//0 4
	break;
	case 1222://(0,4) (12, 6)
		return 0;//0 0
	break;
	case 1223://(0,4) (12, 7)
		return 0;//0 0
	break;
	case 1224://(0,4) (12, 8)
		return 4;//0 4
	break;
	case 1225://(0,4) (12, 9)
		return 0;//0 0
	break;
	case 1226://(0,4) (12, 10)
		return 4;//0 4
	break;
	case 1227://(0,4) (12, 11)
		return 0;//0 0
	break;
	case 1228://(0,4) (12, 12)
		return 4;//0 4
	break;
	case 1229://(0,4) (12, 13)
		return 4;//0 4
	break;
	case 1230://(0,4) (12, 14)
		return 4;//0 4
	break;
	case 1231://(0,4) (12, 15)
		return 4;//0 4
	break;
	case 1232://(0,4) (13, 0)
		return 0;//0 0
	break;
	case 1233://(0,4) (13, 1)
		return 0;//0 0
	break;
	case 1234://(0,4) (13, 2)
		return 0;//0 0
	break;
	case 1235://(0,4) (13, 3)
		return 0;//0 0
	break;
	case 1236://(0,4) (13, 4)
		return 4;//0 4
	break;
	case 1237://(0,4) (13, 5)
		return 4;//0 4
	break;
	case 1238://(0,4) (13, 6)
		return 0;//0 0
	break;
	case 1239://(0,4) (13, 7)
		return 0;//0 0
	break;
	case 1240://(0,4) (13, 8)
		return 4;//0 4
	break;
	case 1241://(0,4) (13, 9)
		return 0;//0 0
	break;
	case 1242://(0,4) (13, 10)
		return 4;//0 4
	break;
	case 1243://(0,4) (13, 11)
		return 0;//0 0
	break;
	case 1244://(0,4) (13, 12)
		return 4;//0 4
	break;
	case 1245://(0,4) (13, 13)
		return 4;//0 4
	break;
	case 1246://(0,4) (13, 14)
		return 4;//0 4
	break;
	case 1247://(0,4) (13, 15)
		return 4;//0 4
	break;
	case 1248://(0,4) (14, 0)
		return 0;//0 0
	break;
	case 1249://(0,4) (14, 1)
		return 0;//0 0
	break;
	case 1250://(0,4) (14, 2)
		return 0;//0 0
	break;
	case 1251://(0,4) (14, 3)
		return 0;//0 0
	break;
	case 1252://(0,4) (14, 4)
		return 4;//0 4
	break;
	case 1253://(0,4) (14, 5)
		return 4;//0 4
	break;
	case 1254://(0,4) (14, 6)
		return 0;//0 0
	break;
	case 1255://(0,4) (14, 7)
		return 0;//0 0
	break;
	case 1256://(0,4) (14, 8)
		return 4;//0 4
	break;
	case 1257://(0,4) (14, 9)
		return 0;//0 0
	break;
	case 1258://(0,4) (14, 10)
		return 4;//0 4
	break;
	case 1259://(0,4) (14, 11)
		return 0;//0 0
	break;
	case 1260://(0,4) (14, 12)
		return 4;//0 4
	break;
	case 1261://(0,4) (14, 13)
		return 4;//0 4
	break;
	case 1262://(0,4) (14, 14)
		return 4;//0 4
	break;
	case 1263://(0,4) (14, 15)
		return 4;//0 4
	break;
	case 1264://(0,4) (15, 0)
		return 0;//0 0
	break;
	case 1265://(0,4) (15, 1)
		return 0;//0 0
	break;
	case 1266://(0,4) (15, 2)
		return 0;//0 0
	break;
	case 1267://(0,4) (15, 3)
		return 0;//0 0
	break;
	case 1268://(0,4) (15, 4)
		return 4;//0 4
	break;
	case 1269://(0,4) (15, 5)
		return 4;//0 4
	break;
	case 1270://(0,4) (15, 6)
		return 0;//0 0
	break;
	case 1271://(0,4) (15, 7)
		return 0;//0 0
	break;
	case 1272://(0,4) (15, 8)
		return 4;//0 4
	break;
	case 1273://(0,4) (15, 9)
		return 0;//0 0
	break;
	case 1274://(0,4) (15, 10)
		return 4;//0 4
	break;
	case 1275://(0,4) (15, 11)
		return 0;//0 0
	break;
	case 1276://(0,4) (15, 12)
		return 4;//0 4
	break;
	case 1277://(0,4) (15, 13)
		return 4;//0 4
	break;
	case 1278://(0,4) (15, 14)
		return 4;//0 4
	break;
	case 1279://(0,4) (15, 15)
		return 4;//0 4
	break;
	case 1280://(0,5) (0, 0)
		return 0;//0 0
	break;
	case 1281://(0,5) (0, 1)
		return 0;//0 0
	break;
	case 1282://(0,5) (0, 2)
		return 3;//0 3
	break;
	case 1283://(0,5) (0, 3)
		return 0;//0 0
	break;
	case 1284://(0,5) (0, 4)
		return 3;//0 3
	break;
	case 1285://(0,5) (0, 5)
		return 3;//0 3
	break;
	case 1286://(0,5) (0, 6)
		return 0;//0 0
	break;
	case 1287://(0,5) (0, 7)
		return 3;//0 3
	break;
	case 1288://(0,5) (0, 8)
		return 3;//0 3
	break;
	case 1289://(0,5) (0, 9)
		return 3;//0 3
	break;
	case 1290://(0,5) (0, 10)
		return 3;//0 3
	break;
	case 1291://(0,5) (0, 11)
		return 3;//0 3
	break;
	case 1292://(0,5) (0, 12)
		return 3;//0 3
	break;
	case 1293://(0,5) (0, 13)
		return 3;//0 3
	break;
	case 1294://(0,5) (0, 14)
		return 3;//0 3
	break;
	case 1295://(0,5) (0, 15)
		return 3;//0 3
	break;
	case 1296://(0,5) (1, 0)
		return 0;//0 0
	break;
	case 1297://(0,5) (1, 1)
		return 0;//0 0
	break;
	case 1298://(0,5) (1, 2)
		return 3;//0 3
	break;
	case 1299://(0,5) (1, 3)
		return 0;//0 0
	break;
	case 1300://(0,5) (1, 4)
		return 3;//0 3
	break;
	case 1301://(0,5) (1, 5)
		return 3;//0 3
	break;
	case 1302://(0,5) (1, 6)
		return 0;//0 0
	break;
	case 1303://(0,5) (1, 7)
		return 3;//0 3
	break;
	case 1304://(0,5) (1, 8)
		return 3;//0 3
	break;
	case 1305://(0,5) (1, 9)
		return 3;//0 3
	break;
	case 1306://(0,5) (1, 10)
		return 3;//0 3
	break;
	case 1307://(0,5) (1, 11)
		return 3;//0 3
	break;
	case 1308://(0,5) (1, 12)
		return 3;//0 3
	break;
	case 1309://(0,5) (1, 13)
		return 3;//0 3
	break;
	case 1310://(0,5) (1, 14)
		return 3;//0 3
	break;
	case 1311://(0,5) (1, 15)
		return 3;//0 3
	break;
	case 1312://(0,5) (2, 0)
		return 0;//0 0
	break;
	case 1313://(0,5) (2, 1)
		return 0;//0 0
	break;
	case 1314://(0,5) (2, 2)
		return 3;//0 3
	break;
	case 1315://(0,5) (2, 3)
		return 0;//0 0
	break;
	case 1316://(0,5) (2, 4)
		return 3;//0 3
	break;
	case 1317://(0,5) (2, 5)
		return 3;//0 3
	break;
	case 1318://(0,5) (2, 6)
		return 0;//0 0
	break;
	case 1319://(0,5) (2, 7)
		return 3;//0 3
	break;
	case 1320://(0,5) (2, 8)
		return 3;//0 3
	break;
	case 1321://(0,5) (2, 9)
		return 3;//0 3
	break;
	case 1322://(0,5) (2, 10)
		return 3;//0 3
	break;
	case 1323://(0,5) (2, 11)
		return 3;//0 3
	break;
	case 1324://(0,5) (2, 12)
		return 3;//0 3
	break;
	case 1325://(0,5) (2, 13)
		return 3;//0 3
	break;
	case 1326://(0,5) (2, 14)
		return 3;//0 3
	break;
	case 1327://(0,5) (2, 15)
		return 3;//0 3
	break;
	case 1328://(0,5) (3, 0)
		return 0;//0 0
	break;
	case 1329://(0,5) (3, 1)
		return 0;//0 0
	break;
	case 1330://(0,5) (3, 2)
		return 3;//0 3
	break;
	case 1331://(0,5) (3, 3)
		return 0;//0 0
	break;
	case 1332://(0,5) (3, 4)
		return 3;//0 3
	break;
	case 1333://(0,5) (3, 5)
		return 3;//0 3
	break;
	case 1334://(0,5) (3, 6)
		return 0;//0 0
	break;
	case 1335://(0,5) (3, 7)
		return 3;//0 3
	break;
	case 1336://(0,5) (3, 8)
		return 3;//0 3
	break;
	case 1337://(0,5) (3, 9)
		return 3;//0 3
	break;
	case 1338://(0,5) (3, 10)
		return 3;//0 3
	break;
	case 1339://(0,5) (3, 11)
		return 3;//0 3
	break;
	case 1340://(0,5) (3, 12)
		return 3;//0 3
	break;
	case 1341://(0,5) (3, 13)
		return 3;//0 3
	break;
	case 1342://(0,5) (3, 14)
		return 3;//0 3
	break;
	case 1343://(0,5) (3, 15)
		return 3;//0 3
	break;
	case 1344://(0,5) (4, 0)
		return 0;//0 0
	break;
	case 1345://(0,5) (4, 1)
		return 0;//0 0
	break;
	case 1346://(0,5) (4, 2)
		return 3;//0 3
	break;
	case 1347://(0,5) (4, 3)
		return 0;//0 0
	break;
	case 1348://(0,5) (4, 4)
		return 3;//0 3
	break;
	case 1349://(0,5) (4, 5)
		return 3;//0 3
	break;
	case 1350://(0,5) (4, 6)
		return 0;//0 0
	break;
	case 1351://(0,5) (4, 7)
		return 3;//0 3
	break;
	case 1352://(0,5) (4, 8)
		return 3;//0 3
	break;
	case 1353://(0,5) (4, 9)
		return 3;//0 3
	break;
	case 1354://(0,5) (4, 10)
		return 3;//0 3
	break;
	case 1355://(0,5) (4, 11)
		return 3;//0 3
	break;
	case 1356://(0,5) (4, 12)
		return 3;//0 3
	break;
	case 1357://(0,5) (4, 13)
		return 3;//0 3
	break;
	case 1358://(0,5) (4, 14)
		return 3;//0 3
	break;
	case 1359://(0,5) (4, 15)
		return 3;//0 3
	break;
	case 1360://(0,5) (5, 0)
		return 0;//0 0
	break;
	case 1361://(0,5) (5, 1)
		return 0;//0 0
	break;
	case 1362://(0,5) (5, 2)
		return 3;//0 3
	break;
	case 1363://(0,5) (5, 3)
		return 0;//0 0
	break;
	case 1364://(0,5) (5, 4)
		return 3;//0 3
	break;
	case 1365://(0,5) (5, 5)
		return 3;//0 3
	break;
	case 1366://(0,5) (5, 6)
		return 0;//0 0
	break;
	case 1367://(0,5) (5, 7)
		return 3;//0 3
	break;
	case 1368://(0,5) (5, 8)
		return 3;//0 3
	break;
	case 1369://(0,5) (5, 9)
		return 3;//0 3
	break;
	case 1370://(0,5) (5, 10)
		return 3;//0 3
	break;
	case 1371://(0,5) (5, 11)
		return 3;//0 3
	break;
	case 1372://(0,5) (5, 12)
		return 3;//0 3
	break;
	case 1373://(0,5) (5, 13)
		return 3;//0 3
	break;
	case 1374://(0,5) (5, 14)
		return 3;//0 3
	break;
	case 1375://(0,5) (5, 15)
		return 3;//0 3
	break;
	case 1376://(0,5) (6, 0)
		return 0;//0 0
	break;
	case 1377://(0,5) (6, 1)
		return 0;//0 0
	break;
	case 1378://(0,5) (6, 2)
		return 3;//0 3
	break;
	case 1379://(0,5) (6, 3)
		return 0;//0 0
	break;
	case 1380://(0,5) (6, 4)
		return 3;//0 3
	break;
	case 1381://(0,5) (6, 5)
		return 3;//0 3
	break;
	case 1382://(0,5) (6, 6)
		return 0;//0 0
	break;
	case 1383://(0,5) (6, 7)
		return 3;//0 3
	break;
	case 1384://(0,5) (6, 8)
		return 3;//0 3
	break;
	case 1385://(0,5) (6, 9)
		return 3;//0 3
	break;
	case 1386://(0,5) (6, 10)
		return 3;//0 3
	break;
	case 1387://(0,5) (6, 11)
		return 3;//0 3
	break;
	case 1388://(0,5) (6, 12)
		return 3;//0 3
	break;
	case 1389://(0,5) (6, 13)
		return 3;//0 3
	break;
	case 1390://(0,5) (6, 14)
		return 3;//0 3
	break;
	case 1391://(0,5) (6, 15)
		return 3;//0 3
	break;
	case 1392://(0,5) (7, 0)
		return 0;//0 0
	break;
	case 1393://(0,5) (7, 1)
		return 0;//0 0
	break;
	case 1394://(0,5) (7, 2)
		return 3;//0 3
	break;
	case 1395://(0,5) (7, 3)
		return 0;//0 0
	break;
	case 1396://(0,5) (7, 4)
		return 3;//0 3
	break;
	case 1397://(0,5) (7, 5)
		return 3;//0 3
	break;
	case 1398://(0,5) (7, 6)
		return 0;//0 0
	break;
	case 1399://(0,5) (7, 7)
		return 3;//0 3
	break;
	case 1400://(0,5) (7, 8)
		return 3;//0 3
	break;
	case 1401://(0,5) (7, 9)
		return 3;//0 3
	break;
	case 1402://(0,5) (7, 10)
		return 3;//0 3
	break;
	case 1403://(0,5) (7, 11)
		return 3;//0 3
	break;
	case 1404://(0,5) (7, 12)
		return 3;//0 3
	break;
	case 1405://(0,5) (7, 13)
		return 3;//0 3
	break;
	case 1406://(0,5) (7, 14)
		return 3;//0 3
	break;
	case 1407://(0,5) (7, 15)
		return 3;//0 3
	break;
	case 1408://(0,5) (8, 0)
		return 0;//0 0
	break;
	case 1409://(0,5) (8, 1)
		return 0;//0 0
	break;
	case 1410://(0,5) (8, 2)
		return 3;//0 3
	break;
	case 1411://(0,5) (8, 3)
		return 0;//0 0
	break;
	case 1412://(0,5) (8, 4)
		return 3;//0 3
	break;
	case 1413://(0,5) (8, 5)
		return 3;//0 3
	break;
	case 1414://(0,5) (8, 6)
		return 0;//0 0
	break;
	case 1415://(0,5) (8, 7)
		return 3;//0 3
	break;
	case 1416://(0,5) (8, 8)
		return 3;//0 3
	break;
	case 1417://(0,5) (8, 9)
		return 3;//0 3
	break;
	case 1418://(0,5) (8, 10)
		return 3;//0 3
	break;
	case 1419://(0,5) (8, 11)
		return 3;//0 3
	break;
	case 1420://(0,5) (8, 12)
		return 3;//0 3
	break;
	case 1421://(0,5) (8, 13)
		return 3;//0 3
	break;
	case 1422://(0,5) (8, 14)
		return 3;//0 3
	break;
	case 1423://(0,5) (8, 15)
		return 3;//0 3
	break;
	case 1424://(0,5) (9, 0)
		return 0;//0 0
	break;
	case 1425://(0,5) (9, 1)
		return 0;//0 0
	break;
	case 1426://(0,5) (9, 2)
		return 3;//0 3
	break;
	case 1427://(0,5) (9, 3)
		return 0;//0 0
	break;
	case 1428://(0,5) (9, 4)
		return 3;//0 3
	break;
	case 1429://(0,5) (9, 5)
		return 3;//0 3
	break;
	case 1430://(0,5) (9, 6)
		return 0;//0 0
	break;
	case 1431://(0,5) (9, 7)
		return 3;//0 3
	break;
	case 1432://(0,5) (9, 8)
		return 3;//0 3
	break;
	case 1433://(0,5) (9, 9)
		return 3;//0 3
	break;
	case 1434://(0,5) (9, 10)
		return 3;//0 3
	break;
	case 1435://(0,5) (9, 11)
		return 3;//0 3
	break;
	case 1436://(0,5) (9, 12)
		return 3;//0 3
	break;
	case 1437://(0,5) (9, 13)
		return 3;//0 3
	break;
	case 1438://(0,5) (9, 14)
		return 3;//0 3
	break;
	case 1439://(0,5) (9, 15)
		return 3;//0 3
	break;
	case 1440://(0,5) (10, 0)
		return 0;//0 0
	break;
	case 1441://(0,5) (10, 1)
		return 0;//0 0
	break;
	case 1442://(0,5) (10, 2)
		return 3;//0 3
	break;
	case 1443://(0,5) (10, 3)
		return 0;//0 0
	break;
	case 1444://(0,5) (10, 4)
		return 3;//0 3
	break;
	case 1445://(0,5) (10, 5)
		return 3;//0 3
	break;
	case 1446://(0,5) (10, 6)
		return 0;//0 0
	break;
	case 1447://(0,5) (10, 7)
		return 3;//0 3
	break;
	case 1448://(0,5) (10, 8)
		return 3;//0 3
	break;
	case 1449://(0,5) (10, 9)
		return 3;//0 3
	break;
	case 1450://(0,5) (10, 10)
		return 3;//0 3
	break;
	case 1451://(0,5) (10, 11)
		return 3;//0 3
	break;
	case 1452://(0,5) (10, 12)
		return 3;//0 3
	break;
	case 1453://(0,5) (10, 13)
		return 3;//0 3
	break;
	case 1454://(0,5) (10, 14)
		return 3;//0 3
	break;
	case 1455://(0,5) (10, 15)
		return 3;//0 3
	break;
	case 1456://(0,5) (11, 0)
		return 0;//0 0
	break;
	case 1457://(0,5) (11, 1)
		return 0;//0 0
	break;
	case 1458://(0,5) (11, 2)
		return 3;//0 3
	break;
	case 1459://(0,5) (11, 3)
		return 0;//0 0
	break;
	case 1460://(0,5) (11, 4)
		return 3;//0 3
	break;
	case 1461://(0,5) (11, 5)
		return 3;//0 3
	break;
	case 1462://(0,5) (11, 6)
		return 0;//0 0
	break;
	case 1463://(0,5) (11, 7)
		return 3;//0 3
	break;
	case 1464://(0,5) (11, 8)
		return 3;//0 3
	break;
	case 1465://(0,5) (11, 9)
		return 3;//0 3
	break;
	case 1466://(0,5) (11, 10)
		return 3;//0 3
	break;
	case 1467://(0,5) (11, 11)
		return 3;//0 3
	break;
	case 1468://(0,5) (11, 12)
		return 3;//0 3
	break;
	case 1469://(0,5) (11, 13)
		return 3;//0 3
	break;
	case 1470://(0,5) (11, 14)
		return 3;//0 3
	break;
	case 1471://(0,5) (11, 15)
		return 3;//0 3
	break;
	case 1472://(0,5) (12, 0)
		return 0;//0 0
	break;
	case 1473://(0,5) (12, 1)
		return 0;//0 0
	break;
	case 1474://(0,5) (12, 2)
		return 3;//0 3
	break;
	case 1475://(0,5) (12, 3)
		return 0;//0 0
	break;
	case 1476://(0,5) (12, 4)
		return 3;//0 3
	break;
	case 1477://(0,5) (12, 5)
		return 3;//0 3
	break;
	case 1478://(0,5) (12, 6)
		return 0;//0 0
	break;
	case 1479://(0,5) (12, 7)
		return 3;//0 3
	break;
	case 1480://(0,5) (12, 8)
		return 3;//0 3
	break;
	case 1481://(0,5) (12, 9)
		return 3;//0 3
	break;
	case 1482://(0,5) (12, 10)
		return 3;//0 3
	break;
	case 1483://(0,5) (12, 11)
		return 3;//0 3
	break;
	case 1484://(0,5) (12, 12)
		return 3;//0 3
	break;
	case 1485://(0,5) (12, 13)
		return 3;//0 3
	break;
	case 1486://(0,5) (12, 14)
		return 3;//0 3
	break;
	case 1487://(0,5) (12, 15)
		return 3;//0 3
	break;
	case 1488://(0,5) (13, 0)
		return 0;//0 0
	break;
	case 1489://(0,5) (13, 1)
		return 0;//0 0
	break;
	case 1490://(0,5) (13, 2)
		return 3;//0 3
	break;
	case 1491://(0,5) (13, 3)
		return 0;//0 0
	break;
	case 1492://(0,5) (13, 4)
		return 3;//0 3
	break;
	case 1493://(0,5) (13, 5)
		return 3;//0 3
	break;
	case 1494://(0,5) (13, 6)
		return 0;//0 0
	break;
	case 1495://(0,5) (13, 7)
		return 3;//0 3
	break;
	case 1496://(0,5) (13, 8)
		return 3;//0 3
	break;
	case 1497://(0,5) (13, 9)
		return 3;//0 3
	break;
	case 1498://(0,5) (13, 10)
		return 3;//0 3
	break;
	case 1499://(0,5) (13, 11)
		return 3;//0 3
	break;
	case 1500://(0,5) (13, 12)
		return 3;//0 3
	break;
	case 1501://(0,5) (13, 13)
		return 3;//0 3
	break;
	case 1502://(0,5) (13, 14)
		return 3;//0 3
	break;
	case 1503://(0,5) (13, 15)
		return 3;//0 3
	break;
	case 1504://(0,5) (14, 0)
		return 0;//0 0
	break;
	case 1505://(0,5) (14, 1)
		return 0;//0 0
	break;
	case 1506://(0,5) (14, 2)
		return 3;//0 3
	break;
	case 1507://(0,5) (14, 3)
		return 0;//0 0
	break;
	case 1508://(0,5) (14, 4)
		return 3;//0 3
	break;
	case 1509://(0,5) (14, 5)
		return 3;//0 3
	break;
	case 1510://(0,5) (14, 6)
		return 0;//0 0
	break;
	case 1511://(0,5) (14, 7)
		return 3;//0 3
	break;
	case 1512://(0,5) (14, 8)
		return 3;//0 3
	break;
	case 1513://(0,5) (14, 9)
		return 3;//0 3
	break;
	case 1514://(0,5) (14, 10)
		return 3;//0 3
	break;
	case 1515://(0,5) (14, 11)
		return 3;//0 3
	break;
	case 1516://(0,5) (14, 12)
		return 3;//0 3
	break;
	case 1517://(0,5) (14, 13)
		return 3;//0 3
	break;
	case 1518://(0,5) (14, 14)
		return 3;//0 3
	break;
	case 1519://(0,5) (14, 15)
		return 3;//0 3
	break;
	case 1520://(0,5) (15, 0)
		return 0;//0 0
	break;
	case 1521://(0,5) (15, 1)
		return 0;//0 0
	break;
	case 1522://(0,5) (15, 2)
		return 3;//0 3
	break;
	case 1523://(0,5) (15, 3)
		return 0;//0 0
	break;
	case 1524://(0,5) (15, 4)
		return 3;//0 3
	break;
	case 1525://(0,5) (15, 5)
		return 3;//0 3
	break;
	case 1526://(0,5) (15, 6)
		return 0;//0 0
	break;
	case 1527://(0,5) (15, 7)
		return 3;//0 3
	break;
	case 1528://(0,5) (15, 8)
		return 3;//0 3
	break;
	case 1529://(0,5) (15, 9)
		return 3;//0 3
	break;
	case 1530://(0,5) (15, 10)
		return 3;//0 3
	break;
	case 1531://(0,5) (15, 11)
		return 3;//0 3
	break;
	case 1532://(0,5) (15, 12)
		return 3;//0 3
	break;
	case 1533://(0,5) (15, 13)
		return 3;//0 3
	break;
	case 1534://(0,5) (15, 14)
		return 3;//0 3
	break;
	case 1535://(0,5) (15, 15)
		return 3;//0 3
	break;
	case 1536://(0,6) (0, 0)
		return 0;//0 0
	break;
	case 1537://(0,6) (0, 1)
		return 3;//0 3
	break;
	case 1538://(0,6) (0, 2)
		return 0;//0 0
	break;
	case 1539://(0,6) (0, 3)
		return 3;//0 3
	break;
	case 1540://(0,6) (0, 4)
		return 0;//0 0
	break;
	case 1541://(0,6) (0, 5)
		return 0;//0 0
	break;
	case 1542://(0,6) (0, 6)
		return 3;//0 3
	break;
	case 1543://(0,6) (0, 7)
		return 3;//0 3
	break;
	case 1544://(0,6) (0, 8)
		return 3;//0 3
	break;
	case 1545://(0,6) (0, 9)
		return 3;//0 3
	break;
	case 1546://(0,6) (0, 10)
		return 3;//0 3
	break;
	case 1547://(0,6) (0, 11)
		return 3;//0 3
	break;
	case 1548://(0,6) (0, 12)
		return 3;//0 3
	break;
	case 1549://(0,6) (0, 13)
		return 3;//0 3
	break;
	case 1550://(0,6) (0, 14)
		return 3;//0 3
	break;
	case 1551://(0,6) (0, 15)
		return 3;//0 3
	break;
	case 1552://(0,6) (1, 0)
		return 0;//0 0
	break;
	case 1553://(0,6) (1, 1)
		return 3;//0 3
	break;
	case 1554://(0,6) (1, 2)
		return 0;//0 0
	break;
	case 1555://(0,6) (1, 3)
		return 3;//0 3
	break;
	case 1556://(0,6) (1, 4)
		return 0;//0 0
	break;
	case 1557://(0,6) (1, 5)
		return 0;//0 0
	break;
	case 1558://(0,6) (1, 6)
		return 3;//0 3
	break;
	case 1559://(0,6) (1, 7)
		return 3;//0 3
	break;
	case 1560://(0,6) (1, 8)
		return 3;//0 3
	break;
	case 1561://(0,6) (1, 9)
		return 3;//0 3
	break;
	case 1562://(0,6) (1, 10)
		return 3;//0 3
	break;
	case 1563://(0,6) (1, 11)
		return 3;//0 3
	break;
	case 1564://(0,6) (1, 12)
		return 3;//0 3
	break;
	case 1565://(0,6) (1, 13)
		return 3;//0 3
	break;
	case 1566://(0,6) (1, 14)
		return 3;//0 3
	break;
	case 1567://(0,6) (1, 15)
		return 3;//0 3
	break;
	case 1568://(0,6) (2, 0)
		return 0;//0 0
	break;
	case 1569://(0,6) (2, 1)
		return 3;//0 3
	break;
	case 1570://(0,6) (2, 2)
		return 0;//0 0
	break;
	case 1571://(0,6) (2, 3)
		return 3;//0 3
	break;
	case 1572://(0,6) (2, 4)
		return 0;//0 0
	break;
	case 1573://(0,6) (2, 5)
		return 0;//0 0
	break;
	case 1574://(0,6) (2, 6)
		return 3;//0 3
	break;
	case 1575://(0,6) (2, 7)
		return 3;//0 3
	break;
	case 1576://(0,6) (2, 8)
		return 3;//0 3
	break;
	case 1577://(0,6) (2, 9)
		return 3;//0 3
	break;
	case 1578://(0,6) (2, 10)
		return 3;//0 3
	break;
	case 1579://(0,6) (2, 11)
		return 3;//0 3
	break;
	case 1580://(0,6) (2, 12)
		return 3;//0 3
	break;
	case 1581://(0,6) (2, 13)
		return 3;//0 3
	break;
	case 1582://(0,6) (2, 14)
		return 3;//0 3
	break;
	case 1583://(0,6) (2, 15)
		return 3;//0 3
	break;
	case 1584://(0,6) (3, 0)
		return 0;//0 0
	break;
	case 1585://(0,6) (3, 1)
		return 3;//0 3
	break;
	case 1586://(0,6) (3, 2)
		return 0;//0 0
	break;
	case 1587://(0,6) (3, 3)
		return 3;//0 3
	break;
	case 1588://(0,6) (3, 4)
		return 0;//0 0
	break;
	case 1589://(0,6) (3, 5)
		return 0;//0 0
	break;
	case 1590://(0,6) (3, 6)
		return 3;//0 3
	break;
	case 1591://(0,6) (3, 7)
		return 3;//0 3
	break;
	case 1592://(0,6) (3, 8)
		return 3;//0 3
	break;
	case 1593://(0,6) (3, 9)
		return 3;//0 3
	break;
	case 1594://(0,6) (3, 10)
		return 3;//0 3
	break;
	case 1595://(0,6) (3, 11)
		return 3;//0 3
	break;
	case 1596://(0,6) (3, 12)
		return 3;//0 3
	break;
	case 1597://(0,6) (3, 13)
		return 3;//0 3
	break;
	case 1598://(0,6) (3, 14)
		return 3;//0 3
	break;
	case 1599://(0,6) (3, 15)
		return 3;//0 3
	break;
	case 1600://(0,6) (4, 0)
		return 0;//0 0
	break;
	case 1601://(0,6) (4, 1)
		return 3;//0 3
	break;
	case 1602://(0,6) (4, 2)
		return 0;//0 0
	break;
	case 1603://(0,6) (4, 3)
		return 3;//0 3
	break;
	case 1604://(0,6) (4, 4)
		return 0;//0 0
	break;
	case 1605://(0,6) (4, 5)
		return 0;//0 0
	break;
	case 1606://(0,6) (4, 6)
		return 3;//0 3
	break;
	case 1607://(0,6) (4, 7)
		return 3;//0 3
	break;
	case 1608://(0,6) (4, 8)
		return 3;//0 3
	break;
	case 1609://(0,6) (4, 9)
		return 3;//0 3
	break;
	case 1610://(0,6) (4, 10)
		return 3;//0 3
	break;
	case 1611://(0,6) (4, 11)
		return 3;//0 3
	break;
	case 1612://(0,6) (4, 12)
		return 3;//0 3
	break;
	case 1613://(0,6) (4, 13)
		return 3;//0 3
	break;
	case 1614://(0,6) (4, 14)
		return 3;//0 3
	break;
	case 1615://(0,6) (4, 15)
		return 3;//0 3
	break;
	case 1616://(0,6) (5, 0)
		return 0;//0 0
	break;
	case 1617://(0,6) (5, 1)
		return 3;//0 3
	break;
	case 1618://(0,6) (5, 2)
		return 0;//0 0
	break;
	case 1619://(0,6) (5, 3)
		return 3;//0 3
	break;
	case 1620://(0,6) (5, 4)
		return 0;//0 0
	break;
	case 1621://(0,6) (5, 5)
		return 0;//0 0
	break;
	case 1622://(0,6) (5, 6)
		return 3;//0 3
	break;
	case 1623://(0,6) (5, 7)
		return 3;//0 3
	break;
	case 1624://(0,6) (5, 8)
		return 3;//0 3
	break;
	case 1625://(0,6) (5, 9)
		return 3;//0 3
	break;
	case 1626://(0,6) (5, 10)
		return 3;//0 3
	break;
	case 1627://(0,6) (5, 11)
		return 3;//0 3
	break;
	case 1628://(0,6) (5, 12)
		return 3;//0 3
	break;
	case 1629://(0,6) (5, 13)
		return 3;//0 3
	break;
	case 1630://(0,6) (5, 14)
		return 3;//0 3
	break;
	case 1631://(0,6) (5, 15)
		return 3;//0 3
	break;
	case 1632://(0,6) (6, 0)
		return 0;//0 0
	break;
	case 1633://(0,6) (6, 1)
		return 3;//0 3
	break;
	case 1634://(0,6) (6, 2)
		return 0;//0 0
	break;
	case 1635://(0,6) (6, 3)
		return 3;//0 3
	break;
	case 1636://(0,6) (6, 4)
		return 0;//0 0
	break;
	case 1637://(0,6) (6, 5)
		return 0;//0 0
	break;
	case 1638://(0,6) (6, 6)
		return 3;//0 3
	break;
	case 1639://(0,6) (6, 7)
		return 3;//0 3
	break;
	case 1640://(0,6) (6, 8)
		return 3;//0 3
	break;
	case 1641://(0,6) (6, 9)
		return 3;//0 3
	break;
	case 1642://(0,6) (6, 10)
		return 3;//0 3
	break;
	case 1643://(0,6) (6, 11)
		return 3;//0 3
	break;
	case 1644://(0,6) (6, 12)
		return 3;//0 3
	break;
	case 1645://(0,6) (6, 13)
		return 3;//0 3
	break;
	case 1646://(0,6) (6, 14)
		return 3;//0 3
	break;
	case 1647://(0,6) (6, 15)
		return 3;//0 3
	break;
	case 1648://(0,6) (7, 0)
		return 0;//0 0
	break;
	case 1649://(0,6) (7, 1)
		return 3;//0 3
	break;
	case 1650://(0,6) (7, 2)
		return 0;//0 0
	break;
	case 1651://(0,6) (7, 3)
		return 3;//0 3
	break;
	case 1652://(0,6) (7, 4)
		return 0;//0 0
	break;
	case 1653://(0,6) (7, 5)
		return 0;//0 0
	break;
	case 1654://(0,6) (7, 6)
		return 3;//0 3
	break;
	case 1655://(0,6) (7, 7)
		return 3;//0 3
	break;
	case 1656://(0,6) (7, 8)
		return 3;//0 3
	break;
	case 1657://(0,6) (7, 9)
		return 3;//0 3
	break;
	case 1658://(0,6) (7, 10)
		return 3;//0 3
	break;
	case 1659://(0,6) (7, 11)
		return 3;//0 3
	break;
	case 1660://(0,6) (7, 12)
		return 3;//0 3
	break;
	case 1661://(0,6) (7, 13)
		return 3;//0 3
	break;
	case 1662://(0,6) (7, 14)
		return 3;//0 3
	break;
	case 1663://(0,6) (7, 15)
		return 3;//0 3
	break;
	case 1664://(0,6) (8, 0)
		return 0;//0 0
	break;
	case 1665://(0,6) (8, 1)
		return 3;//0 3
	break;
	case 1666://(0,6) (8, 2)
		return 0;//0 0
	break;
	case 1667://(0,6) (8, 3)
		return 3;//0 3
	break;
	case 1668://(0,6) (8, 4)
		return 0;//0 0
	break;
	case 1669://(0,6) (8, 5)
		return 0;//0 0
	break;
	case 1670://(0,6) (8, 6)
		return 3;//0 3
	break;
	case 1671://(0,6) (8, 7)
		return 3;//0 3
	break;
	case 1672://(0,6) (8, 8)
		return 3;//0 3
	break;
	case 1673://(0,6) (8, 9)
		return 3;//0 3
	break;
	case 1674://(0,6) (8, 10)
		return 3;//0 3
	break;
	case 1675://(0,6) (8, 11)
		return 3;//0 3
	break;
	case 1676://(0,6) (8, 12)
		return 3;//0 3
	break;
	case 1677://(0,6) (8, 13)
		return 3;//0 3
	break;
	case 1678://(0,6) (8, 14)
		return 3;//0 3
	break;
	case 1679://(0,6) (8, 15)
		return 3;//0 3
	break;
	case 1680://(0,6) (9, 0)
		return 0;//0 0
	break;
	case 1681://(0,6) (9, 1)
		return 3;//0 3
	break;
	case 1682://(0,6) (9, 2)
		return 0;//0 0
	break;
	case 1683://(0,6) (9, 3)
		return 3;//0 3
	break;
	case 1684://(0,6) (9, 4)
		return 0;//0 0
	break;
	case 1685://(0,6) (9, 5)
		return 0;//0 0
	break;
	case 1686://(0,6) (9, 6)
		return 3;//0 3
	break;
	case 1687://(0,6) (9, 7)
		return 3;//0 3
	break;
	case 1688://(0,6) (9, 8)
		return 3;//0 3
	break;
	case 1689://(0,6) (9, 9)
		return 3;//0 3
	break;
	case 1690://(0,6) (9, 10)
		return 3;//0 3
	break;
	case 1691://(0,6) (9, 11)
		return 3;//0 3
	break;
	case 1692://(0,6) (9, 12)
		return 3;//0 3
	break;
	case 1693://(0,6) (9, 13)
		return 3;//0 3
	break;
	case 1694://(0,6) (9, 14)
		return 3;//0 3
	break;
	case 1695://(0,6) (9, 15)
		return 3;//0 3
	break;
	case 1696://(0,6) (10, 0)
		return 0;//0 0
	break;
	case 1697://(0,6) (10, 1)
		return 3;//0 3
	break;
	case 1698://(0,6) (10, 2)
		return 0;//0 0
	break;
	case 1699://(0,6) (10, 3)
		return 3;//0 3
	break;
	case 1700://(0,6) (10, 4)
		return 0;//0 0
	break;
	case 1701://(0,6) (10, 5)
		return 0;//0 0
	break;
	case 1702://(0,6) (10, 6)
		return 3;//0 3
	break;
	case 1703://(0,6) (10, 7)
		return 3;//0 3
	break;
	case 1704://(0,6) (10, 8)
		return 3;//0 3
	break;
	case 1705://(0,6) (10, 9)
		return 3;//0 3
	break;
	case 1706://(0,6) (10, 10)
		return 3;//0 3
	break;
	case 1707://(0,6) (10, 11)
		return 3;//0 3
	break;
	case 1708://(0,6) (10, 12)
		return 3;//0 3
	break;
	case 1709://(0,6) (10, 13)
		return 3;//0 3
	break;
	case 1710://(0,6) (10, 14)
		return 3;//0 3
	break;
	case 1711://(0,6) (10, 15)
		return 3;//0 3
	break;
	case 1712://(0,6) (11, 0)
		return 0;//0 0
	break;
	case 1713://(0,6) (11, 1)
		return 3;//0 3
	break;
	case 1714://(0,6) (11, 2)
		return 0;//0 0
	break;
	case 1715://(0,6) (11, 3)
		return 3;//0 3
	break;
	case 1716://(0,6) (11, 4)
		return 0;//0 0
	break;
	case 1717://(0,6) (11, 5)
		return 0;//0 0
	break;
	case 1718://(0,6) (11, 6)
		return 3;//0 3
	break;
	case 1719://(0,6) (11, 7)
		return 3;//0 3
	break;
	case 1720://(0,6) (11, 8)
		return 3;//0 3
	break;
	case 1721://(0,6) (11, 9)
		return 3;//0 3
	break;
	case 1722://(0,6) (11, 10)
		return 3;//0 3
	break;
	case 1723://(0,6) (11, 11)
		return 3;//0 3
	break;
	case 1724://(0,6) (11, 12)
		return 3;//0 3
	break;
	case 1725://(0,6) (11, 13)
		return 3;//0 3
	break;
	case 1726://(0,6) (11, 14)
		return 3;//0 3
	break;
	case 1727://(0,6) (11, 15)
		return 3;//0 3
	break;
	case 1728://(0,6) (12, 0)
		return 0;//0 0
	break;
	case 1729://(0,6) (12, 1)
		return 3;//0 3
	break;
	case 1730://(0,6) (12, 2)
		return 0;//0 0
	break;
	case 1731://(0,6) (12, 3)
		return 3;//0 3
	break;
	case 1732://(0,6) (12, 4)
		return 0;//0 0
	break;
	case 1733://(0,6) (12, 5)
		return 0;//0 0
	break;
	case 1734://(0,6) (12, 6)
		return 3;//0 3
	break;
	case 1735://(0,6) (12, 7)
		return 3;//0 3
	break;
	case 1736://(0,6) (12, 8)
		return 3;//0 3
	break;
	case 1737://(0,6) (12, 9)
		return 3;//0 3
	break;
	case 1738://(0,6) (12, 10)
		return 3;//0 3
	break;
	case 1739://(0,6) (12, 11)
		return 3;//0 3
	break;
	case 1740://(0,6) (12, 12)
		return 3;//0 3
	break;
	case 1741://(0,6) (12, 13)
		return 3;//0 3
	break;
	case 1742://(0,6) (12, 14)
		return 3;//0 3
	break;
	case 1743://(0,6) (12, 15)
		return 3;//0 3
	break;
	case 1744://(0,6) (13, 0)
		return 0;//0 0
	break;
	case 1745://(0,6) (13, 1)
		return 3;//0 3
	break;
	case 1746://(0,6) (13, 2)
		return 0;//0 0
	break;
	case 1747://(0,6) (13, 3)
		return 3;//0 3
	break;
	case 1748://(0,6) (13, 4)
		return 0;//0 0
	break;
	case 1749://(0,6) (13, 5)
		return 0;//0 0
	break;
	case 1750://(0,6) (13, 6)
		return 3;//0 3
	break;
	case 1751://(0,6) (13, 7)
		return 3;//0 3
	break;
	case 1752://(0,6) (13, 8)
		return 3;//0 3
	break;
	case 1753://(0,6) (13, 9)
		return 3;//0 3
	break;
	case 1754://(0,6) (13, 10)
		return 3;//0 3
	break;
	case 1755://(0,6) (13, 11)
		return 3;//0 3
	break;
	case 1756://(0,6) (13, 12)
		return 3;//0 3
	break;
	case 1757://(0,6) (13, 13)
		return 3;//0 3
	break;
	case 1758://(0,6) (13, 14)
		return 3;//0 3
	break;
	case 1759://(0,6) (13, 15)
		return 3;//0 3
	break;
	case 1760://(0,6) (14, 0)
		return 0;//0 0
	break;
	case 1761://(0,6) (14, 1)
		return 3;//0 3
	break;
	case 1762://(0,6) (14, 2)
		return 0;//0 0
	break;
	case 1763://(0,6) (14, 3)
		return 3;//0 3
	break;
	case 1764://(0,6) (14, 4)
		return 0;//0 0
	break;
	case 1765://(0,6) (14, 5)
		return 0;//0 0
	break;
	case 1766://(0,6) (14, 6)
		return 3;//0 3
	break;
	case 1767://(0,6) (14, 7)
		return 3;//0 3
	break;
	case 1768://(0,6) (14, 8)
		return 3;//0 3
	break;
	case 1769://(0,6) (14, 9)
		return 3;//0 3
	break;
	case 1770://(0,6) (14, 10)
		return 3;//0 3
	break;
	case 1771://(0,6) (14, 11)
		return 3;//0 3
	break;
	case 1772://(0,6) (14, 12)
		return 3;//0 3
	break;
	case 1773://(0,6) (14, 13)
		return 3;//0 3
	break;
	case 1774://(0,6) (14, 14)
		return 3;//0 3
	break;
	case 1775://(0,6) (14, 15)
		return 3;//0 3
	break;
	case 1776://(0,6) (15, 0)
		return 0;//0 0
	break;
	case 1777://(0,6) (15, 1)
		return 3;//0 3
	break;
	case 1778://(0,6) (15, 2)
		return 0;//0 0
	break;
	case 1779://(0,6) (15, 3)
		return 3;//0 3
	break;
	case 1780://(0,6) (15, 4)
		return 0;//0 0
	break;
	case 1781://(0,6) (15, 5)
		return 0;//0 0
	break;
	case 1782://(0,6) (15, 6)
		return 3;//0 3
	break;
	case 1783://(0,6) (15, 7)
		return 3;//0 3
	break;
	case 1784://(0,6) (15, 8)
		return 3;//0 3
	break;
	case 1785://(0,6) (15, 9)
		return 3;//0 3
	break;
	case 1786://(0,6) (15, 10)
		return 3;//0 3
	break;
	case 1787://(0,6) (15, 11)
		return 3;//0 3
	break;
	case 1788://(0,6) (15, 12)
		return 3;//0 3
	break;
	case 1789://(0,6) (15, 13)
		return 3;//0 3
	break;
	case 1790://(0,6) (15, 14)
		return 3;//0 3
	break;
	case 1791://(0,6) (15, 15)
		return 3;//0 3
	break;
	case 1792://(0,7) (0, 0)
		return 0;//0 0
	break;
	case 1793://(0,7) (0, 1)
		return 0;//0 0
	break;
	case 1794://(0,7) (0, 2)
		return 3;//0 3
	break;
	case 1795://(0,7) (0, 3)
		return 3;//0 3
	break;
	case 1796://(0,7) (0, 4)
		return 0;//0 0
	break;
	case 1797://(0,7) (0, 5)
		return 3;//0 3
	break;
	case 1798://(0,7) (0, 6)
		return 3;//0 3
	break;
	case 1799://(0,7) (0, 7)
		return 3;//0 3
	break;
	case 1800://(0,7) (0, 8)
		return 0;//0 0
	break;
	case 1801://(0,7) (0, 9)
		return 3;//0 3
	break;
	case 1802://(0,7) (0, 10)
		return 3;//0 3
	break;
	case 1803://(0,7) (0, 11)
		return 3;//0 3
	break;
	case 1804://(0,7) (0, 12)
		return 3;//0 3
	break;
	case 1805://(0,7) (0, 13)
		return 3;//0 3
	break;
	case 1806://(0,7) (0, 14)
		return 3;//0 3
	break;
	case 1807://(0,7) (0, 15)
		return 3;//0 3
	break;
	case 1808://(0,7) (1, 0)
		return 0;//0 0
	break;
	case 1809://(0,7) (1, 1)
		return 0;//0 0
	break;
	case 1810://(0,7) (1, 2)
		return 3;//0 3
	break;
	case 1811://(0,7) (1, 3)
		return 3;//0 3
	break;
	case 1812://(0,7) (1, 4)
		return 0;//0 0
	break;
	case 1813://(0,7) (1, 5)
		return 3;//0 3
	break;
	case 1814://(0,7) (1, 6)
		return 3;//0 3
	break;
	case 1815://(0,7) (1, 7)
		return 3;//0 3
	break;
	case 1816://(0,7) (1, 8)
		return 0;//0 0
	break;
	case 1817://(0,7) (1, 9)
		return 3;//0 3
	break;
	case 1818://(0,7) (1, 10)
		return 3;//0 3
	break;
	case 1819://(0,7) (1, 11)
		return 3;//0 3
	break;
	case 1820://(0,7) (1, 12)
		return 3;//0 3
	break;
	case 1821://(0,7) (1, 13)
		return 3;//0 3
	break;
	case 1822://(0,7) (1, 14)
		return 3;//0 3
	break;
	case 1823://(0,7) (1, 15)
		return 3;//0 3
	break;
	case 1824://(0,7) (2, 0)
		return 0;//0 0
	break;
	case 1825://(0,7) (2, 1)
		return 0;//0 0
	break;
	case 1826://(0,7) (2, 2)
		return 3;//0 3
	break;
	case 1827://(0,7) (2, 3)
		return 3;//0 3
	break;
	case 1828://(0,7) (2, 4)
		return 0;//0 0
	break;
	case 1829://(0,7) (2, 5)
		return 3;//0 3
	break;
	case 1830://(0,7) (2, 6)
		return 3;//0 3
	break;
	case 1831://(0,7) (2, 7)
		return 3;//0 3
	break;
	case 1832://(0,7) (2, 8)
		return 0;//0 0
	break;
	case 1833://(0,7) (2, 9)
		return 3;//0 3
	break;
	case 1834://(0,7) (2, 10)
		return 3;//0 3
	break;
	case 1835://(0,7) (2, 11)
		return 3;//0 3
	break;
	case 1836://(0,7) (2, 12)
		return 3;//0 3
	break;
	case 1837://(0,7) (2, 13)
		return 3;//0 3
	break;
	case 1838://(0,7) (2, 14)
		return 3;//0 3
	break;
	case 1839://(0,7) (2, 15)
		return 3;//0 3
	break;
	case 1840://(0,7) (3, 0)
		return 0;//0 0
	break;
	case 1841://(0,7) (3, 1)
		return 0;//0 0
	break;
	case 1842://(0,7) (3, 2)
		return 3;//0 3
	break;
	case 1843://(0,7) (3, 3)
		return 3;//0 3
	break;
	case 1844://(0,7) (3, 4)
		return 0;//0 0
	break;
	case 1845://(0,7) (3, 5)
		return 3;//0 3
	break;
	case 1846://(0,7) (3, 6)
		return 3;//0 3
	break;
	case 1847://(0,7) (3, 7)
		return 3;//0 3
	break;
	case 1848://(0,7) (3, 8)
		return 0;//0 0
	break;
	case 1849://(0,7) (3, 9)
		return 3;//0 3
	break;
	case 1850://(0,7) (3, 10)
		return 3;//0 3
	break;
	case 1851://(0,7) (3, 11)
		return 3;//0 3
	break;
	case 1852://(0,7) (3, 12)
		return 3;//0 3
	break;
	case 1853://(0,7) (3, 13)
		return 3;//0 3
	break;
	case 1854://(0,7) (3, 14)
		return 3;//0 3
	break;
	case 1855://(0,7) (3, 15)
		return 3;//0 3
	break;
	case 1856://(0,7) (4, 0)
		return 0;//0 0
	break;
	case 1857://(0,7) (4, 1)
		return 0;//0 0
	break;
	case 1858://(0,7) (4, 2)
		return 3;//0 3
	break;
	case 1859://(0,7) (4, 3)
		return 3;//0 3
	break;
	case 1860://(0,7) (4, 4)
		return 0;//0 0
	break;
	case 1861://(0,7) (4, 5)
		return 3;//0 3
	break;
	case 1862://(0,7) (4, 6)
		return 3;//0 3
	break;
	case 1863://(0,7) (4, 7)
		return 3;//0 3
	break;
	case 1864://(0,7) (4, 8)
		return 0;//0 0
	break;
	case 1865://(0,7) (4, 9)
		return 3;//0 3
	break;
	case 1866://(0,7) (4, 10)
		return 3;//0 3
	break;
	case 1867://(0,7) (4, 11)
		return 3;//0 3
	break;
	case 1868://(0,7) (4, 12)
		return 3;//0 3
	break;
	case 1869://(0,7) (4, 13)
		return 3;//0 3
	break;
	case 1870://(0,7) (4, 14)
		return 3;//0 3
	break;
	case 1871://(0,7) (4, 15)
		return 3;//0 3
	break;
	case 1872://(0,7) (5, 0)
		return 0;//0 0
	break;
	case 1873://(0,7) (5, 1)
		return 0;//0 0
	break;
	case 1874://(0,7) (5, 2)
		return 3;//0 3
	break;
	case 1875://(0,7) (5, 3)
		return 3;//0 3
	break;
	case 1876://(0,7) (5, 4)
		return 0;//0 0
	break;
	case 1877://(0,7) (5, 5)
		return 3;//0 3
	break;
	case 1878://(0,7) (5, 6)
		return 3;//0 3
	break;
	case 1879://(0,7) (5, 7)
		return 3;//0 3
	break;
	case 1880://(0,7) (5, 8)
		return 0;//0 0
	break;
	case 1881://(0,7) (5, 9)
		return 3;//0 3
	break;
	case 1882://(0,7) (5, 10)
		return 3;//0 3
	break;
	case 1883://(0,7) (5, 11)
		return 3;//0 3
	break;
	case 1884://(0,7) (5, 12)
		return 3;//0 3
	break;
	case 1885://(0,7) (5, 13)
		return 3;//0 3
	break;
	case 1886://(0,7) (5, 14)
		return 3;//0 3
	break;
	case 1887://(0,7) (5, 15)
		return 3;//0 3
	break;
	case 1888://(0,7) (6, 0)
		return 0;//0 0
	break;
	case 1889://(0,7) (6, 1)
		return 0;//0 0
	break;
	case 1890://(0,7) (6, 2)
		return 3;//0 3
	break;
	case 1891://(0,7) (6, 3)
		return 3;//0 3
	break;
	case 1892://(0,7) (6, 4)
		return 0;//0 0
	break;
	case 1893://(0,7) (6, 5)
		return 3;//0 3
	break;
	case 1894://(0,7) (6, 6)
		return 3;//0 3
	break;
	case 1895://(0,7) (6, 7)
		return 3;//0 3
	break;
	case 1896://(0,7) (6, 8)
		return 0;//0 0
	break;
	case 1897://(0,7) (6, 9)
		return 3;//0 3
	break;
	case 1898://(0,7) (6, 10)
		return 3;//0 3
	break;
	case 1899://(0,7) (6, 11)
		return 3;//0 3
	break;
	case 1900://(0,7) (6, 12)
		return 3;//0 3
	break;
	case 1901://(0,7) (6, 13)
		return 3;//0 3
	break;
	case 1902://(0,7) (6, 14)
		return 3;//0 3
	break;
	case 1903://(0,7) (6, 15)
		return 3;//0 3
	break;
	case 1904://(0,7) (7, 0)
		return 0;//0 0
	break;
	case 1905://(0,7) (7, 1)
		return 0;//0 0
	break;
	case 1906://(0,7) (7, 2)
		return 3;//0 3
	break;
	case 1907://(0,7) (7, 3)
		return 3;//0 3
	break;
	case 1908://(0,7) (7, 4)
		return 0;//0 0
	break;
	case 1909://(0,7) (7, 5)
		return 3;//0 3
	break;
	case 1910://(0,7) (7, 6)
		return 3;//0 3
	break;
	case 1911://(0,7) (7, 7)
		return 3;//0 3
	break;
	case 1912://(0,7) (7, 8)
		return 0;//0 0
	break;
	case 1913://(0,7) (7, 9)
		return 3;//0 3
	break;
	case 1914://(0,7) (7, 10)
		return 3;//0 3
	break;
	case 1915://(0,7) (7, 11)
		return 3;//0 3
	break;
	case 1916://(0,7) (7, 12)
		return 3;//0 3
	break;
	case 1917://(0,7) (7, 13)
		return 3;//0 3
	break;
	case 1918://(0,7) (7, 14)
		return 3;//0 3
	break;
	case 1919://(0,7) (7, 15)
		return 3;//0 3
	break;
	case 1920://(0,7) (8, 0)
		return 0;//0 0
	break;
	case 1921://(0,7) (8, 1)
		return 0;//0 0
	break;
	case 1922://(0,7) (8, 2)
		return 3;//0 3
	break;
	case 1923://(0,7) (8, 3)
		return 3;//0 3
	break;
	case 1924://(0,7) (8, 4)
		return 0;//0 0
	break;
	case 1925://(0,7) (8, 5)
		return 3;//0 3
	break;
	case 1926://(0,7) (8, 6)
		return 3;//0 3
	break;
	case 1927://(0,7) (8, 7)
		return 3;//0 3
	break;
	case 1928://(0,7) (8, 8)
		return 0;//0 0
	break;
	case 1929://(0,7) (8, 9)
		return 3;//0 3
	break;
	case 1930://(0,7) (8, 10)
		return 3;//0 3
	break;
	case 1931://(0,7) (8, 11)
		return 3;//0 3
	break;
	case 1932://(0,7) (8, 12)
		return 3;//0 3
	break;
	case 1933://(0,7) (8, 13)
		return 3;//0 3
	break;
	case 1934://(0,7) (8, 14)
		return 3;//0 3
	break;
	case 1935://(0,7) (8, 15)
		return 3;//0 3
	break;
	case 1936://(0,7) (9, 0)
		return 0;//0 0
	break;
	case 1937://(0,7) (9, 1)
		return 0;//0 0
	break;
	case 1938://(0,7) (9, 2)
		return 3;//0 3
	break;
	case 1939://(0,7) (9, 3)
		return 3;//0 3
	break;
	case 1940://(0,7) (9, 4)
		return 0;//0 0
	break;
	case 1941://(0,7) (9, 5)
		return 3;//0 3
	break;
	case 1942://(0,7) (9, 6)
		return 3;//0 3
	break;
	case 1943://(0,7) (9, 7)
		return 3;//0 3
	break;
	case 1944://(0,7) (9, 8)
		return 0;//0 0
	break;
	case 1945://(0,7) (9, 9)
		return 3;//0 3
	break;
	case 1946://(0,7) (9, 10)
		return 3;//0 3
	break;
	case 1947://(0,7) (9, 11)
		return 3;//0 3
	break;
	case 1948://(0,7) (9, 12)
		return 3;//0 3
	break;
	case 1949://(0,7) (9, 13)
		return 3;//0 3
	break;
	case 1950://(0,7) (9, 14)
		return 3;//0 3
	break;
	case 1951://(0,7) (9, 15)
		return 3;//0 3
	break;
	case 1952://(0,7) (10, 0)
		return 0;//0 0
	break;
	case 1953://(0,7) (10, 1)
		return 0;//0 0
	break;
	case 1954://(0,7) (10, 2)
		return 3;//0 3
	break;
	case 1955://(0,7) (10, 3)
		return 3;//0 3
	break;
	case 1956://(0,7) (10, 4)
		return 0;//0 0
	break;
	case 1957://(0,7) (10, 5)
		return 3;//0 3
	break;
	case 1958://(0,7) (10, 6)
		return 3;//0 3
	break;
	case 1959://(0,7) (10, 7)
		return 3;//0 3
	break;
	case 1960://(0,7) (10, 8)
		return 0;//0 0
	break;
	case 1961://(0,7) (10, 9)
		return 3;//0 3
	break;
	case 1962://(0,7) (10, 10)
		return 3;//0 3
	break;
	case 1963://(0,7) (10, 11)
		return 3;//0 3
	break;
	case 1964://(0,7) (10, 12)
		return 3;//0 3
	break;
	case 1965://(0,7) (10, 13)
		return 3;//0 3
	break;
	case 1966://(0,7) (10, 14)
		return 3;//0 3
	break;
	case 1967://(0,7) (10, 15)
		return 3;//0 3
	break;
	case 1968://(0,7) (11, 0)
		return 0;//0 0
	break;
	case 1969://(0,7) (11, 1)
		return 0;//0 0
	break;
	case 1970://(0,7) (11, 2)
		return 3;//0 3
	break;
	case 1971://(0,7) (11, 3)
		return 3;//0 3
	break;
	case 1972://(0,7) (11, 4)
		return 0;//0 0
	break;
	case 1973://(0,7) (11, 5)
		return 3;//0 3
	break;
	case 1974://(0,7) (11, 6)
		return 3;//0 3
	break;
	case 1975://(0,7) (11, 7)
		return 3;//0 3
	break;
	case 1976://(0,7) (11, 8)
		return 0;//0 0
	break;
	case 1977://(0,7) (11, 9)
		return 3;//0 3
	break;
	case 1978://(0,7) (11, 10)
		return 3;//0 3
	break;
	case 1979://(0,7) (11, 11)
		return 3;//0 3
	break;
	case 1980://(0,7) (11, 12)
		return 3;//0 3
	break;
	case 1981://(0,7) (11, 13)
		return 3;//0 3
	break;
	case 1982://(0,7) (11, 14)
		return 3;//0 3
	break;
	case 1983://(0,7) (11, 15)
		return 3;//0 3
	break;
	case 1984://(0,7) (12, 0)
		return 0;//0 0
	break;
	case 1985://(0,7) (12, 1)
		return 0;//0 0
	break;
	case 1986://(0,7) (12, 2)
		return 3;//0 3
	break;
	case 1987://(0,7) (12, 3)
		return 3;//0 3
	break;
	case 1988://(0,7) (12, 4)
		return 0;//0 0
	break;
	case 1989://(0,7) (12, 5)
		return 3;//0 3
	break;
	case 1990://(0,7) (12, 6)
		return 3;//0 3
	break;
	case 1991://(0,7) (12, 7)
		return 3;//0 3
	break;
	case 1992://(0,7) (12, 8)
		return 0;//0 0
	break;
	case 1993://(0,7) (12, 9)
		return 3;//0 3
	break;
	case 1994://(0,7) (12, 10)
		return 3;//0 3
	break;
	case 1995://(0,7) (12, 11)
		return 3;//0 3
	break;
	case 1996://(0,7) (12, 12)
		return 3;//0 3
	break;
	case 1997://(0,7) (12, 13)
		return 3;//0 3
	break;
	case 1998://(0,7) (12, 14)
		return 3;//0 3
	break;
	case 1999://(0,7) (12, 15)
		return 3;//0 3
	break;
	case 2000://(0,7) (13, 0)
		return 0;//0 0
	break;
	case 2001://(0,7) (13, 1)
		return 0;//0 0
	break;
	case 2002://(0,7) (13, 2)
		return 3;//0 3
	break;
	case 2003://(0,7) (13, 3)
		return 3;//0 3
	break;
	case 2004://(0,7) (13, 4)
		return 0;//0 0
	break;
	case 2005://(0,7) (13, 5)
		return 3;//0 3
	break;
	case 2006://(0,7) (13, 6)
		return 3;//0 3
	break;
	case 2007://(0,7) (13, 7)
		return 3;//0 3
	break;
	case 2008://(0,7) (13, 8)
		return 0;//0 0
	break;
	case 2009://(0,7) (13, 9)
		return 3;//0 3
	break;
	case 2010://(0,7) (13, 10)
		return 3;//0 3
	break;
	case 2011://(0,7) (13, 11)
		return 3;//0 3
	break;
	case 2012://(0,7) (13, 12)
		return 3;//0 3
	break;
	case 2013://(0,7) (13, 13)
		return 3;//0 3
	break;
	case 2014://(0,7) (13, 14)
		return 3;//0 3
	break;
	case 2015://(0,7) (13, 15)
		return 3;//0 3
	break;
	case 2016://(0,7) (14, 0)
		return 0;//0 0
	break;
	case 2017://(0,7) (14, 1)
		return 0;//0 0
	break;
	case 2018://(0,7) (14, 2)
		return 3;//0 3
	break;
	case 2019://(0,7) (14, 3)
		return 3;//0 3
	break;
	case 2020://(0,7) (14, 4)
		return 0;//0 0
	break;
	case 2021://(0,7) (14, 5)
		return 3;//0 3
	break;
	case 2022://(0,7) (14, 6)
		return 3;//0 3
	break;
	case 2023://(0,7) (14, 7)
		return 3;//0 3
	break;
	case 2024://(0,7) (14, 8)
		return 0;//0 0
	break;
	case 2025://(0,7) (14, 9)
		return 3;//0 3
	break;
	case 2026://(0,7) (14, 10)
		return 3;//0 3
	break;
	case 2027://(0,7) (14, 11)
		return 3;//0 3
	break;
	case 2028://(0,7) (14, 12)
		return 3;//0 3
	break;
	case 2029://(0,7) (14, 13)
		return 3;//0 3
	break;
	case 2030://(0,7) (14, 14)
		return 3;//0 3
	break;
	case 2031://(0,7) (14, 15)
		return 3;//0 3
	break;
	case 2032://(0,7) (15, 0)
		return 0;//0 0
	break;
	case 2033://(0,7) (15, 1)
		return 0;//0 0
	break;
	case 2034://(0,7) (15, 2)
		return 3;//0 3
	break;
	case 2035://(0,7) (15, 3)
		return 3;//0 3
	break;
	case 2036://(0,7) (15, 4)
		return 0;//0 0
	break;
	case 2037://(0,7) (15, 5)
		return 3;//0 3
	break;
	case 2038://(0,7) (15, 6)
		return 3;//0 3
	break;
	case 2039://(0,7) (15, 7)
		return 3;//0 3
	break;
	case 2040://(0,7) (15, 8)
		return 0;//0 0
	break;
	case 2041://(0,7) (15, 9)
		return 3;//0 3
	break;
	case 2042://(0,7) (15, 10)
		return 3;//0 3
	break;
	case 2043://(0,7) (15, 11)
		return 3;//0 3
	break;
	case 2044://(0,7) (15, 12)
		return 3;//0 3
	break;
	case 2045://(0,7) (15, 13)
		return 3;//0 3
	break;
	case 2046://(0,7) (15, 14)
		return 3;//0 3
	break;
	case 2047://(0,7) (15, 15)
		return 3;//0 3
	break;
	case 2048://(0,8) (0, 0)
		return 0;//0 0
	break;
	case 2049://(0,8) (0, 1)
		return 3;//0 3
	break;
	case 2050://(0,8) (0, 2)
		return 0;//0 0
	break;
	case 2051://(0,8) (0, 3)
		return 0;//0 0
	break;
	case 2052://(0,8) (0, 4)
		return 3;//0 3
	break;
	case 2053://(0,8) (0, 5)
		return 3;//0 3
	break;
	case 2054://(0,8) (0, 6)
		return 3;//0 3
	break;
	case 2055://(0,8) (0, 7)
		return 0;//0 0
	break;
	case 2056://(0,8) (0, 8)
		return 3;//0 3
	break;
	case 2057://(0,8) (0, 9)
		return 3;//0 3
	break;
	case 2058://(0,8) (0, 10)
		return 3;//0 3
	break;
	case 2059://(0,8) (0, 11)
		return 3;//0 3
	break;
	case 2060://(0,8) (0, 12)
		return 3;//0 3
	break;
	case 2061://(0,8) (0, 13)
		return 3;//0 3
	break;
	case 2062://(0,8) (0, 14)
		return 3;//0 3
	break;
	case 2063://(0,8) (0, 15)
		return 3;//0 3
	break;
	case 2064://(0,8) (1, 0)
		return 0;//0 0
	break;
	case 2065://(0,8) (1, 1)
		return 3;//0 3
	break;
	case 2066://(0,8) (1, 2)
		return 0;//0 0
	break;
	case 2067://(0,8) (1, 3)
		return 0;//0 0
	break;
	case 2068://(0,8) (1, 4)
		return 3;//0 3
	break;
	case 2069://(0,8) (1, 5)
		return 3;//0 3
	break;
	case 2070://(0,8) (1, 6)
		return 3;//0 3
	break;
	case 2071://(0,8) (1, 7)
		return 0;//0 0
	break;
	case 2072://(0,8) (1, 8)
		return 3;//0 3
	break;
	case 2073://(0,8) (1, 9)
		return 3;//0 3
	break;
	case 2074://(0,8) (1, 10)
		return 3;//0 3
	break;
	case 2075://(0,8) (1, 11)
		return 3;//0 3
	break;
	case 2076://(0,8) (1, 12)
		return 3;//0 3
	break;
	case 2077://(0,8) (1, 13)
		return 3;//0 3
	break;
	case 2078://(0,8) (1, 14)
		return 3;//0 3
	break;
	case 2079://(0,8) (1, 15)
		return 3;//0 3
	break;
	case 2080://(0,8) (2, 0)
		return 0;//0 0
	break;
	case 2081://(0,8) (2, 1)
		return 3;//0 3
	break;
	case 2082://(0,8) (2, 2)
		return 0;//0 0
	break;
	case 2083://(0,8) (2, 3)
		return 0;//0 0
	break;
	case 2084://(0,8) (2, 4)
		return 3;//0 3
	break;
	case 2085://(0,8) (2, 5)
		return 3;//0 3
	break;
	case 2086://(0,8) (2, 6)
		return 3;//0 3
	break;
	case 2087://(0,8) (2, 7)
		return 0;//0 0
	break;
	case 2088://(0,8) (2, 8)
		return 3;//0 3
	break;
	case 2089://(0,8) (2, 9)
		return 3;//0 3
	break;
	case 2090://(0,8) (2, 10)
		return 3;//0 3
	break;
	case 2091://(0,8) (2, 11)
		return 3;//0 3
	break;
	case 2092://(0,8) (2, 12)
		return 3;//0 3
	break;
	case 2093://(0,8) (2, 13)
		return 3;//0 3
	break;
	case 2094://(0,8) (2, 14)
		return 3;//0 3
	break;
	case 2095://(0,8) (2, 15)
		return 3;//0 3
	break;
	case 2096://(0,8) (3, 0)
		return 0;//0 0
	break;
	case 2097://(0,8) (3, 1)
		return 3;//0 3
	break;
	case 2098://(0,8) (3, 2)
		return 0;//0 0
	break;
	case 2099://(0,8) (3, 3)
		return 0;//0 0
	break;
	case 2100://(0,8) (3, 4)
		return 3;//0 3
	break;
	case 2101://(0,8) (3, 5)
		return 3;//0 3
	break;
	case 2102://(0,8) (3, 6)
		return 3;//0 3
	break;
	case 2103://(0,8) (3, 7)
		return 0;//0 0
	break;
	case 2104://(0,8) (3, 8)
		return 3;//0 3
	break;
	case 2105://(0,8) (3, 9)
		return 3;//0 3
	break;
	case 2106://(0,8) (3, 10)
		return 3;//0 3
	break;
	case 2107://(0,8) (3, 11)
		return 3;//0 3
	break;
	case 2108://(0,8) (3, 12)
		return 3;//0 3
	break;
	case 2109://(0,8) (3, 13)
		return 3;//0 3
	break;
	case 2110://(0,8) (3, 14)
		return 3;//0 3
	break;
	case 2111://(0,8) (3, 15)
		return 3;//0 3
	break;
	case 2112://(0,8) (4, 0)
		return 0;//0 0
	break;
	case 2113://(0,8) (4, 1)
		return 3;//0 3
	break;
	case 2114://(0,8) (4, 2)
		return 0;//0 0
	break;
	case 2115://(0,8) (4, 3)
		return 0;//0 0
	break;
	case 2116://(0,8) (4, 4)
		return 3;//0 3
	break;
	case 2117://(0,8) (4, 5)
		return 3;//0 3
	break;
	case 2118://(0,8) (4, 6)
		return 3;//0 3
	break;
	case 2119://(0,8) (4, 7)
		return 0;//0 0
	break;
	case 2120://(0,8) (4, 8)
		return 3;//0 3
	break;
	case 2121://(0,8) (4, 9)
		return 3;//0 3
	break;
	case 2122://(0,8) (4, 10)
		return 3;//0 3
	break;
	case 2123://(0,8) (4, 11)
		return 3;//0 3
	break;
	case 2124://(0,8) (4, 12)
		return 3;//0 3
	break;
	case 2125://(0,8) (4, 13)
		return 3;//0 3
	break;
	case 2126://(0,8) (4, 14)
		return 3;//0 3
	break;
	case 2127://(0,8) (4, 15)
		return 3;//0 3
	break;
	case 2128://(0,8) (5, 0)
		return 0;//0 0
	break;
	case 2129://(0,8) (5, 1)
		return 3;//0 3
	break;
	case 2130://(0,8) (5, 2)
		return 0;//0 0
	break;
	case 2131://(0,8) (5, 3)
		return 0;//0 0
	break;
	case 2132://(0,8) (5, 4)
		return 3;//0 3
	break;
	case 2133://(0,8) (5, 5)
		return 3;//0 3
	break;
	case 2134://(0,8) (5, 6)
		return 3;//0 3
	break;
	case 2135://(0,8) (5, 7)
		return 0;//0 0
	break;
	case 2136://(0,8) (5, 8)
		return 3;//0 3
	break;
	case 2137://(0,8) (5, 9)
		return 3;//0 3
	break;
	case 2138://(0,8) (5, 10)
		return 3;//0 3
	break;
	case 2139://(0,8) (5, 11)
		return 3;//0 3
	break;
	case 2140://(0,8) (5, 12)
		return 3;//0 3
	break;
	case 2141://(0,8) (5, 13)
		return 3;//0 3
	break;
	case 2142://(0,8) (5, 14)
		return 3;//0 3
	break;
	case 2143://(0,8) (5, 15)
		return 3;//0 3
	break;
	case 2144://(0,8) (6, 0)
		return 0;//0 0
	break;
	case 2145://(0,8) (6, 1)
		return 3;//0 3
	break;
	case 2146://(0,8) (6, 2)
		return 0;//0 0
	break;
	case 2147://(0,8) (6, 3)
		return 0;//0 0
	break;
	case 2148://(0,8) (6, 4)
		return 3;//0 3
	break;
	case 2149://(0,8) (6, 5)
		return 3;//0 3
	break;
	case 2150://(0,8) (6, 6)
		return 3;//0 3
	break;
	case 2151://(0,8) (6, 7)
		return 0;//0 0
	break;
	case 2152://(0,8) (6, 8)
		return 3;//0 3
	break;
	case 2153://(0,8) (6, 9)
		return 3;//0 3
	break;
	case 2154://(0,8) (6, 10)
		return 3;//0 3
	break;
	case 2155://(0,8) (6, 11)
		return 3;//0 3
	break;
	case 2156://(0,8) (6, 12)
		return 3;//0 3
	break;
	case 2157://(0,8) (6, 13)
		return 3;//0 3
	break;
	case 2158://(0,8) (6, 14)
		return 3;//0 3
	break;
	case 2159://(0,8) (6, 15)
		return 3;//0 3
	break;
	case 2160://(0,8) (7, 0)
		return 0;//0 0
	break;
	case 2161://(0,8) (7, 1)
		return 3;//0 3
	break;
	case 2162://(0,8) (7, 2)
		return 0;//0 0
	break;
	case 2163://(0,8) (7, 3)
		return 0;//0 0
	break;
	case 2164://(0,8) (7, 4)
		return 3;//0 3
	break;
	case 2165://(0,8) (7, 5)
		return 3;//0 3
	break;
	case 2166://(0,8) (7, 6)
		return 3;//0 3
	break;
	case 2167://(0,8) (7, 7)
		return 0;//0 0
	break;
	case 2168://(0,8) (7, 8)
		return 3;//0 3
	break;
	case 2169://(0,8) (7, 9)
		return 3;//0 3
	break;
	case 2170://(0,8) (7, 10)
		return 3;//0 3
	break;
	case 2171://(0,8) (7, 11)
		return 3;//0 3
	break;
	case 2172://(0,8) (7, 12)
		return 3;//0 3
	break;
	case 2173://(0,8) (7, 13)
		return 3;//0 3
	break;
	case 2174://(0,8) (7, 14)
		return 3;//0 3
	break;
	case 2175://(0,8) (7, 15)
		return 3;//0 3
	break;
	case 2176://(0,8) (8, 0)
		return 0;//0 0
	break;
	case 2177://(0,8) (8, 1)
		return 3;//0 3
	break;
	case 2178://(0,8) (8, 2)
		return 0;//0 0
	break;
	case 2179://(0,8) (8, 3)
		return 0;//0 0
	break;
	case 2180://(0,8) (8, 4)
		return 3;//0 3
	break;
	case 2181://(0,8) (8, 5)
		return 3;//0 3
	break;
	case 2182://(0,8) (8, 6)
		return 3;//0 3
	break;
	case 2183://(0,8) (8, 7)
		return 0;//0 0
	break;
	case 2184://(0,8) (8, 8)
		return 3;//0 3
	break;
	case 2185://(0,8) (8, 9)
		return 3;//0 3
	break;
	case 2186://(0,8) (8, 10)
		return 3;//0 3
	break;
	case 2187://(0,8) (8, 11)
		return 3;//0 3
	break;
	case 2188://(0,8) (8, 12)
		return 3;//0 3
	break;
	case 2189://(0,8) (8, 13)
		return 3;//0 3
	break;
	case 2190://(0,8) (8, 14)
		return 3;//0 3
	break;
	case 2191://(0,8) (8, 15)
		return 3;//0 3
	break;
	case 2192://(0,8) (9, 0)
		return 0;//0 0
	break;
	case 2193://(0,8) (9, 1)
		return 3;//0 3
	break;
	case 2194://(0,8) (9, 2)
		return 0;//0 0
	break;
	case 2195://(0,8) (9, 3)
		return 0;//0 0
	break;
	case 2196://(0,8) (9, 4)
		return 3;//0 3
	break;
	case 2197://(0,8) (9, 5)
		return 3;//0 3
	break;
	case 2198://(0,8) (9, 6)
		return 3;//0 3
	break;
	case 2199://(0,8) (9, 7)
		return 0;//0 0
	break;
	case 2200://(0,8) (9, 8)
		return 3;//0 3
	break;
	case 2201://(0,8) (9, 9)
		return 3;//0 3
	break;
	case 2202://(0,8) (9, 10)
		return 3;//0 3
	break;
	case 2203://(0,8) (9, 11)
		return 3;//0 3
	break;
	case 2204://(0,8) (9, 12)
		return 3;//0 3
	break;
	case 2205://(0,8) (9, 13)
		return 3;//0 3
	break;
	case 2206://(0,8) (9, 14)
		return 3;//0 3
	break;
	case 2207://(0,8) (9, 15)
		return 3;//0 3
	break;
	case 2208://(0,8) (10, 0)
		return 0;//0 0
	break;
	case 2209://(0,8) (10, 1)
		return 3;//0 3
	break;
	case 2210://(0,8) (10, 2)
		return 0;//0 0
	break;
	case 2211://(0,8) (10, 3)
		return 0;//0 0
	break;
	case 2212://(0,8) (10, 4)
		return 3;//0 3
	break;
	case 2213://(0,8) (10, 5)
		return 3;//0 3
	break;
	case 2214://(0,8) (10, 6)
		return 3;//0 3
	break;
	case 2215://(0,8) (10, 7)
		return 0;//0 0
	break;
	case 2216://(0,8) (10, 8)
		return 3;//0 3
	break;
	case 2217://(0,8) (10, 9)
		return 3;//0 3
	break;
	case 2218://(0,8) (10, 10)
		return 3;//0 3
	break;
	case 2219://(0,8) (10, 11)
		return 3;//0 3
	break;
	case 2220://(0,8) (10, 12)
		return 3;//0 3
	break;
	case 2221://(0,8) (10, 13)
		return 3;//0 3
	break;
	case 2222://(0,8) (10, 14)
		return 3;//0 3
	break;
	case 2223://(0,8) (10, 15)
		return 3;//0 3
	break;
	case 2224://(0,8) (11, 0)
		return 0;//0 0
	break;
	case 2225://(0,8) (11, 1)
		return 3;//0 3
	break;
	case 2226://(0,8) (11, 2)
		return 0;//0 0
	break;
	case 2227://(0,8) (11, 3)
		return 0;//0 0
	break;
	case 2228://(0,8) (11, 4)
		return 3;//0 3
	break;
	case 2229://(0,8) (11, 5)
		return 3;//0 3
	break;
	case 2230://(0,8) (11, 6)
		return 3;//0 3
	break;
	case 2231://(0,8) (11, 7)
		return 0;//0 0
	break;
	case 2232://(0,8) (11, 8)
		return 3;//0 3
	break;
	case 2233://(0,8) (11, 9)
		return 3;//0 3
	break;
	case 2234://(0,8) (11, 10)
		return 3;//0 3
	break;
	case 2235://(0,8) (11, 11)
		return 3;//0 3
	break;
	case 2236://(0,8) (11, 12)
		return 3;//0 3
	break;
	case 2237://(0,8) (11, 13)
		return 3;//0 3
	break;
	case 2238://(0,8) (11, 14)
		return 3;//0 3
	break;
	case 2239://(0,8) (11, 15)
		return 3;//0 3
	break;
	case 2240://(0,8) (12, 0)
		return 0;//0 0
	break;
	case 2241://(0,8) (12, 1)
		return 3;//0 3
	break;
	case 2242://(0,8) (12, 2)
		return 0;//0 0
	break;
	case 2243://(0,8) (12, 3)
		return 0;//0 0
	break;
	case 2244://(0,8) (12, 4)
		return 3;//0 3
	break;
	case 2245://(0,8) (12, 5)
		return 3;//0 3
	break;
	case 2246://(0,8) (12, 6)
		return 3;//0 3
	break;
	case 2247://(0,8) (12, 7)
		return 0;//0 0
	break;
	case 2248://(0,8) (12, 8)
		return 3;//0 3
	break;
	case 2249://(0,8) (12, 9)
		return 3;//0 3
	break;
	case 2250://(0,8) (12, 10)
		return 3;//0 3
	break;
	case 2251://(0,8) (12, 11)
		return 3;//0 3
	break;
	case 2252://(0,8) (12, 12)
		return 3;//0 3
	break;
	case 2253://(0,8) (12, 13)
		return 3;//0 3
	break;
	case 2254://(0,8) (12, 14)
		return 3;//0 3
	break;
	case 2255://(0,8) (12, 15)
		return 3;//0 3
	break;
	case 2256://(0,8) (13, 0)
		return 0;//0 0
	break;
	case 2257://(0,8) (13, 1)
		return 3;//0 3
	break;
	case 2258://(0,8) (13, 2)
		return 0;//0 0
	break;
	case 2259://(0,8) (13, 3)
		return 0;//0 0
	break;
	case 2260://(0,8) (13, 4)
		return 3;//0 3
	break;
	case 2261://(0,8) (13, 5)
		return 3;//0 3
	break;
	case 2262://(0,8) (13, 6)
		return 3;//0 3
	break;
	case 2263://(0,8) (13, 7)
		return 0;//0 0
	break;
	case 2264://(0,8) (13, 8)
		return 3;//0 3
	break;
	case 2265://(0,8) (13, 9)
		return 3;//0 3
	break;
	case 2266://(0,8) (13, 10)
		return 3;//0 3
	break;
	case 2267://(0,8) (13, 11)
		return 3;//0 3
	break;
	case 2268://(0,8) (13, 12)
		return 3;//0 3
	break;
	case 2269://(0,8) (13, 13)
		return 3;//0 3
	break;
	case 2270://(0,8) (13, 14)
		return 3;//0 3
	break;
	case 2271://(0,8) (13, 15)
		return 3;//0 3
	break;
	case 2272://(0,8) (14, 0)
		return 0;//0 0
	break;
	case 2273://(0,8) (14, 1)
		return 3;//0 3
	break;
	case 2274://(0,8) (14, 2)
		return 0;//0 0
	break;
	case 2275://(0,8) (14, 3)
		return 0;//0 0
	break;
	case 2276://(0,8) (14, 4)
		return 3;//0 3
	break;
	case 2277://(0,8) (14, 5)
		return 3;//0 3
	break;
	case 2278://(0,8) (14, 6)
		return 3;//0 3
	break;
	case 2279://(0,8) (14, 7)
		return 0;//0 0
	break;
	case 2280://(0,8) (14, 8)
		return 3;//0 3
	break;
	case 2281://(0,8) (14, 9)
		return 3;//0 3
	break;
	case 2282://(0,8) (14, 10)
		return 3;//0 3
	break;
	case 2283://(0,8) (14, 11)
		return 3;//0 3
	break;
	case 2284://(0,8) (14, 12)
		return 3;//0 3
	break;
	case 2285://(0,8) (14, 13)
		return 3;//0 3
	break;
	case 2286://(0,8) (14, 14)
		return 3;//0 3
	break;
	case 2287://(0,8) (14, 15)
		return 3;//0 3
	break;
	case 2288://(0,8) (15, 0)
		return 0;//0 0
	break;
	case 2289://(0,8) (15, 1)
		return 3;//0 3
	break;
	case 2290://(0,8) (15, 2)
		return 0;//0 0
	break;
	case 2291://(0,8) (15, 3)
		return 0;//0 0
	break;
	case 2292://(0,8) (15, 4)
		return 3;//0 3
	break;
	case 2293://(0,8) (15, 5)
		return 3;//0 3
	break;
	case 2294://(0,8) (15, 6)
		return 3;//0 3
	break;
	case 2295://(0,8) (15, 7)
		return 0;//0 0
	break;
	case 2296://(0,8) (15, 8)
		return 3;//0 3
	break;
	case 2297://(0,8) (15, 9)
		return 3;//0 3
	break;
	case 2298://(0,8) (15, 10)
		return 3;//0 3
	break;
	case 2299://(0,8) (15, 11)
		return 3;//0 3
	break;
	case 2300://(0,8) (15, 12)
		return 3;//0 3
	break;
	case 2301://(0,8) (15, 13)
		return 3;//0 3
	break;
	case 2302://(0,8) (15, 14)
		return 3;//0 3
	break;
	case 2303://(0,8) (15, 15)
		return 3;//0 3
	break;
	case 2304://(0,9) (0, 0)
		return 0;//0 0
	break;
	case 2305://(0,9) (0, 1)
		return 3;//0 3
	break;
	case 2306://(0,9) (0, 2)
		return 3;//0 3
	break;
	case 2307://(0,9) (0, 3)
		return 0;//0 0
	break;
	case 2308://(0,9) (0, 4)
		return 0;//0 0
	break;
	case 2309://(0,9) (0, 5)
		return 3;//0 3
	break;
	case 2310://(0,9) (0, 6)
		return 3;//0 3
	break;
	case 2311://(0,9) (0, 7)
		return 3;//0 3
	break;
	case 2312://(0,9) (0, 8)
		return 3;//0 3
	break;
	case 2313://(0,9) (0, 9)
		return 3;//0 3
	break;
	case 2314://(0,9) (0, 10)
		return 0;//0 0
	break;
	case 2315://(0,9) (0, 11)
		return 3;//0 3
	break;
	case 2316://(0,9) (0, 12)
		return 3;//0 3
	break;
	case 2317://(0,9) (0, 13)
		return 3;//0 3
	break;
	case 2318://(0,9) (0, 14)
		return 3;//0 3
	break;
	case 2319://(0,9) (0, 15)
		return 3;//0 3
	break;
	case 2320://(0,9) (1, 0)
		return 0;//0 0
	break;
	case 2321://(0,9) (1, 1)
		return 3;//0 3
	break;
	case 2322://(0,9) (1, 2)
		return 3;//0 3
	break;
	case 2323://(0,9) (1, 3)
		return 0;//0 0
	break;
	case 2324://(0,9) (1, 4)
		return 0;//0 0
	break;
	case 2325://(0,9) (1, 5)
		return 3;//0 3
	break;
	case 2326://(0,9) (1, 6)
		return 3;//0 3
	break;
	case 2327://(0,9) (1, 7)
		return 3;//0 3
	break;
	case 2328://(0,9) (1, 8)
		return 3;//0 3
	break;
	case 2329://(0,9) (1, 9)
		return 3;//0 3
	break;
	case 2330://(0,9) (1, 10)
		return 0;//0 0
	break;
	case 2331://(0,9) (1, 11)
		return 3;//0 3
	break;
	case 2332://(0,9) (1, 12)
		return 3;//0 3
	break;
	case 2333://(0,9) (1, 13)
		return 3;//0 3
	break;
	case 2334://(0,9) (1, 14)
		return 3;//0 3
	break;
	case 2335://(0,9) (1, 15)
		return 3;//0 3
	break;
	case 2336://(0,9) (2, 0)
		return 0;//0 0
	break;
	case 2337://(0,9) (2, 1)
		return 3;//0 3
	break;
	case 2338://(0,9) (2, 2)
		return 3;//0 3
	break;
	case 2339://(0,9) (2, 3)
		return 0;//0 0
	break;
	case 2340://(0,9) (2, 4)
		return 0;//0 0
	break;
	case 2341://(0,9) (2, 5)
		return 3;//0 3
	break;
	case 2342://(0,9) (2, 6)
		return 3;//0 3
	break;
	case 2343://(0,9) (2, 7)
		return 3;//0 3
	break;
	case 2344://(0,9) (2, 8)
		return 3;//0 3
	break;
	case 2345://(0,9) (2, 9)
		return 3;//0 3
	break;
	case 2346://(0,9) (2, 10)
		return 0;//0 0
	break;
	case 2347://(0,9) (2, 11)
		return 3;//0 3
	break;
	case 2348://(0,9) (2, 12)
		return 3;//0 3
	break;
	case 2349://(0,9) (2, 13)
		return 3;//0 3
	break;
	case 2350://(0,9) (2, 14)
		return 3;//0 3
	break;
	case 2351://(0,9) (2, 15)
		return 3;//0 3
	break;
	case 2352://(0,9) (3, 0)
		return 0;//0 0
	break;
	case 2353://(0,9) (3, 1)
		return 3;//0 3
	break;
	case 2354://(0,9) (3, 2)
		return 3;//0 3
	break;
	case 2355://(0,9) (3, 3)
		return 0;//0 0
	break;
	case 2356://(0,9) (3, 4)
		return 0;//0 0
	break;
	case 2357://(0,9) (3, 5)
		return 3;//0 3
	break;
	case 2358://(0,9) (3, 6)
		return 3;//0 3
	break;
	case 2359://(0,9) (3, 7)
		return 3;//0 3
	break;
	case 2360://(0,9) (3, 8)
		return 3;//0 3
	break;
	case 2361://(0,9) (3, 9)
		return 3;//0 3
	break;
	case 2362://(0,9) (3, 10)
		return 0;//0 0
	break;
	case 2363://(0,9) (3, 11)
		return 3;//0 3
	break;
	case 2364://(0,9) (3, 12)
		return 3;//0 3
	break;
	case 2365://(0,9) (3, 13)
		return 3;//0 3
	break;
	case 2366://(0,9) (3, 14)
		return 3;//0 3
	break;
	case 2367://(0,9) (3, 15)
		return 3;//0 3
	break;
	case 2368://(0,9) (4, 0)
		return 0;//0 0
	break;
	case 2369://(0,9) (4, 1)
		return 3;//0 3
	break;
	case 2370://(0,9) (4, 2)
		return 3;//0 3
	break;
	case 2371://(0,9) (4, 3)
		return 0;//0 0
	break;
	case 2372://(0,9) (4, 4)
		return 0;//0 0
	break;
	case 2373://(0,9) (4, 5)
		return 3;//0 3
	break;
	case 2374://(0,9) (4, 6)
		return 3;//0 3
	break;
	case 2375://(0,9) (4, 7)
		return 3;//0 3
	break;
	case 2376://(0,9) (4, 8)
		return 3;//0 3
	break;
	case 2377://(0,9) (4, 9)
		return 3;//0 3
	break;
	case 2378://(0,9) (4, 10)
		return 0;//0 0
	break;
	case 2379://(0,9) (4, 11)
		return 3;//0 3
	break;
	case 2380://(0,9) (4, 12)
		return 3;//0 3
	break;
	case 2381://(0,9) (4, 13)
		return 3;//0 3
	break;
	case 2382://(0,9) (4, 14)
		return 3;//0 3
	break;
	case 2383://(0,9) (4, 15)
		return 3;//0 3
	break;
	case 2384://(0,9) (5, 0)
		return 0;//0 0
	break;
	case 2385://(0,9) (5, 1)
		return 3;//0 3
	break;
	case 2386://(0,9) (5, 2)
		return 3;//0 3
	break;
	case 2387://(0,9) (5, 3)
		return 0;//0 0
	break;
	case 2388://(0,9) (5, 4)
		return 0;//0 0
	break;
	case 2389://(0,9) (5, 5)
		return 3;//0 3
	break;
	case 2390://(0,9) (5, 6)
		return 3;//0 3
	break;
	case 2391://(0,9) (5, 7)
		return 3;//0 3
	break;
	case 2392://(0,9) (5, 8)
		return 3;//0 3
	break;
	case 2393://(0,9) (5, 9)
		return 3;//0 3
	break;
	case 2394://(0,9) (5, 10)
		return 0;//0 0
	break;
	case 2395://(0,9) (5, 11)
		return 3;//0 3
	break;
	case 2396://(0,9) (5, 12)
		return 3;//0 3
	break;
	case 2397://(0,9) (5, 13)
		return 3;//0 3
	break;
	case 2398://(0,9) (5, 14)
		return 3;//0 3
	break;
	case 2399://(0,9) (5, 15)
		return 3;//0 3
	break;
	case 2400://(0,9) (6, 0)
		return 0;//0 0
	break;
	case 2401://(0,9) (6, 1)
		return 3;//0 3
	break;
	case 2402://(0,9) (6, 2)
		return 3;//0 3
	break;
	case 2403://(0,9) (6, 3)
		return 0;//0 0
	break;
	case 2404://(0,9) (6, 4)
		return 0;//0 0
	break;
	case 2405://(0,9) (6, 5)
		return 3;//0 3
	break;
	case 2406://(0,9) (6, 6)
		return 3;//0 3
	break;
	case 2407://(0,9) (6, 7)
		return 3;//0 3
	break;
	case 2408://(0,9) (6, 8)
		return 3;//0 3
	break;
	case 2409://(0,9) (6, 9)
		return 3;//0 3
	break;
	case 2410://(0,9) (6, 10)
		return 0;//0 0
	break;
	case 2411://(0,9) (6, 11)
		return 3;//0 3
	break;
	case 2412://(0,9) (6, 12)
		return 3;//0 3
	break;
	case 2413://(0,9) (6, 13)
		return 3;//0 3
	break;
	case 2414://(0,9) (6, 14)
		return 3;//0 3
	break;
	case 2415://(0,9) (6, 15)
		return 3;//0 3
	break;
	case 2416://(0,9) (7, 0)
		return 0;//0 0
	break;
	case 2417://(0,9) (7, 1)
		return 3;//0 3
	break;
	case 2418://(0,9) (7, 2)
		return 3;//0 3
	break;
	case 2419://(0,9) (7, 3)
		return 0;//0 0
	break;
	case 2420://(0,9) (7, 4)
		return 0;//0 0
	break;
	case 2421://(0,9) (7, 5)
		return 3;//0 3
	break;
	case 2422://(0,9) (7, 6)
		return 3;//0 3
	break;
	case 2423://(0,9) (7, 7)
		return 3;//0 3
	break;
	case 2424://(0,9) (7, 8)
		return 3;//0 3
	break;
	case 2425://(0,9) (7, 9)
		return 3;//0 3
	break;
	case 2426://(0,9) (7, 10)
		return 0;//0 0
	break;
	case 2427://(0,9) (7, 11)
		return 3;//0 3
	break;
	case 2428://(0,9) (7, 12)
		return 3;//0 3
	break;
	case 2429://(0,9) (7, 13)
		return 3;//0 3
	break;
	case 2430://(0,9) (7, 14)
		return 3;//0 3
	break;
	case 2431://(0,9) (7, 15)
		return 3;//0 3
	break;
	case 2432://(0,9) (8, 0)
		return 0;//0 0
	break;
	case 2433://(0,9) (8, 1)
		return 3;//0 3
	break;
	case 2434://(0,9) (8, 2)
		return 3;//0 3
	break;
	case 2435://(0,9) (8, 3)
		return 0;//0 0
	break;
	case 2436://(0,9) (8, 4)
		return 0;//0 0
	break;
	case 2437://(0,9) (8, 5)
		return 3;//0 3
	break;
	case 2438://(0,9) (8, 6)
		return 3;//0 3
	break;
	case 2439://(0,9) (8, 7)
		return 3;//0 3
	break;
	case 2440://(0,9) (8, 8)
		return 3;//0 3
	break;
	case 2441://(0,9) (8, 9)
		return 3;//0 3
	break;
	case 2442://(0,9) (8, 10)
		return 0;//0 0
	break;
	case 2443://(0,9) (8, 11)
		return 3;//0 3
	break;
	case 2444://(0,9) (8, 12)
		return 3;//0 3
	break;
	case 2445://(0,9) (8, 13)
		return 3;//0 3
	break;
	case 2446://(0,9) (8, 14)
		return 3;//0 3
	break;
	case 2447://(0,9) (8, 15)
		return 3;//0 3
	break;
	case 2448://(0,9) (9, 0)
		return 0;//0 0
	break;
	case 2449://(0,9) (9, 1)
		return 3;//0 3
	break;
	case 2450://(0,9) (9, 2)
		return 3;//0 3
	break;
	case 2451://(0,9) (9, 3)
		return 0;//0 0
	break;
	case 2452://(0,9) (9, 4)
		return 0;//0 0
	break;
	case 2453://(0,9) (9, 5)
		return 3;//0 3
	break;
	case 2454://(0,9) (9, 6)
		return 3;//0 3
	break;
	case 2455://(0,9) (9, 7)
		return 3;//0 3
	break;
	case 2456://(0,9) (9, 8)
		return 3;//0 3
	break;
	case 2457://(0,9) (9, 9)
		return 3;//0 3
	break;
	case 2458://(0,9) (9, 10)
		return 0;//0 0
	break;
	case 2459://(0,9) (9, 11)
		return 3;//0 3
	break;
	case 2460://(0,9) (9, 12)
		return 3;//0 3
	break;
	case 2461://(0,9) (9, 13)
		return 3;//0 3
	break;
	case 2462://(0,9) (9, 14)
		return 3;//0 3
	break;
	case 2463://(0,9) (9, 15)
		return 3;//0 3
	break;
	case 2464://(0,9) (10, 0)
		return 0;//0 0
	break;
	case 2465://(0,9) (10, 1)
		return 3;//0 3
	break;
	case 2466://(0,9) (10, 2)
		return 3;//0 3
	break;
	case 2467://(0,9) (10, 3)
		return 0;//0 0
	break;
	case 2468://(0,9) (10, 4)
		return 0;//0 0
	break;
	case 2469://(0,9) (10, 5)
		return 3;//0 3
	break;
	case 2470://(0,9) (10, 6)
		return 3;//0 3
	break;
	case 2471://(0,9) (10, 7)
		return 3;//0 3
	break;
	case 2472://(0,9) (10, 8)
		return 3;//0 3
	break;
	case 2473://(0,9) (10, 9)
		return 3;//0 3
	break;
	case 2474://(0,9) (10, 10)
		return 0;//0 0
	break;
	case 2475://(0,9) (10, 11)
		return 3;//0 3
	break;
	case 2476://(0,9) (10, 12)
		return 3;//0 3
	break;
	case 2477://(0,9) (10, 13)
		return 3;//0 3
	break;
	case 2478://(0,9) (10, 14)
		return 3;//0 3
	break;
	case 2479://(0,9) (10, 15)
		return 3;//0 3
	break;
	case 2480://(0,9) (11, 0)
		return 0;//0 0
	break;
	case 2481://(0,9) (11, 1)
		return 3;//0 3
	break;
	case 2482://(0,9) (11, 2)
		return 3;//0 3
	break;
	case 2483://(0,9) (11, 3)
		return 0;//0 0
	break;
	case 2484://(0,9) (11, 4)
		return 0;//0 0
	break;
	case 2485://(0,9) (11, 5)
		return 3;//0 3
	break;
	case 2486://(0,9) (11, 6)
		return 3;//0 3
	break;
	case 2487://(0,9) (11, 7)
		return 3;//0 3
	break;
	case 2488://(0,9) (11, 8)
		return 3;//0 3
	break;
	case 2489://(0,9) (11, 9)
		return 3;//0 3
	break;
	case 2490://(0,9) (11, 10)
		return 0;//0 0
	break;
	case 2491://(0,9) (11, 11)
		return 3;//0 3
	break;
	case 2492://(0,9) (11, 12)
		return 3;//0 3
	break;
	case 2493://(0,9) (11, 13)
		return 3;//0 3
	break;
	case 2494://(0,9) (11, 14)
		return 3;//0 3
	break;
	case 2495://(0,9) (11, 15)
		return 3;//0 3
	break;
	case 2496://(0,9) (12, 0)
		return 0;//0 0
	break;
	case 2497://(0,9) (12, 1)
		return 3;//0 3
	break;
	case 2498://(0,9) (12, 2)
		return 3;//0 3
	break;
	case 2499://(0,9) (12, 3)
		return 0;//0 0
	break;
	case 2500://(0,9) (12, 4)
		return 0;//0 0
	break;
	case 2501://(0,9) (12, 5)
		return 3;//0 3
	break;
	case 2502://(0,9) (12, 6)
		return 3;//0 3
	break;
	case 2503://(0,9) (12, 7)
		return 3;//0 3
	break;
	case 2504://(0,9) (12, 8)
		return 3;//0 3
	break;
	case 2505://(0,9) (12, 9)
		return 3;//0 3
	break;
	case 2506://(0,9) (12, 10)
		return 0;//0 0
	break;
	case 2507://(0,9) (12, 11)
		return 3;//0 3
	break;
	case 2508://(0,9) (12, 12)
		return 3;//0 3
	break;
	case 2509://(0,9) (12, 13)
		return 3;//0 3
	break;
	case 2510://(0,9) (12, 14)
		return 3;//0 3
	break;
	case 2511://(0,9) (12, 15)
		return 3;//0 3
	break;
	case 2512://(0,9) (13, 0)
		return 0;//0 0
	break;
	case 2513://(0,9) (13, 1)
		return 3;//0 3
	break;
	case 2514://(0,9) (13, 2)
		return 3;//0 3
	break;
	case 2515://(0,9) (13, 3)
		return 0;//0 0
	break;
	case 2516://(0,9) (13, 4)
		return 0;//0 0
	break;
	case 2517://(0,9) (13, 5)
		return 3;//0 3
	break;
	case 2518://(0,9) (13, 6)
		return 3;//0 3
	break;
	case 2519://(0,9) (13, 7)
		return 3;//0 3
	break;
	case 2520://(0,9) (13, 8)
		return 3;//0 3
	break;
	case 2521://(0,9) (13, 9)
		return 3;//0 3
	break;
	case 2522://(0,9) (13, 10)
		return 0;//0 0
	break;
	case 2523://(0,9) (13, 11)
		return 3;//0 3
	break;
	case 2524://(0,9) (13, 12)
		return 3;//0 3
	break;
	case 2525://(0,9) (13, 13)
		return 3;//0 3
	break;
	case 2526://(0,9) (13, 14)
		return 3;//0 3
	break;
	case 2527://(0,9) (13, 15)
		return 3;//0 3
	break;
	case 2528://(0,9) (14, 0)
		return 0;//0 0
	break;
	case 2529://(0,9) (14, 1)
		return 3;//0 3
	break;
	case 2530://(0,9) (14, 2)
		return 3;//0 3
	break;
	case 2531://(0,9) (14, 3)
		return 0;//0 0
	break;
	case 2532://(0,9) (14, 4)
		return 0;//0 0
	break;
	case 2533://(0,9) (14, 5)
		return 3;//0 3
	break;
	case 2534://(0,9) (14, 6)
		return 3;//0 3
	break;
	case 2535://(0,9) (14, 7)
		return 3;//0 3
	break;
	case 2536://(0,9) (14, 8)
		return 3;//0 3
	break;
	case 2537://(0,9) (14, 9)
		return 3;//0 3
	break;
	case 2538://(0,9) (14, 10)
		return 0;//0 0
	break;
	case 2539://(0,9) (14, 11)
		return 3;//0 3
	break;
	case 2540://(0,9) (14, 12)
		return 3;//0 3
	break;
	case 2541://(0,9) (14, 13)
		return 3;//0 3
	break;
	case 2542://(0,9) (14, 14)
		return 3;//0 3
	break;
	case 2543://(0,9) (14, 15)
		return 3;//0 3
	break;
	case 2544://(0,9) (15, 0)
		return 0;//0 0
	break;
	case 2545://(0,9) (15, 1)
		return 3;//0 3
	break;
	case 2546://(0,9) (15, 2)
		return 3;//0 3
	break;
	case 2547://(0,9) (15, 3)
		return 0;//0 0
	break;
	case 2548://(0,9) (15, 4)
		return 0;//0 0
	break;
	case 2549://(0,9) (15, 5)
		return 3;//0 3
	break;
	case 2550://(0,9) (15, 6)
		return 3;//0 3
	break;
	case 2551://(0,9) (15, 7)
		return 3;//0 3
	break;
	case 2552://(0,9) (15, 8)
		return 3;//0 3
	break;
	case 2553://(0,9) (15, 9)
		return 3;//0 3
	break;
	case 2554://(0,9) (15, 10)
		return 0;//0 0
	break;
	case 2555://(0,9) (15, 11)
		return 3;//0 3
	break;
	case 2556://(0,9) (15, 12)
		return 3;//0 3
	break;
	case 2557://(0,9) (15, 13)
		return 3;//0 3
	break;
	case 2558://(0,9) (15, 14)
		return 3;//0 3
	break;
	case 2559://(0,9) (15, 15)
		return 3;//0 3
	break;
	case 2560://(0,10) (0, 0)
		return 0;//0 0
	break;
	case 2561://(0,10) (0, 1)
		return 0;//0 0
	break;
	case 2562://(0,10) (0, 2)
		return 0;//0 0
	break;
	case 2563://(0,10) (0, 3)
		return 3;//0 3
	break;
	case 2564://(0,10) (0, 4)
		return 3;//0 3
	break;
	case 2565://(0,10) (0, 5)
		return 3;//0 3
	break;
	case 2566://(0,10) (0, 6)
		return 3;//0 3
	break;
	case 2567://(0,10) (0, 7)
		return 3;//0 3
	break;
	case 2568://(0,10) (0, 8)
		return 3;//0 3
	break;
	case 2569://(0,10) (0, 9)
		return 0;//0 0
	break;
	case 2570://(0,10) (0, 10)
		return 3;//0 3
	break;
	case 2571://(0,10) (0, 11)
		return 3;//0 3
	break;
	case 2572://(0,10) (0, 12)
		return 3;//0 3
	break;
	case 2573://(0,10) (0, 13)
		return 3;//0 3
	break;
	case 2574://(0,10) (0, 14)
		return 3;//0 3
	break;
	case 2575://(0,10) (0, 15)
		return 3;//0 3
	break;
	case 2576://(0,10) (1, 0)
		return 0;//0 0
	break;
	case 2577://(0,10) (1, 1)
		return 0;//0 0
	break;
	case 2578://(0,10) (1, 2)
		return 0;//0 0
	break;
	case 2579://(0,10) (1, 3)
		return 3;//0 3
	break;
	case 2580://(0,10) (1, 4)
		return 3;//0 3
	break;
	case 2581://(0,10) (1, 5)
		return 3;//0 3
	break;
	case 2582://(0,10) (1, 6)
		return 3;//0 3
	break;
	case 2583://(0,10) (1, 7)
		return 3;//0 3
	break;
	case 2584://(0,10) (1, 8)
		return 3;//0 3
	break;
	case 2585://(0,10) (1, 9)
		return 0;//0 0
	break;
	case 2586://(0,10) (1, 10)
		return 3;//0 3
	break;
	case 2587://(0,10) (1, 11)
		return 3;//0 3
	break;
	case 2588://(0,10) (1, 12)
		return 3;//0 3
	break;
	case 2589://(0,10) (1, 13)
		return 3;//0 3
	break;
	case 2590://(0,10) (1, 14)
		return 3;//0 3
	break;
	case 2591://(0,10) (1, 15)
		return 3;//0 3
	break;
	case 2592://(0,10) (2, 0)
		return 0;//0 0
	break;
	case 2593://(0,10) (2, 1)
		return 0;//0 0
	break;
	case 2594://(0,10) (2, 2)
		return 0;//0 0
	break;
	case 2595://(0,10) (2, 3)
		return 3;//0 3
	break;
	case 2596://(0,10) (2, 4)
		return 3;//0 3
	break;
	case 2597://(0,10) (2, 5)
		return 3;//0 3
	break;
	case 2598://(0,10) (2, 6)
		return 3;//0 3
	break;
	case 2599://(0,10) (2, 7)
		return 3;//0 3
	break;
	case 2600://(0,10) (2, 8)
		return 3;//0 3
	break;
	case 2601://(0,10) (2, 9)
		return 0;//0 0
	break;
	case 2602://(0,10) (2, 10)
		return 3;//0 3
	break;
	case 2603://(0,10) (2, 11)
		return 3;//0 3
	break;
	case 2604://(0,10) (2, 12)
		return 3;//0 3
	break;
	case 2605://(0,10) (2, 13)
		return 3;//0 3
	break;
	case 2606://(0,10) (2, 14)
		return 3;//0 3
	break;
	case 2607://(0,10) (2, 15)
		return 3;//0 3
	break;
	case 2608://(0,10) (3, 0)
		return 0;//0 0
	break;
	case 2609://(0,10) (3, 1)
		return 0;//0 0
	break;
	case 2610://(0,10) (3, 2)
		return 0;//0 0
	break;
	case 2611://(0,10) (3, 3)
		return 3;//0 3
	break;
	case 2612://(0,10) (3, 4)
		return 3;//0 3
	break;
	case 2613://(0,10) (3, 5)
		return 3;//0 3
	break;
	case 2614://(0,10) (3, 6)
		return 3;//0 3
	break;
	case 2615://(0,10) (3, 7)
		return 3;//0 3
	break;
	case 2616://(0,10) (3, 8)
		return 3;//0 3
	break;
	case 2617://(0,10) (3, 9)
		return 0;//0 0
	break;
	case 2618://(0,10) (3, 10)
		return 3;//0 3
	break;
	case 2619://(0,10) (3, 11)
		return 3;//0 3
	break;
	case 2620://(0,10) (3, 12)
		return 3;//0 3
	break;
	case 2621://(0,10) (3, 13)
		return 3;//0 3
	break;
	case 2622://(0,10) (3, 14)
		return 3;//0 3
	break;
	case 2623://(0,10) (3, 15)
		return 3;//0 3
	break;
	case 2624://(0,10) (4, 0)
		return 0;//0 0
	break;
	case 2625://(0,10) (4, 1)
		return 0;//0 0
	break;
	case 2626://(0,10) (4, 2)
		return 0;//0 0
	break;
	case 2627://(0,10) (4, 3)
		return 3;//0 3
	break;
	case 2628://(0,10) (4, 4)
		return 3;//0 3
	break;
	case 2629://(0,10) (4, 5)
		return 3;//0 3
	break;
	case 2630://(0,10) (4, 6)
		return 3;//0 3
	break;
	case 2631://(0,10) (4, 7)
		return 3;//0 3
	break;
	case 2632://(0,10) (4, 8)
		return 3;//0 3
	break;
	case 2633://(0,10) (4, 9)
		return 0;//0 0
	break;
	case 2634://(0,10) (4, 10)
		return 3;//0 3
	break;
	case 2635://(0,10) (4, 11)
		return 3;//0 3
	break;
	case 2636://(0,10) (4, 12)
		return 3;//0 3
	break;
	case 2637://(0,10) (4, 13)
		return 3;//0 3
	break;
	case 2638://(0,10) (4, 14)
		return 3;//0 3
	break;
	case 2639://(0,10) (4, 15)
		return 3;//0 3
	break;
	case 2640://(0,10) (5, 0)
		return 0;//0 0
	break;
	case 2641://(0,10) (5, 1)
		return 0;//0 0
	break;
	case 2642://(0,10) (5, 2)
		return 0;//0 0
	break;
	case 2643://(0,10) (5, 3)
		return 3;//0 3
	break;
	case 2644://(0,10) (5, 4)
		return 3;//0 3
	break;
	case 2645://(0,10) (5, 5)
		return 3;//0 3
	break;
	case 2646://(0,10) (5, 6)
		return 3;//0 3
	break;
	case 2647://(0,10) (5, 7)
		return 3;//0 3
	break;
	case 2648://(0,10) (5, 8)
		return 3;//0 3
	break;
	case 2649://(0,10) (5, 9)
		return 0;//0 0
	break;
	case 2650://(0,10) (5, 10)
		return 3;//0 3
	break;
	case 2651://(0,10) (5, 11)
		return 3;//0 3
	break;
	case 2652://(0,10) (5, 12)
		return 3;//0 3
	break;
	case 2653://(0,10) (5, 13)
		return 3;//0 3
	break;
	case 2654://(0,10) (5, 14)
		return 3;//0 3
	break;
	case 2655://(0,10) (5, 15)
		return 3;//0 3
	break;
	case 2656://(0,10) (6, 0)
		return 0;//0 0
	break;
	case 2657://(0,10) (6, 1)
		return 0;//0 0
	break;
	case 2658://(0,10) (6, 2)
		return 0;//0 0
	break;
	case 2659://(0,10) (6, 3)
		return 3;//0 3
	break;
	case 2660://(0,10) (6, 4)
		return 3;//0 3
	break;
	case 2661://(0,10) (6, 5)
		return 3;//0 3
	break;
	case 2662://(0,10) (6, 6)
		return 3;//0 3
	break;
	case 2663://(0,10) (6, 7)
		return 3;//0 3
	break;
	case 2664://(0,10) (6, 8)
		return 3;//0 3
	break;
	case 2665://(0,10) (6, 9)
		return 0;//0 0
	break;
	case 2666://(0,10) (6, 10)
		return 3;//0 3
	break;
	case 2667://(0,10) (6, 11)
		return 3;//0 3
	break;
	case 2668://(0,10) (6, 12)
		return 3;//0 3
	break;
	case 2669://(0,10) (6, 13)
		return 3;//0 3
	break;
	case 2670://(0,10) (6, 14)
		return 3;//0 3
	break;
	case 2671://(0,10) (6, 15)
		return 3;//0 3
	break;
	case 2672://(0,10) (7, 0)
		return 0;//0 0
	break;
	case 2673://(0,10) (7, 1)
		return 0;//0 0
	break;
	case 2674://(0,10) (7, 2)
		return 0;//0 0
	break;
	case 2675://(0,10) (7, 3)
		return 3;//0 3
	break;
	case 2676://(0,10) (7, 4)
		return 3;//0 3
	break;
	case 2677://(0,10) (7, 5)
		return 3;//0 3
	break;
	case 2678://(0,10) (7, 6)
		return 3;//0 3
	break;
	case 2679://(0,10) (7, 7)
		return 3;//0 3
	break;
	case 2680://(0,10) (7, 8)
		return 3;//0 3
	break;
	case 2681://(0,10) (7, 9)
		return 0;//0 0
	break;
	case 2682://(0,10) (7, 10)
		return 3;//0 3
	break;
	case 2683://(0,10) (7, 11)
		return 3;//0 3
	break;
	case 2684://(0,10) (7, 12)
		return 3;//0 3
	break;
	case 2685://(0,10) (7, 13)
		return 3;//0 3
	break;
	case 2686://(0,10) (7, 14)
		return 3;//0 3
	break;
	case 2687://(0,10) (7, 15)
		return 3;//0 3
	break;
	case 2688://(0,10) (8, 0)
		return 0;//0 0
	break;
	case 2689://(0,10) (8, 1)
		return 0;//0 0
	break;
	case 2690://(0,10) (8, 2)
		return 0;//0 0
	break;
	case 2691://(0,10) (8, 3)
		return 3;//0 3
	break;
	case 2692://(0,10) (8, 4)
		return 3;//0 3
	break;
	case 2693://(0,10) (8, 5)
		return 3;//0 3
	break;
	case 2694://(0,10) (8, 6)
		return 3;//0 3
	break;
	case 2695://(0,10) (8, 7)
		return 3;//0 3
	break;
	case 2696://(0,10) (8, 8)
		return 3;//0 3
	break;
	case 2697://(0,10) (8, 9)
		return 0;//0 0
	break;
	case 2698://(0,10) (8, 10)
		return 3;//0 3
	break;
	case 2699://(0,10) (8, 11)
		return 3;//0 3
	break;
	case 2700://(0,10) (8, 12)
		return 3;//0 3
	break;
	case 2701://(0,10) (8, 13)
		return 3;//0 3
	break;
	case 2702://(0,10) (8, 14)
		return 3;//0 3
	break;
	case 2703://(0,10) (8, 15)
		return 3;//0 3
	break;
	case 2704://(0,10) (9, 0)
		return 0;//0 0
	break;
	case 2705://(0,10) (9, 1)
		return 0;//0 0
	break;
	case 2706://(0,10) (9, 2)
		return 0;//0 0
	break;
	case 2707://(0,10) (9, 3)
		return 3;//0 3
	break;
	case 2708://(0,10) (9, 4)
		return 3;//0 3
	break;
	case 2709://(0,10) (9, 5)
		return 3;//0 3
	break;
	case 2710://(0,10) (9, 6)
		return 3;//0 3
	break;
	case 2711://(0,10) (9, 7)
		return 3;//0 3
	break;
	case 2712://(0,10) (9, 8)
		return 3;//0 3
	break;
	case 2713://(0,10) (9, 9)
		return 0;//0 0
	break;
	case 2714://(0,10) (9, 10)
		return 3;//0 3
	break;
	case 2715://(0,10) (9, 11)
		return 3;//0 3
	break;
	case 2716://(0,10) (9, 12)
		return 3;//0 3
	break;
	case 2717://(0,10) (9, 13)
		return 3;//0 3
	break;
	case 2718://(0,10) (9, 14)
		return 3;//0 3
	break;
	case 2719://(0,10) (9, 15)
		return 3;//0 3
	break;
	case 2720://(0,10) (10, 0)
		return 0;//0 0
	break;
	case 2721://(0,10) (10, 1)
		return 0;//0 0
	break;
	case 2722://(0,10) (10, 2)
		return 0;//0 0
	break;
	case 2723://(0,10) (10, 3)
		return 3;//0 3
	break;
	case 2724://(0,10) (10, 4)
		return 3;//0 3
	break;
	case 2725://(0,10) (10, 5)
		return 3;//0 3
	break;
	case 2726://(0,10) (10, 6)
		return 3;//0 3
	break;
	case 2727://(0,10) (10, 7)
		return 3;//0 3
	break;
	case 2728://(0,10) (10, 8)
		return 3;//0 3
	break;
	case 2729://(0,10) (10, 9)
		return 0;//0 0
	break;
	case 2730://(0,10) (10, 10)
		return 3;//0 3
	break;
	case 2731://(0,10) (10, 11)
		return 3;//0 3
	break;
	case 2732://(0,10) (10, 12)
		return 3;//0 3
	break;
	case 2733://(0,10) (10, 13)
		return 3;//0 3
	break;
	case 2734://(0,10) (10, 14)
		return 3;//0 3
	break;
	case 2735://(0,10) (10, 15)
		return 3;//0 3
	break;
	case 2736://(0,10) (11, 0)
		return 0;//0 0
	break;
	case 2737://(0,10) (11, 1)
		return 0;//0 0
	break;
	case 2738://(0,10) (11, 2)
		return 0;//0 0
	break;
	case 2739://(0,10) (11, 3)
		return 3;//0 3
	break;
	case 2740://(0,10) (11, 4)
		return 3;//0 3
	break;
	case 2741://(0,10) (11, 5)
		return 3;//0 3
	break;
	case 2742://(0,10) (11, 6)
		return 3;//0 3
	break;
	case 2743://(0,10) (11, 7)
		return 3;//0 3
	break;
	case 2744://(0,10) (11, 8)
		return 3;//0 3
	break;
	case 2745://(0,10) (11, 9)
		return 0;//0 0
	break;
	case 2746://(0,10) (11, 10)
		return 3;//0 3
	break;
	case 2747://(0,10) (11, 11)
		return 3;//0 3
	break;
	case 2748://(0,10) (11, 12)
		return 3;//0 3
	break;
	case 2749://(0,10) (11, 13)
		return 3;//0 3
	break;
	case 2750://(0,10) (11, 14)
		return 3;//0 3
	break;
	case 2751://(0,10) (11, 15)
		return 3;//0 3
	break;
	case 2752://(0,10) (12, 0)
		return 0;//0 0
	break;
	case 2753://(0,10) (12, 1)
		return 0;//0 0
	break;
	case 2754://(0,10) (12, 2)
		return 0;//0 0
	break;
	case 2755://(0,10) (12, 3)
		return 3;//0 3
	break;
	case 2756://(0,10) (12, 4)
		return 3;//0 3
	break;
	case 2757://(0,10) (12, 5)
		return 3;//0 3
	break;
	case 2758://(0,10) (12, 6)
		return 3;//0 3
	break;
	case 2759://(0,10) (12, 7)
		return 3;//0 3
	break;
	case 2760://(0,10) (12, 8)
		return 3;//0 3
	break;
	case 2761://(0,10) (12, 9)
		return 0;//0 0
	break;
	case 2762://(0,10) (12, 10)
		return 3;//0 3
	break;
	case 2763://(0,10) (12, 11)
		return 3;//0 3
	break;
	case 2764://(0,10) (12, 12)
		return 3;//0 3
	break;
	case 2765://(0,10) (12, 13)
		return 3;//0 3
	break;
	case 2766://(0,10) (12, 14)
		return 3;//0 3
	break;
	case 2767://(0,10) (12, 15)
		return 3;//0 3
	break;
	case 2768://(0,10) (13, 0)
		return 0;//0 0
	break;
	case 2769://(0,10) (13, 1)
		return 0;//0 0
	break;
	case 2770://(0,10) (13, 2)
		return 0;//0 0
	break;
	case 2771://(0,10) (13, 3)
		return 3;//0 3
	break;
	case 2772://(0,10) (13, 4)
		return 3;//0 3
	break;
	case 2773://(0,10) (13, 5)
		return 3;//0 3
	break;
	case 2774://(0,10) (13, 6)
		return 3;//0 3
	break;
	case 2775://(0,10) (13, 7)
		return 3;//0 3
	break;
	case 2776://(0,10) (13, 8)
		return 3;//0 3
	break;
	case 2777://(0,10) (13, 9)
		return 0;//0 0
	break;
	case 2778://(0,10) (13, 10)
		return 3;//0 3
	break;
	case 2779://(0,10) (13, 11)
		return 3;//0 3
	break;
	case 2780://(0,10) (13, 12)
		return 3;//0 3
	break;
	case 2781://(0,10) (13, 13)
		return 3;//0 3
	break;
	case 2782://(0,10) (13, 14)
		return 3;//0 3
	break;
	case 2783://(0,10) (13, 15)
		return 3;//0 3
	break;
	case 2784://(0,10) (14, 0)
		return 0;//0 0
	break;
	case 2785://(0,10) (14, 1)
		return 0;//0 0
	break;
	case 2786://(0,10) (14, 2)
		return 0;//0 0
	break;
	case 2787://(0,10) (14, 3)
		return 3;//0 3
	break;
	case 2788://(0,10) (14, 4)
		return 3;//0 3
	break;
	case 2789://(0,10) (14, 5)
		return 3;//0 3
	break;
	case 2790://(0,10) (14, 6)
		return 3;//0 3
	break;
	case 2791://(0,10) (14, 7)
		return 3;//0 3
	break;
	case 2792://(0,10) (14, 8)
		return 3;//0 3
	break;
	case 2793://(0,10) (14, 9)
		return 0;//0 0
	break;
	case 2794://(0,10) (14, 10)
		return 3;//0 3
	break;
	case 2795://(0,10) (14, 11)
		return 3;//0 3
	break;
	case 2796://(0,10) (14, 12)
		return 3;//0 3
	break;
	case 2797://(0,10) (14, 13)
		return 3;//0 3
	break;
	case 2798://(0,10) (14, 14)
		return 3;//0 3
	break;
	case 2799://(0,10) (14, 15)
		return 3;//0 3
	break;
	case 2800://(0,10) (15, 0)
		return 0;//0 0
	break;
	case 2801://(0,10) (15, 1)
		return 0;//0 0
	break;
	case 2802://(0,10) (15, 2)
		return 0;//0 0
	break;
	case 2803://(0,10) (15, 3)
		return 3;//0 3
	break;
	case 2804://(0,10) (15, 4)
		return 3;//0 3
	break;
	case 2805://(0,10) (15, 5)
		return 3;//0 3
	break;
	case 2806://(0,10) (15, 6)
		return 3;//0 3
	break;
	case 2807://(0,10) (15, 7)
		return 3;//0 3
	break;
	case 2808://(0,10) (15, 8)
		return 3;//0 3
	break;
	case 2809://(0,10) (15, 9)
		return 0;//0 0
	break;
	case 2810://(0,10) (15, 10)
		return 3;//0 3
	break;
	case 2811://(0,10) (15, 11)
		return 3;//0 3
	break;
	case 2812://(0,10) (15, 12)
		return 3;//0 3
	break;
	case 2813://(0,10) (15, 13)
		return 3;//0 3
	break;
	case 2814://(0,10) (15, 14)
		return 3;//0 3
	break;
	case 2815://(0,10) (15, 15)
		return 3;//0 3
	break;
	case 2816://(0,11) (0, 0)
		return 0;//0 0
	break;
	case 2817://(0,11) (0, 1)
		return 2;//0 2
	break;
	case 2818://(0,11) (0, 2)
		return 2;//0 2
	break;
	case 2819://(0,11) (0, 3)
		return 2;//0 2
	break;
	case 2820://(0,11) (0, 4)
		return 0;//0 0
	break;
	case 2821://(0,11) (0, 5)
		return 2;//0 2
	break;
	case 2822://(0,11) (0, 6)
		return 2;//0 2
	break;
	case 2823://(0,11) (0, 7)
		return 2;//0 2
	break;
	case 2824://(0,11) (0, 8)
		return 2;//0 2
	break;
	case 2825://(0,11) (0, 9)
		return 2;//0 2
	break;
	case 2826://(0,11) (0, 10)
		return 2;//0 2
	break;
	case 2827://(0,11) (0, 11)
		return 2;//0 2
	break;
	case 2828://(0,11) (0, 12)
		return 2;//0 2
	break;
	case 2829://(0,11) (0, 13)
		return 2;//0 2
	break;
	case 2830://(0,11) (0, 14)
		return 2;//0 2
	break;
	case 2831://(0,11) (0, 15)
		return 2;//0 2
	break;
	case 2832://(0,11) (1, 0)
		return 0;//0 0
	break;
	case 2833://(0,11) (1, 1)
		return 2;//0 2
	break;
	case 2834://(0,11) (1, 2)
		return 2;//0 2
	break;
	case 2835://(0,11) (1, 3)
		return 2;//0 2
	break;
	case 2836://(0,11) (1, 4)
		return 0;//0 0
	break;
	case 2837://(0,11) (1, 5)
		return 2;//0 2
	break;
	case 2838://(0,11) (1, 6)
		return 2;//0 2
	break;
	case 2839://(0,11) (1, 7)
		return 2;//0 2
	break;
	case 2840://(0,11) (1, 8)
		return 2;//0 2
	break;
	case 2841://(0,11) (1, 9)
		return 2;//0 2
	break;
	case 2842://(0,11) (1, 10)
		return 2;//0 2
	break;
	case 2843://(0,11) (1, 11)
		return 2;//0 2
	break;
	case 2844://(0,11) (1, 12)
		return 2;//0 2
	break;
	case 2845://(0,11) (1, 13)
		return 2;//0 2
	break;
	case 2846://(0,11) (1, 14)
		return 2;//0 2
	break;
	case 2847://(0,11) (1, 15)
		return 2;//0 2
	break;
	case 2848://(0,11) (2, 0)
		return 0;//0 0
	break;
	case 2849://(0,11) (2, 1)
		return 2;//0 2
	break;
	case 2850://(0,11) (2, 2)
		return 2;//0 2
	break;
	case 2851://(0,11) (2, 3)
		return 2;//0 2
	break;
	case 2852://(0,11) (2, 4)
		return 0;//0 0
	break;
	case 2853://(0,11) (2, 5)
		return 2;//0 2
	break;
	case 2854://(0,11) (2, 6)
		return 2;//0 2
	break;
	case 2855://(0,11) (2, 7)
		return 2;//0 2
	break;
	case 2856://(0,11) (2, 8)
		return 2;//0 2
	break;
	case 2857://(0,11) (2, 9)
		return 2;//0 2
	break;
	case 2858://(0,11) (2, 10)
		return 2;//0 2
	break;
	case 2859://(0,11) (2, 11)
		return 2;//0 2
	break;
	case 2860://(0,11) (2, 12)
		return 2;//0 2
	break;
	case 2861://(0,11) (2, 13)
		return 2;//0 2
	break;
	case 2862://(0,11) (2, 14)
		return 2;//0 2
	break;
	case 2863://(0,11) (2, 15)
		return 2;//0 2
	break;
	case 2864://(0,11) (3, 0)
		return 0;//0 0
	break;
	case 2865://(0,11) (3, 1)
		return 2;//0 2
	break;
	case 2866://(0,11) (3, 2)
		return 2;//0 2
	break;
	case 2867://(0,11) (3, 3)
		return 2;//0 2
	break;
	case 2868://(0,11) (3, 4)
		return 0;//0 0
	break;
	case 2869://(0,11) (3, 5)
		return 2;//0 2
	break;
	case 2870://(0,11) (3, 6)
		return 2;//0 2
	break;
	case 2871://(0,11) (3, 7)
		return 2;//0 2
	break;
	case 2872://(0,11) (3, 8)
		return 2;//0 2
	break;
	case 2873://(0,11) (3, 9)
		return 2;//0 2
	break;
	case 2874://(0,11) (3, 10)
		return 2;//0 2
	break;
	case 2875://(0,11) (3, 11)
		return 2;//0 2
	break;
	case 2876://(0,11) (3, 12)
		return 2;//0 2
	break;
	case 2877://(0,11) (3, 13)
		return 2;//0 2
	break;
	case 2878://(0,11) (3, 14)
		return 2;//0 2
	break;
	case 2879://(0,11) (3, 15)
		return 2;//0 2
	break;
	case 2880://(0,11) (4, 0)
		return 0;//0 0
	break;
	case 2881://(0,11) (4, 1)
		return 2;//0 2
	break;
	case 2882://(0,11) (4, 2)
		return 2;//0 2
	break;
	case 2883://(0,11) (4, 3)
		return 2;//0 2
	break;
	case 2884://(0,11) (4, 4)
		return 0;//0 0
	break;
	case 2885://(0,11) (4, 5)
		return 2;//0 2
	break;
	case 2886://(0,11) (4, 6)
		return 2;//0 2
	break;
	case 2887://(0,11) (4, 7)
		return 2;//0 2
	break;
	case 2888://(0,11) (4, 8)
		return 2;//0 2
	break;
	case 2889://(0,11) (4, 9)
		return 2;//0 2
	break;
	case 2890://(0,11) (4, 10)
		return 2;//0 2
	break;
	case 2891://(0,11) (4, 11)
		return 2;//0 2
	break;
	case 2892://(0,11) (4, 12)
		return 2;//0 2
	break;
	case 2893://(0,11) (4, 13)
		return 2;//0 2
	break;
	case 2894://(0,11) (4, 14)
		return 2;//0 2
	break;
	case 2895://(0,11) (4, 15)
		return 2;//0 2
	break;
	case 2896://(0,11) (5, 0)
		return 0;//0 0
	break;
	case 2897://(0,11) (5, 1)
		return 2;//0 2
	break;
	case 2898://(0,11) (5, 2)
		return 2;//0 2
	break;
	case 2899://(0,11) (5, 3)
		return 2;//0 2
	break;
	case 2900://(0,11) (5, 4)
		return 0;//0 0
	break;
	case 2901://(0,11) (5, 5)
		return 2;//0 2
	break;
	case 2902://(0,11) (5, 6)
		return 2;//0 2
	break;
	case 2903://(0,11) (5, 7)
		return 2;//0 2
	break;
	case 2904://(0,11) (5, 8)
		return 2;//0 2
	break;
	case 2905://(0,11) (5, 9)
		return 2;//0 2
	break;
	case 2906://(0,11) (5, 10)
		return 2;//0 2
	break;
	case 2907://(0,11) (5, 11)
		return 2;//0 2
	break;
	case 2908://(0,11) (5, 12)
		return 2;//0 2
	break;
	case 2909://(0,11) (5, 13)
		return 2;//0 2
	break;
	case 2910://(0,11) (5, 14)
		return 2;//0 2
	break;
	case 2911://(0,11) (5, 15)
		return 2;//0 2
	break;
	case 2912://(0,11) (6, 0)
		return 0;//0 0
	break;
	case 2913://(0,11) (6, 1)
		return 2;//0 2
	break;
	case 2914://(0,11) (6, 2)
		return 2;//0 2
	break;
	case 2915://(0,11) (6, 3)
		return 2;//0 2
	break;
	case 2916://(0,11) (6, 4)
		return 0;//0 0
	break;
	case 2917://(0,11) (6, 5)
		return 2;//0 2
	break;
	case 2918://(0,11) (6, 6)
		return 2;//0 2
	break;
	case 2919://(0,11) (6, 7)
		return 2;//0 2
	break;
	case 2920://(0,11) (6, 8)
		return 2;//0 2
	break;
	case 2921://(0,11) (6, 9)
		return 2;//0 2
	break;
	case 2922://(0,11) (6, 10)
		return 2;//0 2
	break;
	case 2923://(0,11) (6, 11)
		return 2;//0 2
	break;
	case 2924://(0,11) (6, 12)
		return 2;//0 2
	break;
	case 2925://(0,11) (6, 13)
		return 2;//0 2
	break;
	case 2926://(0,11) (6, 14)
		return 2;//0 2
	break;
	case 2927://(0,11) (6, 15)
		return 2;//0 2
	break;
	case 2928://(0,11) (7, 0)
		return 0;//0 0
	break;
	case 2929://(0,11) (7, 1)
		return 2;//0 2
	break;
	case 2930://(0,11) (7, 2)
		return 2;//0 2
	break;
	case 2931://(0,11) (7, 3)
		return 2;//0 2
	break;
	case 2932://(0,11) (7, 4)
		return 0;//0 0
	break;
	case 2933://(0,11) (7, 5)
		return 2;//0 2
	break;
	case 2934://(0,11) (7, 6)
		return 2;//0 2
	break;
	case 2935://(0,11) (7, 7)
		return 2;//0 2
	break;
	case 2936://(0,11) (7, 8)
		return 2;//0 2
	break;
	case 2937://(0,11) (7, 9)
		return 2;//0 2
	break;
	case 2938://(0,11) (7, 10)
		return 2;//0 2
	break;
	case 2939://(0,11) (7, 11)
		return 2;//0 2
	break;
	case 2940://(0,11) (7, 12)
		return 2;//0 2
	break;
	case 2941://(0,11) (7, 13)
		return 2;//0 2
	break;
	case 2942://(0,11) (7, 14)
		return 2;//0 2
	break;
	case 2943://(0,11) (7, 15)
		return 2;//0 2
	break;
	case 2944://(0,11) (8, 0)
		return 0;//0 0
	break;
	case 2945://(0,11) (8, 1)
		return 2;//0 2
	break;
	case 2946://(0,11) (8, 2)
		return 2;//0 2
	break;
	case 2947://(0,11) (8, 3)
		return 2;//0 2
	break;
	case 2948://(0,11) (8, 4)
		return 0;//0 0
	break;
	case 2949://(0,11) (8, 5)
		return 2;//0 2
	break;
	case 2950://(0,11) (8, 6)
		return 2;//0 2
	break;
	case 2951://(0,11) (8, 7)
		return 2;//0 2
	break;
	case 2952://(0,11) (8, 8)
		return 2;//0 2
	break;
	case 2953://(0,11) (8, 9)
		return 2;//0 2
	break;
	case 2954://(0,11) (8, 10)
		return 2;//0 2
	break;
	case 2955://(0,11) (8, 11)
		return 2;//0 2
	break;
	case 2956://(0,11) (8, 12)
		return 2;//0 2
	break;
	case 2957://(0,11) (8, 13)
		return 2;//0 2
	break;
	case 2958://(0,11) (8, 14)
		return 2;//0 2
	break;
	case 2959://(0,11) (8, 15)
		return 2;//0 2
	break;
	case 2960://(0,11) (9, 0)
		return 0;//0 0
	break;
	case 2961://(0,11) (9, 1)
		return 2;//0 2
	break;
	case 2962://(0,11) (9, 2)
		return 2;//0 2
	break;
	case 2963://(0,11) (9, 3)
		return 2;//0 2
	break;
	case 2964://(0,11) (9, 4)
		return 0;//0 0
	break;
	case 2965://(0,11) (9, 5)
		return 2;//0 2
	break;
	case 2966://(0,11) (9, 6)
		return 2;//0 2
	break;
	case 2967://(0,11) (9, 7)
		return 2;//0 2
	break;
	case 2968://(0,11) (9, 8)
		return 2;//0 2
	break;
	case 2969://(0,11) (9, 9)
		return 2;//0 2
	break;
	case 2970://(0,11) (9, 10)
		return 2;//0 2
	break;
	case 2971://(0,11) (9, 11)
		return 2;//0 2
	break;
	case 2972://(0,11) (9, 12)
		return 2;//0 2
	break;
	case 2973://(0,11) (9, 13)
		return 2;//0 2
	break;
	case 2974://(0,11) (9, 14)
		return 2;//0 2
	break;
	case 2975://(0,11) (9, 15)
		return 2;//0 2
	break;
	case 2976://(0,11) (10, 0)
		return 0;//0 0
	break;
	case 2977://(0,11) (10, 1)
		return 2;//0 2
	break;
	case 2978://(0,11) (10, 2)
		return 2;//0 2
	break;
	case 2979://(0,11) (10, 3)
		return 2;//0 2
	break;
	case 2980://(0,11) (10, 4)
		return 0;//0 0
	break;
	case 2981://(0,11) (10, 5)
		return 2;//0 2
	break;
	case 2982://(0,11) (10, 6)
		return 2;//0 2
	break;
	case 2983://(0,11) (10, 7)
		return 2;//0 2
	break;
	case 2984://(0,11) (10, 8)
		return 2;//0 2
	break;
	case 2985://(0,11) (10, 9)
		return 2;//0 2
	break;
	case 2986://(0,11) (10, 10)
		return 2;//0 2
	break;
	case 2987://(0,11) (10, 11)
		return 2;//0 2
	break;
	case 2988://(0,11) (10, 12)
		return 2;//0 2
	break;
	case 2989://(0,11) (10, 13)
		return 2;//0 2
	break;
	case 2990://(0,11) (10, 14)
		return 2;//0 2
	break;
	case 2991://(0,11) (10, 15)
		return 2;//0 2
	break;
	case 2992://(0,11) (11, 0)
		return 0;//0 0
	break;
	case 2993://(0,11) (11, 1)
		return 2;//0 2
	break;
	case 2994://(0,11) (11, 2)
		return 2;//0 2
	break;
	case 2995://(0,11) (11, 3)
		return 2;//0 2
	break;
	case 2996://(0,11) (11, 4)
		return 0;//0 0
	break;
	case 2997://(0,11) (11, 5)
		return 2;//0 2
	break;
	case 2998://(0,11) (11, 6)
		return 2;//0 2
	break;
	case 2999://(0,11) (11, 7)
		return 2;//0 2
	break;
	case 3000://(0,11) (11, 8)
		return 2;//0 2
	break;
	case 3001://(0,11) (11, 9)
		return 2;//0 2
	break;
	case 3002://(0,11) (11, 10)
		return 2;//0 2
	break;
	case 3003://(0,11) (11, 11)
		return 2;//0 2
	break;
	case 3004://(0,11) (11, 12)
		return 2;//0 2
	break;
	case 3005://(0,11) (11, 13)
		return 2;//0 2
	break;
	case 3006://(0,11) (11, 14)
		return 2;//0 2
	break;
	case 3007://(0,11) (11, 15)
		return 2;//0 2
	break;
	case 3008://(0,11) (12, 0)
		return 0;//0 0
	break;
	case 3009://(0,11) (12, 1)
		return 2;//0 2
	break;
	case 3010://(0,11) (12, 2)
		return 2;//0 2
	break;
	case 3011://(0,11) (12, 3)
		return 2;//0 2
	break;
	case 3012://(0,11) (12, 4)
		return 0;//0 0
	break;
	case 3013://(0,11) (12, 5)
		return 2;//0 2
	break;
	case 3014://(0,11) (12, 6)
		return 2;//0 2
	break;
	case 3015://(0,11) (12, 7)
		return 2;//0 2
	break;
	case 3016://(0,11) (12, 8)
		return 2;//0 2
	break;
	case 3017://(0,11) (12, 9)
		return 2;//0 2
	break;
	case 3018://(0,11) (12, 10)
		return 2;//0 2
	break;
	case 3019://(0,11) (12, 11)
		return 2;//0 2
	break;
	case 3020://(0,11) (12, 12)
		return 2;//0 2
	break;
	case 3021://(0,11) (12, 13)
		return 2;//0 2
	break;
	case 3022://(0,11) (12, 14)
		return 2;//0 2
	break;
	case 3023://(0,11) (12, 15)
		return 2;//0 2
	break;
	case 3024://(0,11) (13, 0)
		return 0;//0 0
	break;
	case 3025://(0,11) (13, 1)
		return 2;//0 2
	break;
	case 3026://(0,11) (13, 2)
		return 2;//0 2
	break;
	case 3027://(0,11) (13, 3)
		return 2;//0 2
	break;
	case 3028://(0,11) (13, 4)
		return 0;//0 0
	break;
	case 3029://(0,11) (13, 5)
		return 2;//0 2
	break;
	case 3030://(0,11) (13, 6)
		return 2;//0 2
	break;
	case 3031://(0,11) (13, 7)
		return 2;//0 2
	break;
	case 3032://(0,11) (13, 8)
		return 2;//0 2
	break;
	case 3033://(0,11) (13, 9)
		return 2;//0 2
	break;
	case 3034://(0,11) (13, 10)
		return 2;//0 2
	break;
	case 3035://(0,11) (13, 11)
		return 2;//0 2
	break;
	case 3036://(0,11) (13, 12)
		return 2;//0 2
	break;
	case 3037://(0,11) (13, 13)
		return 2;//0 2
	break;
	case 3038://(0,11) (13, 14)
		return 2;//0 2
	break;
	case 3039://(0,11) (13, 15)
		return 2;//0 2
	break;
	case 3040://(0,11) (14, 0)
		return 0;//0 0
	break;
	case 3041://(0,11) (14, 1)
		return 2;//0 2
	break;
	case 3042://(0,11) (14, 2)
		return 2;//0 2
	break;
	case 3043://(0,11) (14, 3)
		return 2;//0 2
	break;
	case 3044://(0,11) (14, 4)
		return 0;//0 0
	break;
	case 3045://(0,11) (14, 5)
		return 2;//0 2
	break;
	case 3046://(0,11) (14, 6)
		return 2;//0 2
	break;
	case 3047://(0,11) (14, 7)
		return 2;//0 2
	break;
	case 3048://(0,11) (14, 8)
		return 2;//0 2
	break;
	case 3049://(0,11) (14, 9)
		return 2;//0 2
	break;
	case 3050://(0,11) (14, 10)
		return 2;//0 2
	break;
	case 3051://(0,11) (14, 11)
		return 2;//0 2
	break;
	case 3052://(0,11) (14, 12)
		return 2;//0 2
	break;
	case 3053://(0,11) (14, 13)
		return 2;//0 2
	break;
	case 3054://(0,11) (14, 14)
		return 2;//0 2
	break;
	case 3055://(0,11) (14, 15)
		return 2;//0 2
	break;
	case 3056://(0,11) (15, 0)
		return 0;//0 0
	break;
	case 3057://(0,11) (15, 1)
		return 2;//0 2
	break;
	case 3058://(0,11) (15, 2)
		return 2;//0 2
	break;
	case 3059://(0,11) (15, 3)
		return 2;//0 2
	break;
	case 3060://(0,11) (15, 4)
		return 0;//0 0
	break;
	case 3061://(0,11) (15, 5)
		return 2;//0 2
	break;
	case 3062://(0,11) (15, 6)
		return 2;//0 2
	break;
	case 3063://(0,11) (15, 7)
		return 2;//0 2
	break;
	case 3064://(0,11) (15, 8)
		return 2;//0 2
	break;
	case 3065://(0,11) (15, 9)
		return 2;//0 2
	break;
	case 3066://(0,11) (15, 10)
		return 2;//0 2
	break;
	case 3067://(0,11) (15, 11)
		return 2;//0 2
	break;
	case 3068://(0,11) (15, 12)
		return 2;//0 2
	break;
	case 3069://(0,11) (15, 13)
		return 2;//0 2
	break;
	case 3070://(0,11) (15, 14)
		return 2;//0 2
	break;
	case 3071://(0,11) (15, 15)
		return 2;//0 2
	break;
	case 3072://(0,12) (0, 0)
		return 0;//0 0
	break;
	case 3073://(0,12) (0, 1)
		return 0;//0 0
	break;
	case 3074://(0,12) (0, 2)
		return 2;//0 2
	break;
	case 3075://(0,12) (0, 3)
		return 2;//0 2
	break;
	case 3076://(0,12) (0, 4)
		return 2;//0 2
	break;
	case 3077://(0,12) (0, 5)
		return 2;//0 2
	break;
	case 3078://(0,12) (0, 6)
		return 2;//0 2
	break;
	case 3079://(0,12) (0, 7)
		return 2;//0 2
	break;
	case 3080://(0,12) (0, 8)
		return 2;//0 2
	break;
	case 3081://(0,12) (0, 9)
		return 2;//0 2
	break;
	case 3082://(0,12) (0, 10)
		return 2;//0 2
	break;
	case 3083://(0,12) (0, 11)
		return 2;//0 2
	break;
	case 3084://(0,12) (0, 12)
		return 2;//0 2
	break;
	case 3085://(0,12) (0, 13)
		return 2;//0 2
	break;
	case 3086://(0,12) (0, 14)
		return 2;//0 2
	break;
	case 3087://(0,12) (0, 15)
		return 2;//0 2
	break;
	case 3088://(0,12) (1, 0)
		return 0;//0 0
	break;
	case 3089://(0,12) (1, 1)
		return 0;//0 0
	break;
	case 3090://(0,12) (1, 2)
		return 2;//0 2
	break;
	case 3091://(0,12) (1, 3)
		return 2;//0 2
	break;
	case 3092://(0,12) (1, 4)
		return 2;//0 2
	break;
	case 3093://(0,12) (1, 5)
		return 2;//0 2
	break;
	case 3094://(0,12) (1, 6)
		return 2;//0 2
	break;
	case 3095://(0,12) (1, 7)
		return 2;//0 2
	break;
	case 3096://(0,12) (1, 8)
		return 2;//0 2
	break;
	case 3097://(0,12) (1, 9)
		return 2;//0 2
	break;
	case 3098://(0,12) (1, 10)
		return 2;//0 2
	break;
	case 3099://(0,12) (1, 11)
		return 2;//0 2
	break;
	case 3100://(0,12) (1, 12)
		return 2;//0 2
	break;
	case 3101://(0,12) (1, 13)
		return 2;//0 2
	break;
	case 3102://(0,12) (1, 14)
		return 2;//0 2
	break;
	case 3103://(0,12) (1, 15)
		return 2;//0 2
	break;
	case 3104://(0,12) (2, 0)
		return 0;//0 0
	break;
	case 3105://(0,12) (2, 1)
		return 0;//0 0
	break;
	case 3106://(0,12) (2, 2)
		return 2;//0 2
	break;
	case 3107://(0,12) (2, 3)
		return 2;//0 2
	break;
	case 3108://(0,12) (2, 4)
		return 2;//0 2
	break;
	case 3109://(0,12) (2, 5)
		return 2;//0 2
	break;
	case 3110://(0,12) (2, 6)
		return 2;//0 2
	break;
	case 3111://(0,12) (2, 7)
		return 2;//0 2
	break;
	case 3112://(0,12) (2, 8)
		return 2;//0 2
	break;
	case 3113://(0,12) (2, 9)
		return 2;//0 2
	break;
	case 3114://(0,12) (2, 10)
		return 2;//0 2
	break;
	case 3115://(0,12) (2, 11)
		return 2;//0 2
	break;
	case 3116://(0,12) (2, 12)
		return 2;//0 2
	break;
	case 3117://(0,12) (2, 13)
		return 2;//0 2
	break;
	case 3118://(0,12) (2, 14)
		return 2;//0 2
	break;
	case 3119://(0,12) (2, 15)
		return 2;//0 2
	break;
	case 3120://(0,12) (3, 0)
		return 0;//0 0
	break;
	case 3121://(0,12) (3, 1)
		return 0;//0 0
	break;
	case 3122://(0,12) (3, 2)
		return 2;//0 2
	break;
	case 3123://(0,12) (3, 3)
		return 2;//0 2
	break;
	case 3124://(0,12) (3, 4)
		return 2;//0 2
	break;
	case 3125://(0,12) (3, 5)
		return 2;//0 2
	break;
	case 3126://(0,12) (3, 6)
		return 2;//0 2
	break;
	case 3127://(0,12) (3, 7)
		return 2;//0 2
	break;
	case 3128://(0,12) (3, 8)
		return 2;//0 2
	break;
	case 3129://(0,12) (3, 9)
		return 2;//0 2
	break;
	case 3130://(0,12) (3, 10)
		return 2;//0 2
	break;
	case 3131://(0,12) (3, 11)
		return 2;//0 2
	break;
	case 3132://(0,12) (3, 12)
		return 2;//0 2
	break;
	case 3133://(0,12) (3, 13)
		return 2;//0 2
	break;
	case 3134://(0,12) (3, 14)
		return 2;//0 2
	break;
	case 3135://(0,12) (3, 15)
		return 2;//0 2
	break;
	case 3136://(0,12) (4, 0)
		return 0;//0 0
	break;
	case 3137://(0,12) (4, 1)
		return 0;//0 0
	break;
	case 3138://(0,12) (4, 2)
		return 2;//0 2
	break;
	case 3139://(0,12) (4, 3)
		return 2;//0 2
	break;
	case 3140://(0,12) (4, 4)
		return 2;//0 2
	break;
	case 3141://(0,12) (4, 5)
		return 2;//0 2
	break;
	case 3142://(0,12) (4, 6)
		return 2;//0 2
	break;
	case 3143://(0,12) (4, 7)
		return 2;//0 2
	break;
	case 3144://(0,12) (4, 8)
		return 2;//0 2
	break;
	case 3145://(0,12) (4, 9)
		return 2;//0 2
	break;
	case 3146://(0,12) (4, 10)
		return 2;//0 2
	break;
	case 3147://(0,12) (4, 11)
		return 2;//0 2
	break;
	case 3148://(0,12) (4, 12)
		return 2;//0 2
	break;
	case 3149://(0,12) (4, 13)
		return 2;//0 2
	break;
	case 3150://(0,12) (4, 14)
		return 2;//0 2
	break;
	case 3151://(0,12) (4, 15)
		return 2;//0 2
	break;
	case 3152://(0,12) (5, 0)
		return 0;//0 0
	break;
	case 3153://(0,12) (5, 1)
		return 0;//0 0
	break;
	case 3154://(0,12) (5, 2)
		return 2;//0 2
	break;
	case 3155://(0,12) (5, 3)
		return 2;//0 2
	break;
	case 3156://(0,12) (5, 4)
		return 2;//0 2
	break;
	case 3157://(0,12) (5, 5)
		return 2;//0 2
	break;
	case 3158://(0,12) (5, 6)
		return 2;//0 2
	break;
	case 3159://(0,12) (5, 7)
		return 2;//0 2
	break;
	case 3160://(0,12) (5, 8)
		return 2;//0 2
	break;
	case 3161://(0,12) (5, 9)
		return 2;//0 2
	break;
	case 3162://(0,12) (5, 10)
		return 2;//0 2
	break;
	case 3163://(0,12) (5, 11)
		return 2;//0 2
	break;
	case 3164://(0,12) (5, 12)
		return 2;//0 2
	break;
	case 3165://(0,12) (5, 13)
		return 2;//0 2
	break;
	case 3166://(0,12) (5, 14)
		return 2;//0 2
	break;
	case 3167://(0,12) (5, 15)
		return 2;//0 2
	break;
	case 3168://(0,12) (6, 0)
		return 0;//0 0
	break;
	case 3169://(0,12) (6, 1)
		return 0;//0 0
	break;
	case 3170://(0,12) (6, 2)
		return 2;//0 2
	break;
	case 3171://(0,12) (6, 3)
		return 2;//0 2
	break;
	case 3172://(0,12) (6, 4)
		return 2;//0 2
	break;
	case 3173://(0,12) (6, 5)
		return 2;//0 2
	break;
	case 3174://(0,12) (6, 6)
		return 2;//0 2
	break;
	case 3175://(0,12) (6, 7)
		return 2;//0 2
	break;
	case 3176://(0,12) (6, 8)
		return 2;//0 2
	break;
	case 3177://(0,12) (6, 9)
		return 2;//0 2
	break;
	case 3178://(0,12) (6, 10)
		return 2;//0 2
	break;
	case 3179://(0,12) (6, 11)
		return 2;//0 2
	break;
	case 3180://(0,12) (6, 12)
		return 2;//0 2
	break;
	case 3181://(0,12) (6, 13)
		return 2;//0 2
	break;
	case 3182://(0,12) (6, 14)
		return 2;//0 2
	break;
	case 3183://(0,12) (6, 15)
		return 2;//0 2
	break;
	case 3184://(0,12) (7, 0)
		return 0;//0 0
	break;
	case 3185://(0,12) (7, 1)
		return 0;//0 0
	break;
	case 3186://(0,12) (7, 2)
		return 2;//0 2
	break;
	case 3187://(0,12) (7, 3)
		return 2;//0 2
	break;
	case 3188://(0,12) (7, 4)
		return 2;//0 2
	break;
	case 3189://(0,12) (7, 5)
		return 2;//0 2
	break;
	case 3190://(0,12) (7, 6)
		return 2;//0 2
	break;
	case 3191://(0,12) (7, 7)
		return 2;//0 2
	break;
	case 3192://(0,12) (7, 8)
		return 2;//0 2
	break;
	case 3193://(0,12) (7, 9)
		return 2;//0 2
	break;
	case 3194://(0,12) (7, 10)
		return 2;//0 2
	break;
	case 3195://(0,12) (7, 11)
		return 2;//0 2
	break;
	case 3196://(0,12) (7, 12)
		return 2;//0 2
	break;
	case 3197://(0,12) (7, 13)
		return 2;//0 2
	break;
	case 3198://(0,12) (7, 14)
		return 2;//0 2
	break;
	case 3199://(0,12) (7, 15)
		return 2;//0 2
	break;
	case 3200://(0,12) (8, 0)
		return 0;//0 0
	break;
	case 3201://(0,12) (8, 1)
		return 0;//0 0
	break;
	case 3202://(0,12) (8, 2)
		return 2;//0 2
	break;
	case 3203://(0,12) (8, 3)
		return 2;//0 2
	break;
	case 3204://(0,12) (8, 4)
		return 2;//0 2
	break;
	case 3205://(0,12) (8, 5)
		return 2;//0 2
	break;
	case 3206://(0,12) (8, 6)
		return 2;//0 2
	break;
	case 3207://(0,12) (8, 7)
		return 2;//0 2
	break;
	case 3208://(0,12) (8, 8)
		return 2;//0 2
	break;
	case 3209://(0,12) (8, 9)
		return 2;//0 2
	break;
	case 3210://(0,12) (8, 10)
		return 2;//0 2
	break;
	case 3211://(0,12) (8, 11)
		return 2;//0 2
	break;
	case 3212://(0,12) (8, 12)
		return 2;//0 2
	break;
	case 3213://(0,12) (8, 13)
		return 2;//0 2
	break;
	case 3214://(0,12) (8, 14)
		return 2;//0 2
	break;
	case 3215://(0,12) (8, 15)
		return 2;//0 2
	break;
	case 3216://(0,12) (9, 0)
		return 0;//0 0
	break;
	case 3217://(0,12) (9, 1)
		return 0;//0 0
	break;
	case 3218://(0,12) (9, 2)
		return 2;//0 2
	break;
	case 3219://(0,12) (9, 3)
		return 2;//0 2
	break;
	case 3220://(0,12) (9, 4)
		return 2;//0 2
	break;
	case 3221://(0,12) (9, 5)
		return 2;//0 2
	break;
	case 3222://(0,12) (9, 6)
		return 2;//0 2
	break;
	case 3223://(0,12) (9, 7)
		return 2;//0 2
	break;
	case 3224://(0,12) (9, 8)
		return 2;//0 2
	break;
	case 3225://(0,12) (9, 9)
		return 2;//0 2
	break;
	case 3226://(0,12) (9, 10)
		return 2;//0 2
	break;
	case 3227://(0,12) (9, 11)
		return 2;//0 2
	break;
	case 3228://(0,12) (9, 12)
		return 2;//0 2
	break;
	case 3229://(0,12) (9, 13)
		return 2;//0 2
	break;
	case 3230://(0,12) (9, 14)
		return 2;//0 2
	break;
	case 3231://(0,12) (9, 15)
		return 2;//0 2
	break;
	case 3232://(0,12) (10, 0)
		return 0;//0 0
	break;
	case 3233://(0,12) (10, 1)
		return 0;//0 0
	break;
	case 3234://(0,12) (10, 2)
		return 2;//0 2
	break;
	case 3235://(0,12) (10, 3)
		return 2;//0 2
	break;
	case 3236://(0,12) (10, 4)
		return 2;//0 2
	break;
	case 3237://(0,12) (10, 5)
		return 2;//0 2
	break;
	case 3238://(0,12) (10, 6)
		return 2;//0 2
	break;
	case 3239://(0,12) (10, 7)
		return 2;//0 2
	break;
	case 3240://(0,12) (10, 8)
		return 2;//0 2
	break;
	case 3241://(0,12) (10, 9)
		return 2;//0 2
	break;
	case 3242://(0,12) (10, 10)
		return 2;//0 2
	break;
	case 3243://(0,12) (10, 11)
		return 2;//0 2
	break;
	case 3244://(0,12) (10, 12)
		return 2;//0 2
	break;
	case 3245://(0,12) (10, 13)
		return 2;//0 2
	break;
	case 3246://(0,12) (10, 14)
		return 2;//0 2
	break;
	case 3247://(0,12) (10, 15)
		return 2;//0 2
	break;
	case 3248://(0,12) (11, 0)
		return 0;//0 0
	break;
	case 3249://(0,12) (11, 1)
		return 0;//0 0
	break;
	case 3250://(0,12) (11, 2)
		return 2;//0 2
	break;
	case 3251://(0,12) (11, 3)
		return 2;//0 2
	break;
	case 3252://(0,12) (11, 4)
		return 2;//0 2
	break;
	case 3253://(0,12) (11, 5)
		return 2;//0 2
	break;
	case 3254://(0,12) (11, 6)
		return 2;//0 2
	break;
	case 3255://(0,12) (11, 7)
		return 2;//0 2
	break;
	case 3256://(0,12) (11, 8)
		return 2;//0 2
	break;
	case 3257://(0,12) (11, 9)
		return 2;//0 2
	break;
	case 3258://(0,12) (11, 10)
		return 2;//0 2
	break;
	case 3259://(0,12) (11, 11)
		return 2;//0 2
	break;
	case 3260://(0,12) (11, 12)
		return 2;//0 2
	break;
	case 3261://(0,12) (11, 13)
		return 2;//0 2
	break;
	case 3262://(0,12) (11, 14)
		return 2;//0 2
	break;
	case 3263://(0,12) (11, 15)
		return 2;//0 2
	break;
	case 3264://(0,12) (12, 0)
		return 0;//0 0
	break;
	case 3265://(0,12) (12, 1)
		return 0;//0 0
	break;
	case 3266://(0,12) (12, 2)
		return 2;//0 2
	break;
	case 3267://(0,12) (12, 3)
		return 2;//0 2
	break;
	case 3268://(0,12) (12, 4)
		return 2;//0 2
	break;
	case 3269://(0,12) (12, 5)
		return 2;//0 2
	break;
	case 3270://(0,12) (12, 6)
		return 2;//0 2
	break;
	case 3271://(0,12) (12, 7)
		return 2;//0 2
	break;
	case 3272://(0,12) (12, 8)
		return 2;//0 2
	break;
	case 3273://(0,12) (12, 9)
		return 2;//0 2
	break;
	case 3274://(0,12) (12, 10)
		return 2;//0 2
	break;
	case 3275://(0,12) (12, 11)
		return 2;//0 2
	break;
	case 3276://(0,12) (12, 12)
		return 2;//0 2
	break;
	case 3277://(0,12) (12, 13)
		return 2;//0 2
	break;
	case 3278://(0,12) (12, 14)
		return 2;//0 2
	break;
	case 3279://(0,12) (12, 15)
		return 2;//0 2
	break;
	case 3280://(0,12) (13, 0)
		return 0;//0 0
	break;
	case 3281://(0,12) (13, 1)
		return 0;//0 0
	break;
	case 3282://(0,12) (13, 2)
		return 2;//0 2
	break;
	case 3283://(0,12) (13, 3)
		return 2;//0 2
	break;
	case 3284://(0,12) (13, 4)
		return 2;//0 2
	break;
	case 3285://(0,12) (13, 5)
		return 2;//0 2
	break;
	case 3286://(0,12) (13, 6)
		return 2;//0 2
	break;
	case 3287://(0,12) (13, 7)
		return 2;//0 2
	break;
	case 3288://(0,12) (13, 8)
		return 2;//0 2
	break;
	case 3289://(0,12) (13, 9)
		return 2;//0 2
	break;
	case 3290://(0,12) (13, 10)
		return 2;//0 2
	break;
	case 3291://(0,12) (13, 11)
		return 2;//0 2
	break;
	case 3292://(0,12) (13, 12)
		return 2;//0 2
	break;
	case 3293://(0,12) (13, 13)
		return 2;//0 2
	break;
	case 3294://(0,12) (13, 14)
		return 2;//0 2
	break;
	case 3295://(0,12) (13, 15)
		return 2;//0 2
	break;
	case 3296://(0,12) (14, 0)
		return 0;//0 0
	break;
	case 3297://(0,12) (14, 1)
		return 0;//0 0
	break;
	case 3298://(0,12) (14, 2)
		return 2;//0 2
	break;
	case 3299://(0,12) (14, 3)
		return 2;//0 2
	break;
	case 3300://(0,12) (14, 4)
		return 2;//0 2
	break;
	case 3301://(0,12) (14, 5)
		return 2;//0 2
	break;
	case 3302://(0,12) (14, 6)
		return 2;//0 2
	break;
	case 3303://(0,12) (14, 7)
		return 2;//0 2
	break;
	case 3304://(0,12) (14, 8)
		return 2;//0 2
	break;
	case 3305://(0,12) (14, 9)
		return 2;//0 2
	break;
	case 3306://(0,12) (14, 10)
		return 2;//0 2
	break;
	case 3307://(0,12) (14, 11)
		return 2;//0 2
	break;
	case 3308://(0,12) (14, 12)
		return 2;//0 2
	break;
	case 3309://(0,12) (14, 13)
		return 2;//0 2
	break;
	case 3310://(0,12) (14, 14)
		return 2;//0 2
	break;
	case 3311://(0,12) (14, 15)
		return 2;//0 2
	break;
	case 3312://(0,12) (15, 0)
		return 0;//0 0
	break;
	case 3313://(0,12) (15, 1)
		return 0;//0 0
	break;
	case 3314://(0,12) (15, 2)
		return 2;//0 2
	break;
	case 3315://(0,12) (15, 3)
		return 2;//0 2
	break;
	case 3316://(0,12) (15, 4)
		return 2;//0 2
	break;
	case 3317://(0,12) (15, 5)
		return 2;//0 2
	break;
	case 3318://(0,12) (15, 6)
		return 2;//0 2
	break;
	case 3319://(0,12) (15, 7)
		return 2;//0 2
	break;
	case 3320://(0,12) (15, 8)
		return 2;//0 2
	break;
	case 3321://(0,12) (15, 9)
		return 2;//0 2
	break;
	case 3322://(0,12) (15, 10)
		return 2;//0 2
	break;
	case 3323://(0,12) (15, 11)
		return 2;//0 2
	break;
	case 3324://(0,12) (15, 12)
		return 2;//0 2
	break;
	case 3325://(0,12) (15, 13)
		return 2;//0 2
	break;
	case 3326://(0,12) (15, 14)
		return 2;//0 2
	break;
	case 3327://(0,12) (15, 15)
		return 2;//0 2
	break;
	case 3328://(0,13) (0, 0)
		return 0;//0 0
	break;
	case 3329://(0,13) (0, 1)
		return 2;//0 2
	break;
	case 3330://(0,13) (0, 2)
		return 0;//0 0
	break;
	case 3331://(0,13) (0, 3)
		return 2;//0 2
	break;
	case 3332://(0,13) (0, 4)
		return 2;//0 2
	break;
	case 3333://(0,13) (0, 5)
		return 2;//0 2
	break;
	case 3334://(0,13) (0, 6)
		return 2;//0 2
	break;
	case 3335://(0,13) (0, 7)
		return 2;//0 2
	break;
	case 3336://(0,13) (0, 8)
		return 2;//0 2
	break;
	case 3337://(0,13) (0, 9)
		return 2;//0 2
	break;
	case 3338://(0,13) (0, 10)
		return 2;//0 2
	break;
	case 3339://(0,13) (0, 11)
		return 2;//0 2
	break;
	case 3340://(0,13) (0, 12)
		return 2;//0 2
	break;
	case 3341://(0,13) (0, 13)
		return 2;//0 2
	break;
	case 3342://(0,13) (0, 14)
		return 2;//0 2
	break;
	case 3343://(0,13) (0, 15)
		return 2;//0 2
	break;
	case 3344://(0,13) (1, 0)
		return 0;//0 0
	break;
	case 3345://(0,13) (1, 1)
		return 2;//0 2
	break;
	case 3346://(0,13) (1, 2)
		return 0;//0 0
	break;
	case 3347://(0,13) (1, 3)
		return 2;//0 2
	break;
	case 3348://(0,13) (1, 4)
		return 2;//0 2
	break;
	case 3349://(0,13) (1, 5)
		return 2;//0 2
	break;
	case 3350://(0,13) (1, 6)
		return 2;//0 2
	break;
	case 3351://(0,13) (1, 7)
		return 2;//0 2
	break;
	case 3352://(0,13) (1, 8)
		return 2;//0 2
	break;
	case 3353://(0,13) (1, 9)
		return 2;//0 2
	break;
	case 3354://(0,13) (1, 10)
		return 2;//0 2
	break;
	case 3355://(0,13) (1, 11)
		return 2;//0 2
	break;
	case 3356://(0,13) (1, 12)
		return 2;//0 2
	break;
	case 3357://(0,13) (1, 13)
		return 2;//0 2
	break;
	case 3358://(0,13) (1, 14)
		return 2;//0 2
	break;
	case 3359://(0,13) (1, 15)
		return 2;//0 2
	break;
	case 3360://(0,13) (2, 0)
		return 0;//0 0
	break;
	case 3361://(0,13) (2, 1)
		return 2;//0 2
	break;
	case 3362://(0,13) (2, 2)
		return 0;//0 0
	break;
	case 3363://(0,13) (2, 3)
		return 2;//0 2
	break;
	case 3364://(0,13) (2, 4)
		return 2;//0 2
	break;
	case 3365://(0,13) (2, 5)
		return 2;//0 2
	break;
	case 3366://(0,13) (2, 6)
		return 2;//0 2
	break;
	case 3367://(0,13) (2, 7)
		return 2;//0 2
	break;
	case 3368://(0,13) (2, 8)
		return 2;//0 2
	break;
	case 3369://(0,13) (2, 9)
		return 2;//0 2
	break;
	case 3370://(0,13) (2, 10)
		return 2;//0 2
	break;
	case 3371://(0,13) (2, 11)
		return 2;//0 2
	break;
	case 3372://(0,13) (2, 12)
		return 2;//0 2
	break;
	case 3373://(0,13) (2, 13)
		return 2;//0 2
	break;
	case 3374://(0,13) (2, 14)
		return 2;//0 2
	break;
	case 3375://(0,13) (2, 15)
		return 2;//0 2
	break;
	case 3376://(0,13) (3, 0)
		return 0;//0 0
	break;
	case 3377://(0,13) (3, 1)
		return 2;//0 2
	break;
	case 3378://(0,13) (3, 2)
		return 0;//0 0
	break;
	case 3379://(0,13) (3, 3)
		return 2;//0 2
	break;
	case 3380://(0,13) (3, 4)
		return 2;//0 2
	break;
	case 3381://(0,13) (3, 5)
		return 2;//0 2
	break;
	case 3382://(0,13) (3, 6)
		return 2;//0 2
	break;
	case 3383://(0,13) (3, 7)
		return 2;//0 2
	break;
	case 3384://(0,13) (3, 8)
		return 2;//0 2
	break;
	case 3385://(0,13) (3, 9)
		return 2;//0 2
	break;
	case 3386://(0,13) (3, 10)
		return 2;//0 2
	break;
	case 3387://(0,13) (3, 11)
		return 2;//0 2
	break;
	case 3388://(0,13) (3, 12)
		return 2;//0 2
	break;
	case 3389://(0,13) (3, 13)
		return 2;//0 2
	break;
	case 3390://(0,13) (3, 14)
		return 2;//0 2
	break;
	case 3391://(0,13) (3, 15)
		return 2;//0 2
	break;
	case 3392://(0,13) (4, 0)
		return 0;//0 0
	break;
	case 3393://(0,13) (4, 1)
		return 2;//0 2
	break;
	case 3394://(0,13) (4, 2)
		return 0;//0 0
	break;
	case 3395://(0,13) (4, 3)
		return 2;//0 2
	break;
	case 3396://(0,13) (4, 4)
		return 2;//0 2
	break;
	case 3397://(0,13) (4, 5)
		return 2;//0 2
	break;
	case 3398://(0,13) (4, 6)
		return 2;//0 2
	break;
	case 3399://(0,13) (4, 7)
		return 2;//0 2
	break;
	case 3400://(0,13) (4, 8)
		return 2;//0 2
	break;
	case 3401://(0,13) (4, 9)
		return 2;//0 2
	break;
	case 3402://(0,13) (4, 10)
		return 2;//0 2
	break;
	case 3403://(0,13) (4, 11)
		return 2;//0 2
	break;
	case 3404://(0,13) (4, 12)
		return 2;//0 2
	break;
	case 3405://(0,13) (4, 13)
		return 2;//0 2
	break;
	case 3406://(0,13) (4, 14)
		return 2;//0 2
	break;
	case 3407://(0,13) (4, 15)
		return 2;//0 2
	break;
	case 3408://(0,13) (5, 0)
		return 0;//0 0
	break;
	case 3409://(0,13) (5, 1)
		return 2;//0 2
	break;
	case 3410://(0,13) (5, 2)
		return 0;//0 0
	break;
	case 3411://(0,13) (5, 3)
		return 2;//0 2
	break;
	case 3412://(0,13) (5, 4)
		return 2;//0 2
	break;
	case 3413://(0,13) (5, 5)
		return 2;//0 2
	break;
	case 3414://(0,13) (5, 6)
		return 2;//0 2
	break;
	case 3415://(0,13) (5, 7)
		return 2;//0 2
	break;
	case 3416://(0,13) (5, 8)
		return 2;//0 2
	break;
	case 3417://(0,13) (5, 9)
		return 2;//0 2
	break;
	case 3418://(0,13) (5, 10)
		return 2;//0 2
	break;
	case 3419://(0,13) (5, 11)
		return 2;//0 2
	break;
	case 3420://(0,13) (5, 12)
		return 2;//0 2
	break;
	case 3421://(0,13) (5, 13)
		return 2;//0 2
	break;
	case 3422://(0,13) (5, 14)
		return 2;//0 2
	break;
	case 3423://(0,13) (5, 15)
		return 2;//0 2
	break;
	case 3424://(0,13) (6, 0)
		return 0;//0 0
	break;
	case 3425://(0,13) (6, 1)
		return 2;//0 2
	break;
	case 3426://(0,13) (6, 2)
		return 0;//0 0
	break;
	case 3427://(0,13) (6, 3)
		return 2;//0 2
	break;
	case 3428://(0,13) (6, 4)
		return 2;//0 2
	break;
	case 3429://(0,13) (6, 5)
		return 2;//0 2
	break;
	case 3430://(0,13) (6, 6)
		return 2;//0 2
	break;
	case 3431://(0,13) (6, 7)
		return 2;//0 2
	break;
	case 3432://(0,13) (6, 8)
		return 2;//0 2
	break;
	case 3433://(0,13) (6, 9)
		return 2;//0 2
	break;
	case 3434://(0,13) (6, 10)
		return 2;//0 2
	break;
	case 3435://(0,13) (6, 11)
		return 2;//0 2
	break;
	case 3436://(0,13) (6, 12)
		return 2;//0 2
	break;
	case 3437://(0,13) (6, 13)
		return 2;//0 2
	break;
	case 3438://(0,13) (6, 14)
		return 2;//0 2
	break;
	case 3439://(0,13) (6, 15)
		return 2;//0 2
	break;
	case 3440://(0,13) (7, 0)
		return 0;//0 0
	break;
	case 3441://(0,13) (7, 1)
		return 2;//0 2
	break;
	case 3442://(0,13) (7, 2)
		return 0;//0 0
	break;
	case 3443://(0,13) (7, 3)
		return 2;//0 2
	break;
	case 3444://(0,13) (7, 4)
		return 2;//0 2
	break;
	case 3445://(0,13) (7, 5)
		return 2;//0 2
	break;
	case 3446://(0,13) (7, 6)
		return 2;//0 2
	break;
	case 3447://(0,13) (7, 7)
		return 2;//0 2
	break;
	case 3448://(0,13) (7, 8)
		return 2;//0 2
	break;
	case 3449://(0,13) (7, 9)
		return 2;//0 2
	break;
	case 3450://(0,13) (7, 10)
		return 2;//0 2
	break;
	case 3451://(0,13) (7, 11)
		return 2;//0 2
	break;
	case 3452://(0,13) (7, 12)
		return 2;//0 2
	break;
	case 3453://(0,13) (7, 13)
		return 2;//0 2
	break;
	case 3454://(0,13) (7, 14)
		return 2;//0 2
	break;
	case 3455://(0,13) (7, 15)
		return 2;//0 2
	break;
	case 3456://(0,13) (8, 0)
		return 0;//0 0
	break;
	case 3457://(0,13) (8, 1)
		return 2;//0 2
	break;
	case 3458://(0,13) (8, 2)
		return 0;//0 0
	break;
	case 3459://(0,13) (8, 3)
		return 2;//0 2
	break;
	case 3460://(0,13) (8, 4)
		return 2;//0 2
	break;
	case 3461://(0,13) (8, 5)
		return 2;//0 2
	break;
	case 3462://(0,13) (8, 6)
		return 2;//0 2
	break;
	case 3463://(0,13) (8, 7)
		return 2;//0 2
	break;
	case 3464://(0,13) (8, 8)
		return 2;//0 2
	break;
	case 3465://(0,13) (8, 9)
		return 2;//0 2
	break;
	case 3466://(0,13) (8, 10)
		return 2;//0 2
	break;
	case 3467://(0,13) (8, 11)
		return 2;//0 2
	break;
	case 3468://(0,13) (8, 12)
		return 2;//0 2
	break;
	case 3469://(0,13) (8, 13)
		return 2;//0 2
	break;
	case 3470://(0,13) (8, 14)
		return 2;//0 2
	break;
	case 3471://(0,13) (8, 15)
		return 2;//0 2
	break;
	case 3472://(0,13) (9, 0)
		return 0;//0 0
	break;
	case 3473://(0,13) (9, 1)
		return 2;//0 2
	break;
	case 3474://(0,13) (9, 2)
		return 0;//0 0
	break;
	case 3475://(0,13) (9, 3)
		return 2;//0 2
	break;
	case 3476://(0,13) (9, 4)
		return 2;//0 2
	break;
	case 3477://(0,13) (9, 5)
		return 2;//0 2
	break;
	case 3478://(0,13) (9, 6)
		return 2;//0 2
	break;
	case 3479://(0,13) (9, 7)
		return 2;//0 2
	break;
	case 3480://(0,13) (9, 8)
		return 2;//0 2
	break;
	case 3481://(0,13) (9, 9)
		return 2;//0 2
	break;
	case 3482://(0,13) (9, 10)
		return 2;//0 2
	break;
	case 3483://(0,13) (9, 11)
		return 2;//0 2
	break;
	case 3484://(0,13) (9, 12)
		return 2;//0 2
	break;
	case 3485://(0,13) (9, 13)
		return 2;//0 2
	break;
	case 3486://(0,13) (9, 14)
		return 2;//0 2
	break;
	case 3487://(0,13) (9, 15)
		return 2;//0 2
	break;
	case 3488://(0,13) (10, 0)
		return 0;//0 0
	break;
	case 3489://(0,13) (10, 1)
		return 2;//0 2
	break;
	case 3490://(0,13) (10, 2)
		return 0;//0 0
	break;
	case 3491://(0,13) (10, 3)
		return 2;//0 2
	break;
	case 3492://(0,13) (10, 4)
		return 2;//0 2
	break;
	case 3493://(0,13) (10, 5)
		return 2;//0 2
	break;
	case 3494://(0,13) (10, 6)
		return 2;//0 2
	break;
	case 3495://(0,13) (10, 7)
		return 2;//0 2
	break;
	case 3496://(0,13) (10, 8)
		return 2;//0 2
	break;
	case 3497://(0,13) (10, 9)
		return 2;//0 2
	break;
	case 3498://(0,13) (10, 10)
		return 2;//0 2
	break;
	case 3499://(0,13) (10, 11)
		return 2;//0 2
	break;
	case 3500://(0,13) (10, 12)
		return 2;//0 2
	break;
	case 3501://(0,13) (10, 13)
		return 2;//0 2
	break;
	case 3502://(0,13) (10, 14)
		return 2;//0 2
	break;
	case 3503://(0,13) (10, 15)
		return 2;//0 2
	break;
	case 3504://(0,13) (11, 0)
		return 0;//0 0
	break;
	case 3505://(0,13) (11, 1)
		return 2;//0 2
	break;
	case 3506://(0,13) (11, 2)
		return 0;//0 0
	break;
	case 3507://(0,13) (11, 3)
		return 2;//0 2
	break;
	case 3508://(0,13) (11, 4)
		return 2;//0 2
	break;
	case 3509://(0,13) (11, 5)
		return 2;//0 2
	break;
	case 3510://(0,13) (11, 6)
		return 2;//0 2
	break;
	case 3511://(0,13) (11, 7)
		return 2;//0 2
	break;
	case 3512://(0,13) (11, 8)
		return 2;//0 2
	break;
	case 3513://(0,13) (11, 9)
		return 2;//0 2
	break;
	case 3514://(0,13) (11, 10)
		return 2;//0 2
	break;
	case 3515://(0,13) (11, 11)
		return 2;//0 2
	break;
	case 3516://(0,13) (11, 12)
		return 2;//0 2
	break;
	case 3517://(0,13) (11, 13)
		return 2;//0 2
	break;
	case 3518://(0,13) (11, 14)
		return 2;//0 2
	break;
	case 3519://(0,13) (11, 15)
		return 2;//0 2
	break;
	case 3520://(0,13) (12, 0)
		return 0;//0 0
	break;
	case 3521://(0,13) (12, 1)
		return 2;//0 2
	break;
	case 3522://(0,13) (12, 2)
		return 0;//0 0
	break;
	case 3523://(0,13) (12, 3)
		return 2;//0 2
	break;
	case 3524://(0,13) (12, 4)
		return 2;//0 2
	break;
	case 3525://(0,13) (12, 5)
		return 2;//0 2
	break;
	case 3526://(0,13) (12, 6)
		return 2;//0 2
	break;
	case 3527://(0,13) (12, 7)
		return 2;//0 2
	break;
	case 3528://(0,13) (12, 8)
		return 2;//0 2
	break;
	case 3529://(0,13) (12, 9)
		return 2;//0 2
	break;
	case 3530://(0,13) (12, 10)
		return 2;//0 2
	break;
	case 3531://(0,13) (12, 11)
		return 2;//0 2
	break;
	case 3532://(0,13) (12, 12)
		return 2;//0 2
	break;
	case 3533://(0,13) (12, 13)
		return 2;//0 2
	break;
	case 3534://(0,13) (12, 14)
		return 2;//0 2
	break;
	case 3535://(0,13) (12, 15)
		return 2;//0 2
	break;
	case 3536://(0,13) (13, 0)
		return 0;//0 0
	break;
	case 3537://(0,13) (13, 1)
		return 2;//0 2
	break;
	case 3538://(0,13) (13, 2)
		return 0;//0 0
	break;
	case 3539://(0,13) (13, 3)
		return 2;//0 2
	break;
	case 3540://(0,13) (13, 4)
		return 2;//0 2
	break;
	case 3541://(0,13) (13, 5)
		return 2;//0 2
	break;
	case 3542://(0,13) (13, 6)
		return 2;//0 2
	break;
	case 3543://(0,13) (13, 7)
		return 2;//0 2
	break;
	case 3544://(0,13) (13, 8)
		return 2;//0 2
	break;
	case 3545://(0,13) (13, 9)
		return 2;//0 2
	break;
	case 3546://(0,13) (13, 10)
		return 2;//0 2
	break;
	case 3547://(0,13) (13, 11)
		return 2;//0 2
	break;
	case 3548://(0,13) (13, 12)
		return 2;//0 2
	break;
	case 3549://(0,13) (13, 13)
		return 2;//0 2
	break;
	case 3550://(0,13) (13, 14)
		return 2;//0 2
	break;
	case 3551://(0,13) (13, 15)
		return 2;//0 2
	break;
	case 3552://(0,13) (14, 0)
		return 0;//0 0
	break;
	case 3553://(0,13) (14, 1)
		return 2;//0 2
	break;
	case 3554://(0,13) (14, 2)
		return 0;//0 0
	break;
	case 3555://(0,13) (14, 3)
		return 2;//0 2
	break;
	case 3556://(0,13) (14, 4)
		return 2;//0 2
	break;
	case 3557://(0,13) (14, 5)
		return 2;//0 2
	break;
	case 3558://(0,13) (14, 6)
		return 2;//0 2
	break;
	case 3559://(0,13) (14, 7)
		return 2;//0 2
	break;
	case 3560://(0,13) (14, 8)
		return 2;//0 2
	break;
	case 3561://(0,13) (14, 9)
		return 2;//0 2
	break;
	case 3562://(0,13) (14, 10)
		return 2;//0 2
	break;
	case 3563://(0,13) (14, 11)
		return 2;//0 2
	break;
	case 3564://(0,13) (14, 12)
		return 2;//0 2
	break;
	case 3565://(0,13) (14, 13)
		return 2;//0 2
	break;
	case 3566://(0,13) (14, 14)
		return 2;//0 2
	break;
	case 3567://(0,13) (14, 15)
		return 2;//0 2
	break;
	case 3568://(0,13) (15, 0)
		return 0;//0 0
	break;
	case 3569://(0,13) (15, 1)
		return 2;//0 2
	break;
	case 3570://(0,13) (15, 2)
		return 0;//0 0
	break;
	case 3571://(0,13) (15, 3)
		return 2;//0 2
	break;
	case 3572://(0,13) (15, 4)
		return 2;//0 2
	break;
	case 3573://(0,13) (15, 5)
		return 2;//0 2
	break;
	case 3574://(0,13) (15, 6)
		return 2;//0 2
	break;
	case 3575://(0,13) (15, 7)
		return 2;//0 2
	break;
	case 3576://(0,13) (15, 8)
		return 2;//0 2
	break;
	case 3577://(0,13) (15, 9)
		return 2;//0 2
	break;
	case 3578://(0,13) (15, 10)
		return 2;//0 2
	break;
	case 3579://(0,13) (15, 11)
		return 2;//0 2
	break;
	case 3580://(0,13) (15, 12)
		return 2;//0 2
	break;
	case 3581://(0,13) (15, 13)
		return 2;//0 2
	break;
	case 3582://(0,13) (15, 14)
		return 2;//0 2
	break;
	case 3583://(0,13) (15, 15)
		return 2;//0 2
	break;
	case 3584://(0,14) (0, 0)
		return 0;//0 0
	break;
	case 3585://(0,14) (0, 1)
		return 2;//0 2
	break;
	case 3586://(0,14) (0, 2)
		return 2;//0 2
	break;
	case 3587://(0,14) (0, 3)
		return 0;//0 0
	break;
	case 3588://(0,14) (0, 4)
		return 2;//0 2
	break;
	case 3589://(0,14) (0, 5)
		return 2;//0 2
	break;
	case 3590://(0,14) (0, 6)
		return 2;//0 2
	break;
	case 3591://(0,14) (0, 7)
		return 2;//0 2
	break;
	case 3592://(0,14) (0, 8)
		return 2;//0 2
	break;
	case 3593://(0,14) (0, 9)
		return 2;//0 2
	break;
	case 3594://(0,14) (0, 10)
		return 2;//0 2
	break;
	case 3595://(0,14) (0, 11)
		return 2;//0 2
	break;
	case 3596://(0,14) (0, 12)
		return 2;//0 2
	break;
	case 3597://(0,14) (0, 13)
		return 2;//0 2
	break;
	case 3598://(0,14) (0, 14)
		return 2;//0 2
	break;
	case 3599://(0,14) (0, 15)
		return 2;//0 2
	break;
	case 3600://(0,14) (1, 0)
		return 0;//0 0
	break;
	case 3601://(0,14) (1, 1)
		return 2;//0 2
	break;
	case 3602://(0,14) (1, 2)
		return 2;//0 2
	break;
	case 3603://(0,14) (1, 3)
		return 0;//0 0
	break;
	case 3604://(0,14) (1, 4)
		return 2;//0 2
	break;
	case 3605://(0,14) (1, 5)
		return 2;//0 2
	break;
	case 3606://(0,14) (1, 6)
		return 2;//0 2
	break;
	case 3607://(0,14) (1, 7)
		return 2;//0 2
	break;
	case 3608://(0,14) (1, 8)
		return 2;//0 2
	break;
	case 3609://(0,14) (1, 9)
		return 2;//0 2
	break;
	case 3610://(0,14) (1, 10)
		return 2;//0 2
	break;
	case 3611://(0,14) (1, 11)
		return 2;//0 2
	break;
	case 3612://(0,14) (1, 12)
		return 2;//0 2
	break;
	case 3613://(0,14) (1, 13)
		return 2;//0 2
	break;
	case 3614://(0,14) (1, 14)
		return 2;//0 2
	break;
	case 3615://(0,14) (1, 15)
		return 2;//0 2
	break;
	case 3616://(0,14) (2, 0)
		return 0;//0 0
	break;
	case 3617://(0,14) (2, 1)
		return 2;//0 2
	break;
	case 3618://(0,14) (2, 2)
		return 2;//0 2
	break;
	case 3619://(0,14) (2, 3)
		return 0;//0 0
	break;
	case 3620://(0,14) (2, 4)
		return 2;//0 2
	break;
	case 3621://(0,14) (2, 5)
		return 2;//0 2
	break;
	case 3622://(0,14) (2, 6)
		return 2;//0 2
	break;
	case 3623://(0,14) (2, 7)
		return 2;//0 2
	break;
	case 3624://(0,14) (2, 8)
		return 2;//0 2
	break;
	case 3625://(0,14) (2, 9)
		return 2;//0 2
	break;
	case 3626://(0,14) (2, 10)
		return 2;//0 2
	break;
	case 3627://(0,14) (2, 11)
		return 2;//0 2
	break;
	case 3628://(0,14) (2, 12)
		return 2;//0 2
	break;
	case 3629://(0,14) (2, 13)
		return 2;//0 2
	break;
	case 3630://(0,14) (2, 14)
		return 2;//0 2
	break;
	case 3631://(0,14) (2, 15)
		return 2;//0 2
	break;
	case 3632://(0,14) (3, 0)
		return 0;//0 0
	break;
	case 3633://(0,14) (3, 1)
		return 2;//0 2
	break;
	case 3634://(0,14) (3, 2)
		return 2;//0 2
	break;
	case 3635://(0,14) (3, 3)
		return 0;//0 0
	break;
	case 3636://(0,14) (3, 4)
		return 2;//0 2
	break;
	case 3637://(0,14) (3, 5)
		return 2;//0 2
	break;
	case 3638://(0,14) (3, 6)
		return 2;//0 2
	break;
	case 3639://(0,14) (3, 7)
		return 2;//0 2
	break;
	case 3640://(0,14) (3, 8)
		return 2;//0 2
	break;
	case 3641://(0,14) (3, 9)
		return 2;//0 2
	break;
	case 3642://(0,14) (3, 10)
		return 2;//0 2
	break;
	case 3643://(0,14) (3, 11)
		return 2;//0 2
	break;
	case 3644://(0,14) (3, 12)
		return 2;//0 2
	break;
	case 3645://(0,14) (3, 13)
		return 2;//0 2
	break;
	case 3646://(0,14) (3, 14)
		return 2;//0 2
	break;
	case 3647://(0,14) (3, 15)
		return 2;//0 2
	break;
	case 3648://(0,14) (4, 0)
		return 0;//0 0
	break;
	case 3649://(0,14) (4, 1)
		return 2;//0 2
	break;
	case 3650://(0,14) (4, 2)
		return 2;//0 2
	break;
	case 3651://(0,14) (4, 3)
		return 0;//0 0
	break;
	case 3652://(0,14) (4, 4)
		return 2;//0 2
	break;
	case 3653://(0,14) (4, 5)
		return 2;//0 2
	break;
	case 3654://(0,14) (4, 6)
		return 2;//0 2
	break;
	case 3655://(0,14) (4, 7)
		return 2;//0 2
	break;
	case 3656://(0,14) (4, 8)
		return 2;//0 2
	break;
	case 3657://(0,14) (4, 9)
		return 2;//0 2
	break;
	case 3658://(0,14) (4, 10)
		return 2;//0 2
	break;
	case 3659://(0,14) (4, 11)
		return 2;//0 2
	break;
	case 3660://(0,14) (4, 12)
		return 2;//0 2
	break;
	case 3661://(0,14) (4, 13)
		return 2;//0 2
	break;
	case 3662://(0,14) (4, 14)
		return 2;//0 2
	break;
	case 3663://(0,14) (4, 15)
		return 2;//0 2
	break;
	case 3664://(0,14) (5, 0)
		return 0;//0 0
	break;
	case 3665://(0,14) (5, 1)
		return 2;//0 2
	break;
	case 3666://(0,14) (5, 2)
		return 2;//0 2
	break;
	case 3667://(0,14) (5, 3)
		return 0;//0 0
	break;
	case 3668://(0,14) (5, 4)
		return 2;//0 2
	break;
	case 3669://(0,14) (5, 5)
		return 2;//0 2
	break;
	case 3670://(0,14) (5, 6)
		return 2;//0 2
	break;
	case 3671://(0,14) (5, 7)
		return 2;//0 2
	break;
	case 3672://(0,14) (5, 8)
		return 2;//0 2
	break;
	case 3673://(0,14) (5, 9)
		return 2;//0 2
	break;
	case 3674://(0,14) (5, 10)
		return 2;//0 2
	break;
	case 3675://(0,14) (5, 11)
		return 2;//0 2
	break;
	case 3676://(0,14) (5, 12)
		return 2;//0 2
	break;
	case 3677://(0,14) (5, 13)
		return 2;//0 2
	break;
	case 3678://(0,14) (5, 14)
		return 2;//0 2
	break;
	case 3679://(0,14) (5, 15)
		return 2;//0 2
	break;
	case 3680://(0,14) (6, 0)
		return 0;//0 0
	break;
	case 3681://(0,14) (6, 1)
		return 2;//0 2
	break;
	case 3682://(0,14) (6, 2)
		return 2;//0 2
	break;
	case 3683://(0,14) (6, 3)
		return 0;//0 0
	break;
	case 3684://(0,14) (6, 4)
		return 2;//0 2
	break;
	case 3685://(0,14) (6, 5)
		return 2;//0 2
	break;
	case 3686://(0,14) (6, 6)
		return 2;//0 2
	break;
	case 3687://(0,14) (6, 7)
		return 2;//0 2
	break;
	case 3688://(0,14) (6, 8)
		return 2;//0 2
	break;
	case 3689://(0,14) (6, 9)
		return 2;//0 2
	break;
	case 3690://(0,14) (6, 10)
		return 2;//0 2
	break;
	case 3691://(0,14) (6, 11)
		return 2;//0 2
	break;
	case 3692://(0,14) (6, 12)
		return 2;//0 2
	break;
	case 3693://(0,14) (6, 13)
		return 2;//0 2
	break;
	case 3694://(0,14) (6, 14)
		return 2;//0 2
	break;
	case 3695://(0,14) (6, 15)
		return 2;//0 2
	break;
	case 3696://(0,14) (7, 0)
		return 0;//0 0
	break;
	case 3697://(0,14) (7, 1)
		return 2;//0 2
	break;
	case 3698://(0,14) (7, 2)
		return 2;//0 2
	break;
	case 3699://(0,14) (7, 3)
		return 0;//0 0
	break;
	case 3700://(0,14) (7, 4)
		return 2;//0 2
	break;
	case 3701://(0,14) (7, 5)
		return 2;//0 2
	break;
	case 3702://(0,14) (7, 6)
		return 2;//0 2
	break;
	case 3703://(0,14) (7, 7)
		return 2;//0 2
	break;
	case 3704://(0,14) (7, 8)
		return 2;//0 2
	break;
	case 3705://(0,14) (7, 9)
		return 2;//0 2
	break;
	case 3706://(0,14) (7, 10)
		return 2;//0 2
	break;
	case 3707://(0,14) (7, 11)
		return 2;//0 2
	break;
	case 3708://(0,14) (7, 12)
		return 2;//0 2
	break;
	case 3709://(0,14) (7, 13)
		return 2;//0 2
	break;
	case 3710://(0,14) (7, 14)
		return 2;//0 2
	break;
	case 3711://(0,14) (7, 15)
		return 2;//0 2
	break;
	case 3712://(0,14) (8, 0)
		return 0;//0 0
	break;
	case 3713://(0,14) (8, 1)
		return 2;//0 2
	break;
	case 3714://(0,14) (8, 2)
		return 2;//0 2
	break;
	case 3715://(0,14) (8, 3)
		return 0;//0 0
	break;
	case 3716://(0,14) (8, 4)
		return 2;//0 2
	break;
	case 3717://(0,14) (8, 5)
		return 2;//0 2
	break;
	case 3718://(0,14) (8, 6)
		return 2;//0 2
	break;
	case 3719://(0,14) (8, 7)
		return 2;//0 2
	break;
	case 3720://(0,14) (8, 8)
		return 2;//0 2
	break;
	case 3721://(0,14) (8, 9)
		return 2;//0 2
	break;
	case 3722://(0,14) (8, 10)
		return 2;//0 2
	break;
	case 3723://(0,14) (8, 11)
		return 2;//0 2
	break;
	case 3724://(0,14) (8, 12)
		return 2;//0 2
	break;
	case 3725://(0,14) (8, 13)
		return 2;//0 2
	break;
	case 3726://(0,14) (8, 14)
		return 2;//0 2
	break;
	case 3727://(0,14) (8, 15)
		return 2;//0 2
	break;
	case 3728://(0,14) (9, 0)
		return 0;//0 0
	break;
	case 3729://(0,14) (9, 1)
		return 2;//0 2
	break;
	case 3730://(0,14) (9, 2)
		return 2;//0 2
	break;
	case 3731://(0,14) (9, 3)
		return 0;//0 0
	break;
	case 3732://(0,14) (9, 4)
		return 2;//0 2
	break;
	case 3733://(0,14) (9, 5)
		return 2;//0 2
	break;
	case 3734://(0,14) (9, 6)
		return 2;//0 2
	break;
	case 3735://(0,14) (9, 7)
		return 2;//0 2
	break;
	case 3736://(0,14) (9, 8)
		return 2;//0 2
	break;
	case 3737://(0,14) (9, 9)
		return 2;//0 2
	break;
	case 3738://(0,14) (9, 10)
		return 2;//0 2
	break;
	case 3739://(0,14) (9, 11)
		return 2;//0 2
	break;
	case 3740://(0,14) (9, 12)
		return 2;//0 2
	break;
	case 3741://(0,14) (9, 13)
		return 2;//0 2
	break;
	case 3742://(0,14) (9, 14)
		return 2;//0 2
	break;
	case 3743://(0,14) (9, 15)
		return 2;//0 2
	break;
	case 3744://(0,14) (10, 0)
		return 0;//0 0
	break;
	case 3745://(0,14) (10, 1)
		return 2;//0 2
	break;
	case 3746://(0,14) (10, 2)
		return 2;//0 2
	break;
	case 3747://(0,14) (10, 3)
		return 0;//0 0
	break;
	case 3748://(0,14) (10, 4)
		return 2;//0 2
	break;
	case 3749://(0,14) (10, 5)
		return 2;//0 2
	break;
	case 3750://(0,14) (10, 6)
		return 2;//0 2
	break;
	case 3751://(0,14) (10, 7)
		return 2;//0 2
	break;
	case 3752://(0,14) (10, 8)
		return 2;//0 2
	break;
	case 3753://(0,14) (10, 9)
		return 2;//0 2
	break;
	case 3754://(0,14) (10, 10)
		return 2;//0 2
	break;
	case 3755://(0,14) (10, 11)
		return 2;//0 2
	break;
	case 3756://(0,14) (10, 12)
		return 2;//0 2
	break;
	case 3757://(0,14) (10, 13)
		return 2;//0 2
	break;
	case 3758://(0,14) (10, 14)
		return 2;//0 2
	break;
	case 3759://(0,14) (10, 15)
		return 2;//0 2
	break;
	case 3760://(0,14) (11, 0)
		return 0;//0 0
	break;
	case 3761://(0,14) (11, 1)
		return 2;//0 2
	break;
	case 3762://(0,14) (11, 2)
		return 2;//0 2
	break;
	case 3763://(0,14) (11, 3)
		return 0;//0 0
	break;
	case 3764://(0,14) (11, 4)
		return 2;//0 2
	break;
	case 3765://(0,14) (11, 5)
		return 2;//0 2
	break;
	case 3766://(0,14) (11, 6)
		return 2;//0 2
	break;
	case 3767://(0,14) (11, 7)
		return 2;//0 2
	break;
	case 3768://(0,14) (11, 8)
		return 2;//0 2
	break;
	case 3769://(0,14) (11, 9)
		return 2;//0 2
	break;
	case 3770://(0,14) (11, 10)
		return 2;//0 2
	break;
	case 3771://(0,14) (11, 11)
		return 2;//0 2
	break;
	case 3772://(0,14) (11, 12)
		return 2;//0 2
	break;
	case 3773://(0,14) (11, 13)
		return 2;//0 2
	break;
	case 3774://(0,14) (11, 14)
		return 2;//0 2
	break;
	case 3775://(0,14) (11, 15)
		return 2;//0 2
	break;
	case 3776://(0,14) (12, 0)
		return 0;//0 0
	break;
	case 3777://(0,14) (12, 1)
		return 2;//0 2
	break;
	case 3778://(0,14) (12, 2)
		return 2;//0 2
	break;
	case 3779://(0,14) (12, 3)
		return 0;//0 0
	break;
	case 3780://(0,14) (12, 4)
		return 2;//0 2
	break;
	case 3781://(0,14) (12, 5)
		return 2;//0 2
	break;
	case 3782://(0,14) (12, 6)
		return 2;//0 2
	break;
	case 3783://(0,14) (12, 7)
		return 2;//0 2
	break;
	case 3784://(0,14) (12, 8)
		return 2;//0 2
	break;
	case 3785://(0,14) (12, 9)
		return 2;//0 2
	break;
	case 3786://(0,14) (12, 10)
		return 2;//0 2
	break;
	case 3787://(0,14) (12, 11)
		return 2;//0 2
	break;
	case 3788://(0,14) (12, 12)
		return 2;//0 2
	break;
	case 3789://(0,14) (12, 13)
		return 2;//0 2
	break;
	case 3790://(0,14) (12, 14)
		return 2;//0 2
	break;
	case 3791://(0,14) (12, 15)
		return 2;//0 2
	break;
	case 3792://(0,14) (13, 0)
		return 0;//0 0
	break;
	case 3793://(0,14) (13, 1)
		return 2;//0 2
	break;
	case 3794://(0,14) (13, 2)
		return 2;//0 2
	break;
	case 3795://(0,14) (13, 3)
		return 0;//0 0
	break;
	case 3796://(0,14) (13, 4)
		return 2;//0 2
	break;
	case 3797://(0,14) (13, 5)
		return 2;//0 2
	break;
	case 3798://(0,14) (13, 6)
		return 2;//0 2
	break;
	case 3799://(0,14) (13, 7)
		return 2;//0 2
	break;
	case 3800://(0,14) (13, 8)
		return 2;//0 2
	break;
	case 3801://(0,14) (13, 9)
		return 2;//0 2
	break;
	case 3802://(0,14) (13, 10)
		return 2;//0 2
	break;
	case 3803://(0,14) (13, 11)
		return 2;//0 2
	break;
	case 3804://(0,14) (13, 12)
		return 2;//0 2
	break;
	case 3805://(0,14) (13, 13)
		return 2;//0 2
	break;
	case 3806://(0,14) (13, 14)
		return 2;//0 2
	break;
	case 3807://(0,14) (13, 15)
		return 2;//0 2
	break;
	case 3808://(0,14) (14, 0)
		return 0;//0 0
	break;
	case 3809://(0,14) (14, 1)
		return 2;//0 2
	break;
	case 3810://(0,14) (14, 2)
		return 2;//0 2
	break;
	case 3811://(0,14) (14, 3)
		return 0;//0 0
	break;
	case 3812://(0,14) (14, 4)
		return 2;//0 2
	break;
	case 3813://(0,14) (14, 5)
		return 2;//0 2
	break;
	case 3814://(0,14) (14, 6)
		return 2;//0 2
	break;
	case 3815://(0,14) (14, 7)
		return 2;//0 2
	break;
	case 3816://(0,14) (14, 8)
		return 2;//0 2
	break;
	case 3817://(0,14) (14, 9)
		return 2;//0 2
	break;
	case 3818://(0,14) (14, 10)
		return 2;//0 2
	break;
	case 3819://(0,14) (14, 11)
		return 2;//0 2
	break;
	case 3820://(0,14) (14, 12)
		return 2;//0 2
	break;
	case 3821://(0,14) (14, 13)
		return 2;//0 2
	break;
	case 3822://(0,14) (14, 14)
		return 2;//0 2
	break;
	case 3823://(0,14) (14, 15)
		return 2;//0 2
	break;
	case 3824://(0,14) (15, 0)
		return 0;//0 0
	break;
	case 3825://(0,14) (15, 1)
		return 2;//0 2
	break;
	case 3826://(0,14) (15, 2)
		return 2;//0 2
	break;
	case 3827://(0,14) (15, 3)
		return 0;//0 0
	break;
	case 3828://(0,14) (15, 4)
		return 2;//0 2
	break;
	case 3829://(0,14) (15, 5)
		return 2;//0 2
	break;
	case 3830://(0,14) (15, 6)
		return 2;//0 2
	break;
	case 3831://(0,14) (15, 7)
		return 2;//0 2
	break;
	case 3832://(0,14) (15, 8)
		return 2;//0 2
	break;
	case 3833://(0,14) (15, 9)
		return 2;//0 2
	break;
	case 3834://(0,14) (15, 10)
		return 2;//0 2
	break;
	case 3835://(0,14) (15, 11)
		return 2;//0 2
	break;
	case 3836://(0,14) (15, 12)
		return 2;//0 2
	break;
	case 3837://(0,14) (15, 13)
		return 2;//0 2
	break;
	case 3838://(0,14) (15, 14)
		return 2;//0 2
	break;
	case 3839://(0,14) (15, 15)
		return 2;//0 2
	break;
	case 3840://(0,15) (0, 0)
		return 1;//0 1
	break;
	case 3841://(0,15) (0, 1)
		return 1;//0 1
	break;
	case 3842://(0,15) (0, 2)
		return 1;//0 1
	break;
	case 3843://(0,15) (0, 3)
		return 1;//0 1
	break;
	case 3844://(0,15) (0, 4)
		return 1;//0 1
	break;
	case 3845://(0,15) (0, 5)
		return 1;//0 1
	break;
	case 3846://(0,15) (0, 6)
		return 1;//0 1
	break;
	case 3847://(0,15) (0, 7)
		return 1;//0 1
	break;
	case 3848://(0,15) (0, 8)
		return 1;//0 1
	break;
	case 3849://(0,15) (0, 9)
		return 1;//0 1
	break;
	case 3850://(0,15) (0, 10)
		return 1;//0 1
	break;
	case 3851://(0,15) (0, 11)
		return 1;//0 1
	break;
	case 3852://(0,15) (0, 12)
		return 1;//0 1
	break;
	case 3853://(0,15) (0, 13)
		return 1;//0 1
	break;
	case 3854://(0,15) (0, 14)
		return 1;//0 1
	break;
	case 3855://(0,15) (0, 15)
		return 1;//0 1
	break;
	case 3856://(0,15) (1, 0)
		return 1;//0 1
	break;
	case 3857://(0,15) (1, 1)
		return 1;//0 1
	break;
	case 3858://(0,15) (1, 2)
		return 1;//0 1
	break;
	case 3859://(0,15) (1, 3)
		return 1;//0 1
	break;
	case 3860://(0,15) (1, 4)
		return 1;//0 1
	break;
	case 3861://(0,15) (1, 5)
		return 1;//0 1
	break;
	case 3862://(0,15) (1, 6)
		return 1;//0 1
	break;
	case 3863://(0,15) (1, 7)
		return 1;//0 1
	break;
	case 3864://(0,15) (1, 8)
		return 1;//0 1
	break;
	case 3865://(0,15) (1, 9)
		return 1;//0 1
	break;
	case 3866://(0,15) (1, 10)
		return 1;//0 1
	break;
	case 3867://(0,15) (1, 11)
		return 1;//0 1
	break;
	case 3868://(0,15) (1, 12)
		return 1;//0 1
	break;
	case 3869://(0,15) (1, 13)
		return 1;//0 1
	break;
	case 3870://(0,15) (1, 14)
		return 1;//0 1
	break;
	case 3871://(0,15) (1, 15)
		return 1;//0 1
	break;
	case 3872://(0,15) (2, 0)
		return 1;//0 1
	break;
	case 3873://(0,15) (2, 1)
		return 1;//0 1
	break;
	case 3874://(0,15) (2, 2)
		return 1;//0 1
	break;
	case 3875://(0,15) (2, 3)
		return 1;//0 1
	break;
	case 3876://(0,15) (2, 4)
		return 1;//0 1
	break;
	case 3877://(0,15) (2, 5)
		return 1;//0 1
	break;
	case 3878://(0,15) (2, 6)
		return 1;//0 1
	break;
	case 3879://(0,15) (2, 7)
		return 1;//0 1
	break;
	case 3880://(0,15) (2, 8)
		return 1;//0 1
	break;
	case 3881://(0,15) (2, 9)
		return 1;//0 1
	break;
	case 3882://(0,15) (2, 10)
		return 1;//0 1
	break;
	case 3883://(0,15) (2, 11)
		return 1;//0 1
	break;
	case 3884://(0,15) (2, 12)
		return 1;//0 1
	break;
	case 3885://(0,15) (2, 13)
		return 1;//0 1
	break;
	case 3886://(0,15) (2, 14)
		return 1;//0 1
	break;
	case 3887://(0,15) (2, 15)
		return 1;//0 1
	break;
	case 3888://(0,15) (3, 0)
		return 1;//0 1
	break;
	case 3889://(0,15) (3, 1)
		return 1;//0 1
	break;
	case 3890://(0,15) (3, 2)
		return 1;//0 1
	break;
	case 3891://(0,15) (3, 3)
		return 1;//0 1
	break;
	case 3892://(0,15) (3, 4)
		return 1;//0 1
	break;
	case 3893://(0,15) (3, 5)
		return 1;//0 1
	break;
	case 3894://(0,15) (3, 6)
		return 1;//0 1
	break;
	case 3895://(0,15) (3, 7)
		return 1;//0 1
	break;
	case 3896://(0,15) (3, 8)
		return 1;//0 1
	break;
	case 3897://(0,15) (3, 9)
		return 1;//0 1
	break;
	case 3898://(0,15) (3, 10)
		return 1;//0 1
	break;
	case 3899://(0,15) (3, 11)
		return 1;//0 1
	break;
	case 3900://(0,15) (3, 12)
		return 1;//0 1
	break;
	case 3901://(0,15) (3, 13)
		return 1;//0 1
	break;
	case 3902://(0,15) (3, 14)
		return 1;//0 1
	break;
	case 3903://(0,15) (3, 15)
		return 1;//0 1
	break;
	case 3904://(0,15) (4, 0)
		return 1;//0 1
	break;
	case 3905://(0,15) (4, 1)
		return 1;//0 1
	break;
	case 3906://(0,15) (4, 2)
		return 1;//0 1
	break;
	case 3907://(0,15) (4, 3)
		return 1;//0 1
	break;
	case 3908://(0,15) (4, 4)
		return 1;//0 1
	break;
	case 3909://(0,15) (4, 5)
		return 1;//0 1
	break;
	case 3910://(0,15) (4, 6)
		return 1;//0 1
	break;
	case 3911://(0,15) (4, 7)
		return 1;//0 1
	break;
	case 3912://(0,15) (4, 8)
		return 1;//0 1
	break;
	case 3913://(0,15) (4, 9)
		return 1;//0 1
	break;
	case 3914://(0,15) (4, 10)
		return 1;//0 1
	break;
	case 3915://(0,15) (4, 11)
		return 1;//0 1
	break;
	case 3916://(0,15) (4, 12)
		return 1;//0 1
	break;
	case 3917://(0,15) (4, 13)
		return 1;//0 1
	break;
	case 3918://(0,15) (4, 14)
		return 1;//0 1
	break;
	case 3919://(0,15) (4, 15)
		return 1;//0 1
	break;
	case 3920://(0,15) (5, 0)
		return 1;//0 1
	break;
	case 3921://(0,15) (5, 1)
		return 1;//0 1
	break;
	case 3922://(0,15) (5, 2)
		return 1;//0 1
	break;
	case 3923://(0,15) (5, 3)
		return 1;//0 1
	break;
	case 3924://(0,15) (5, 4)
		return 1;//0 1
	break;
	case 3925://(0,15) (5, 5)
		return 1;//0 1
	break;
	case 3926://(0,15) (5, 6)
		return 1;//0 1
	break;
	case 3927://(0,15) (5, 7)
		return 1;//0 1
	break;
	case 3928://(0,15) (5, 8)
		return 1;//0 1
	break;
	case 3929://(0,15) (5, 9)
		return 1;//0 1
	break;
	case 3930://(0,15) (5, 10)
		return 1;//0 1
	break;
	case 3931://(0,15) (5, 11)
		return 1;//0 1
	break;
	case 3932://(0,15) (5, 12)
		return 1;//0 1
	break;
	case 3933://(0,15) (5, 13)
		return 1;//0 1
	break;
	case 3934://(0,15) (5, 14)
		return 1;//0 1
	break;
	case 3935://(0,15) (5, 15)
		return 1;//0 1
	break;
	case 3936://(0,15) (6, 0)
		return 1;//0 1
	break;
	case 3937://(0,15) (6, 1)
		return 1;//0 1
	break;
	case 3938://(0,15) (6, 2)
		return 1;//0 1
	break;
	case 3939://(0,15) (6, 3)
		return 1;//0 1
	break;
	case 3940://(0,15) (6, 4)
		return 1;//0 1
	break;
	case 3941://(0,15) (6, 5)
		return 1;//0 1
	break;
	case 3942://(0,15) (6, 6)
		return 1;//0 1
	break;
	case 3943://(0,15) (6, 7)
		return 1;//0 1
	break;
	case 3944://(0,15) (6, 8)
		return 1;//0 1
	break;
	case 3945://(0,15) (6, 9)
		return 1;//0 1
	break;
	case 3946://(0,15) (6, 10)
		return 1;//0 1
	break;
	case 3947://(0,15) (6, 11)
		return 1;//0 1
	break;
	case 3948://(0,15) (6, 12)
		return 1;//0 1
	break;
	case 3949://(0,15) (6, 13)
		return 1;//0 1
	break;
	case 3950://(0,15) (6, 14)
		return 1;//0 1
	break;
	case 3951://(0,15) (6, 15)
		return 1;//0 1
	break;
	case 3952://(0,15) (7, 0)
		return 1;//0 1
	break;
	case 3953://(0,15) (7, 1)
		return 1;//0 1
	break;
	case 3954://(0,15) (7, 2)
		return 1;//0 1
	break;
	case 3955://(0,15) (7, 3)
		return 1;//0 1
	break;
	case 3956://(0,15) (7, 4)
		return 1;//0 1
	break;
	case 3957://(0,15) (7, 5)
		return 1;//0 1
	break;
	case 3958://(0,15) (7, 6)
		return 1;//0 1
	break;
	case 3959://(0,15) (7, 7)
		return 1;//0 1
	break;
	case 3960://(0,15) (7, 8)
		return 1;//0 1
	break;
	case 3961://(0,15) (7, 9)
		return 1;//0 1
	break;
	case 3962://(0,15) (7, 10)
		return 1;//0 1
	break;
	case 3963://(0,15) (7, 11)
		return 1;//0 1
	break;
	case 3964://(0,15) (7, 12)
		return 1;//0 1
	break;
	case 3965://(0,15) (7, 13)
		return 1;//0 1
	break;
	case 3966://(0,15) (7, 14)
		return 1;//0 1
	break;
	case 3967://(0,15) (7, 15)
		return 1;//0 1
	break;
	case 3968://(0,15) (8, 0)
		return 1;//0 1
	break;
	case 3969://(0,15) (8, 1)
		return 1;//0 1
	break;
	case 3970://(0,15) (8, 2)
		return 1;//0 1
	break;
	case 3971://(0,15) (8, 3)
		return 1;//0 1
	break;
	case 3972://(0,15) (8, 4)
		return 1;//0 1
	break;
	case 3973://(0,15) (8, 5)
		return 1;//0 1
	break;
	case 3974://(0,15) (8, 6)
		return 1;//0 1
	break;
	case 3975://(0,15) (8, 7)
		return 1;//0 1
	break;
	case 3976://(0,15) (8, 8)
		return 1;//0 1
	break;
	case 3977://(0,15) (8, 9)
		return 1;//0 1
	break;
	case 3978://(0,15) (8, 10)
		return 1;//0 1
	break;
	case 3979://(0,15) (8, 11)
		return 1;//0 1
	break;
	case 3980://(0,15) (8, 12)
		return 1;//0 1
	break;
	case 3981://(0,15) (8, 13)
		return 1;//0 1
	break;
	case 3982://(0,15) (8, 14)
		return 1;//0 1
	break;
	case 3983://(0,15) (8, 15)
		return 1;//0 1
	break;
	case 3984://(0,15) (9, 0)
		return 1;//0 1
	break;
	case 3985://(0,15) (9, 1)
		return 1;//0 1
	break;
	case 3986://(0,15) (9, 2)
		return 1;//0 1
	break;
	case 3987://(0,15) (9, 3)
		return 1;//0 1
	break;
	case 3988://(0,15) (9, 4)
		return 1;//0 1
	break;
	case 3989://(0,15) (9, 5)
		return 1;//0 1
	break;
	case 3990://(0,15) (9, 6)
		return 1;//0 1
	break;
	case 3991://(0,15) (9, 7)
		return 1;//0 1
	break;
	case 3992://(0,15) (9, 8)
		return 1;//0 1
	break;
	case 3993://(0,15) (9, 9)
		return 1;//0 1
	break;
	case 3994://(0,15) (9, 10)
		return 1;//0 1
	break;
	case 3995://(0,15) (9, 11)
		return 1;//0 1
	break;
	case 3996://(0,15) (9, 12)
		return 1;//0 1
	break;
	case 3997://(0,15) (9, 13)
		return 1;//0 1
	break;
	case 3998://(0,15) (9, 14)
		return 1;//0 1
	break;
	case 3999://(0,15) (9, 15)
		return 1;//0 1
	break;
	case 4000://(0,15) (10, 0)
		return 1;//0 1
	break;
	case 4001://(0,15) (10, 1)
		return 1;//0 1
	break;
	case 4002://(0,15) (10, 2)
		return 1;//0 1
	break;
	case 4003://(0,15) (10, 3)
		return 1;//0 1
	break;
	case 4004://(0,15) (10, 4)
		return 1;//0 1
	break;
	case 4005://(0,15) (10, 5)
		return 1;//0 1
	break;
	case 4006://(0,15) (10, 6)
		return 1;//0 1
	break;
	case 4007://(0,15) (10, 7)
		return 1;//0 1
	break;
	case 4008://(0,15) (10, 8)
		return 1;//0 1
	break;
	case 4009://(0,15) (10, 9)
		return 1;//0 1
	break;
	case 4010://(0,15) (10, 10)
		return 1;//0 1
	break;
	case 4011://(0,15) (10, 11)
		return 1;//0 1
	break;
	case 4012://(0,15) (10, 12)
		return 1;//0 1
	break;
	case 4013://(0,15) (10, 13)
		return 1;//0 1
	break;
	case 4014://(0,15) (10, 14)
		return 1;//0 1
	break;
	case 4015://(0,15) (10, 15)
		return 1;//0 1
	break;
	case 4016://(0,15) (11, 0)
		return 1;//0 1
	break;
	case 4017://(0,15) (11, 1)
		return 1;//0 1
	break;
	case 4018://(0,15) (11, 2)
		return 1;//0 1
	break;
	case 4019://(0,15) (11, 3)
		return 1;//0 1
	break;
	case 4020://(0,15) (11, 4)
		return 1;//0 1
	break;
	case 4021://(0,15) (11, 5)
		return 1;//0 1
	break;
	case 4022://(0,15) (11, 6)
		return 1;//0 1
	break;
	case 4023://(0,15) (11, 7)
		return 1;//0 1
	break;
	case 4024://(0,15) (11, 8)
		return 1;//0 1
	break;
	case 4025://(0,15) (11, 9)
		return 1;//0 1
	break;
	case 4026://(0,15) (11, 10)
		return 1;//0 1
	break;
	case 4027://(0,15) (11, 11)
		return 1;//0 1
	break;
	case 4028://(0,15) (11, 12)
		return 1;//0 1
	break;
	case 4029://(0,15) (11, 13)
		return 1;//0 1
	break;
	case 4030://(0,15) (11, 14)
		return 1;//0 1
	break;
	case 4031://(0,15) (11, 15)
		return 1;//0 1
	break;
	case 4032://(0,15) (12, 0)
		return 1;//0 1
	break;
	case 4033://(0,15) (12, 1)
		return 1;//0 1
	break;
	case 4034://(0,15) (12, 2)
		return 1;//0 1
	break;
	case 4035://(0,15) (12, 3)
		return 1;//0 1
	break;
	case 4036://(0,15) (12, 4)
		return 1;//0 1
	break;
	case 4037://(0,15) (12, 5)
		return 1;//0 1
	break;
	case 4038://(0,15) (12, 6)
		return 1;//0 1
	break;
	case 4039://(0,15) (12, 7)
		return 1;//0 1
	break;
	case 4040://(0,15) (12, 8)
		return 1;//0 1
	break;
	case 4041://(0,15) (12, 9)
		return 1;//0 1
	break;
	case 4042://(0,15) (12, 10)
		return 1;//0 1
	break;
	case 4043://(0,15) (12, 11)
		return 1;//0 1
	break;
	case 4044://(0,15) (12, 12)
		return 1;//0 1
	break;
	case 4045://(0,15) (12, 13)
		return 1;//0 1
	break;
	case 4046://(0,15) (12, 14)
		return 1;//0 1
	break;
	case 4047://(0,15) (12, 15)
		return 1;//0 1
	break;
	case 4048://(0,15) (13, 0)
		return 1;//0 1
	break;
	case 4049://(0,15) (13, 1)
		return 1;//0 1
	break;
	case 4050://(0,15) (13, 2)
		return 1;//0 1
	break;
	case 4051://(0,15) (13, 3)
		return 1;//0 1
	break;
	case 4052://(0,15) (13, 4)
		return 1;//0 1
	break;
	case 4053://(0,15) (13, 5)
		return 1;//0 1
	break;
	case 4054://(0,15) (13, 6)
		return 1;//0 1
	break;
	case 4055://(0,15) (13, 7)
		return 1;//0 1
	break;
	case 4056://(0,15) (13, 8)
		return 1;//0 1
	break;
	case 4057://(0,15) (13, 9)
		return 1;//0 1
	break;
	case 4058://(0,15) (13, 10)
		return 1;//0 1
	break;
	case 4059://(0,15) (13, 11)
		return 1;//0 1
	break;
	case 4060://(0,15) (13, 12)
		return 1;//0 1
	break;
	case 4061://(0,15) (13, 13)
		return 1;//0 1
	break;
	case 4062://(0,15) (13, 14)
		return 1;//0 1
	break;
	case 4063://(0,15) (13, 15)
		return 1;//0 1
	break;
	case 4064://(0,15) (14, 0)
		return 1;//0 1
	break;
	case 4065://(0,15) (14, 1)
		return 1;//0 1
	break;
	case 4066://(0,15) (14, 2)
		return 1;//0 1
	break;
	case 4067://(0,15) (14, 3)
		return 1;//0 1
	break;
	case 4068://(0,15) (14, 4)
		return 1;//0 1
	break;
	case 4069://(0,15) (14, 5)
		return 1;//0 1
	break;
	case 4070://(0,15) (14, 6)
		return 1;//0 1
	break;
	case 4071://(0,15) (14, 7)
		return 1;//0 1
	break;
	case 4072://(0,15) (14, 8)
		return 1;//0 1
	break;
	case 4073://(0,15) (14, 9)
		return 1;//0 1
	break;
	case 4074://(0,15) (14, 10)
		return 1;//0 1
	break;
	case 4075://(0,15) (14, 11)
		return 1;//0 1
	break;
	case 4076://(0,15) (14, 12)
		return 1;//0 1
	break;
	case 4077://(0,15) (14, 13)
		return 1;//0 1
	break;
	case 4078://(0,15) (14, 14)
		return 1;//0 1
	break;
	case 4079://(0,15) (14, 15)
		return 1;//0 1
	break;
	case 4080://(0,15) (15, 0)
		return 1;//0 1
	break;
	case 4081://(0,15) (15, 1)
		return 1;//0 1
	break;
	case 4082://(0,15) (15, 2)
		return 1;//0 1
	break;
	case 4083://(0,15) (15, 3)
		return 1;//0 1
	break;
	case 4084://(0,15) (15, 4)
		return 1;//0 1
	break;
	case 4085://(0,15) (15, 5)
		return 1;//0 1
	break;
	case 4086://(0,15) (15, 6)
		return 1;//0 1
	break;
	case 4087://(0,15) (15, 7)
		return 1;//0 1
	break;
	case 4088://(0,15) (15, 8)
		return 1;//0 1
	break;
	case 4089://(0,15) (15, 9)
		return 1;//0 1
	break;
	case 4090://(0,15) (15, 10)
		return 1;//0 1
	break;
	case 4091://(0,15) (15, 11)
		return 1;//0 1
	break;
	case 4092://(0,15) (15, 12)
		return 1;//0 1
	break;
	case 4093://(0,15) (15, 13)
		return 1;//0 1
	break;
	case 4094://(0,15) (15, 14)
		return 1;//0 1
	break;
	case 4095://(0,15) (15, 15)
		return 1;//0 1
	break;
	case 4096://(1,0) (0, 0)
		return 0;//0 0
	break;
	case 4097://(1,0) (0, 1)
		return 0;//0 0
	break;
	case 4098://(1,0) (0, 2)
		return 0;//0 0
	break;
	case 4099://(1,0) (0, 3)
		return 0;//0 0
	break;
	case 4100://(1,0) (0, 4)
		return 0;//0 0
	break;
	case 4101://(1,0) (0, 5)
		return 0;//0 0
	break;
	case 4102://(1,0) (0, 6)
		return 0;//0 0
	break;
	case 4103://(1,0) (0, 7)
		return 0;//0 0
	break;
	case 4104://(1,0) (0, 8)
		return 0;//0 0
	break;
	case 4105://(1,0) (0, 9)
		return 0;//0 0
	break;
	case 4106://(1,0) (0, 10)
		return 0;//0 0
	break;
	case 4107://(1,0) (0, 11)
		return 0;//0 0
	break;
	case 4108://(1,0) (0, 12)
		return 0;//0 0
	break;
	case 4109://(1,0) (0, 13)
		return 0;//0 0
	break;
	case 4110://(1,0) (0, 14)
		return 0;//0 0
	break;
	case 4111://(1,0) (0, 15)
		return 0;//0 0
	break;
	case 4112://(1,0) (1, 0)
		return 64;//4 0
	break;
	case 4113://(1,0) (1, 1)
		return 64;//4 0
	break;
	case 4114://(1,0) (1, 2)
		return 64;//4 0
	break;
	case 4115://(1,0) (1, 3)
		return 64;//4 0
	break;
	case 4116://(1,0) (1, 4)
		return 64;//4 0
	break;
	case 4117://(1,0) (1, 5)
		return 64;//4 0
	break;
	case 4118://(1,0) (1, 6)
		return 64;//4 0
	break;
	case 4119://(1,0) (1, 7)
		return 64;//4 0
	break;
	case 4120://(1,0) (1, 8)
		return 64;//4 0
	break;
	case 4121://(1,0) (1, 9)
		return 64;//4 0
	break;
	case 4122://(1,0) (1, 10)
		return 64;//4 0
	break;
	case 4123://(1,0) (1, 11)
		return 64;//4 0
	break;
	case 4124://(1,0) (1, 12)
		return 64;//4 0
	break;
	case 4125://(1,0) (1, 13)
		return 64;//4 0
	break;
	case 4126://(1,0) (1, 14)
		return 64;//4 0
	break;
	case 4127://(1,0) (1, 15)
		return 64;//4 0
	break;
	case 4128://(1,0) (2, 0)
		return 0;//0 0
	break;
	case 4129://(1,0) (2, 1)
		return 0;//0 0
	break;
	case 4130://(1,0) (2, 2)
		return 0;//0 0
	break;
	case 4131://(1,0) (2, 3)
		return 0;//0 0
	break;
	case 4132://(1,0) (2, 4)
		return 0;//0 0
	break;
	case 4133://(1,0) (2, 5)
		return 0;//0 0
	break;
	case 4134://(1,0) (2, 6)
		return 0;//0 0
	break;
	case 4135://(1,0) (2, 7)
		return 0;//0 0
	break;
	case 4136://(1,0) (2, 8)
		return 0;//0 0
	break;
	case 4137://(1,0) (2, 9)
		return 0;//0 0
	break;
	case 4138://(1,0) (2, 10)
		return 0;//0 0
	break;
	case 4139://(1,0) (2, 11)
		return 0;//0 0
	break;
	case 4140://(1,0) (2, 12)
		return 0;//0 0
	break;
	case 4141://(1,0) (2, 13)
		return 0;//0 0
	break;
	case 4142://(1,0) (2, 14)
		return 0;//0 0
	break;
	case 4143://(1,0) (2, 15)
		return 0;//0 0
	break;
	case 4144://(1,0) (3, 0)
		return 0;//0 0
	break;
	case 4145://(1,0) (3, 1)
		return 0;//0 0
	break;
	case 4146://(1,0) (3, 2)
		return 0;//0 0
	break;
	case 4147://(1,0) (3, 3)
		return 0;//0 0
	break;
	case 4148://(1,0) (3, 4)
		return 0;//0 0
	break;
	case 4149://(1,0) (3, 5)
		return 0;//0 0
	break;
	case 4150://(1,0) (3, 6)
		return 0;//0 0
	break;
	case 4151://(1,0) (3, 7)
		return 0;//0 0
	break;
	case 4152://(1,0) (3, 8)
		return 0;//0 0
	break;
	case 4153://(1,0) (3, 9)
		return 0;//0 0
	break;
	case 4154://(1,0) (3, 10)
		return 0;//0 0
	break;
	case 4155://(1,0) (3, 11)
		return 0;//0 0
	break;
	case 4156://(1,0) (3, 12)
		return 0;//0 0
	break;
	case 4157://(1,0) (3, 13)
		return 0;//0 0
	break;
	case 4158://(1,0) (3, 14)
		return 0;//0 0
	break;
	case 4159://(1,0) (3, 15)
		return 0;//0 0
	break;
	case 4160://(1,0) (4, 0)
		return 0;//0 0
	break;
	case 4161://(1,0) (4, 1)
		return 0;//0 0
	break;
	case 4162://(1,0) (4, 2)
		return 0;//0 0
	break;
	case 4163://(1,0) (4, 3)
		return 0;//0 0
	break;
	case 4164://(1,0) (4, 4)
		return 0;//0 0
	break;
	case 4165://(1,0) (4, 5)
		return 0;//0 0
	break;
	case 4166://(1,0) (4, 6)
		return 0;//0 0
	break;
	case 4167://(1,0) (4, 7)
		return 0;//0 0
	break;
	case 4168://(1,0) (4, 8)
		return 0;//0 0
	break;
	case 4169://(1,0) (4, 9)
		return 0;//0 0
	break;
	case 4170://(1,0) (4, 10)
		return 0;//0 0
	break;
	case 4171://(1,0) (4, 11)
		return 0;//0 0
	break;
	case 4172://(1,0) (4, 12)
		return 0;//0 0
	break;
	case 4173://(1,0) (4, 13)
		return 0;//0 0
	break;
	case 4174://(1,0) (4, 14)
		return 0;//0 0
	break;
	case 4175://(1,0) (4, 15)
		return 0;//0 0
	break;
	case 4176://(1,0) (5, 0)
		return 0;//0 0
	break;
	case 4177://(1,0) (5, 1)
		return 0;//0 0
	break;
	case 4178://(1,0) (5, 2)
		return 0;//0 0
	break;
	case 4179://(1,0) (5, 3)
		return 0;//0 0
	break;
	case 4180://(1,0) (5, 4)
		return 0;//0 0
	break;
	case 4181://(1,0) (5, 5)
		return 0;//0 0
	break;
	case 4182://(1,0) (5, 6)
		return 0;//0 0
	break;
	case 4183://(1,0) (5, 7)
		return 0;//0 0
	break;
	case 4184://(1,0) (5, 8)
		return 0;//0 0
	break;
	case 4185://(1,0) (5, 9)
		return 0;//0 0
	break;
	case 4186://(1,0) (5, 10)
		return 0;//0 0
	break;
	case 4187://(1,0) (5, 11)
		return 0;//0 0
	break;
	case 4188://(1,0) (5, 12)
		return 0;//0 0
	break;
	case 4189://(1,0) (5, 13)
		return 0;//0 0
	break;
	case 4190://(1,0) (5, 14)
		return 0;//0 0
	break;
	case 4191://(1,0) (5, 15)
		return 0;//0 0
	break;
	case 4192://(1,0) (6, 0)
		return 64;//4 0
	break;
	case 4193://(1,0) (6, 1)
		return 64;//4 0
	break;
	case 4194://(1,0) (6, 2)
		return 64;//4 0
	break;
	case 4195://(1,0) (6, 3)
		return 64;//4 0
	break;
	case 4196://(1,0) (6, 4)
		return 64;//4 0
	break;
	case 4197://(1,0) (6, 5)
		return 64;//4 0
	break;
	case 4198://(1,0) (6, 6)
		return 64;//4 0
	break;
	case 4199://(1,0) (6, 7)
		return 64;//4 0
	break;
	case 4200://(1,0) (6, 8)
		return 64;//4 0
	break;
	case 4201://(1,0) (6, 9)
		return 64;//4 0
	break;
	case 4202://(1,0) (6, 10)
		return 64;//4 0
	break;
	case 4203://(1,0) (6, 11)
		return 64;//4 0
	break;
	case 4204://(1,0) (6, 12)
		return 64;//4 0
	break;
	case 4205://(1,0) (6, 13)
		return 64;//4 0
	break;
	case 4206://(1,0) (6, 14)
		return 64;//4 0
	break;
	case 4207://(1,0) (6, 15)
		return 64;//4 0
	break;
	case 4208://(1,0) (7, 0)
		return 0;//0 0
	break;
	case 4209://(1,0) (7, 1)
		return 0;//0 0
	break;
	case 4210://(1,0) (7, 2)
		return 0;//0 0
	break;
	case 4211://(1,0) (7, 3)
		return 0;//0 0
	break;
	case 4212://(1,0) (7, 4)
		return 0;//0 0
	break;
	case 4213://(1,0) (7, 5)
		return 0;//0 0
	break;
	case 4214://(1,0) (7, 6)
		return 0;//0 0
	break;
	case 4215://(1,0) (7, 7)
		return 0;//0 0
	break;
	case 4216://(1,0) (7, 8)
		return 0;//0 0
	break;
	case 4217://(1,0) (7, 9)
		return 0;//0 0
	break;
	case 4218://(1,0) (7, 10)
		return 0;//0 0
	break;
	case 4219://(1,0) (7, 11)
		return 0;//0 0
	break;
	case 4220://(1,0) (7, 12)
		return 0;//0 0
	break;
	case 4221://(1,0) (7, 13)
		return 0;//0 0
	break;
	case 4222://(1,0) (7, 14)
		return 0;//0 0
	break;
	case 4223://(1,0) (7, 15)
		return 0;//0 0
	break;
	case 4224://(1,0) (8, 0)
		return 64;//4 0
	break;
	case 4225://(1,0) (8, 1)
		return 64;//4 0
	break;
	case 4226://(1,0) (8, 2)
		return 64;//4 0
	break;
	case 4227://(1,0) (8, 3)
		return 64;//4 0
	break;
	case 4228://(1,0) (8, 4)
		return 64;//4 0
	break;
	case 4229://(1,0) (8, 5)
		return 64;//4 0
	break;
	case 4230://(1,0) (8, 6)
		return 64;//4 0
	break;
	case 4231://(1,0) (8, 7)
		return 64;//4 0
	break;
	case 4232://(1,0) (8, 8)
		return 64;//4 0
	break;
	case 4233://(1,0) (8, 9)
		return 64;//4 0
	break;
	case 4234://(1,0) (8, 10)
		return 64;//4 0
	break;
	case 4235://(1,0) (8, 11)
		return 64;//4 0
	break;
	case 4236://(1,0) (8, 12)
		return 64;//4 0
	break;
	case 4237://(1,0) (8, 13)
		return 64;//4 0
	break;
	case 4238://(1,0) (8, 14)
		return 64;//4 0
	break;
	case 4239://(1,0) (8, 15)
		return 64;//4 0
	break;
	case 4240://(1,0) (9, 0)
		return 64;//4 0
	break;
	case 4241://(1,0) (9, 1)
		return 64;//4 0
	break;
	case 4242://(1,0) (9, 2)
		return 64;//4 0
	break;
	case 4243://(1,0) (9, 3)
		return 64;//4 0
	break;
	case 4244://(1,0) (9, 4)
		return 64;//4 0
	break;
	case 4245://(1,0) (9, 5)
		return 64;//4 0
	break;
	case 4246://(1,0) (9, 6)
		return 64;//4 0
	break;
	case 4247://(1,0) (9, 7)
		return 64;//4 0
	break;
	case 4248://(1,0) (9, 8)
		return 64;//4 0
	break;
	case 4249://(1,0) (9, 9)
		return 64;//4 0
	break;
	case 4250://(1,0) (9, 10)
		return 64;//4 0
	break;
	case 4251://(1,0) (9, 11)
		return 64;//4 0
	break;
	case 4252://(1,0) (9, 12)
		return 64;//4 0
	break;
	case 4253://(1,0) (9, 13)
		return 64;//4 0
	break;
	case 4254://(1,0) (9, 14)
		return 64;//4 0
	break;
	case 4255://(1,0) (9, 15)
		return 64;//4 0
	break;
	case 4256://(1,0) (10, 0)
		return 0;//0 0
	break;
	case 4257://(1,0) (10, 1)
		return 0;//0 0
	break;
	case 4258://(1,0) (10, 2)
		return 0;//0 0
	break;
	case 4259://(1,0) (10, 3)
		return 0;//0 0
	break;
	case 4260://(1,0) (10, 4)
		return 0;//0 0
	break;
	case 4261://(1,0) (10, 5)
		return 0;//0 0
	break;
	case 4262://(1,0) (10, 6)
		return 0;//0 0
	break;
	case 4263://(1,0) (10, 7)
		return 0;//0 0
	break;
	case 4264://(1,0) (10, 8)
		return 0;//0 0
	break;
	case 4265://(1,0) (10, 9)
		return 0;//0 0
	break;
	case 4266://(1,0) (10, 10)
		return 0;//0 0
	break;
	case 4267://(1,0) (10, 11)
		return 0;//0 0
	break;
	case 4268://(1,0) (10, 12)
		return 0;//0 0
	break;
	case 4269://(1,0) (10, 13)
		return 0;//0 0
	break;
	case 4270://(1,0) (10, 14)
		return 0;//0 0
	break;
	case 4271://(1,0) (10, 15)
		return 0;//0 0
	break;
	case 4272://(1,0) (11, 0)
		return 64;//4 0
	break;
	case 4273://(1,0) (11, 1)
		return 64;//4 0
	break;
	case 4274://(1,0) (11, 2)
		return 64;//4 0
	break;
	case 4275://(1,0) (11, 3)
		return 64;//4 0
	break;
	case 4276://(1,0) (11, 4)
		return 64;//4 0
	break;
	case 4277://(1,0) (11, 5)
		return 64;//4 0
	break;
	case 4278://(1,0) (11, 6)
		return 64;//4 0
	break;
	case 4279://(1,0) (11, 7)
		return 64;//4 0
	break;
	case 4280://(1,0) (11, 8)
		return 64;//4 0
	break;
	case 4281://(1,0) (11, 9)
		return 64;//4 0
	break;
	case 4282://(1,0) (11, 10)
		return 64;//4 0
	break;
	case 4283://(1,0) (11, 11)
		return 64;//4 0
	break;
	case 4284://(1,0) (11, 12)
		return 64;//4 0
	break;
	case 4285://(1,0) (11, 13)
		return 64;//4 0
	break;
	case 4286://(1,0) (11, 14)
		return 64;//4 0
	break;
	case 4287://(1,0) (11, 15)
		return 64;//4 0
	break;
	case 4288://(1,0) (12, 0)
		return 0;//0 0
	break;
	case 4289://(1,0) (12, 1)
		return 0;//0 0
	break;
	case 4290://(1,0) (12, 2)
		return 0;//0 0
	break;
	case 4291://(1,0) (12, 3)
		return 0;//0 0
	break;
	case 4292://(1,0) (12, 4)
		return 0;//0 0
	break;
	case 4293://(1,0) (12, 5)
		return 0;//0 0
	break;
	case 4294://(1,0) (12, 6)
		return 0;//0 0
	break;
	case 4295://(1,0) (12, 7)
		return 0;//0 0
	break;
	case 4296://(1,0) (12, 8)
		return 0;//0 0
	break;
	case 4297://(1,0) (12, 9)
		return 0;//0 0
	break;
	case 4298://(1,0) (12, 10)
		return 0;//0 0
	break;
	case 4299://(1,0) (12, 11)
		return 0;//0 0
	break;
	case 4300://(1,0) (12, 12)
		return 0;//0 0
	break;
	case 4301://(1,0) (12, 13)
		return 0;//0 0
	break;
	case 4302://(1,0) (12, 14)
		return 0;//0 0
	break;
	case 4303://(1,0) (12, 15)
		return 0;//0 0
	break;
	case 4304://(1,0) (13, 0)
		return 64;//4 0
	break;
	case 4305://(1,0) (13, 1)
		return 64;//4 0
	break;
	case 4306://(1,0) (13, 2)
		return 64;//4 0
	break;
	case 4307://(1,0) (13, 3)
		return 64;//4 0
	break;
	case 4308://(1,0) (13, 4)
		return 64;//4 0
	break;
	case 4309://(1,0) (13, 5)
		return 64;//4 0
	break;
	case 4310://(1,0) (13, 6)
		return 64;//4 0
	break;
	case 4311://(1,0) (13, 7)
		return 64;//4 0
	break;
	case 4312://(1,0) (13, 8)
		return 64;//4 0
	break;
	case 4313://(1,0) (13, 9)
		return 64;//4 0
	break;
	case 4314://(1,0) (13, 10)
		return 64;//4 0
	break;
	case 4315://(1,0) (13, 11)
		return 64;//4 0
	break;
	case 4316://(1,0) (13, 12)
		return 64;//4 0
	break;
	case 4317://(1,0) (13, 13)
		return 64;//4 0
	break;
	case 4318://(1,0) (13, 14)
		return 64;//4 0
	break;
	case 4319://(1,0) (13, 15)
		return 64;//4 0
	break;
	case 4320://(1,0) (14, 0)
		return 64;//4 0
	break;
	case 4321://(1,0) (14, 1)
		return 64;//4 0
	break;
	case 4322://(1,0) (14, 2)
		return 64;//4 0
	break;
	case 4323://(1,0) (14, 3)
		return 64;//4 0
	break;
	case 4324://(1,0) (14, 4)
		return 64;//4 0
	break;
	case 4325://(1,0) (14, 5)
		return 64;//4 0
	break;
	case 4326://(1,0) (14, 6)
		return 64;//4 0
	break;
	case 4327://(1,0) (14, 7)
		return 64;//4 0
	break;
	case 4328://(1,0) (14, 8)
		return 64;//4 0
	break;
	case 4329://(1,0) (14, 9)
		return 64;//4 0
	break;
	case 4330://(1,0) (14, 10)
		return 64;//4 0
	break;
	case 4331://(1,0) (14, 11)
		return 64;//4 0
	break;
	case 4332://(1,0) (14, 12)
		return 64;//4 0
	break;
	case 4333://(1,0) (14, 13)
		return 64;//4 0
	break;
	case 4334://(1,0) (14, 14)
		return 64;//4 0
	break;
	case 4335://(1,0) (14, 15)
		return 64;//4 0
	break;
	case 4336://(1,0) (15, 0)
		return 64;//4 0
	break;
	case 4337://(1,0) (15, 1)
		return 64;//4 0
	break;
	case 4338://(1,0) (15, 2)
		return 64;//4 0
	break;
	case 4339://(1,0) (15, 3)
		return 64;//4 0
	break;
	case 4340://(1,0) (15, 4)
		return 64;//4 0
	break;
	case 4341://(1,0) (15, 5)
		return 64;//4 0
	break;
	case 4342://(1,0) (15, 6)
		return 64;//4 0
	break;
	case 4343://(1,0) (15, 7)
		return 64;//4 0
	break;
	case 4344://(1,0) (15, 8)
		return 64;//4 0
	break;
	case 4345://(1,0) (15, 9)
		return 64;//4 0
	break;
	case 4346://(1,0) (15, 10)
		return 64;//4 0
	break;
	case 4347://(1,0) (15, 11)
		return 64;//4 0
	break;
	case 4348://(1,0) (15, 12)
		return 64;//4 0
	break;
	case 4349://(1,0) (15, 13)
		return 64;//4 0
	break;
	case 4350://(1,0) (15, 14)
		return 64;//4 0
	break;
	case 4351://(1,0) (15, 15)
		return 64;//4 0
	break;
	case 4352://(1,1) (0, 0)
		return 0;//0 0
	break;
	case 4353://(1,1) (0, 1)
		return 4;//0 4
	break;
	case 4354://(1,1) (0, 2)
		return 0;//0 0
	break;
	case 4355://(1,1) (0, 3)
		return 0;//0 0
	break;
	case 4356://(1,1) (0, 4)
		return 0;//0 0
	break;
	case 4357://(1,1) (0, 5)
		return 0;//0 0
	break;
	case 4358://(1,1) (0, 6)
		return 4;//0 4
	break;
	case 4359://(1,1) (0, 7)
		return 0;//0 0
	break;
	case 4360://(1,1) (0, 8)
		return 4;//0 4
	break;
	case 4361://(1,1) (0, 9)
		return 4;//0 4
	break;
	case 4362://(1,1) (0, 10)
		return 0;//0 0
	break;
	case 4363://(1,1) (0, 11)
		return 4;//0 4
	break;
	case 4364://(1,1) (0, 12)
		return 0;//0 0
	break;
	case 4365://(1,1) (0, 13)
		return 4;//0 4
	break;
	case 4366://(1,1) (0, 14)
		return 4;//0 4
	break;
	case 4367://(1,1) (0, 15)
		return 4;//0 4
	break;
	case 4368://(1,1) (1, 0)
		return 64;//4 0
	break;
	case 4369://(1,1) (1, 1)
		return 68;//4 4
	break;
	case 4370://(1,1) (1, 2)
		return 64;//4 0
	break;
	case 4371://(1,1) (1, 3)
		return 64;//4 0
	break;
	case 4372://(1,1) (1, 4)
		return 64;//4 0
	break;
	case 4373://(1,1) (1, 5)
		return 64;//4 0
	break;
	case 4374://(1,1) (1, 6)
		return 68;//4 4
	break;
	case 4375://(1,1) (1, 7)
		return 64;//4 0
	break;
	case 4376://(1,1) (1, 8)
		return 68;//4 4
	break;
	case 4377://(1,1) (1, 9)
		return 68;//4 4
	break;
	case 4378://(1,1) (1, 10)
		return 64;//4 0
	break;
	case 4379://(1,1) (1, 11)
		return 68;//4 4
	break;
	case 4380://(1,1) (1, 12)
		return 64;//4 0
	break;
	case 4381://(1,1) (1, 13)
		return 68;//4 4
	break;
	case 4382://(1,1) (1, 14)
		return 68;//4 4
	break;
	case 4383://(1,1) (1, 15)
		return 68;//4 4
	break;
	case 4384://(1,1) (2, 0)
		return 0;//0 0
	break;
	case 4385://(1,1) (2, 1)
		return 4;//0 4
	break;
	case 4386://(1,1) (2, 2)
		return 0;//0 0
	break;
	case 4387://(1,1) (2, 3)
		return 0;//0 0
	break;
	case 4388://(1,1) (2, 4)
		return 0;//0 0
	break;
	case 4389://(1,1) (2, 5)
		return 0;//0 0
	break;
	case 4390://(1,1) (2, 6)
		return 4;//0 4
	break;
	case 4391://(1,1) (2, 7)
		return 0;//0 0
	break;
	case 4392://(1,1) (2, 8)
		return 4;//0 4
	break;
	case 4393://(1,1) (2, 9)
		return 4;//0 4
	break;
	case 4394://(1,1) (2, 10)
		return 0;//0 0
	break;
	case 4395://(1,1) (2, 11)
		return 4;//0 4
	break;
	case 4396://(1,1) (2, 12)
		return 0;//0 0
	break;
	case 4397://(1,1) (2, 13)
		return 4;//0 4
	break;
	case 4398://(1,1) (2, 14)
		return 4;//0 4
	break;
	case 4399://(1,1) (2, 15)
		return 4;//0 4
	break;
	case 4400://(1,1) (3, 0)
		return 0;//0 0
	break;
	case 4401://(1,1) (3, 1)
		return 4;//0 4
	break;
	case 4402://(1,1) (3, 2)
		return 0;//0 0
	break;
	case 4403://(1,1) (3, 3)
		return 0;//0 0
	break;
	case 4404://(1,1) (3, 4)
		return 0;//0 0
	break;
	case 4405://(1,1) (3, 5)
		return 0;//0 0
	break;
	case 4406://(1,1) (3, 6)
		return 4;//0 4
	break;
	case 4407://(1,1) (3, 7)
		return 0;//0 0
	break;
	case 4408://(1,1) (3, 8)
		return 4;//0 4
	break;
	case 4409://(1,1) (3, 9)
		return 4;//0 4
	break;
	case 4410://(1,1) (3, 10)
		return 0;//0 0
	break;
	case 4411://(1,1) (3, 11)
		return 4;//0 4
	break;
	case 4412://(1,1) (3, 12)
		return 0;//0 0
	break;
	case 4413://(1,1) (3, 13)
		return 4;//0 4
	break;
	case 4414://(1,1) (3, 14)
		return 4;//0 4
	break;
	case 4415://(1,1) (3, 15)
		return 4;//0 4
	break;
	case 4416://(1,1) (4, 0)
		return 0;//0 0
	break;
	case 4417://(1,1) (4, 1)
		return 4;//0 4
	break;
	case 4418://(1,1) (4, 2)
		return 0;//0 0
	break;
	case 4419://(1,1) (4, 3)
		return 0;//0 0
	break;
	case 4420://(1,1) (4, 4)
		return 0;//0 0
	break;
	case 4421://(1,1) (4, 5)
		return 0;//0 0
	break;
	case 4422://(1,1) (4, 6)
		return 4;//0 4
	break;
	case 4423://(1,1) (4, 7)
		return 0;//0 0
	break;
	case 4424://(1,1) (4, 8)
		return 4;//0 4
	break;
	case 4425://(1,1) (4, 9)
		return 4;//0 4
	break;
	case 4426://(1,1) (4, 10)
		return 0;//0 0
	break;
	case 4427://(1,1) (4, 11)
		return 4;//0 4
	break;
	case 4428://(1,1) (4, 12)
		return 0;//0 0
	break;
	case 4429://(1,1) (4, 13)
		return 4;//0 4
	break;
	case 4430://(1,1) (4, 14)
		return 4;//0 4
	break;
	case 4431://(1,1) (4, 15)
		return 4;//0 4
	break;
	case 4432://(1,1) (5, 0)
		return 0;//0 0
	break;
	case 4433://(1,1) (5, 1)
		return 4;//0 4
	break;
	case 4434://(1,1) (5, 2)
		return 0;//0 0
	break;
	case 4435://(1,1) (5, 3)
		return 0;//0 0
	break;
	case 4436://(1,1) (5, 4)
		return 0;//0 0
	break;
	case 4437://(1,1) (5, 5)
		return 0;//0 0
	break;
	case 4438://(1,1) (5, 6)
		return 4;//0 4
	break;
	case 4439://(1,1) (5, 7)
		return 0;//0 0
	break;
	case 4440://(1,1) (5, 8)
		return 4;//0 4
	break;
	case 4441://(1,1) (5, 9)
		return 4;//0 4
	break;
	case 4442://(1,1) (5, 10)
		return 0;//0 0
	break;
	case 4443://(1,1) (5, 11)
		return 4;//0 4
	break;
	case 4444://(1,1) (5, 12)
		return 0;//0 0
	break;
	case 4445://(1,1) (5, 13)
		return 4;//0 4
	break;
	case 4446://(1,1) (5, 14)
		return 4;//0 4
	break;
	case 4447://(1,1) (5, 15)
		return 4;//0 4
	break;
	case 4448://(1,1) (6, 0)
		return 64;//4 0
	break;
	case 4449://(1,1) (6, 1)
		return 68;//4 4
	break;
	case 4450://(1,1) (6, 2)
		return 64;//4 0
	break;
	case 4451://(1,1) (6, 3)
		return 64;//4 0
	break;
	case 4452://(1,1) (6, 4)
		return 64;//4 0
	break;
	case 4453://(1,1) (6, 5)
		return 64;//4 0
	break;
	case 4454://(1,1) (6, 6)
		return 68;//4 4
	break;
	case 4455://(1,1) (6, 7)
		return 64;//4 0
	break;
	case 4456://(1,1) (6, 8)
		return 68;//4 4
	break;
	case 4457://(1,1) (6, 9)
		return 68;//4 4
	break;
	case 4458://(1,1) (6, 10)
		return 64;//4 0
	break;
	case 4459://(1,1) (6, 11)
		return 68;//4 4
	break;
	case 4460://(1,1) (6, 12)
		return 64;//4 0
	break;
	case 4461://(1,1) (6, 13)
		return 68;//4 4
	break;
	case 4462://(1,1) (6, 14)
		return 68;//4 4
	break;
	case 4463://(1,1) (6, 15)
		return 68;//4 4
	break;
	case 4464://(1,1) (7, 0)
		return 0;//0 0
	break;
	case 4465://(1,1) (7, 1)
		return 4;//0 4
	break;
	case 4466://(1,1) (7, 2)
		return 0;//0 0
	break;
	case 4467://(1,1) (7, 3)
		return 0;//0 0
	break;
	case 4468://(1,1) (7, 4)
		return 0;//0 0
	break;
	case 4469://(1,1) (7, 5)
		return 0;//0 0
	break;
	case 4470://(1,1) (7, 6)
		return 4;//0 4
	break;
	case 4471://(1,1) (7, 7)
		return 0;//0 0
	break;
	case 4472://(1,1) (7, 8)
		return 4;//0 4
	break;
	case 4473://(1,1) (7, 9)
		return 4;//0 4
	break;
	case 4474://(1,1) (7, 10)
		return 0;//0 0
	break;
	case 4475://(1,1) (7, 11)
		return 4;//0 4
	break;
	case 4476://(1,1) (7, 12)
		return 0;//0 0
	break;
	case 4477://(1,1) (7, 13)
		return 4;//0 4
	break;
	case 4478://(1,1) (7, 14)
		return 4;//0 4
	break;
	case 4479://(1,1) (7, 15)
		return 4;//0 4
	break;
	case 4480://(1,1) (8, 0)
		return 64;//4 0
	break;
	case 4481://(1,1) (8, 1)
		return 68;//4 4
	break;
	case 4482://(1,1) (8, 2)
		return 64;//4 0
	break;
	case 4483://(1,1) (8, 3)
		return 64;//4 0
	break;
	case 4484://(1,1) (8, 4)
		return 64;//4 0
	break;
	case 4485://(1,1) (8, 5)
		return 64;//4 0
	break;
	case 4486://(1,1) (8, 6)
		return 68;//4 4
	break;
	case 4487://(1,1) (8, 7)
		return 64;//4 0
	break;
	case 4488://(1,1) (8, 8)
		return 68;//4 4
	break;
	case 4489://(1,1) (8, 9)
		return 68;//4 4
	break;
	case 4490://(1,1) (8, 10)
		return 64;//4 0
	break;
	case 4491://(1,1) (8, 11)
		return 68;//4 4
	break;
	case 4492://(1,1) (8, 12)
		return 64;//4 0
	break;
	case 4493://(1,1) (8, 13)
		return 68;//4 4
	break;
	case 4494://(1,1) (8, 14)
		return 68;//4 4
	break;
	case 4495://(1,1) (8, 15)
		return 68;//4 4
	break;
	case 4496://(1,1) (9, 0)
		return 64;//4 0
	break;
	case 4497://(1,1) (9, 1)
		return 68;//4 4
	break;
	case 4498://(1,1) (9, 2)
		return 64;//4 0
	break;
	case 4499://(1,1) (9, 3)
		return 64;//4 0
	break;
	case 4500://(1,1) (9, 4)
		return 64;//4 0
	break;
	case 4501://(1,1) (9, 5)
		return 64;//4 0
	break;
	case 4502://(1,1) (9, 6)
		return 68;//4 4
	break;
	case 4503://(1,1) (9, 7)
		return 64;//4 0
	break;
	case 4504://(1,1) (9, 8)
		return 68;//4 4
	break;
	case 4505://(1,1) (9, 9)
		return 68;//4 4
	break;
	case 4506://(1,1) (9, 10)
		return 64;//4 0
	break;
	case 4507://(1,1) (9, 11)
		return 68;//4 4
	break;
	case 4508://(1,1) (9, 12)
		return 64;//4 0
	break;
	case 4509://(1,1) (9, 13)
		return 68;//4 4
	break;
	case 4510://(1,1) (9, 14)
		return 68;//4 4
	break;
	case 4511://(1,1) (9, 15)
		return 68;//4 4
	break;
	case 4512://(1,1) (10, 0)
		return 0;//0 0
	break;
	case 4513://(1,1) (10, 1)
		return 4;//0 4
	break;
	case 4514://(1,1) (10, 2)
		return 0;//0 0
	break;
	case 4515://(1,1) (10, 3)
		return 0;//0 0
	break;
	case 4516://(1,1) (10, 4)
		return 0;//0 0
	break;
	case 4517://(1,1) (10, 5)
		return 0;//0 0
	break;
	case 4518://(1,1) (10, 6)
		return 4;//0 4
	break;
	case 4519://(1,1) (10, 7)
		return 0;//0 0
	break;
	case 4520://(1,1) (10, 8)
		return 4;//0 4
	break;
	case 4521://(1,1) (10, 9)
		return 4;//0 4
	break;
	case 4522://(1,1) (10, 10)
		return 0;//0 0
	break;
	case 4523://(1,1) (10, 11)
		return 4;//0 4
	break;
	case 4524://(1,1) (10, 12)
		return 0;//0 0
	break;
	case 4525://(1,1) (10, 13)
		return 4;//0 4
	break;
	case 4526://(1,1) (10, 14)
		return 4;//0 4
	break;
	case 4527://(1,1) (10, 15)
		return 4;//0 4
	break;
	case 4528://(1,1) (11, 0)
		return 64;//4 0
	break;
	case 4529://(1,1) (11, 1)
		return 68;//4 4
	break;
	case 4530://(1,1) (11, 2)
		return 64;//4 0
	break;
	case 4531://(1,1) (11, 3)
		return 64;//4 0
	break;
	case 4532://(1,1) (11, 4)
		return 64;//4 0
	break;
	case 4533://(1,1) (11, 5)
		return 64;//4 0
	break;
	case 4534://(1,1) (11, 6)
		return 68;//4 4
	break;
	case 4535://(1,1) (11, 7)
		return 64;//4 0
	break;
	case 4536://(1,1) (11, 8)
		return 68;//4 4
	break;
	case 4537://(1,1) (11, 9)
		return 68;//4 4
	break;
	case 4538://(1,1) (11, 10)
		return 64;//4 0
	break;
	case 4539://(1,1) (11, 11)
		return 68;//4 4
	break;
	case 4540://(1,1) (11, 12)
		return 64;//4 0
	break;
	case 4541://(1,1) (11, 13)
		return 68;//4 4
	break;
	case 4542://(1,1) (11, 14)
		return 68;//4 4
	break;
	case 4543://(1,1) (11, 15)
		return 68;//4 4
	break;
	case 4544://(1,1) (12, 0)
		return 0;//0 0
	break;
	case 4545://(1,1) (12, 1)
		return 4;//0 4
	break;
	case 4546://(1,1) (12, 2)
		return 0;//0 0
	break;
	case 4547://(1,1) (12, 3)
		return 0;//0 0
	break;
	case 4548://(1,1) (12, 4)
		return 0;//0 0
	break;
	case 4549://(1,1) (12, 5)
		return 0;//0 0
	break;
	case 4550://(1,1) (12, 6)
		return 4;//0 4
	break;
	case 4551://(1,1) (12, 7)
		return 0;//0 0
	break;
	case 4552://(1,1) (12, 8)
		return 4;//0 4
	break;
	case 4553://(1,1) (12, 9)
		return 4;//0 4
	break;
	case 4554://(1,1) (12, 10)
		return 0;//0 0
	break;
	case 4555://(1,1) (12, 11)
		return 4;//0 4
	break;
	case 4556://(1,1) (12, 12)
		return 0;//0 0
	break;
	case 4557://(1,1) (12, 13)
		return 4;//0 4
	break;
	case 4558://(1,1) (12, 14)
		return 4;//0 4
	break;
	case 4559://(1,1) (12, 15)
		return 4;//0 4
	break;
	case 4560://(1,1) (13, 0)
		return 64;//4 0
	break;
	case 4561://(1,1) (13, 1)
		return 68;//4 4
	break;
	case 4562://(1,1) (13, 2)
		return 64;//4 0
	break;
	case 4563://(1,1) (13, 3)
		return 64;//4 0
	break;
	case 4564://(1,1) (13, 4)
		return 64;//4 0
	break;
	case 4565://(1,1) (13, 5)
		return 64;//4 0
	break;
	case 4566://(1,1) (13, 6)
		return 68;//4 4
	break;
	case 4567://(1,1) (13, 7)
		return 64;//4 0
	break;
	case 4568://(1,1) (13, 8)
		return 68;//4 4
	break;
	case 4569://(1,1) (13, 9)
		return 68;//4 4
	break;
	case 4570://(1,1) (13, 10)
		return 64;//4 0
	break;
	case 4571://(1,1) (13, 11)
		return 68;//4 4
	break;
	case 4572://(1,1) (13, 12)
		return 64;//4 0
	break;
	case 4573://(1,1) (13, 13)
		return 68;//4 4
	break;
	case 4574://(1,1) (13, 14)
		return 68;//4 4
	break;
	case 4575://(1,1) (13, 15)
		return 68;//4 4
	break;
	case 4576://(1,1) (14, 0)
		return 64;//4 0
	break;
	case 4577://(1,1) (14, 1)
		return 68;//4 4
	break;
	case 4578://(1,1) (14, 2)
		return 64;//4 0
	break;
	case 4579://(1,1) (14, 3)
		return 64;//4 0
	break;
	case 4580://(1,1) (14, 4)
		return 64;//4 0
	break;
	case 4581://(1,1) (14, 5)
		return 64;//4 0
	break;
	case 4582://(1,1) (14, 6)
		return 68;//4 4
	break;
	case 4583://(1,1) (14, 7)
		return 64;//4 0
	break;
	case 4584://(1,1) (14, 8)
		return 68;//4 4
	break;
	case 4585://(1,1) (14, 9)
		return 68;//4 4
	break;
	case 4586://(1,1) (14, 10)
		return 64;//4 0
	break;
	case 4587://(1,1) (14, 11)
		return 68;//4 4
	break;
	case 4588://(1,1) (14, 12)
		return 64;//4 0
	break;
	case 4589://(1,1) (14, 13)
		return 68;//4 4
	break;
	case 4590://(1,1) (14, 14)
		return 68;//4 4
	break;
	case 4591://(1,1) (14, 15)
		return 68;//4 4
	break;
	case 4592://(1,1) (15, 0)
		return 64;//4 0
	break;
	case 4593://(1,1) (15, 1)
		return 68;//4 4
	break;
	case 4594://(1,1) (15, 2)
		return 64;//4 0
	break;
	case 4595://(1,1) (15, 3)
		return 64;//4 0
	break;
	case 4596://(1,1) (15, 4)
		return 64;//4 0
	break;
	case 4597://(1,1) (15, 5)
		return 64;//4 0
	break;
	case 4598://(1,1) (15, 6)
		return 68;//4 4
	break;
	case 4599://(1,1) (15, 7)
		return 64;//4 0
	break;
	case 4600://(1,1) (15, 8)
		return 68;//4 4
	break;
	case 4601://(1,1) (15, 9)
		return 68;//4 4
	break;
	case 4602://(1,1) (15, 10)
		return 64;//4 0
	break;
	case 4603://(1,1) (15, 11)
		return 68;//4 4
	break;
	case 4604://(1,1) (15, 12)
		return 64;//4 0
	break;
	case 4605://(1,1) (15, 13)
		return 68;//4 4
	break;
	case 4606://(1,1) (15, 14)
		return 68;//4 4
	break;
	case 4607://(1,1) (15, 15)
		return 68;//4 4
	break;
	case 4608://(1,2) (0, 0)
		return 0;//0 0
	break;
	case 4609://(1,2) (0, 1)
		return 0;//0 0
	break;
	case 4610://(1,2) (0, 2)
		return 4;//0 4
	break;
	case 4611://(1,2) (0, 3)
		return 0;//0 0
	break;
	case 4612://(1,2) (0, 4)
		return 0;//0 0
	break;
	case 4613://(1,2) (0, 5)
		return 4;//0 4
	break;
	case 4614://(1,2) (0, 6)
		return 0;//0 0
	break;
	case 4615://(1,2) (0, 7)
		return 4;//0 4
	break;
	case 4616://(1,2) (0, 8)
		return 0;//0 0
	break;
	case 4617://(1,2) (0, 9)
		return 4;//0 4
	break;
	case 4618://(1,2) (0, 10)
		return 0;//0 0
	break;
	case 4619://(1,2) (0, 11)
		return 4;//0 4
	break;
	case 4620://(1,2) (0, 12)
		return 4;//0 4
	break;
	case 4621://(1,2) (0, 13)
		return 0;//0 0
	break;
	case 4622://(1,2) (0, 14)
		return 4;//0 4
	break;
	case 4623://(1,2) (0, 15)
		return 4;//0 4
	break;
	case 4624://(1,2) (1, 0)
		return 64;//4 0
	break;
	case 4625://(1,2) (1, 1)
		return 64;//4 0
	break;
	case 4626://(1,2) (1, 2)
		return 68;//4 4
	break;
	case 4627://(1,2) (1, 3)
		return 64;//4 0
	break;
	case 4628://(1,2) (1, 4)
		return 64;//4 0
	break;
	case 4629://(1,2) (1, 5)
		return 68;//4 4
	break;
	case 4630://(1,2) (1, 6)
		return 64;//4 0
	break;
	case 4631://(1,2) (1, 7)
		return 68;//4 4
	break;
	case 4632://(1,2) (1, 8)
		return 64;//4 0
	break;
	case 4633://(1,2) (1, 9)
		return 68;//4 4
	break;
	case 4634://(1,2) (1, 10)
		return 64;//4 0
	break;
	case 4635://(1,2) (1, 11)
		return 68;//4 4
	break;
	case 4636://(1,2) (1, 12)
		return 68;//4 4
	break;
	case 4637://(1,2) (1, 13)
		return 64;//4 0
	break;
	case 4638://(1,2) (1, 14)
		return 68;//4 4
	break;
	case 4639://(1,2) (1, 15)
		return 68;//4 4
	break;
	case 4640://(1,2) (2, 0)
		return 0;//0 0
	break;
	case 4641://(1,2) (2, 1)
		return 0;//0 0
	break;
	case 4642://(1,2) (2, 2)
		return 4;//0 4
	break;
	case 4643://(1,2) (2, 3)
		return 0;//0 0
	break;
	case 4644://(1,2) (2, 4)
		return 0;//0 0
	break;
	case 4645://(1,2) (2, 5)
		return 4;//0 4
	break;
	case 4646://(1,2) (2, 6)
		return 0;//0 0
	break;
	case 4647://(1,2) (2, 7)
		return 4;//0 4
	break;
	case 4648://(1,2) (2, 8)
		return 0;//0 0
	break;
	case 4649://(1,2) (2, 9)
		return 4;//0 4
	break;
	case 4650://(1,2) (2, 10)
		return 0;//0 0
	break;
	case 4651://(1,2) (2, 11)
		return 4;//0 4
	break;
	case 4652://(1,2) (2, 12)
		return 4;//0 4
	break;
	case 4653://(1,2) (2, 13)
		return 0;//0 0
	break;
	case 4654://(1,2) (2, 14)
		return 4;//0 4
	break;
	case 4655://(1,2) (2, 15)
		return 4;//0 4
	break;
	case 4656://(1,2) (3, 0)
		return 0;//0 0
	break;
	case 4657://(1,2) (3, 1)
		return 0;//0 0
	break;
	case 4658://(1,2) (3, 2)
		return 4;//0 4
	break;
	case 4659://(1,2) (3, 3)
		return 0;//0 0
	break;
	case 4660://(1,2) (3, 4)
		return 0;//0 0
	break;
	case 4661://(1,2) (3, 5)
		return 4;//0 4
	break;
	case 4662://(1,2) (3, 6)
		return 0;//0 0
	break;
	case 4663://(1,2) (3, 7)
		return 4;//0 4
	break;
	case 4664://(1,2) (3, 8)
		return 0;//0 0
	break;
	case 4665://(1,2) (3, 9)
		return 4;//0 4
	break;
	case 4666://(1,2) (3, 10)
		return 0;//0 0
	break;
	case 4667://(1,2) (3, 11)
		return 4;//0 4
	break;
	case 4668://(1,2) (3, 12)
		return 4;//0 4
	break;
	case 4669://(1,2) (3, 13)
		return 0;//0 0
	break;
	case 4670://(1,2) (3, 14)
		return 4;//0 4
	break;
	case 4671://(1,2) (3, 15)
		return 4;//0 4
	break;
	case 4672://(1,2) (4, 0)
		return 0;//0 0
	break;
	case 4673://(1,2) (4, 1)
		return 0;//0 0
	break;
	case 4674://(1,2) (4, 2)
		return 4;//0 4
	break;
	case 4675://(1,2) (4, 3)
		return 0;//0 0
	break;
	case 4676://(1,2) (4, 4)
		return 0;//0 0
	break;
	case 4677://(1,2) (4, 5)
		return 4;//0 4
	break;
	case 4678://(1,2) (4, 6)
		return 0;//0 0
	break;
	case 4679://(1,2) (4, 7)
		return 4;//0 4
	break;
	case 4680://(1,2) (4, 8)
		return 0;//0 0
	break;
	case 4681://(1,2) (4, 9)
		return 4;//0 4
	break;
	case 4682://(1,2) (4, 10)
		return 0;//0 0
	break;
	case 4683://(1,2) (4, 11)
		return 4;//0 4
	break;
	case 4684://(1,2) (4, 12)
		return 4;//0 4
	break;
	case 4685://(1,2) (4, 13)
		return 0;//0 0
	break;
	case 4686://(1,2) (4, 14)
		return 4;//0 4
	break;
	case 4687://(1,2) (4, 15)
		return 4;//0 4
	break;
	case 4688://(1,2) (5, 0)
		return 0;//0 0
	break;
	case 4689://(1,2) (5, 1)
		return 0;//0 0
	break;
	case 4690://(1,2) (5, 2)
		return 4;//0 4
	break;
	case 4691://(1,2) (5, 3)
		return 0;//0 0
	break;
	case 4692://(1,2) (5, 4)
		return 0;//0 0
	break;
	case 4693://(1,2) (5, 5)
		return 4;//0 4
	break;
	case 4694://(1,2) (5, 6)
		return 0;//0 0
	break;
	case 4695://(1,2) (5, 7)
		return 4;//0 4
	break;
	case 4696://(1,2) (5, 8)
		return 0;//0 0
	break;
	case 4697://(1,2) (5, 9)
		return 4;//0 4
	break;
	case 4698://(1,2) (5, 10)
		return 0;//0 0
	break;
	case 4699://(1,2) (5, 11)
		return 4;//0 4
	break;
	case 4700://(1,2) (5, 12)
		return 4;//0 4
	break;
	case 4701://(1,2) (5, 13)
		return 0;//0 0
	break;
	case 4702://(1,2) (5, 14)
		return 4;//0 4
	break;
	case 4703://(1,2) (5, 15)
		return 4;//0 4
	break;
	case 4704://(1,2) (6, 0)
		return 64;//4 0
	break;
	case 4705://(1,2) (6, 1)
		return 64;//4 0
	break;
	case 4706://(1,2) (6, 2)
		return 68;//4 4
	break;
	case 4707://(1,2) (6, 3)
		return 64;//4 0
	break;
	case 4708://(1,2) (6, 4)
		return 64;//4 0
	break;
	case 4709://(1,2) (6, 5)
		return 68;//4 4
	break;
	case 4710://(1,2) (6, 6)
		return 64;//4 0
	break;
	case 4711://(1,2) (6, 7)
		return 68;//4 4
	break;
	case 4712://(1,2) (6, 8)
		return 64;//4 0
	break;
	case 4713://(1,2) (6, 9)
		return 68;//4 4
	break;
	case 4714://(1,2) (6, 10)
		return 64;//4 0
	break;
	case 4715://(1,2) (6, 11)
		return 68;//4 4
	break;
	case 4716://(1,2) (6, 12)
		return 68;//4 4
	break;
	case 4717://(1,2) (6, 13)
		return 64;//4 0
	break;
	case 4718://(1,2) (6, 14)
		return 68;//4 4
	break;
	case 4719://(1,2) (6, 15)
		return 68;//4 4
	break;
	case 4720://(1,2) (7, 0)
		return 0;//0 0
	break;
	case 4721://(1,2) (7, 1)
		return 0;//0 0
	break;
	case 4722://(1,2) (7, 2)
		return 4;//0 4
	break;
	case 4723://(1,2) (7, 3)
		return 0;//0 0
	break;
	case 4724://(1,2) (7, 4)
		return 0;//0 0
	break;
	case 4725://(1,2) (7, 5)
		return 4;//0 4
	break;
	case 4726://(1,2) (7, 6)
		return 0;//0 0
	break;
	case 4727://(1,2) (7, 7)
		return 4;//0 4
	break;
	case 4728://(1,2) (7, 8)
		return 0;//0 0
	break;
	case 4729://(1,2) (7, 9)
		return 4;//0 4
	break;
	case 4730://(1,2) (7, 10)
		return 0;//0 0
	break;
	case 4731://(1,2) (7, 11)
		return 4;//0 4
	break;
	case 4732://(1,2) (7, 12)
		return 4;//0 4
	break;
	case 4733://(1,2) (7, 13)
		return 0;//0 0
	break;
	case 4734://(1,2) (7, 14)
		return 4;//0 4
	break;
	case 4735://(1,2) (7, 15)
		return 4;//0 4
	break;
	case 4736://(1,2) (8, 0)
		return 64;//4 0
	break;
	case 4737://(1,2) (8, 1)
		return 64;//4 0
	break;
	case 4738://(1,2) (8, 2)
		return 68;//4 4
	break;
	case 4739://(1,2) (8, 3)
		return 64;//4 0
	break;
	case 4740://(1,2) (8, 4)
		return 64;//4 0
	break;
	case 4741://(1,2) (8, 5)
		return 68;//4 4
	break;
	case 4742://(1,2) (8, 6)
		return 64;//4 0
	break;
	case 4743://(1,2) (8, 7)
		return 68;//4 4
	break;
	case 4744://(1,2) (8, 8)
		return 64;//4 0
	break;
	case 4745://(1,2) (8, 9)
		return 68;//4 4
	break;
	case 4746://(1,2) (8, 10)
		return 64;//4 0
	break;
	case 4747://(1,2) (8, 11)
		return 68;//4 4
	break;
	case 4748://(1,2) (8, 12)
		return 68;//4 4
	break;
	case 4749://(1,2) (8, 13)
		return 64;//4 0
	break;
	case 4750://(1,2) (8, 14)
		return 68;//4 4
	break;
	case 4751://(1,2) (8, 15)
		return 68;//4 4
	break;
	case 4752://(1,2) (9, 0)
		return 64;//4 0
	break;
	case 4753://(1,2) (9, 1)
		return 64;//4 0
	break;
	case 4754://(1,2) (9, 2)
		return 68;//4 4
	break;
	case 4755://(1,2) (9, 3)
		return 64;//4 0
	break;
	case 4756://(1,2) (9, 4)
		return 64;//4 0
	break;
	case 4757://(1,2) (9, 5)
		return 68;//4 4
	break;
	case 4758://(1,2) (9, 6)
		return 64;//4 0
	break;
	case 4759://(1,2) (9, 7)
		return 68;//4 4
	break;
	case 4760://(1,2) (9, 8)
		return 64;//4 0
	break;
	case 4761://(1,2) (9, 9)
		return 68;//4 4
	break;
	case 4762://(1,2) (9, 10)
		return 64;//4 0
	break;
	case 4763://(1,2) (9, 11)
		return 68;//4 4
	break;
	case 4764://(1,2) (9, 12)
		return 68;//4 4
	break;
	case 4765://(1,2) (9, 13)
		return 64;//4 0
	break;
	case 4766://(1,2) (9, 14)
		return 68;//4 4
	break;
	case 4767://(1,2) (9, 15)
		return 68;//4 4
	break;
	case 4768://(1,2) (10, 0)
		return 0;//0 0
	break;
	case 4769://(1,2) (10, 1)
		return 0;//0 0
	break;
	case 4770://(1,2) (10, 2)
		return 4;//0 4
	break;
	case 4771://(1,2) (10, 3)
		return 0;//0 0
	break;
	case 4772://(1,2) (10, 4)
		return 0;//0 0
	break;
	case 4773://(1,2) (10, 5)
		return 4;//0 4
	break;
	case 4774://(1,2) (10, 6)
		return 0;//0 0
	break;
	case 4775://(1,2) (10, 7)
		return 4;//0 4
	break;
	case 4776://(1,2) (10, 8)
		return 0;//0 0
	break;
	case 4777://(1,2) (10, 9)
		return 4;//0 4
	break;
	case 4778://(1,2) (10, 10)
		return 0;//0 0
	break;
	case 4779://(1,2) (10, 11)
		return 4;//0 4
	break;
	case 4780://(1,2) (10, 12)
		return 4;//0 4
	break;
	case 4781://(1,2) (10, 13)
		return 0;//0 0
	break;
	case 4782://(1,2) (10, 14)
		return 4;//0 4
	break;
	case 4783://(1,2) (10, 15)
		return 4;//0 4
	break;
	case 4784://(1,2) (11, 0)
		return 64;//4 0
	break;
	case 4785://(1,2) (11, 1)
		return 64;//4 0
	break;
	case 4786://(1,2) (11, 2)
		return 68;//4 4
	break;
	case 4787://(1,2) (11, 3)
		return 64;//4 0
	break;
	case 4788://(1,2) (11, 4)
		return 64;//4 0
	break;
	case 4789://(1,2) (11, 5)
		return 68;//4 4
	break;
	case 4790://(1,2) (11, 6)
		return 64;//4 0
	break;
	case 4791://(1,2) (11, 7)
		return 68;//4 4
	break;
	case 4792://(1,2) (11, 8)
		return 64;//4 0
	break;
	case 4793://(1,2) (11, 9)
		return 68;//4 4
	break;
	case 4794://(1,2) (11, 10)
		return 64;//4 0
	break;
	case 4795://(1,2) (11, 11)
		return 68;//4 4
	break;
	case 4796://(1,2) (11, 12)
		return 68;//4 4
	break;
	case 4797://(1,2) (11, 13)
		return 64;//4 0
	break;
	case 4798://(1,2) (11, 14)
		return 68;//4 4
	break;
	case 4799://(1,2) (11, 15)
		return 68;//4 4
	break;
	case 4800://(1,2) (12, 0)
		return 0;//0 0
	break;
	case 4801://(1,2) (12, 1)
		return 0;//0 0
	break;
	case 4802://(1,2) (12, 2)
		return 4;//0 4
	break;
	case 4803://(1,2) (12, 3)
		return 0;//0 0
	break;
	case 4804://(1,2) (12, 4)
		return 0;//0 0
	break;
	case 4805://(1,2) (12, 5)
		return 4;//0 4
	break;
	case 4806://(1,2) (12, 6)
		return 0;//0 0
	break;
	case 4807://(1,2) (12, 7)
		return 4;//0 4
	break;
	case 4808://(1,2) (12, 8)
		return 0;//0 0
	break;
	case 4809://(1,2) (12, 9)
		return 4;//0 4
	break;
	case 4810://(1,2) (12, 10)
		return 0;//0 0
	break;
	case 4811://(1,2) (12, 11)
		return 4;//0 4
	break;
	case 4812://(1,2) (12, 12)
		return 4;//0 4
	break;
	case 4813://(1,2) (12, 13)
		return 0;//0 0
	break;
	case 4814://(1,2) (12, 14)
		return 4;//0 4
	break;
	case 4815://(1,2) (12, 15)
		return 4;//0 4
	break;
	case 4816://(1,2) (13, 0)
		return 64;//4 0
	break;
	case 4817://(1,2) (13, 1)
		return 64;//4 0
	break;
	case 4818://(1,2) (13, 2)
		return 68;//4 4
	break;
	case 4819://(1,2) (13, 3)
		return 64;//4 0
	break;
	case 4820://(1,2) (13, 4)
		return 64;//4 0
	break;
	case 4821://(1,2) (13, 5)
		return 68;//4 4
	break;
	case 4822://(1,2) (13, 6)
		return 64;//4 0
	break;
	case 4823://(1,2) (13, 7)
		return 68;//4 4
	break;
	case 4824://(1,2) (13, 8)
		return 64;//4 0
	break;
	case 4825://(1,2) (13, 9)
		return 68;//4 4
	break;
	case 4826://(1,2) (13, 10)
		return 64;//4 0
	break;
	case 4827://(1,2) (13, 11)
		return 68;//4 4
	break;
	case 4828://(1,2) (13, 12)
		return 68;//4 4
	break;
	case 4829://(1,2) (13, 13)
		return 64;//4 0
	break;
	case 4830://(1,2) (13, 14)
		return 68;//4 4
	break;
	case 4831://(1,2) (13, 15)
		return 68;//4 4
	break;
	case 4832://(1,2) (14, 0)
		return 64;//4 0
	break;
	case 4833://(1,2) (14, 1)
		return 64;//4 0
	break;
	case 4834://(1,2) (14, 2)
		return 68;//4 4
	break;
	case 4835://(1,2) (14, 3)
		return 64;//4 0
	break;
	case 4836://(1,2) (14, 4)
		return 64;//4 0
	break;
	case 4837://(1,2) (14, 5)
		return 68;//4 4
	break;
	case 4838://(1,2) (14, 6)
		return 64;//4 0
	break;
	case 4839://(1,2) (14, 7)
		return 68;//4 4
	break;
	case 4840://(1,2) (14, 8)
		return 64;//4 0
	break;
	case 4841://(1,2) (14, 9)
		return 68;//4 4
	break;
	case 4842://(1,2) (14, 10)
		return 64;//4 0
	break;
	case 4843://(1,2) (14, 11)
		return 68;//4 4
	break;
	case 4844://(1,2) (14, 12)
		return 68;//4 4
	break;
	case 4845://(1,2) (14, 13)
		return 64;//4 0
	break;
	case 4846://(1,2) (14, 14)
		return 68;//4 4
	break;
	case 4847://(1,2) (14, 15)
		return 68;//4 4
	break;
	case 4848://(1,2) (15, 0)
		return 64;//4 0
	break;
	case 4849://(1,2) (15, 1)
		return 64;//4 0
	break;
	case 4850://(1,2) (15, 2)
		return 68;//4 4
	break;
	case 4851://(1,2) (15, 3)
		return 64;//4 0
	break;
	case 4852://(1,2) (15, 4)
		return 64;//4 0
	break;
	case 4853://(1,2) (15, 5)
		return 68;//4 4
	break;
	case 4854://(1,2) (15, 6)
		return 64;//4 0
	break;
	case 4855://(1,2) (15, 7)
		return 68;//4 4
	break;
	case 4856://(1,2) (15, 8)
		return 64;//4 0
	break;
	case 4857://(1,2) (15, 9)
		return 68;//4 4
	break;
	case 4858://(1,2) (15, 10)
		return 64;//4 0
	break;
	case 4859://(1,2) (15, 11)
		return 68;//4 4
	break;
	case 4860://(1,2) (15, 12)
		return 68;//4 4
	break;
	case 4861://(1,2) (15, 13)
		return 64;//4 0
	break;
	case 4862://(1,2) (15, 14)
		return 68;//4 4
	break;
	case 4863://(1,2) (15, 15)
		return 68;//4 4
	break;
	case 4864://(1,3) (0, 0)
		return 0;//0 0
	break;
	case 4865://(1,3) (0, 1)
		return 0;//0 0
	break;
	case 4866://(1,3) (0, 2)
		return 0;//0 0
	break;
	case 4867://(1,3) (0, 3)
		return 4;//0 4
	break;
	case 4868://(1,3) (0, 4)
		return 0;//0 0
	break;
	case 4869://(1,3) (0, 5)
		return 0;//0 0
	break;
	case 4870://(1,3) (0, 6)
		return 4;//0 4
	break;
	case 4871://(1,3) (0, 7)
		return 4;//0 4
	break;
	case 4872://(1,3) (0, 8)
		return 0;//0 0
	break;
	case 4873://(1,3) (0, 9)
		return 0;//0 0
	break;
	case 4874://(1,3) (0, 10)
		return 4;//0 4
	break;
	case 4875://(1,3) (0, 11)
		return 4;//0 4
	break;
	case 4876://(1,3) (0, 12)
		return 4;//0 4
	break;
	case 4877://(1,3) (0, 13)
		return 4;//0 4
	break;
	case 4878://(1,3) (0, 14)
		return 0;//0 0
	break;
	case 4879://(1,3) (0, 15)
		return 4;//0 4
	break;
	case 4880://(1,3) (1, 0)
		return 64;//4 0
	break;
	case 4881://(1,3) (1, 1)
		return 64;//4 0
	break;
	case 4882://(1,3) (1, 2)
		return 64;//4 0
	break;
	case 4883://(1,3) (1, 3)
		return 68;//4 4
	break;
	case 4884://(1,3) (1, 4)
		return 64;//4 0
	break;
	case 4885://(1,3) (1, 5)
		return 64;//4 0
	break;
	case 4886://(1,3) (1, 6)
		return 68;//4 4
	break;
	case 4887://(1,3) (1, 7)
		return 68;//4 4
	break;
	case 4888://(1,3) (1, 8)
		return 64;//4 0
	break;
	case 4889://(1,3) (1, 9)
		return 64;//4 0
	break;
	case 4890://(1,3) (1, 10)
		return 68;//4 4
	break;
	case 4891://(1,3) (1, 11)
		return 68;//4 4
	break;
	case 4892://(1,3) (1, 12)
		return 68;//4 4
	break;
	case 4893://(1,3) (1, 13)
		return 68;//4 4
	break;
	case 4894://(1,3) (1, 14)
		return 64;//4 0
	break;
	case 4895://(1,3) (1, 15)
		return 68;//4 4
	break;
	case 4896://(1,3) (2, 0)
		return 0;//0 0
	break;
	case 4897://(1,3) (2, 1)
		return 0;//0 0
	break;
	case 4898://(1,3) (2, 2)
		return 0;//0 0
	break;
	case 4899://(1,3) (2, 3)
		return 4;//0 4
	break;
	case 4900://(1,3) (2, 4)
		return 0;//0 0
	break;
	case 4901://(1,3) (2, 5)
		return 0;//0 0
	break;
	case 4902://(1,3) (2, 6)
		return 4;//0 4
	break;
	case 4903://(1,3) (2, 7)
		return 4;//0 4
	break;
	case 4904://(1,3) (2, 8)
		return 0;//0 0
	break;
	case 4905://(1,3) (2, 9)
		return 0;//0 0
	break;
	case 4906://(1,3) (2, 10)
		return 4;//0 4
	break;
	case 4907://(1,3) (2, 11)
		return 4;//0 4
	break;
	case 4908://(1,3) (2, 12)
		return 4;//0 4
	break;
	case 4909://(1,3) (2, 13)
		return 4;//0 4
	break;
	case 4910://(1,3) (2, 14)
		return 0;//0 0
	break;
	case 4911://(1,3) (2, 15)
		return 4;//0 4
	break;
	case 4912://(1,3) (3, 0)
		return 0;//0 0
	break;
	case 4913://(1,3) (3, 1)
		return 0;//0 0
	break;
	case 4914://(1,3) (3, 2)
		return 0;//0 0
	break;
	case 4915://(1,3) (3, 3)
		return 4;//0 4
	break;
	case 4916://(1,3) (3, 4)
		return 0;//0 0
	break;
	case 4917://(1,3) (3, 5)
		return 0;//0 0
	break;
	case 4918://(1,3) (3, 6)
		return 4;//0 4
	break;
	case 4919://(1,3) (3, 7)
		return 4;//0 4
	break;
	case 4920://(1,3) (3, 8)
		return 0;//0 0
	break;
	case 4921://(1,3) (3, 9)
		return 0;//0 0
	break;
	case 4922://(1,3) (3, 10)
		return 4;//0 4
	break;
	case 4923://(1,3) (3, 11)
		return 4;//0 4
	break;
	case 4924://(1,3) (3, 12)
		return 4;//0 4
	break;
	case 4925://(1,3) (3, 13)
		return 4;//0 4
	break;
	case 4926://(1,3) (3, 14)
		return 0;//0 0
	break;
	case 4927://(1,3) (3, 15)
		return 4;//0 4
	break;
	case 4928://(1,3) (4, 0)
		return 0;//0 0
	break;
	case 4929://(1,3) (4, 1)
		return 0;//0 0
	break;
	case 4930://(1,3) (4, 2)
		return 0;//0 0
	break;
	case 4931://(1,3) (4, 3)
		return 4;//0 4
	break;
	case 4932://(1,3) (4, 4)
		return 0;//0 0
	break;
	case 4933://(1,3) (4, 5)
		return 0;//0 0
	break;
	case 4934://(1,3) (4, 6)
		return 4;//0 4
	break;
	case 4935://(1,3) (4, 7)
		return 4;//0 4
	break;
	case 4936://(1,3) (4, 8)
		return 0;//0 0
	break;
	case 4937://(1,3) (4, 9)
		return 0;//0 0
	break;
	case 4938://(1,3) (4, 10)
		return 4;//0 4
	break;
	case 4939://(1,3) (4, 11)
		return 4;//0 4
	break;
	case 4940://(1,3) (4, 12)
		return 4;//0 4
	break;
	case 4941://(1,3) (4, 13)
		return 4;//0 4
	break;
	case 4942://(1,3) (4, 14)
		return 0;//0 0
	break;
	case 4943://(1,3) (4, 15)
		return 4;//0 4
	break;
	case 4944://(1,3) (5, 0)
		return 0;//0 0
	break;
	case 4945://(1,3) (5, 1)
		return 0;//0 0
	break;
	case 4946://(1,3) (5, 2)
		return 0;//0 0
	break;
	case 4947://(1,3) (5, 3)
		return 4;//0 4
	break;
	case 4948://(1,3) (5, 4)
		return 0;//0 0
	break;
	case 4949://(1,3) (5, 5)
		return 0;//0 0
	break;
	case 4950://(1,3) (5, 6)
		return 4;//0 4
	break;
	case 4951://(1,3) (5, 7)
		return 4;//0 4
	break;
	case 4952://(1,3) (5, 8)
		return 0;//0 0
	break;
	case 4953://(1,3) (5, 9)
		return 0;//0 0
	break;
	case 4954://(1,3) (5, 10)
		return 4;//0 4
	break;
	case 4955://(1,3) (5, 11)
		return 4;//0 4
	break;
	case 4956://(1,3) (5, 12)
		return 4;//0 4
	break;
	case 4957://(1,3) (5, 13)
		return 4;//0 4
	break;
	case 4958://(1,3) (5, 14)
		return 0;//0 0
	break;
	case 4959://(1,3) (5, 15)
		return 4;//0 4
	break;
	case 4960://(1,3) (6, 0)
		return 64;//4 0
	break;
	case 4961://(1,3) (6, 1)
		return 64;//4 0
	break;
	case 4962://(1,3) (6, 2)
		return 64;//4 0
	break;
	case 4963://(1,3) (6, 3)
		return 68;//4 4
	break;
	case 4964://(1,3) (6, 4)
		return 64;//4 0
	break;
	case 4965://(1,3) (6, 5)
		return 64;//4 0
	break;
	case 4966://(1,3) (6, 6)
		return 68;//4 4
	break;
	case 4967://(1,3) (6, 7)
		return 68;//4 4
	break;
	case 4968://(1,3) (6, 8)
		return 64;//4 0
	break;
	case 4969://(1,3) (6, 9)
		return 64;//4 0
	break;
	case 4970://(1,3) (6, 10)
		return 68;//4 4
	break;
	case 4971://(1,3) (6, 11)
		return 68;//4 4
	break;
	case 4972://(1,3) (6, 12)
		return 68;//4 4
	break;
	case 4973://(1,3) (6, 13)
		return 68;//4 4
	break;
	case 4974://(1,3) (6, 14)
		return 64;//4 0
	break;
	case 4975://(1,3) (6, 15)
		return 68;//4 4
	break;
	case 4976://(1,3) (7, 0)
		return 0;//0 0
	break;
	case 4977://(1,3) (7, 1)
		return 0;//0 0
	break;
	case 4978://(1,3) (7, 2)
		return 0;//0 0
	break;
	case 4979://(1,3) (7, 3)
		return 4;//0 4
	break;
	case 4980://(1,3) (7, 4)
		return 0;//0 0
	break;
	case 4981://(1,3) (7, 5)
		return 0;//0 0
	break;
	case 4982://(1,3) (7, 6)
		return 4;//0 4
	break;
	case 4983://(1,3) (7, 7)
		return 4;//0 4
	break;
	case 4984://(1,3) (7, 8)
		return 0;//0 0
	break;
	case 4985://(1,3) (7, 9)
		return 0;//0 0
	break;
	case 4986://(1,3) (7, 10)
		return 4;//0 4
	break;
	case 4987://(1,3) (7, 11)
		return 4;//0 4
	break;
	case 4988://(1,3) (7, 12)
		return 4;//0 4
	break;
	case 4989://(1,3) (7, 13)
		return 4;//0 4
	break;
	case 4990://(1,3) (7, 14)
		return 0;//0 0
	break;
	case 4991://(1,3) (7, 15)
		return 4;//0 4
	break;
	case 4992://(1,3) (8, 0)
		return 64;//4 0
	break;
	case 4993://(1,3) (8, 1)
		return 64;//4 0
	break;
	case 4994://(1,3) (8, 2)
		return 64;//4 0
	break;
	case 4995://(1,3) (8, 3)
		return 68;//4 4
	break;
	case 4996://(1,3) (8, 4)
		return 64;//4 0
	break;
	case 4997://(1,3) (8, 5)
		return 64;//4 0
	break;
	case 4998://(1,3) (8, 6)
		return 68;//4 4
	break;
	case 4999://(1,3) (8, 7)
		return 68;//4 4
	break;
	case 5000://(1,3) (8, 8)
		return 64;//4 0
	break;
	case 5001://(1,3) (8, 9)
		return 64;//4 0
	break;
	case 5002://(1,3) (8, 10)
		return 68;//4 4
	break;
	case 5003://(1,3) (8, 11)
		return 68;//4 4
	break;
	case 5004://(1,3) (8, 12)
		return 68;//4 4
	break;
	case 5005://(1,3) (8, 13)
		return 68;//4 4
	break;
	case 5006://(1,3) (8, 14)
		return 64;//4 0
	break;
	case 5007://(1,3) (8, 15)
		return 68;//4 4
	break;
	case 5008://(1,3) (9, 0)
		return 64;//4 0
	break;
	case 5009://(1,3) (9, 1)
		return 64;//4 0
	break;
	case 5010://(1,3) (9, 2)
		return 64;//4 0
	break;
	case 5011://(1,3) (9, 3)
		return 68;//4 4
	break;
	case 5012://(1,3) (9, 4)
		return 64;//4 0
	break;
	case 5013://(1,3) (9, 5)
		return 64;//4 0
	break;
	case 5014://(1,3) (9, 6)
		return 68;//4 4
	break;
	case 5015://(1,3) (9, 7)
		return 68;//4 4
	break;
	case 5016://(1,3) (9, 8)
		return 64;//4 0
	break;
	case 5017://(1,3) (9, 9)
		return 64;//4 0
	break;
	case 5018://(1,3) (9, 10)
		return 68;//4 4
	break;
	case 5019://(1,3) (9, 11)
		return 68;//4 4
	break;
	case 5020://(1,3) (9, 12)
		return 68;//4 4
	break;
	case 5021://(1,3) (9, 13)
		return 68;//4 4
	break;
	case 5022://(1,3) (9, 14)
		return 64;//4 0
	break;
	case 5023://(1,3) (9, 15)
		return 68;//4 4
	break;
	case 5024://(1,3) (10, 0)
		return 0;//0 0
	break;
	case 5025://(1,3) (10, 1)
		return 0;//0 0
	break;
	case 5026://(1,3) (10, 2)
		return 0;//0 0
	break;
	case 5027://(1,3) (10, 3)
		return 4;//0 4
	break;
	case 5028://(1,3) (10, 4)
		return 0;//0 0
	break;
	case 5029://(1,3) (10, 5)
		return 0;//0 0
	break;
	case 5030://(1,3) (10, 6)
		return 4;//0 4
	break;
	case 5031://(1,3) (10, 7)
		return 4;//0 4
	break;
	case 5032://(1,3) (10, 8)
		return 0;//0 0
	break;
	case 5033://(1,3) (10, 9)
		return 0;//0 0
	break;
	case 5034://(1,3) (10, 10)
		return 4;//0 4
	break;
	case 5035://(1,3) (10, 11)
		return 4;//0 4
	break;
	case 5036://(1,3) (10, 12)
		return 4;//0 4
	break;
	case 5037://(1,3) (10, 13)
		return 4;//0 4
	break;
	case 5038://(1,3) (10, 14)
		return 0;//0 0
	break;
	case 5039://(1,3) (10, 15)
		return 4;//0 4
	break;
	case 5040://(1,3) (11, 0)
		return 64;//4 0
	break;
	case 5041://(1,3) (11, 1)
		return 64;//4 0
	break;
	case 5042://(1,3) (11, 2)
		return 64;//4 0
	break;
	case 5043://(1,3) (11, 3)
		return 68;//4 4
	break;
	case 5044://(1,3) (11, 4)
		return 64;//4 0
	break;
	case 5045://(1,3) (11, 5)
		return 64;//4 0
	break;
	case 5046://(1,3) (11, 6)
		return 68;//4 4
	break;
	case 5047://(1,3) (11, 7)
		return 68;//4 4
	break;
	case 5048://(1,3) (11, 8)
		return 64;//4 0
	break;
	case 5049://(1,3) (11, 9)
		return 64;//4 0
	break;
	case 5050://(1,3) (11, 10)
		return 68;//4 4
	break;
	case 5051://(1,3) (11, 11)
		return 68;//4 4
	break;
	case 5052://(1,3) (11, 12)
		return 68;//4 4
	break;
	case 5053://(1,3) (11, 13)
		return 68;//4 4
	break;
	case 5054://(1,3) (11, 14)
		return 64;//4 0
	break;
	case 5055://(1,3) (11, 15)
		return 68;//4 4
	break;
	case 5056://(1,3) (12, 0)
		return 0;//0 0
	break;
	case 5057://(1,3) (12, 1)
		return 0;//0 0
	break;
	case 5058://(1,3) (12, 2)
		return 0;//0 0
	break;
	case 5059://(1,3) (12, 3)
		return 4;//0 4
	break;
	case 5060://(1,3) (12, 4)
		return 0;//0 0
	break;
	case 5061://(1,3) (12, 5)
		return 0;//0 0
	break;
	case 5062://(1,3) (12, 6)
		return 4;//0 4
	break;
	case 5063://(1,3) (12, 7)
		return 4;//0 4
	break;
	case 5064://(1,3) (12, 8)
		return 0;//0 0
	break;
	case 5065://(1,3) (12, 9)
		return 0;//0 0
	break;
	case 5066://(1,3) (12, 10)
		return 4;//0 4
	break;
	case 5067://(1,3) (12, 11)
		return 4;//0 4
	break;
	case 5068://(1,3) (12, 12)
		return 4;//0 4
	break;
	case 5069://(1,3) (12, 13)
		return 4;//0 4
	break;
	case 5070://(1,3) (12, 14)
		return 0;//0 0
	break;
	case 5071://(1,3) (12, 15)
		return 4;//0 4
	break;
	case 5072://(1,3) (13, 0)
		return 64;//4 0
	break;
	case 5073://(1,3) (13, 1)
		return 64;//4 0
	break;
	case 5074://(1,3) (13, 2)
		return 64;//4 0
	break;
	case 5075://(1,3) (13, 3)
		return 68;//4 4
	break;
	case 5076://(1,3) (13, 4)
		return 64;//4 0
	break;
	case 5077://(1,3) (13, 5)
		return 64;//4 0
	break;
	case 5078://(1,3) (13, 6)
		return 68;//4 4
	break;
	case 5079://(1,3) (13, 7)
		return 68;//4 4
	break;
	case 5080://(1,3) (13, 8)
		return 64;//4 0
	break;
	case 5081://(1,3) (13, 9)
		return 64;//4 0
	break;
	case 5082://(1,3) (13, 10)
		return 68;//4 4
	break;
	case 5083://(1,3) (13, 11)
		return 68;//4 4
	break;
	case 5084://(1,3) (13, 12)
		return 68;//4 4
	break;
	case 5085://(1,3) (13, 13)
		return 68;//4 4
	break;
	case 5086://(1,3) (13, 14)
		return 64;//4 0
	break;
	case 5087://(1,3) (13, 15)
		return 68;//4 4
	break;
	case 5088://(1,3) (14, 0)
		return 64;//4 0
	break;
	case 5089://(1,3) (14, 1)
		return 64;//4 0
	break;
	case 5090://(1,3) (14, 2)
		return 64;//4 0
	break;
	case 5091://(1,3) (14, 3)
		return 68;//4 4
	break;
	case 5092://(1,3) (14, 4)
		return 64;//4 0
	break;
	case 5093://(1,3) (14, 5)
		return 64;//4 0
	break;
	case 5094://(1,3) (14, 6)
		return 68;//4 4
	break;
	case 5095://(1,3) (14, 7)
		return 68;//4 4
	break;
	case 5096://(1,3) (14, 8)
		return 64;//4 0
	break;
	case 5097://(1,3) (14, 9)
		return 64;//4 0
	break;
	case 5098://(1,3) (14, 10)
		return 68;//4 4
	break;
	case 5099://(1,3) (14, 11)
		return 68;//4 4
	break;
	case 5100://(1,3) (14, 12)
		return 68;//4 4
	break;
	case 5101://(1,3) (14, 13)
		return 68;//4 4
	break;
	case 5102://(1,3) (14, 14)
		return 64;//4 0
	break;
	case 5103://(1,3) (14, 15)
		return 68;//4 4
	break;
	case 5104://(1,3) (15, 0)
		return 64;//4 0
	break;
	case 5105://(1,3) (15, 1)
		return 64;//4 0
	break;
	case 5106://(1,3) (15, 2)
		return 64;//4 0
	break;
	case 5107://(1,3) (15, 3)
		return 68;//4 4
	break;
	case 5108://(1,3) (15, 4)
		return 64;//4 0
	break;
	case 5109://(1,3) (15, 5)
		return 64;//4 0
	break;
	case 5110://(1,3) (15, 6)
		return 68;//4 4
	break;
	case 5111://(1,3) (15, 7)
		return 68;//4 4
	break;
	case 5112://(1,3) (15, 8)
		return 64;//4 0
	break;
	case 5113://(1,3) (15, 9)
		return 64;//4 0
	break;
	case 5114://(1,3) (15, 10)
		return 68;//4 4
	break;
	case 5115://(1,3) (15, 11)
		return 68;//4 4
	break;
	case 5116://(1,3) (15, 12)
		return 68;//4 4
	break;
	case 5117://(1,3) (15, 13)
		return 68;//4 4
	break;
	case 5118://(1,3) (15, 14)
		return 64;//4 0
	break;
	case 5119://(1,3) (15, 15)
		return 68;//4 4
	break;
	case 5120://(1,4) (0, 0)
		return 0;//0 0
	break;
	case 5121://(1,4) (0, 1)
		return 0;//0 0
	break;
	case 5122://(1,4) (0, 2)
		return 0;//0 0
	break;
	case 5123://(1,4) (0, 3)
		return 0;//0 0
	break;
	case 5124://(1,4) (0, 4)
		return 4;//0 4
	break;
	case 5125://(1,4) (0, 5)
		return 4;//0 4
	break;
	case 5126://(1,4) (0, 6)
		return 0;//0 0
	break;
	case 5127://(1,4) (0, 7)
		return 0;//0 0
	break;
	case 5128://(1,4) (0, 8)
		return 4;//0 4
	break;
	case 5129://(1,4) (0, 9)
		return 0;//0 0
	break;
	case 5130://(1,4) (0, 10)
		return 4;//0 4
	break;
	case 5131://(1,4) (0, 11)
		return 0;//0 0
	break;
	case 5132://(1,4) (0, 12)
		return 4;//0 4
	break;
	case 5133://(1,4) (0, 13)
		return 4;//0 4
	break;
	case 5134://(1,4) (0, 14)
		return 4;//0 4
	break;
	case 5135://(1,4) (0, 15)
		return 4;//0 4
	break;
	case 5136://(1,4) (1, 0)
		return 64;//4 0
	break;
	case 5137://(1,4) (1, 1)
		return 64;//4 0
	break;
	case 5138://(1,4) (1, 2)
		return 64;//4 0
	break;
	case 5139://(1,4) (1, 3)
		return 64;//4 0
	break;
	case 5140://(1,4) (1, 4)
		return 68;//4 4
	break;
	case 5141://(1,4) (1, 5)
		return 68;//4 4
	break;
	case 5142://(1,4) (1, 6)
		return 64;//4 0
	break;
	case 5143://(1,4) (1, 7)
		return 64;//4 0
	break;
	case 5144://(1,4) (1, 8)
		return 68;//4 4
	break;
	case 5145://(1,4) (1, 9)
		return 64;//4 0
	break;
	case 5146://(1,4) (1, 10)
		return 68;//4 4
	break;
	case 5147://(1,4) (1, 11)
		return 64;//4 0
	break;
	case 5148://(1,4) (1, 12)
		return 68;//4 4
	break;
	case 5149://(1,4) (1, 13)
		return 68;//4 4
	break;
	case 5150://(1,4) (1, 14)
		return 68;//4 4
	break;
	case 5151://(1,4) (1, 15)
		return 68;//4 4
	break;
	case 5152://(1,4) (2, 0)
		return 0;//0 0
	break;
	case 5153://(1,4) (2, 1)
		return 0;//0 0
	break;
	case 5154://(1,4) (2, 2)
		return 0;//0 0
	break;
	case 5155://(1,4) (2, 3)
		return 0;//0 0
	break;
	case 5156://(1,4) (2, 4)
		return 4;//0 4
	break;
	case 5157://(1,4) (2, 5)
		return 4;//0 4
	break;
	case 5158://(1,4) (2, 6)
		return 0;//0 0
	break;
	case 5159://(1,4) (2, 7)
		return 0;//0 0
	break;
	case 5160://(1,4) (2, 8)
		return 4;//0 4
	break;
	case 5161://(1,4) (2, 9)
		return 0;//0 0
	break;
	case 5162://(1,4) (2, 10)
		return 4;//0 4
	break;
	case 5163://(1,4) (2, 11)
		return 0;//0 0
	break;
	case 5164://(1,4) (2, 12)
		return 4;//0 4
	break;
	case 5165://(1,4) (2, 13)
		return 4;//0 4
	break;
	case 5166://(1,4) (2, 14)
		return 4;//0 4
	break;
	case 5167://(1,4) (2, 15)
		return 4;//0 4
	break;
	case 5168://(1,4) (3, 0)
		return 0;//0 0
	break;
	case 5169://(1,4) (3, 1)
		return 0;//0 0
	break;
	case 5170://(1,4) (3, 2)
		return 0;//0 0
	break;
	case 5171://(1,4) (3, 3)
		return 0;//0 0
	break;
	case 5172://(1,4) (3, 4)
		return 4;//0 4
	break;
	case 5173://(1,4) (3, 5)
		return 4;//0 4
	break;
	case 5174://(1,4) (3, 6)
		return 0;//0 0
	break;
	case 5175://(1,4) (3, 7)
		return 0;//0 0
	break;
	case 5176://(1,4) (3, 8)
		return 4;//0 4
	break;
	case 5177://(1,4) (3, 9)
		return 0;//0 0
	break;
	case 5178://(1,4) (3, 10)
		return 4;//0 4
	break;
	case 5179://(1,4) (3, 11)
		return 0;//0 0
	break;
	case 5180://(1,4) (3, 12)
		return 4;//0 4
	break;
	case 5181://(1,4) (3, 13)
		return 4;//0 4
	break;
	case 5182://(1,4) (3, 14)
		return 4;//0 4
	break;
	case 5183://(1,4) (3, 15)
		return 4;//0 4
	break;
	case 5184://(1,4) (4, 0)
		return 0;//0 0
	break;
	case 5185://(1,4) (4, 1)
		return 0;//0 0
	break;
	case 5186://(1,4) (4, 2)
		return 0;//0 0
	break;
	case 5187://(1,4) (4, 3)
		return 0;//0 0
	break;
	case 5188://(1,4) (4, 4)
		return 4;//0 4
	break;
	case 5189://(1,4) (4, 5)
		return 4;//0 4
	break;
	case 5190://(1,4) (4, 6)
		return 0;//0 0
	break;
	case 5191://(1,4) (4, 7)
		return 0;//0 0
	break;
	case 5192://(1,4) (4, 8)
		return 4;//0 4
	break;
	case 5193://(1,4) (4, 9)
		return 0;//0 0
	break;
	case 5194://(1,4) (4, 10)
		return 4;//0 4
	break;
	case 5195://(1,4) (4, 11)
		return 0;//0 0
	break;
	case 5196://(1,4) (4, 12)
		return 4;//0 4
	break;
	case 5197://(1,4) (4, 13)
		return 4;//0 4
	break;
	case 5198://(1,4) (4, 14)
		return 4;//0 4
	break;
	case 5199://(1,4) (4, 15)
		return 4;//0 4
	break;
	case 5200://(1,4) (5, 0)
		return 0;//0 0
	break;
	case 5201://(1,4) (5, 1)
		return 0;//0 0
	break;
	case 5202://(1,4) (5, 2)
		return 0;//0 0
	break;
	case 5203://(1,4) (5, 3)
		return 0;//0 0
	break;
	case 5204://(1,4) (5, 4)
		return 4;//0 4
	break;
	case 5205://(1,4) (5, 5)
		return 4;//0 4
	break;
	case 5206://(1,4) (5, 6)
		return 0;//0 0
	break;
	case 5207://(1,4) (5, 7)
		return 0;//0 0
	break;
	case 5208://(1,4) (5, 8)
		return 4;//0 4
	break;
	case 5209://(1,4) (5, 9)
		return 0;//0 0
	break;
	case 5210://(1,4) (5, 10)
		return 4;//0 4
	break;
	case 5211://(1,4) (5, 11)
		return 0;//0 0
	break;
	case 5212://(1,4) (5, 12)
		return 4;//0 4
	break;
	case 5213://(1,4) (5, 13)
		return 4;//0 4
	break;
	case 5214://(1,4) (5, 14)
		return 4;//0 4
	break;
	case 5215://(1,4) (5, 15)
		return 4;//0 4
	break;
	case 5216://(1,4) (6, 0)
		return 64;//4 0
	break;
	case 5217://(1,4) (6, 1)
		return 64;//4 0
	break;
	case 5218://(1,4) (6, 2)
		return 64;//4 0
	break;
	case 5219://(1,4) (6, 3)
		return 64;//4 0
	break;
	case 5220://(1,4) (6, 4)
		return 68;//4 4
	break;
	case 5221://(1,4) (6, 5)
		return 68;//4 4
	break;
	case 5222://(1,4) (6, 6)
		return 64;//4 0
	break;
	case 5223://(1,4) (6, 7)
		return 64;//4 0
	break;
	case 5224://(1,4) (6, 8)
		return 68;//4 4
	break;
	case 5225://(1,4) (6, 9)
		return 64;//4 0
	break;
	case 5226://(1,4) (6, 10)
		return 68;//4 4
	break;
	case 5227://(1,4) (6, 11)
		return 64;//4 0
	break;
	case 5228://(1,4) (6, 12)
		return 68;//4 4
	break;
	case 5229://(1,4) (6, 13)
		return 68;//4 4
	break;
	case 5230://(1,4) (6, 14)
		return 68;//4 4
	break;
	case 5231://(1,4) (6, 15)
		return 68;//4 4
	break;
	case 5232://(1,4) (7, 0)
		return 0;//0 0
	break;
	case 5233://(1,4) (7, 1)
		return 0;//0 0
	break;
	case 5234://(1,4) (7, 2)
		return 0;//0 0
	break;
	case 5235://(1,4) (7, 3)
		return 0;//0 0
	break;
	case 5236://(1,4) (7, 4)
		return 4;//0 4
	break;
	case 5237://(1,4) (7, 5)
		return 4;//0 4
	break;
	case 5238://(1,4) (7, 6)
		return 0;//0 0
	break;
	case 5239://(1,4) (7, 7)
		return 0;//0 0
	break;
	case 5240://(1,4) (7, 8)
		return 4;//0 4
	break;
	case 5241://(1,4) (7, 9)
		return 0;//0 0
	break;
	case 5242://(1,4) (7, 10)
		return 4;//0 4
	break;
	case 5243://(1,4) (7, 11)
		return 0;//0 0
	break;
	case 5244://(1,4) (7, 12)
		return 4;//0 4
	break;
	case 5245://(1,4) (7, 13)
		return 4;//0 4
	break;
	case 5246://(1,4) (7, 14)
		return 4;//0 4
	break;
	case 5247://(1,4) (7, 15)
		return 4;//0 4
	break;
	case 5248://(1,4) (8, 0)
		return 64;//4 0
	break;
	case 5249://(1,4) (8, 1)
		return 64;//4 0
	break;
	case 5250://(1,4) (8, 2)
		return 64;//4 0
	break;
	case 5251://(1,4) (8, 3)
		return 64;//4 0
	break;
	case 5252://(1,4) (8, 4)
		return 68;//4 4
	break;
	case 5253://(1,4) (8, 5)
		return 68;//4 4
	break;
	case 5254://(1,4) (8, 6)
		return 64;//4 0
	break;
	case 5255://(1,4) (8, 7)
		return 64;//4 0
	break;
	case 5256://(1,4) (8, 8)
		return 68;//4 4
	break;
	case 5257://(1,4) (8, 9)
		return 64;//4 0
	break;
	case 5258://(1,4) (8, 10)
		return 68;//4 4
	break;
	case 5259://(1,4) (8, 11)
		return 64;//4 0
	break;
	case 5260://(1,4) (8, 12)
		return 68;//4 4
	break;
	case 5261://(1,4) (8, 13)
		return 68;//4 4
	break;
	case 5262://(1,4) (8, 14)
		return 68;//4 4
	break;
	case 5263://(1,4) (8, 15)
		return 68;//4 4
	break;
	case 5264://(1,4) (9, 0)
		return 64;//4 0
	break;
	case 5265://(1,4) (9, 1)
		return 64;//4 0
	break;
	case 5266://(1,4) (9, 2)
		return 64;//4 0
	break;
	case 5267://(1,4) (9, 3)
		return 64;//4 0
	break;
	case 5268://(1,4) (9, 4)
		return 68;//4 4
	break;
	case 5269://(1,4) (9, 5)
		return 68;//4 4
	break;
	case 5270://(1,4) (9, 6)
		return 64;//4 0
	break;
	case 5271://(1,4) (9, 7)
		return 64;//4 0
	break;
	case 5272://(1,4) (9, 8)
		return 68;//4 4
	break;
	case 5273://(1,4) (9, 9)
		return 64;//4 0
	break;
	case 5274://(1,4) (9, 10)
		return 68;//4 4
	break;
	case 5275://(1,4) (9, 11)
		return 64;//4 0
	break;
	case 5276://(1,4) (9, 12)
		return 68;//4 4
	break;
	case 5277://(1,4) (9, 13)
		return 68;//4 4
	break;
	case 5278://(1,4) (9, 14)
		return 68;//4 4
	break;
	case 5279://(1,4) (9, 15)
		return 68;//4 4
	break;
	case 5280://(1,4) (10, 0)
		return 0;//0 0
	break;
	case 5281://(1,4) (10, 1)
		return 0;//0 0
	break;
	case 5282://(1,4) (10, 2)
		return 0;//0 0
	break;
	case 5283://(1,4) (10, 3)
		return 0;//0 0
	break;
	case 5284://(1,4) (10, 4)
		return 4;//0 4
	break;
	case 5285://(1,4) (10, 5)
		return 4;//0 4
	break;
	case 5286://(1,4) (10, 6)
		return 0;//0 0
	break;
	case 5287://(1,4) (10, 7)
		return 0;//0 0
	break;
	case 5288://(1,4) (10, 8)
		return 4;//0 4
	break;
	case 5289://(1,4) (10, 9)
		return 0;//0 0
	break;
	case 5290://(1,4) (10, 10)
		return 4;//0 4
	break;
	case 5291://(1,4) (10, 11)
		return 0;//0 0
	break;
	case 5292://(1,4) (10, 12)
		return 4;//0 4
	break;
	case 5293://(1,4) (10, 13)
		return 4;//0 4
	break;
	case 5294://(1,4) (10, 14)
		return 4;//0 4
	break;
	case 5295://(1,4) (10, 15)
		return 4;//0 4
	break;
	case 5296://(1,4) (11, 0)
		return 64;//4 0
	break;
	case 5297://(1,4) (11, 1)
		return 64;//4 0
	break;
	case 5298://(1,4) (11, 2)
		return 64;//4 0
	break;
	case 5299://(1,4) (11, 3)
		return 64;//4 0
	break;
	case 5300://(1,4) (11, 4)
		return 68;//4 4
	break;
	case 5301://(1,4) (11, 5)
		return 68;//4 4
	break;
	case 5302://(1,4) (11, 6)
		return 64;//4 0
	break;
	case 5303://(1,4) (11, 7)
		return 64;//4 0
	break;
	case 5304://(1,4) (11, 8)
		return 68;//4 4
	break;
	case 5305://(1,4) (11, 9)
		return 64;//4 0
	break;
	case 5306://(1,4) (11, 10)
		return 68;//4 4
	break;
	case 5307://(1,4) (11, 11)
		return 64;//4 0
	break;
	case 5308://(1,4) (11, 12)
		return 68;//4 4
	break;
	case 5309://(1,4) (11, 13)
		return 68;//4 4
	break;
	case 5310://(1,4) (11, 14)
		return 68;//4 4
	break;
	case 5311://(1,4) (11, 15)
		return 68;//4 4
	break;
	case 5312://(1,4) (12, 0)
		return 0;//0 0
	break;
	case 5313://(1,4) (12, 1)
		return 0;//0 0
	break;
	case 5314://(1,4) (12, 2)
		return 0;//0 0
	break;
	case 5315://(1,4) (12, 3)
		return 0;//0 0
	break;
	case 5316://(1,4) (12, 4)
		return 4;//0 4
	break;
	case 5317://(1,4) (12, 5)
		return 4;//0 4
	break;
	case 5318://(1,4) (12, 6)
		return 0;//0 0
	break;
	case 5319://(1,4) (12, 7)
		return 0;//0 0
	break;
	case 5320://(1,4) (12, 8)
		return 4;//0 4
	break;
	case 5321://(1,4) (12, 9)
		return 0;//0 0
	break;
	case 5322://(1,4) (12, 10)
		return 4;//0 4
	break;
	case 5323://(1,4) (12, 11)
		return 0;//0 0
	break;
	case 5324://(1,4) (12, 12)
		return 4;//0 4
	break;
	case 5325://(1,4) (12, 13)
		return 4;//0 4
	break;
	case 5326://(1,4) (12, 14)
		return 4;//0 4
	break;
	case 5327://(1,4) (12, 15)
		return 4;//0 4
	break;
	case 5328://(1,4) (13, 0)
		return 64;//4 0
	break;
	case 5329://(1,4) (13, 1)
		return 64;//4 0
	break;
	case 5330://(1,4) (13, 2)
		return 64;//4 0
	break;
	case 5331://(1,4) (13, 3)
		return 64;//4 0
	break;
	case 5332://(1,4) (13, 4)
		return 68;//4 4
	break;
	case 5333://(1,4) (13, 5)
		return 68;//4 4
	break;
	case 5334://(1,4) (13, 6)
		return 64;//4 0
	break;
	case 5335://(1,4) (13, 7)
		return 64;//4 0
	break;
	case 5336://(1,4) (13, 8)
		return 68;//4 4
	break;
	case 5337://(1,4) (13, 9)
		return 64;//4 0
	break;
	case 5338://(1,4) (13, 10)
		return 68;//4 4
	break;
	case 5339://(1,4) (13, 11)
		return 64;//4 0
	break;
	case 5340://(1,4) (13, 12)
		return 68;//4 4
	break;
	case 5341://(1,4) (13, 13)
		return 68;//4 4
	break;
	case 5342://(1,4) (13, 14)
		return 68;//4 4
	break;
	case 5343://(1,4) (13, 15)
		return 68;//4 4
	break;
	case 5344://(1,4) (14, 0)
		return 64;//4 0
	break;
	case 5345://(1,4) (14, 1)
		return 64;//4 0
	break;
	case 5346://(1,4) (14, 2)
		return 64;//4 0
	break;
	case 5347://(1,4) (14, 3)
		return 64;//4 0
	break;
	case 5348://(1,4) (14, 4)
		return 68;//4 4
	break;
	case 5349://(1,4) (14, 5)
		return 68;//4 4
	break;
	case 5350://(1,4) (14, 6)
		return 64;//4 0
	break;
	case 5351://(1,4) (14, 7)
		return 64;//4 0
	break;
	case 5352://(1,4) (14, 8)
		return 68;//4 4
	break;
	case 5353://(1,4) (14, 9)
		return 64;//4 0
	break;
	case 5354://(1,4) (14, 10)
		return 68;//4 4
	break;
	case 5355://(1,4) (14, 11)
		return 64;//4 0
	break;
	case 5356://(1,4) (14, 12)
		return 68;//4 4
	break;
	case 5357://(1,4) (14, 13)
		return 68;//4 4
	break;
	case 5358://(1,4) (14, 14)
		return 68;//4 4
	break;
	case 5359://(1,4) (14, 15)
		return 68;//4 4
	break;
	case 5360://(1,4) (15, 0)
		return 64;//4 0
	break;
	case 5361://(1,4) (15, 1)
		return 64;//4 0
	break;
	case 5362://(1,4) (15, 2)
		return 64;//4 0
	break;
	case 5363://(1,4) (15, 3)
		return 64;//4 0
	break;
	case 5364://(1,4) (15, 4)
		return 68;//4 4
	break;
	case 5365://(1,4) (15, 5)
		return 68;//4 4
	break;
	case 5366://(1,4) (15, 6)
		return 64;//4 0
	break;
	case 5367://(1,4) (15, 7)
		return 64;//4 0
	break;
	case 5368://(1,4) (15, 8)
		return 68;//4 4
	break;
	case 5369://(1,4) (15, 9)
		return 64;//4 0
	break;
	case 5370://(1,4) (15, 10)
		return 68;//4 4
	break;
	case 5371://(1,4) (15, 11)
		return 64;//4 0
	break;
	case 5372://(1,4) (15, 12)
		return 68;//4 4
	break;
	case 5373://(1,4) (15, 13)
		return 68;//4 4
	break;
	case 5374://(1,4) (15, 14)
		return 68;//4 4
	break;
	case 5375://(1,4) (15, 15)
		return 68;//4 4
	break;
	case 5376://(1,5) (0, 0)
		return 0;//0 0
	break;
	case 5377://(1,5) (0, 1)
		return 0;//0 0
	break;
	case 5378://(1,5) (0, 2)
		return 3;//0 3
	break;
	case 5379://(1,5) (0, 3)
		return 0;//0 0
	break;
	case 5380://(1,5) (0, 4)
		return 3;//0 3
	break;
	case 5381://(1,5) (0, 5)
		return 3;//0 3
	break;
	case 5382://(1,5) (0, 6)
		return 0;//0 0
	break;
	case 5383://(1,5) (0, 7)
		return 3;//0 3
	break;
	case 5384://(1,5) (0, 8)
		return 3;//0 3
	break;
	case 5385://(1,5) (0, 9)
		return 3;//0 3
	break;
	case 5386://(1,5) (0, 10)
		return 3;//0 3
	break;
	case 5387://(1,5) (0, 11)
		return 3;//0 3
	break;
	case 5388://(1,5) (0, 12)
		return 3;//0 3
	break;
	case 5389://(1,5) (0, 13)
		return 3;//0 3
	break;
	case 5390://(1,5) (0, 14)
		return 3;//0 3
	break;
	case 5391://(1,5) (0, 15)
		return 3;//0 3
	break;
	case 5392://(1,5) (1, 0)
		return 64;//4 0
	break;
	case 5393://(1,5) (1, 1)
		return 64;//4 0
	break;
	case 5394://(1,5) (1, 2)
		return 67;//4 3
	break;
	case 5395://(1,5) (1, 3)
		return 64;//4 0
	break;
	case 5396://(1,5) (1, 4)
		return 67;//4 3
	break;
	case 5397://(1,5) (1, 5)
		return 67;//4 3
	break;
	case 5398://(1,5) (1, 6)
		return 64;//4 0
	break;
	case 5399://(1,5) (1, 7)
		return 67;//4 3
	break;
	case 5400://(1,5) (1, 8)
		return 67;//4 3
	break;
	case 5401://(1,5) (1, 9)
		return 67;//4 3
	break;
	case 5402://(1,5) (1, 10)
		return 67;//4 3
	break;
	case 5403://(1,5) (1, 11)
		return 67;//4 3
	break;
	case 5404://(1,5) (1, 12)
		return 67;//4 3
	break;
	case 5405://(1,5) (1, 13)
		return 67;//4 3
	break;
	case 5406://(1,5) (1, 14)
		return 67;//4 3
	break;
	case 5407://(1,5) (1, 15)
		return 67;//4 3
	break;
	case 5408://(1,5) (2, 0)
		return 0;//0 0
	break;
	case 5409://(1,5) (2, 1)
		return 0;//0 0
	break;
	case 5410://(1,5) (2, 2)
		return 3;//0 3
	break;
	case 5411://(1,5) (2, 3)
		return 0;//0 0
	break;
	case 5412://(1,5) (2, 4)
		return 3;//0 3
	break;
	case 5413://(1,5) (2, 5)
		return 3;//0 3
	break;
	case 5414://(1,5) (2, 6)
		return 0;//0 0
	break;
	case 5415://(1,5) (2, 7)
		return 3;//0 3
	break;
	case 5416://(1,5) (2, 8)
		return 3;//0 3
	break;
	case 5417://(1,5) (2, 9)
		return 3;//0 3
	break;
	case 5418://(1,5) (2, 10)
		return 3;//0 3
	break;
	case 5419://(1,5) (2, 11)
		return 3;//0 3
	break;
	case 5420://(1,5) (2, 12)
		return 3;//0 3
	break;
	case 5421://(1,5) (2, 13)
		return 3;//0 3
	break;
	case 5422://(1,5) (2, 14)
		return 3;//0 3
	break;
	case 5423://(1,5) (2, 15)
		return 3;//0 3
	break;
	case 5424://(1,5) (3, 0)
		return 0;//0 0
	break;
	case 5425://(1,5) (3, 1)
		return 0;//0 0
	break;
	case 5426://(1,5) (3, 2)
		return 3;//0 3
	break;
	case 5427://(1,5) (3, 3)
		return 0;//0 0
	break;
	case 5428://(1,5) (3, 4)
		return 3;//0 3
	break;
	case 5429://(1,5) (3, 5)
		return 3;//0 3
	break;
	case 5430://(1,5) (3, 6)
		return 0;//0 0
	break;
	case 5431://(1,5) (3, 7)
		return 3;//0 3
	break;
	case 5432://(1,5) (3, 8)
		return 3;//0 3
	break;
	case 5433://(1,5) (3, 9)
		return 3;//0 3
	break;
	case 5434://(1,5) (3, 10)
		return 3;//0 3
	break;
	case 5435://(1,5) (3, 11)
		return 3;//0 3
	break;
	case 5436://(1,5) (3, 12)
		return 3;//0 3
	break;
	case 5437://(1,5) (3, 13)
		return 3;//0 3
	break;
	case 5438://(1,5) (3, 14)
		return 3;//0 3
	break;
	case 5439://(1,5) (3, 15)
		return 3;//0 3
	break;
	case 5440://(1,5) (4, 0)
		return 0;//0 0
	break;
	case 5441://(1,5) (4, 1)
		return 0;//0 0
	break;
	case 5442://(1,5) (4, 2)
		return 3;//0 3
	break;
	case 5443://(1,5) (4, 3)
		return 0;//0 0
	break;
	case 5444://(1,5) (4, 4)
		return 3;//0 3
	break;
	case 5445://(1,5) (4, 5)
		return 3;//0 3
	break;
	case 5446://(1,5) (4, 6)
		return 0;//0 0
	break;
	case 5447://(1,5) (4, 7)
		return 3;//0 3
	break;
	case 5448://(1,5) (4, 8)
		return 3;//0 3
	break;
	case 5449://(1,5) (4, 9)
		return 3;//0 3
	break;
	case 5450://(1,5) (4, 10)
		return 3;//0 3
	break;
	case 5451://(1,5) (4, 11)
		return 3;//0 3
	break;
	case 5452://(1,5) (4, 12)
		return 3;//0 3
	break;
	case 5453://(1,5) (4, 13)
		return 3;//0 3
	break;
	case 5454://(1,5) (4, 14)
		return 3;//0 3
	break;
	case 5455://(1,5) (4, 15)
		return 3;//0 3
	break;
	case 5456://(1,5) (5, 0)
		return 0;//0 0
	break;
	case 5457://(1,5) (5, 1)
		return 0;//0 0
	break;
	case 5458://(1,5) (5, 2)
		return 3;//0 3
	break;
	case 5459://(1,5) (5, 3)
		return 0;//0 0
	break;
	case 5460://(1,5) (5, 4)
		return 3;//0 3
	break;
	case 5461://(1,5) (5, 5)
		return 3;//0 3
	break;
	case 5462://(1,5) (5, 6)
		return 0;//0 0
	break;
	case 5463://(1,5) (5, 7)
		return 3;//0 3
	break;
	case 5464://(1,5) (5, 8)
		return 3;//0 3
	break;
	case 5465://(1,5) (5, 9)
		return 3;//0 3
	break;
	case 5466://(1,5) (5, 10)
		return 3;//0 3
	break;
	case 5467://(1,5) (5, 11)
		return 3;//0 3
	break;
	case 5468://(1,5) (5, 12)
		return 3;//0 3
	break;
	case 5469://(1,5) (5, 13)
		return 3;//0 3
	break;
	case 5470://(1,5) (5, 14)
		return 3;//0 3
	break;
	case 5471://(1,5) (5, 15)
		return 3;//0 3
	break;
	case 5472://(1,5) (6, 0)
		return 64;//4 0
	break;
	case 5473://(1,5) (6, 1)
		return 64;//4 0
	break;
	case 5474://(1,5) (6, 2)
		return 67;//4 3
	break;
	case 5475://(1,5) (6, 3)
		return 64;//4 0
	break;
	case 5476://(1,5) (6, 4)
		return 67;//4 3
	break;
	case 5477://(1,5) (6, 5)
		return 67;//4 3
	break;
	case 5478://(1,5) (6, 6)
		return 64;//4 0
	break;
	case 5479://(1,5) (6, 7)
		return 67;//4 3
	break;
	case 5480://(1,5) (6, 8)
		return 67;//4 3
	break;
	case 5481://(1,5) (6, 9)
		return 67;//4 3
	break;
	case 5482://(1,5) (6, 10)
		return 67;//4 3
	break;
	case 5483://(1,5) (6, 11)
		return 67;//4 3
	break;
	case 5484://(1,5) (6, 12)
		return 67;//4 3
	break;
	case 5485://(1,5) (6, 13)
		return 67;//4 3
	break;
	case 5486://(1,5) (6, 14)
		return 67;//4 3
	break;
	case 5487://(1,5) (6, 15)
		return 67;//4 3
	break;
	case 5488://(1,5) (7, 0)
		return 0;//0 0
	break;
	case 5489://(1,5) (7, 1)
		return 0;//0 0
	break;
	case 5490://(1,5) (7, 2)
		return 3;//0 3
	break;
	case 5491://(1,5) (7, 3)
		return 0;//0 0
	break;
	case 5492://(1,5) (7, 4)
		return 3;//0 3
	break;
	case 5493://(1,5) (7, 5)
		return 3;//0 3
	break;
	case 5494://(1,5) (7, 6)
		return 0;//0 0
	break;
	case 5495://(1,5) (7, 7)
		return 3;//0 3
	break;
	case 5496://(1,5) (7, 8)
		return 3;//0 3
	break;
	case 5497://(1,5) (7, 9)
		return 3;//0 3
	break;
	case 5498://(1,5) (7, 10)
		return 3;//0 3
	break;
	case 5499://(1,5) (7, 11)
		return 3;//0 3
	break;
	case 5500://(1,5) (7, 12)
		return 3;//0 3
	break;
	case 5501://(1,5) (7, 13)
		return 3;//0 3
	break;
	case 5502://(1,5) (7, 14)
		return 3;//0 3
	break;
	case 5503://(1,5) (7, 15)
		return 3;//0 3
	break;
	case 5504://(1,5) (8, 0)
		return 64;//4 0
	break;
	case 5505://(1,5) (8, 1)
		return 64;//4 0
	break;
	case 5506://(1,5) (8, 2)
		return 67;//4 3
	break;
	case 5507://(1,5) (8, 3)
		return 64;//4 0
	break;
	case 5508://(1,5) (8, 4)
		return 67;//4 3
	break;
	case 5509://(1,5) (8, 5)
		return 67;//4 3
	break;
	case 5510://(1,5) (8, 6)
		return 64;//4 0
	break;
	case 5511://(1,5) (8, 7)
		return 67;//4 3
	break;
	case 5512://(1,5) (8, 8)
		return 67;//4 3
	break;
	case 5513://(1,5) (8, 9)
		return 67;//4 3
	break;
	case 5514://(1,5) (8, 10)
		return 67;//4 3
	break;
	case 5515://(1,5) (8, 11)
		return 67;//4 3
	break;
	case 5516://(1,5) (8, 12)
		return 67;//4 3
	break;
	case 5517://(1,5) (8, 13)
		return 67;//4 3
	break;
	case 5518://(1,5) (8, 14)
		return 67;//4 3
	break;
	case 5519://(1,5) (8, 15)
		return 67;//4 3
	break;
	case 5520://(1,5) (9, 0)
		return 64;//4 0
	break;
	case 5521://(1,5) (9, 1)
		return 64;//4 0
	break;
	case 5522://(1,5) (9, 2)
		return 67;//4 3
	break;
	case 5523://(1,5) (9, 3)
		return 64;//4 0
	break;
	case 5524://(1,5) (9, 4)
		return 67;//4 3
	break;
	case 5525://(1,5) (9, 5)
		return 67;//4 3
	break;
	case 5526://(1,5) (9, 6)
		return 64;//4 0
	break;
	case 5527://(1,5) (9, 7)
		return 67;//4 3
	break;
	case 5528://(1,5) (9, 8)
		return 67;//4 3
	break;
	case 5529://(1,5) (9, 9)
		return 67;//4 3
	break;
	case 5530://(1,5) (9, 10)
		return 67;//4 3
	break;
	case 5531://(1,5) (9, 11)
		return 67;//4 3
	break;
	case 5532://(1,5) (9, 12)
		return 67;//4 3
	break;
	case 5533://(1,5) (9, 13)
		return 67;//4 3
	break;
	case 5534://(1,5) (9, 14)
		return 67;//4 3
	break;
	case 5535://(1,5) (9, 15)
		return 67;//4 3
	break;
	case 5536://(1,5) (10, 0)
		return 0;//0 0
	break;
	case 5537://(1,5) (10, 1)
		return 0;//0 0
	break;
	case 5538://(1,5) (10, 2)
		return 3;//0 3
	break;
	case 5539://(1,5) (10, 3)
		return 0;//0 0
	break;
	case 5540://(1,5) (10, 4)
		return 3;//0 3
	break;
	case 5541://(1,5) (10, 5)
		return 3;//0 3
	break;
	case 5542://(1,5) (10, 6)
		return 0;//0 0
	break;
	case 5543://(1,5) (10, 7)
		return 3;//0 3
	break;
	case 5544://(1,5) (10, 8)
		return 3;//0 3
	break;
	case 5545://(1,5) (10, 9)
		return 3;//0 3
	break;
	case 5546://(1,5) (10, 10)
		return 3;//0 3
	break;
	case 5547://(1,5) (10, 11)
		return 3;//0 3
	break;
	case 5548://(1,5) (10, 12)
		return 3;//0 3
	break;
	case 5549://(1,5) (10, 13)
		return 3;//0 3
	break;
	case 5550://(1,5) (10, 14)
		return 3;//0 3
	break;
	case 5551://(1,5) (10, 15)
		return 3;//0 3
	break;
	case 5552://(1,5) (11, 0)
		return 64;//4 0
	break;
	case 5553://(1,5) (11, 1)
		return 64;//4 0
	break;
	case 5554://(1,5) (11, 2)
		return 67;//4 3
	break;
	case 5555://(1,5) (11, 3)
		return 64;//4 0
	break;
	case 5556://(1,5) (11, 4)
		return 67;//4 3
	break;
	case 5557://(1,5) (11, 5)
		return 67;//4 3
	break;
	case 5558://(1,5) (11, 6)
		return 64;//4 0
	break;
	case 5559://(1,5) (11, 7)
		return 67;//4 3
	break;
	case 5560://(1,5) (11, 8)
		return 67;//4 3
	break;
	case 5561://(1,5) (11, 9)
		return 67;//4 3
	break;
	case 5562://(1,5) (11, 10)
		return 67;//4 3
	break;
	case 5563://(1,5) (11, 11)
		return 67;//4 3
	break;
	case 5564://(1,5) (11, 12)
		return 67;//4 3
	break;
	case 5565://(1,5) (11, 13)
		return 67;//4 3
	break;
	case 5566://(1,5) (11, 14)
		return 67;//4 3
	break;
	case 5567://(1,5) (11, 15)
		return 67;//4 3
	break;
	case 5568://(1,5) (12, 0)
		return 0;//0 0
	break;
	case 5569://(1,5) (12, 1)
		return 0;//0 0
	break;
	case 5570://(1,5) (12, 2)
		return 3;//0 3
	break;
	case 5571://(1,5) (12, 3)
		return 0;//0 0
	break;
	case 5572://(1,5) (12, 4)
		return 3;//0 3
	break;
	case 5573://(1,5) (12, 5)
		return 3;//0 3
	break;
	case 5574://(1,5) (12, 6)
		return 0;//0 0
	break;
	case 5575://(1,5) (12, 7)
		return 3;//0 3
	break;
	case 5576://(1,5) (12, 8)
		return 3;//0 3
	break;
	case 5577://(1,5) (12, 9)
		return 3;//0 3
	break;
	case 5578://(1,5) (12, 10)
		return 3;//0 3
	break;
	case 5579://(1,5) (12, 11)
		return 3;//0 3
	break;
	case 5580://(1,5) (12, 12)
		return 3;//0 3
	break;
	case 5581://(1,5) (12, 13)
		return 3;//0 3
	break;
	case 5582://(1,5) (12, 14)
		return 3;//0 3
	break;
	case 5583://(1,5) (12, 15)
		return 3;//0 3
	break;
	case 5584://(1,5) (13, 0)
		return 64;//4 0
	break;
	case 5585://(1,5) (13, 1)
		return 64;//4 0
	break;
	case 5586://(1,5) (13, 2)
		return 67;//4 3
	break;
	case 5587://(1,5) (13, 3)
		return 64;//4 0
	break;
	case 5588://(1,5) (13, 4)
		return 67;//4 3
	break;
	case 5589://(1,5) (13, 5)
		return 67;//4 3
	break;
	case 5590://(1,5) (13, 6)
		return 64;//4 0
	break;
	case 5591://(1,5) (13, 7)
		return 67;//4 3
	break;
	case 5592://(1,5) (13, 8)
		return 67;//4 3
	break;
	case 5593://(1,5) (13, 9)
		return 67;//4 3
	break;
	case 5594://(1,5) (13, 10)
		return 67;//4 3
	break;
	case 5595://(1,5) (13, 11)
		return 67;//4 3
	break;
	case 5596://(1,5) (13, 12)
		return 67;//4 3
	break;
	case 5597://(1,5) (13, 13)
		return 67;//4 3
	break;
	case 5598://(1,5) (13, 14)
		return 67;//4 3
	break;
	case 5599://(1,5) (13, 15)
		return 67;//4 3
	break;
	case 5600://(1,5) (14, 0)
		return 64;//4 0
	break;
	case 5601://(1,5) (14, 1)
		return 64;//4 0
	break;
	case 5602://(1,5) (14, 2)
		return 67;//4 3
	break;
	case 5603://(1,5) (14, 3)
		return 64;//4 0
	break;
	case 5604://(1,5) (14, 4)
		return 67;//4 3
	break;
	case 5605://(1,5) (14, 5)
		return 67;//4 3
	break;
	case 5606://(1,5) (14, 6)
		return 64;//4 0
	break;
	case 5607://(1,5) (14, 7)
		return 67;//4 3
	break;
	case 5608://(1,5) (14, 8)
		return 67;//4 3
	break;
	case 5609://(1,5) (14, 9)
		return 67;//4 3
	break;
	case 5610://(1,5) (14, 10)
		return 67;//4 3
	break;
	case 5611://(1,5) (14, 11)
		return 67;//4 3
	break;
	case 5612://(1,5) (14, 12)
		return 67;//4 3
	break;
	case 5613://(1,5) (14, 13)
		return 67;//4 3
	break;
	case 5614://(1,5) (14, 14)
		return 67;//4 3
	break;
	case 5615://(1,5) (14, 15)
		return 67;//4 3
	break;
	case 5616://(1,5) (15, 0)
		return 64;//4 0
	break;
	case 5617://(1,5) (15, 1)
		return 64;//4 0
	break;
	case 5618://(1,5) (15, 2)
		return 67;//4 3
	break;
	case 5619://(1,5) (15, 3)
		return 64;//4 0
	break;
	case 5620://(1,5) (15, 4)
		return 67;//4 3
	break;
	case 5621://(1,5) (15, 5)
		return 67;//4 3
	break;
	case 5622://(1,5) (15, 6)
		return 64;//4 0
	break;
	case 5623://(1,5) (15, 7)
		return 67;//4 3
	break;
	case 5624://(1,5) (15, 8)
		return 67;//4 3
	break;
	case 5625://(1,5) (15, 9)
		return 67;//4 3
	break;
	case 5626://(1,5) (15, 10)
		return 67;//4 3
	break;
	case 5627://(1,5) (15, 11)
		return 67;//4 3
	break;
	case 5628://(1,5) (15, 12)
		return 67;//4 3
	break;
	case 5629://(1,5) (15, 13)
		return 67;//4 3
	break;
	case 5630://(1,5) (15, 14)
		return 67;//4 3
	break;
	case 5631://(1,5) (15, 15)
		return 67;//4 3
	break;
	case 5632://(1,6) (0, 0)
		return 0;//0 0
	break;
	case 5633://(1,6) (0, 1)
		return 3;//0 3
	break;
	case 5634://(1,6) (0, 2)
		return 0;//0 0
	break;
	case 5635://(1,6) (0, 3)
		return 3;//0 3
	break;
	case 5636://(1,6) (0, 4)
		return 0;//0 0
	break;
	case 5637://(1,6) (0, 5)
		return 0;//0 0
	break;
	case 5638://(1,6) (0, 6)
		return 3;//0 3
	break;
	case 5639://(1,6) (0, 7)
		return 3;//0 3
	break;
	case 5640://(1,6) (0, 8)
		return 3;//0 3
	break;
	case 5641://(1,6) (0, 9)
		return 3;//0 3
	break;
	case 5642://(1,6) (0, 10)
		return 3;//0 3
	break;
	case 5643://(1,6) (0, 11)
		return 3;//0 3
	break;
	case 5644://(1,6) (0, 12)
		return 3;//0 3
	break;
	case 5645://(1,6) (0, 13)
		return 3;//0 3
	break;
	case 5646://(1,6) (0, 14)
		return 3;//0 3
	break;
	case 5647://(1,6) (0, 15)
		return 3;//0 3
	break;
	case 5648://(1,6) (1, 0)
		return 64;//4 0
	break;
	case 5649://(1,6) (1, 1)
		return 67;//4 3
	break;
	case 5650://(1,6) (1, 2)
		return 64;//4 0
	break;
	case 5651://(1,6) (1, 3)
		return 67;//4 3
	break;
	case 5652://(1,6) (1, 4)
		return 64;//4 0
	break;
	case 5653://(1,6) (1, 5)
		return 64;//4 0
	break;
	case 5654://(1,6) (1, 6)
		return 67;//4 3
	break;
	case 5655://(1,6) (1, 7)
		return 67;//4 3
	break;
	case 5656://(1,6) (1, 8)
		return 67;//4 3
	break;
	case 5657://(1,6) (1, 9)
		return 67;//4 3
	break;
	case 5658://(1,6) (1, 10)
		return 67;//4 3
	break;
	case 5659://(1,6) (1, 11)
		return 67;//4 3
	break;
	case 5660://(1,6) (1, 12)
		return 67;//4 3
	break;
	case 5661://(1,6) (1, 13)
		return 67;//4 3
	break;
	case 5662://(1,6) (1, 14)
		return 67;//4 3
	break;
	case 5663://(1,6) (1, 15)
		return 67;//4 3
	break;
	case 5664://(1,6) (2, 0)
		return 0;//0 0
	break;
	case 5665://(1,6) (2, 1)
		return 3;//0 3
	break;
	case 5666://(1,6) (2, 2)
		return 0;//0 0
	break;
	case 5667://(1,6) (2, 3)
		return 3;//0 3
	break;
	case 5668://(1,6) (2, 4)
		return 0;//0 0
	break;
	case 5669://(1,6) (2, 5)
		return 0;//0 0
	break;
	case 5670://(1,6) (2, 6)
		return 3;//0 3
	break;
	case 5671://(1,6) (2, 7)
		return 3;//0 3
	break;
	case 5672://(1,6) (2, 8)
		return 3;//0 3
	break;
	case 5673://(1,6) (2, 9)
		return 3;//0 3
	break;
	case 5674://(1,6) (2, 10)
		return 3;//0 3
	break;
	case 5675://(1,6) (2, 11)
		return 3;//0 3
	break;
	case 5676://(1,6) (2, 12)
		return 3;//0 3
	break;
	case 5677://(1,6) (2, 13)
		return 3;//0 3
	break;
	case 5678://(1,6) (2, 14)
		return 3;//0 3
	break;
	case 5679://(1,6) (2, 15)
		return 3;//0 3
	break;
	case 5680://(1,6) (3, 0)
		return 0;//0 0
	break;
	case 5681://(1,6) (3, 1)
		return 3;//0 3
	break;
	case 5682://(1,6) (3, 2)
		return 0;//0 0
	break;
	case 5683://(1,6) (3, 3)
		return 3;//0 3
	break;
	case 5684://(1,6) (3, 4)
		return 0;//0 0
	break;
	case 5685://(1,6) (3, 5)
		return 0;//0 0
	break;
	case 5686://(1,6) (3, 6)
		return 3;//0 3
	break;
	case 5687://(1,6) (3, 7)
		return 3;//0 3
	break;
	case 5688://(1,6) (3, 8)
		return 3;//0 3
	break;
	case 5689://(1,6) (3, 9)
		return 3;//0 3
	break;
	case 5690://(1,6) (3, 10)
		return 3;//0 3
	break;
	case 5691://(1,6) (3, 11)
		return 3;//0 3
	break;
	case 5692://(1,6) (3, 12)
		return 3;//0 3
	break;
	case 5693://(1,6) (3, 13)
		return 3;//0 3
	break;
	case 5694://(1,6) (3, 14)
		return 3;//0 3
	break;
	case 5695://(1,6) (3, 15)
		return 3;//0 3
	break;
	case 5696://(1,6) (4, 0)
		return 0;//0 0
	break;
	case 5697://(1,6) (4, 1)
		return 3;//0 3
	break;
	case 5698://(1,6) (4, 2)
		return 0;//0 0
	break;
	case 5699://(1,6) (4, 3)
		return 3;//0 3
	break;
	case 5700://(1,6) (4, 4)
		return 0;//0 0
	break;
	case 5701://(1,6) (4, 5)
		return 0;//0 0
	break;
	case 5702://(1,6) (4, 6)
		return 3;//0 3
	break;
	case 5703://(1,6) (4, 7)
		return 3;//0 3
	break;
	case 5704://(1,6) (4, 8)
		return 3;//0 3
	break;
	case 5705://(1,6) (4, 9)
		return 3;//0 3
	break;
	case 5706://(1,6) (4, 10)
		return 3;//0 3
	break;
	case 5707://(1,6) (4, 11)
		return 3;//0 3
	break;
	case 5708://(1,6) (4, 12)
		return 3;//0 3
	break;
	case 5709://(1,6) (4, 13)
		return 3;//0 3
	break;
	case 5710://(1,6) (4, 14)
		return 3;//0 3
	break;
	case 5711://(1,6) (4, 15)
		return 3;//0 3
	break;
	case 5712://(1,6) (5, 0)
		return 0;//0 0
	break;
	case 5713://(1,6) (5, 1)
		return 3;//0 3
	break;
	case 5714://(1,6) (5, 2)
		return 0;//0 0
	break;
	case 5715://(1,6) (5, 3)
		return 3;//0 3
	break;
	case 5716://(1,6) (5, 4)
		return 0;//0 0
	break;
	case 5717://(1,6) (5, 5)
		return 0;//0 0
	break;
	case 5718://(1,6) (5, 6)
		return 3;//0 3
	break;
	case 5719://(1,6) (5, 7)
		return 3;//0 3
	break;
	case 5720://(1,6) (5, 8)
		return 3;//0 3
	break;
	case 5721://(1,6) (5, 9)
		return 3;//0 3
	break;
	case 5722://(1,6) (5, 10)
		return 3;//0 3
	break;
	case 5723://(1,6) (5, 11)
		return 3;//0 3
	break;
	case 5724://(1,6) (5, 12)
		return 3;//0 3
	break;
	case 5725://(1,6) (5, 13)
		return 3;//0 3
	break;
	case 5726://(1,6) (5, 14)
		return 3;//0 3
	break;
	case 5727://(1,6) (5, 15)
		return 3;//0 3
	break;
	case 5728://(1,6) (6, 0)
		return 64;//4 0
	break;
	case 5729://(1,6) (6, 1)
		return 67;//4 3
	break;
	case 5730://(1,6) (6, 2)
		return 64;//4 0
	break;
	case 5731://(1,6) (6, 3)
		return 67;//4 3
	break;
	case 5732://(1,6) (6, 4)
		return 64;//4 0
	break;
	case 5733://(1,6) (6, 5)
		return 64;//4 0
	break;
	case 5734://(1,6) (6, 6)
		return 67;//4 3
	break;
	case 5735://(1,6) (6, 7)
		return 67;//4 3
	break;
	case 5736://(1,6) (6, 8)
		return 67;//4 3
	break;
	case 5737://(1,6) (6, 9)
		return 67;//4 3
	break;
	case 5738://(1,6) (6, 10)
		return 67;//4 3
	break;
	case 5739://(1,6) (6, 11)
		return 67;//4 3
	break;
	case 5740://(1,6) (6, 12)
		return 67;//4 3
	break;
	case 5741://(1,6) (6, 13)
		return 67;//4 3
	break;
	case 5742://(1,6) (6, 14)
		return 67;//4 3
	break;
	case 5743://(1,6) (6, 15)
		return 67;//4 3
	break;
	case 5744://(1,6) (7, 0)
		return 0;//0 0
	break;
	case 5745://(1,6) (7, 1)
		return 3;//0 3
	break;
	case 5746://(1,6) (7, 2)
		return 0;//0 0
	break;
	case 5747://(1,6) (7, 3)
		return 3;//0 3
	break;
	case 5748://(1,6) (7, 4)
		return 0;//0 0
	break;
	case 5749://(1,6) (7, 5)
		return 0;//0 0
	break;
	case 5750://(1,6) (7, 6)
		return 3;//0 3
	break;
	case 5751://(1,6) (7, 7)
		return 3;//0 3
	break;
	case 5752://(1,6) (7, 8)
		return 3;//0 3
	break;
	case 5753://(1,6) (7, 9)
		return 3;//0 3
	break;
	case 5754://(1,6) (7, 10)
		return 3;//0 3
	break;
	case 5755://(1,6) (7, 11)
		return 3;//0 3
	break;
	case 5756://(1,6) (7, 12)
		return 3;//0 3
	break;
	case 5757://(1,6) (7, 13)
		return 3;//0 3
	break;
	case 5758://(1,6) (7, 14)
		return 3;//0 3
	break;
	case 5759://(1,6) (7, 15)
		return 3;//0 3
	break;
	case 5760://(1,6) (8, 0)
		return 64;//4 0
	break;
	case 5761://(1,6) (8, 1)
		return 67;//4 3
	break;
	case 5762://(1,6) (8, 2)
		return 64;//4 0
	break;
	case 5763://(1,6) (8, 3)
		return 67;//4 3
	break;
	case 5764://(1,6) (8, 4)
		return 64;//4 0
	break;
	case 5765://(1,6) (8, 5)
		return 64;//4 0
	break;
	case 5766://(1,6) (8, 6)
		return 67;//4 3
	break;
	case 5767://(1,6) (8, 7)
		return 67;//4 3
	break;
	case 5768://(1,6) (8, 8)
		return 67;//4 3
	break;
	case 5769://(1,6) (8, 9)
		return 67;//4 3
	break;
	case 5770://(1,6) (8, 10)
		return 67;//4 3
	break;
	case 5771://(1,6) (8, 11)
		return 67;//4 3
	break;
	case 5772://(1,6) (8, 12)
		return 67;//4 3
	break;
	case 5773://(1,6) (8, 13)
		return 67;//4 3
	break;
	case 5774://(1,6) (8, 14)
		return 67;//4 3
	break;
	case 5775://(1,6) (8, 15)
		return 67;//4 3
	break;
	case 5776://(1,6) (9, 0)
		return 64;//4 0
	break;
	case 5777://(1,6) (9, 1)
		return 67;//4 3
	break;
	case 5778://(1,6) (9, 2)
		return 64;//4 0
	break;
	case 5779://(1,6) (9, 3)
		return 67;//4 3
	break;
	case 5780://(1,6) (9, 4)
		return 64;//4 0
	break;
	case 5781://(1,6) (9, 5)
		return 64;//4 0
	break;
	case 5782://(1,6) (9, 6)
		return 67;//4 3
	break;
	case 5783://(1,6) (9, 7)
		return 67;//4 3
	break;
	case 5784://(1,6) (9, 8)
		return 67;//4 3
	break;
	case 5785://(1,6) (9, 9)
		return 67;//4 3
	break;
	case 5786://(1,6) (9, 10)
		return 67;//4 3
	break;
	case 5787://(1,6) (9, 11)
		return 67;//4 3
	break;
	case 5788://(1,6) (9, 12)
		return 67;//4 3
	break;
	case 5789://(1,6) (9, 13)
		return 67;//4 3
	break;
	case 5790://(1,6) (9, 14)
		return 67;//4 3
	break;
	case 5791://(1,6) (9, 15)
		return 67;//4 3
	break;
	case 5792://(1,6) (10, 0)
		return 0;//0 0
	break;
	case 5793://(1,6) (10, 1)
		return 3;//0 3
	break;
	case 5794://(1,6) (10, 2)
		return 0;//0 0
	break;
	case 5795://(1,6) (10, 3)
		return 3;//0 3
	break;
	case 5796://(1,6) (10, 4)
		return 0;//0 0
	break;
	case 5797://(1,6) (10, 5)
		return 0;//0 0
	break;
	case 5798://(1,6) (10, 6)
		return 3;//0 3
	break;
	case 5799://(1,6) (10, 7)
		return 3;//0 3
	break;
	case 5800://(1,6) (10, 8)
		return 3;//0 3
	break;
	case 5801://(1,6) (10, 9)
		return 3;//0 3
	break;
	case 5802://(1,6) (10, 10)
		return 3;//0 3
	break;
	case 5803://(1,6) (10, 11)
		return 3;//0 3
	break;
	case 5804://(1,6) (10, 12)
		return 3;//0 3
	break;
	case 5805://(1,6) (10, 13)
		return 3;//0 3
	break;
	case 5806://(1,6) (10, 14)
		return 3;//0 3
	break;
	case 5807://(1,6) (10, 15)
		return 3;//0 3
	break;
	case 5808://(1,6) (11, 0)
		return 64;//4 0
	break;
	case 5809://(1,6) (11, 1)
		return 67;//4 3
	break;
	case 5810://(1,6) (11, 2)
		return 64;//4 0
	break;
	case 5811://(1,6) (11, 3)
		return 67;//4 3
	break;
	case 5812://(1,6) (11, 4)
		return 64;//4 0
	break;
	case 5813://(1,6) (11, 5)
		return 64;//4 0
	break;
	case 5814://(1,6) (11, 6)
		return 67;//4 3
	break;
	case 5815://(1,6) (11, 7)
		return 67;//4 3
	break;
	case 5816://(1,6) (11, 8)
		return 67;//4 3
	break;
	case 5817://(1,6) (11, 9)
		return 67;//4 3
	break;
	case 5818://(1,6) (11, 10)
		return 67;//4 3
	break;
	case 5819://(1,6) (11, 11)
		return 67;//4 3
	break;
	case 5820://(1,6) (11, 12)
		return 67;//4 3
	break;
	case 5821://(1,6) (11, 13)
		return 67;//4 3
	break;
	case 5822://(1,6) (11, 14)
		return 67;//4 3
	break;
	case 5823://(1,6) (11, 15)
		return 67;//4 3
	break;
	case 5824://(1,6) (12, 0)
		return 0;//0 0
	break;
	case 5825://(1,6) (12, 1)
		return 3;//0 3
	break;
	case 5826://(1,6) (12, 2)
		return 0;//0 0
	break;
	case 5827://(1,6) (12, 3)
		return 3;//0 3
	break;
	case 5828://(1,6) (12, 4)
		return 0;//0 0
	break;
	case 5829://(1,6) (12, 5)
		return 0;//0 0
	break;
	case 5830://(1,6) (12, 6)
		return 3;//0 3
	break;
	case 5831://(1,6) (12, 7)
		return 3;//0 3
	break;
	case 5832://(1,6) (12, 8)
		return 3;//0 3
	break;
	case 5833://(1,6) (12, 9)
		return 3;//0 3
	break;
	case 5834://(1,6) (12, 10)
		return 3;//0 3
	break;
	case 5835://(1,6) (12, 11)
		return 3;//0 3
	break;
	case 5836://(1,6) (12, 12)
		return 3;//0 3
	break;
	case 5837://(1,6) (12, 13)
		return 3;//0 3
	break;
	case 5838://(1,6) (12, 14)
		return 3;//0 3
	break;
	case 5839://(1,6) (12, 15)
		return 3;//0 3
	break;
	case 5840://(1,6) (13, 0)
		return 64;//4 0
	break;
	case 5841://(1,6) (13, 1)
		return 67;//4 3
	break;
	case 5842://(1,6) (13, 2)
		return 64;//4 0
	break;
	case 5843://(1,6) (13, 3)
		return 67;//4 3
	break;
	case 5844://(1,6) (13, 4)
		return 64;//4 0
	break;
	case 5845://(1,6) (13, 5)
		return 64;//4 0
	break;
	case 5846://(1,6) (13, 6)
		return 67;//4 3
	break;
	case 5847://(1,6) (13, 7)
		return 67;//4 3
	break;
	case 5848://(1,6) (13, 8)
		return 67;//4 3
	break;
	case 5849://(1,6) (13, 9)
		return 67;//4 3
	break;
	case 5850://(1,6) (13, 10)
		return 67;//4 3
	break;
	case 5851://(1,6) (13, 11)
		return 67;//4 3
	break;
	case 5852://(1,6) (13, 12)
		return 67;//4 3
	break;
	case 5853://(1,6) (13, 13)
		return 67;//4 3
	break;
	case 5854://(1,6) (13, 14)
		return 67;//4 3
	break;
	case 5855://(1,6) (13, 15)
		return 67;//4 3
	break;
	case 5856://(1,6) (14, 0)
		return 64;//4 0
	break;
	case 5857://(1,6) (14, 1)
		return 67;//4 3
	break;
	case 5858://(1,6) (14, 2)
		return 64;//4 0
	break;
	case 5859://(1,6) (14, 3)
		return 67;//4 3
	break;
	case 5860://(1,6) (14, 4)
		return 64;//4 0
	break;
	case 5861://(1,6) (14, 5)
		return 64;//4 0
	break;
	case 5862://(1,6) (14, 6)
		return 67;//4 3
	break;
	case 5863://(1,6) (14, 7)
		return 67;//4 3
	break;
	case 5864://(1,6) (14, 8)
		return 67;//4 3
	break;
	case 5865://(1,6) (14, 9)
		return 67;//4 3
	break;
	case 5866://(1,6) (14, 10)
		return 67;//4 3
	break;
	case 5867://(1,6) (14, 11)
		return 67;//4 3
	break;
	case 5868://(1,6) (14, 12)
		return 67;//4 3
	break;
	case 5869://(1,6) (14, 13)
		return 67;//4 3
	break;
	case 5870://(1,6) (14, 14)
		return 67;//4 3
	break;
	case 5871://(1,6) (14, 15)
		return 67;//4 3
	break;
	case 5872://(1,6) (15, 0)
		return 64;//4 0
	break;
	case 5873://(1,6) (15, 1)
		return 67;//4 3
	break;
	case 5874://(1,6) (15, 2)
		return 64;//4 0
	break;
	case 5875://(1,6) (15, 3)
		return 67;//4 3
	break;
	case 5876://(1,6) (15, 4)
		return 64;//4 0
	break;
	case 5877://(1,6) (15, 5)
		return 64;//4 0
	break;
	case 5878://(1,6) (15, 6)
		return 67;//4 3
	break;
	case 5879://(1,6) (15, 7)
		return 67;//4 3
	break;
	case 5880://(1,6) (15, 8)
		return 67;//4 3
	break;
	case 5881://(1,6) (15, 9)
		return 67;//4 3
	break;
	case 5882://(1,6) (15, 10)
		return 67;//4 3
	break;
	case 5883://(1,6) (15, 11)
		return 67;//4 3
	break;
	case 5884://(1,6) (15, 12)
		return 67;//4 3
	break;
	case 5885://(1,6) (15, 13)
		return 67;//4 3
	break;
	case 5886://(1,6) (15, 14)
		return 67;//4 3
	break;
	case 5887://(1,6) (15, 15)
		return 67;//4 3
	break;
	case 5888://(1,7) (0, 0)
		return 0;//0 0
	break;
	case 5889://(1,7) (0, 1)
		return 0;//0 0
	break;
	case 5890://(1,7) (0, 2)
		return 3;//0 3
	break;
	case 5891://(1,7) (0, 3)
		return 3;//0 3
	break;
	case 5892://(1,7) (0, 4)
		return 0;//0 0
	break;
	case 5893://(1,7) (0, 5)
		return 3;//0 3
	break;
	case 5894://(1,7) (0, 6)
		return 3;//0 3
	break;
	case 5895://(1,7) (0, 7)
		return 3;//0 3
	break;
	case 5896://(1,7) (0, 8)
		return 0;//0 0
	break;
	case 5897://(1,7) (0, 9)
		return 3;//0 3
	break;
	case 5898://(1,7) (0, 10)
		return 3;//0 3
	break;
	case 5899://(1,7) (0, 11)
		return 3;//0 3
	break;
	case 5900://(1,7) (0, 12)
		return 3;//0 3
	break;
	case 5901://(1,7) (0, 13)
		return 3;//0 3
	break;
	case 5902://(1,7) (0, 14)
		return 3;//0 3
	break;
	case 5903://(1,7) (0, 15)
		return 3;//0 3
	break;
	case 5904://(1,7) (1, 0)
		return 64;//4 0
	break;
	case 5905://(1,7) (1, 1)
		return 64;//4 0
	break;
	case 5906://(1,7) (1, 2)
		return 67;//4 3
	break;
	case 5907://(1,7) (1, 3)
		return 67;//4 3
	break;
	case 5908://(1,7) (1, 4)
		return 64;//4 0
	break;
	case 5909://(1,7) (1, 5)
		return 67;//4 3
	break;
	case 5910://(1,7) (1, 6)
		return 67;//4 3
	break;
	case 5911://(1,7) (1, 7)
		return 67;//4 3
	break;
	case 5912://(1,7) (1, 8)
		return 64;//4 0
	break;
	case 5913://(1,7) (1, 9)
		return 67;//4 3
	break;
	case 5914://(1,7) (1, 10)
		return 67;//4 3
	break;
	case 5915://(1,7) (1, 11)
		return 67;//4 3
	break;
	case 5916://(1,7) (1, 12)
		return 67;//4 3
	break;
	case 5917://(1,7) (1, 13)
		return 67;//4 3
	break;
	case 5918://(1,7) (1, 14)
		return 67;//4 3
	break;
	case 5919://(1,7) (1, 15)
		return 67;//4 3
	break;
	case 5920://(1,7) (2, 0)
		return 0;//0 0
	break;
	case 5921://(1,7) (2, 1)
		return 0;//0 0
	break;
	case 5922://(1,7) (2, 2)
		return 3;//0 3
	break;
	case 5923://(1,7) (2, 3)
		return 3;//0 3
	break;
	case 5924://(1,7) (2, 4)
		return 0;//0 0
	break;
	case 5925://(1,7) (2, 5)
		return 3;//0 3
	break;
	case 5926://(1,7) (2, 6)
		return 3;//0 3
	break;
	case 5927://(1,7) (2, 7)
		return 3;//0 3
	break;
	case 5928://(1,7) (2, 8)
		return 0;//0 0
	break;
	case 5929://(1,7) (2, 9)
		return 3;//0 3
	break;
	case 5930://(1,7) (2, 10)
		return 3;//0 3
	break;
	case 5931://(1,7) (2, 11)
		return 3;//0 3
	break;
	case 5932://(1,7) (2, 12)
		return 3;//0 3
	break;
	case 5933://(1,7) (2, 13)
		return 3;//0 3
	break;
	case 5934://(1,7) (2, 14)
		return 3;//0 3
	break;
	case 5935://(1,7) (2, 15)
		return 3;//0 3
	break;
	case 5936://(1,7) (3, 0)
		return 0;//0 0
	break;
	case 5937://(1,7) (3, 1)
		return 0;//0 0
	break;
	case 5938://(1,7) (3, 2)
		return 3;//0 3
	break;
	case 5939://(1,7) (3, 3)
		return 3;//0 3
	break;
	case 5940://(1,7) (3, 4)
		return 0;//0 0
	break;
	case 5941://(1,7) (3, 5)
		return 3;//0 3
	break;
	case 5942://(1,7) (3, 6)
		return 3;//0 3
	break;
	case 5943://(1,7) (3, 7)
		return 3;//0 3
	break;
	case 5944://(1,7) (3, 8)
		return 0;//0 0
	break;
	case 5945://(1,7) (3, 9)
		return 3;//0 3
	break;
	case 5946://(1,7) (3, 10)
		return 3;//0 3
	break;
	case 5947://(1,7) (3, 11)
		return 3;//0 3
	break;
	case 5948://(1,7) (3, 12)
		return 3;//0 3
	break;
	case 5949://(1,7) (3, 13)
		return 3;//0 3
	break;
	case 5950://(1,7) (3, 14)
		return 3;//0 3
	break;
	case 5951://(1,7) (3, 15)
		return 3;//0 3
	break;
	case 5952://(1,7) (4, 0)
		return 0;//0 0
	break;
	case 5953://(1,7) (4, 1)
		return 0;//0 0
	break;
	case 5954://(1,7) (4, 2)
		return 3;//0 3
	break;
	case 5955://(1,7) (4, 3)
		return 3;//0 3
	break;
	case 5956://(1,7) (4, 4)
		return 0;//0 0
	break;
	case 5957://(1,7) (4, 5)
		return 3;//0 3
	break;
	case 5958://(1,7) (4, 6)
		return 3;//0 3
	break;
	case 5959://(1,7) (4, 7)
		return 3;//0 3
	break;
	case 5960://(1,7) (4, 8)
		return 0;//0 0
	break;
	case 5961://(1,7) (4, 9)
		return 3;//0 3
	break;
	case 5962://(1,7) (4, 10)
		return 3;//0 3
	break;
	case 5963://(1,7) (4, 11)
		return 3;//0 3
	break;
	case 5964://(1,7) (4, 12)
		return 3;//0 3
	break;
	case 5965://(1,7) (4, 13)
		return 3;//0 3
	break;
	case 5966://(1,7) (4, 14)
		return 3;//0 3
	break;
	case 5967://(1,7) (4, 15)
		return 3;//0 3
	break;
	case 5968://(1,7) (5, 0)
		return 0;//0 0
	break;
	case 5969://(1,7) (5, 1)
		return 0;//0 0
	break;
	case 5970://(1,7) (5, 2)
		return 3;//0 3
	break;
	case 5971://(1,7) (5, 3)
		return 3;//0 3
	break;
	case 5972://(1,7) (5, 4)
		return 0;//0 0
	break;
	case 5973://(1,7) (5, 5)
		return 3;//0 3
	break;
	case 5974://(1,7) (5, 6)
		return 3;//0 3
	break;
	case 5975://(1,7) (5, 7)
		return 3;//0 3
	break;
	case 5976://(1,7) (5, 8)
		return 0;//0 0
	break;
	case 5977://(1,7) (5, 9)
		return 3;//0 3
	break;
	case 5978://(1,7) (5, 10)
		return 3;//0 3
	break;
	case 5979://(1,7) (5, 11)
		return 3;//0 3
	break;
	case 5980://(1,7) (5, 12)
		return 3;//0 3
	break;
	case 5981://(1,7) (5, 13)
		return 3;//0 3
	break;
	case 5982://(1,7) (5, 14)
		return 3;//0 3
	break;
	case 5983://(1,7) (5, 15)
		return 3;//0 3
	break;
	case 5984://(1,7) (6, 0)
		return 64;//4 0
	break;
	case 5985://(1,7) (6, 1)
		return 64;//4 0
	break;
	case 5986://(1,7) (6, 2)
		return 67;//4 3
	break;
	case 5987://(1,7) (6, 3)
		return 67;//4 3
	break;
	case 5988://(1,7) (6, 4)
		return 64;//4 0
	break;
	case 5989://(1,7) (6, 5)
		return 67;//4 3
	break;
	case 5990://(1,7) (6, 6)
		return 67;//4 3
	break;
	case 5991://(1,7) (6, 7)
		return 67;//4 3
	break;
	case 5992://(1,7) (6, 8)
		return 64;//4 0
	break;
	case 5993://(1,7) (6, 9)
		return 67;//4 3
	break;
	case 5994://(1,7) (6, 10)
		return 67;//4 3
	break;
	case 5995://(1,7) (6, 11)
		return 67;//4 3
	break;
	case 5996://(1,7) (6, 12)
		return 67;//4 3
	break;
	case 5997://(1,7) (6, 13)
		return 67;//4 3
	break;
	case 5998://(1,7) (6, 14)
		return 67;//4 3
	break;
	case 5999://(1,7) (6, 15)
		return 67;//4 3
	break;
	case 6000://(1,7) (7, 0)
		return 0;//0 0
	break;
	case 6001://(1,7) (7, 1)
		return 0;//0 0
	break;
	case 6002://(1,7) (7, 2)
		return 3;//0 3
	break;
	case 6003://(1,7) (7, 3)
		return 3;//0 3
	break;
	case 6004://(1,7) (7, 4)
		return 0;//0 0
	break;
	case 6005://(1,7) (7, 5)
		return 3;//0 3
	break;
	case 6006://(1,7) (7, 6)
		return 3;//0 3
	break;
	case 6007://(1,7) (7, 7)
		return 3;//0 3
	break;
	case 6008://(1,7) (7, 8)
		return 0;//0 0
	break;
	case 6009://(1,7) (7, 9)
		return 3;//0 3
	break;
	case 6010://(1,7) (7, 10)
		return 3;//0 3
	break;
	case 6011://(1,7) (7, 11)
		return 3;//0 3
	break;
	case 6012://(1,7) (7, 12)
		return 3;//0 3
	break;
	case 6013://(1,7) (7, 13)
		return 3;//0 3
	break;
	case 6014://(1,7) (7, 14)
		return 3;//0 3
	break;
	case 6015://(1,7) (7, 15)
		return 3;//0 3
	break;
	case 6016://(1,7) (8, 0)
		return 64;//4 0
	break;
	case 6017://(1,7) (8, 1)
		return 64;//4 0
	break;
	case 6018://(1,7) (8, 2)
		return 67;//4 3
	break;
	case 6019://(1,7) (8, 3)
		return 67;//4 3
	break;
	case 6020://(1,7) (8, 4)
		return 64;//4 0
	break;
	case 6021://(1,7) (8, 5)
		return 67;//4 3
	break;
	case 6022://(1,7) (8, 6)
		return 67;//4 3
	break;
	case 6023://(1,7) (8, 7)
		return 67;//4 3
	break;
	case 6024://(1,7) (8, 8)
		return 64;//4 0
	break;
	case 6025://(1,7) (8, 9)
		return 67;//4 3
	break;
	case 6026://(1,7) (8, 10)
		return 67;//4 3
	break;
	case 6027://(1,7) (8, 11)
		return 67;//4 3
	break;
	case 6028://(1,7) (8, 12)
		return 67;//4 3
	break;
	case 6029://(1,7) (8, 13)
		return 67;//4 3
	break;
	case 6030://(1,7) (8, 14)
		return 67;//4 3
	break;
	case 6031://(1,7) (8, 15)
		return 67;//4 3
	break;
	case 6032://(1,7) (9, 0)
		return 64;//4 0
	break;
	case 6033://(1,7) (9, 1)
		return 64;//4 0
	break;
	case 6034://(1,7) (9, 2)
		return 67;//4 3
	break;
	case 6035://(1,7) (9, 3)
		return 67;//4 3
	break;
	case 6036://(1,7) (9, 4)
		return 64;//4 0
	break;
	case 6037://(1,7) (9, 5)
		return 67;//4 3
	break;
	case 6038://(1,7) (9, 6)
		return 67;//4 3
	break;
	case 6039://(1,7) (9, 7)
		return 67;//4 3
	break;
	case 6040://(1,7) (9, 8)
		return 64;//4 0
	break;
	case 6041://(1,7) (9, 9)
		return 67;//4 3
	break;
	case 6042://(1,7) (9, 10)
		return 67;//4 3
	break;
	case 6043://(1,7) (9, 11)
		return 67;//4 3
	break;
	case 6044://(1,7) (9, 12)
		return 67;//4 3
	break;
	case 6045://(1,7) (9, 13)
		return 67;//4 3
	break;
	case 6046://(1,7) (9, 14)
		return 67;//4 3
	break;
	case 6047://(1,7) (9, 15)
		return 67;//4 3
	break;
	case 6048://(1,7) (10, 0)
		return 0;//0 0
	break;
	case 6049://(1,7) (10, 1)
		return 0;//0 0
	break;
	case 6050://(1,7) (10, 2)
		return 3;//0 3
	break;
	case 6051://(1,7) (10, 3)
		return 3;//0 3
	break;
	case 6052://(1,7) (10, 4)
		return 0;//0 0
	break;
	case 6053://(1,7) (10, 5)
		return 3;//0 3
	break;
	case 6054://(1,7) (10, 6)
		return 3;//0 3
	break;
	case 6055://(1,7) (10, 7)
		return 3;//0 3
	break;
	case 6056://(1,7) (10, 8)
		return 0;//0 0
	break;
	case 6057://(1,7) (10, 9)
		return 3;//0 3
	break;
	case 6058://(1,7) (10, 10)
		return 3;//0 3
	break;
	case 6059://(1,7) (10, 11)
		return 3;//0 3
	break;
	case 6060://(1,7) (10, 12)
		return 3;//0 3
	break;
	case 6061://(1,7) (10, 13)
		return 3;//0 3
	break;
	case 6062://(1,7) (10, 14)
		return 3;//0 3
	break;
	case 6063://(1,7) (10, 15)
		return 3;//0 3
	break;
	case 6064://(1,7) (11, 0)
		return 64;//4 0
	break;
	case 6065://(1,7) (11, 1)
		return 64;//4 0
	break;
	case 6066://(1,7) (11, 2)
		return 67;//4 3
	break;
	case 6067://(1,7) (11, 3)
		return 67;//4 3
	break;
	case 6068://(1,7) (11, 4)
		return 64;//4 0
	break;
	case 6069://(1,7) (11, 5)
		return 67;//4 3
	break;
	case 6070://(1,7) (11, 6)
		return 67;//4 3
	break;
	case 6071://(1,7) (11, 7)
		return 67;//4 3
	break;
	case 6072://(1,7) (11, 8)
		return 64;//4 0
	break;
	case 6073://(1,7) (11, 9)
		return 67;//4 3
	break;
	case 6074://(1,7) (11, 10)
		return 67;//4 3
	break;
	case 6075://(1,7) (11, 11)
		return 67;//4 3
	break;
	case 6076://(1,7) (11, 12)
		return 67;//4 3
	break;
	case 6077://(1,7) (11, 13)
		return 67;//4 3
	break;
	case 6078://(1,7) (11, 14)
		return 67;//4 3
	break;
	case 6079://(1,7) (11, 15)
		return 67;//4 3
	break;
	case 6080://(1,7) (12, 0)
		return 0;//0 0
	break;
	case 6081://(1,7) (12, 1)
		return 0;//0 0
	break;
	case 6082://(1,7) (12, 2)
		return 3;//0 3
	break;
	case 6083://(1,7) (12, 3)
		return 3;//0 3
	break;
	case 6084://(1,7) (12, 4)
		return 0;//0 0
	break;
	case 6085://(1,7) (12, 5)
		return 3;//0 3
	break;
	case 6086://(1,7) (12, 6)
		return 3;//0 3
	break;
	case 6087://(1,7) (12, 7)
		return 3;//0 3
	break;
	case 6088://(1,7) (12, 8)
		return 0;//0 0
	break;
	case 6089://(1,7) (12, 9)
		return 3;//0 3
	break;
	case 6090://(1,7) (12, 10)
		return 3;//0 3
	break;
	case 6091://(1,7) (12, 11)
		return 3;//0 3
	break;
	case 6092://(1,7) (12, 12)
		return 3;//0 3
	break;
	case 6093://(1,7) (12, 13)
		return 3;//0 3
	break;
	case 6094://(1,7) (12, 14)
		return 3;//0 3
	break;
	case 6095://(1,7) (12, 15)
		return 3;//0 3
	break;
	case 6096://(1,7) (13, 0)
		return 64;//4 0
	break;
	case 6097://(1,7) (13, 1)
		return 64;//4 0
	break;
	case 6098://(1,7) (13, 2)
		return 67;//4 3
	break;
	case 6099://(1,7) (13, 3)
		return 67;//4 3
	break;
	case 6100://(1,7) (13, 4)
		return 64;//4 0
	break;
	case 6101://(1,7) (13, 5)
		return 67;//4 3
	break;
	case 6102://(1,7) (13, 6)
		return 67;//4 3
	break;
	case 6103://(1,7) (13, 7)
		return 67;//4 3
	break;
	case 6104://(1,7) (13, 8)
		return 64;//4 0
	break;
	case 6105://(1,7) (13, 9)
		return 67;//4 3
	break;
	case 6106://(1,7) (13, 10)
		return 67;//4 3
	break;
	case 6107://(1,7) (13, 11)
		return 67;//4 3
	break;
	case 6108://(1,7) (13, 12)
		return 67;//4 3
	break;
	case 6109://(1,7) (13, 13)
		return 67;//4 3
	break;
	case 6110://(1,7) (13, 14)
		return 67;//4 3
	break;
	case 6111://(1,7) (13, 15)
		return 67;//4 3
	break;
	case 6112://(1,7) (14, 0)
		return 64;//4 0
	break;
	case 6113://(1,7) (14, 1)
		return 64;//4 0
	break;
	case 6114://(1,7) (14, 2)
		return 67;//4 3
	break;
	case 6115://(1,7) (14, 3)
		return 67;//4 3
	break;
	case 6116://(1,7) (14, 4)
		return 64;//4 0
	break;
	case 6117://(1,7) (14, 5)
		return 67;//4 3
	break;
	case 6118://(1,7) (14, 6)
		return 67;//4 3
	break;
	case 6119://(1,7) (14, 7)
		return 67;//4 3
	break;
	case 6120://(1,7) (14, 8)
		return 64;//4 0
	break;
	case 6121://(1,7) (14, 9)
		return 67;//4 3
	break;
	case 6122://(1,7) (14, 10)
		return 67;//4 3
	break;
	case 6123://(1,7) (14, 11)
		return 67;//4 3
	break;
	case 6124://(1,7) (14, 12)
		return 67;//4 3
	break;
	case 6125://(1,7) (14, 13)
		return 67;//4 3
	break;
	case 6126://(1,7) (14, 14)
		return 67;//4 3
	break;
	case 6127://(1,7) (14, 15)
		return 67;//4 3
	break;
	case 6128://(1,7) (15, 0)
		return 64;//4 0
	break;
	case 6129://(1,7) (15, 1)
		return 64;//4 0
	break;
	case 6130://(1,7) (15, 2)
		return 67;//4 3
	break;
	case 6131://(1,7) (15, 3)
		return 67;//4 3
	break;
	case 6132://(1,7) (15, 4)
		return 64;//4 0
	break;
	case 6133://(1,7) (15, 5)
		return 67;//4 3
	break;
	case 6134://(1,7) (15, 6)
		return 67;//4 3
	break;
	case 6135://(1,7) (15, 7)
		return 67;//4 3
	break;
	case 6136://(1,7) (15, 8)
		return 64;//4 0
	break;
	case 6137://(1,7) (15, 9)
		return 67;//4 3
	break;
	case 6138://(1,7) (15, 10)
		return 67;//4 3
	break;
	case 6139://(1,7) (15, 11)
		return 67;//4 3
	break;
	case 6140://(1,7) (15, 12)
		return 67;//4 3
	break;
	case 6141://(1,7) (15, 13)
		return 67;//4 3
	break;
	case 6142://(1,7) (15, 14)
		return 67;//4 3
	break;
	case 6143://(1,7) (15, 15)
		return 67;//4 3
	break;
	case 6144://(1,8) (0, 0)
		return 0;//0 0
	break;
	case 6145://(1,8) (0, 1)
		return 3;//0 3
	break;
	case 6146://(1,8) (0, 2)
		return 0;//0 0
	break;
	case 6147://(1,8) (0, 3)
		return 0;//0 0
	break;
	case 6148://(1,8) (0, 4)
		return 3;//0 3
	break;
	case 6149://(1,8) (0, 5)
		return 3;//0 3
	break;
	case 6150://(1,8) (0, 6)
		return 3;//0 3
	break;
	case 6151://(1,8) (0, 7)
		return 0;//0 0
	break;
	case 6152://(1,8) (0, 8)
		return 3;//0 3
	break;
	case 6153://(1,8) (0, 9)
		return 3;//0 3
	break;
	case 6154://(1,8) (0, 10)
		return 3;//0 3
	break;
	case 6155://(1,8) (0, 11)
		return 3;//0 3
	break;
	case 6156://(1,8) (0, 12)
		return 3;//0 3
	break;
	case 6157://(1,8) (0, 13)
		return 3;//0 3
	break;
	case 6158://(1,8) (0, 14)
		return 3;//0 3
	break;
	case 6159://(1,8) (0, 15)
		return 3;//0 3
	break;
	case 6160://(1,8) (1, 0)
		return 64;//4 0
	break;
	case 6161://(1,8) (1, 1)
		return 67;//4 3
	break;
	case 6162://(1,8) (1, 2)
		return 64;//4 0
	break;
	case 6163://(1,8) (1, 3)
		return 64;//4 0
	break;
	case 6164://(1,8) (1, 4)
		return 67;//4 3
	break;
	case 6165://(1,8) (1, 5)
		return 67;//4 3
	break;
	case 6166://(1,8) (1, 6)
		return 67;//4 3
	break;
	case 6167://(1,8) (1, 7)
		return 64;//4 0
	break;
	case 6168://(1,8) (1, 8)
		return 67;//4 3
	break;
	case 6169://(1,8) (1, 9)
		return 67;//4 3
	break;
	case 6170://(1,8) (1, 10)
		return 67;//4 3
	break;
	case 6171://(1,8) (1, 11)
		return 67;//4 3
	break;
	case 6172://(1,8) (1, 12)
		return 67;//4 3
	break;
	case 6173://(1,8) (1, 13)
		return 67;//4 3
	break;
	case 6174://(1,8) (1, 14)
		return 67;//4 3
	break;
	case 6175://(1,8) (1, 15)
		return 67;//4 3
	break;
	case 6176://(1,8) (2, 0)
		return 0;//0 0
	break;
	case 6177://(1,8) (2, 1)
		return 3;//0 3
	break;
	case 6178://(1,8) (2, 2)
		return 0;//0 0
	break;
	case 6179://(1,8) (2, 3)
		return 0;//0 0
	break;
	case 6180://(1,8) (2, 4)
		return 3;//0 3
	break;
	case 6181://(1,8) (2, 5)
		return 3;//0 3
	break;
	case 6182://(1,8) (2, 6)
		return 3;//0 3
	break;
	case 6183://(1,8) (2, 7)
		return 0;//0 0
	break;
	case 6184://(1,8) (2, 8)
		return 3;//0 3
	break;
	case 6185://(1,8) (2, 9)
		return 3;//0 3
	break;
	case 6186://(1,8) (2, 10)
		return 3;//0 3
	break;
	case 6187://(1,8) (2, 11)
		return 3;//0 3
	break;
	case 6188://(1,8) (2, 12)
		return 3;//0 3
	break;
	case 6189://(1,8) (2, 13)
		return 3;//0 3
	break;
	case 6190://(1,8) (2, 14)
		return 3;//0 3
	break;
	case 6191://(1,8) (2, 15)
		return 3;//0 3
	break;
	case 6192://(1,8) (3, 0)
		return 0;//0 0
	break;
	case 6193://(1,8) (3, 1)
		return 3;//0 3
	break;
	case 6194://(1,8) (3, 2)
		return 0;//0 0
	break;
	case 6195://(1,8) (3, 3)
		return 0;//0 0
	break;
	case 6196://(1,8) (3, 4)
		return 3;//0 3
	break;
	case 6197://(1,8) (3, 5)
		return 3;//0 3
	break;
	case 6198://(1,8) (3, 6)
		return 3;//0 3
	break;
	case 6199://(1,8) (3, 7)
		return 0;//0 0
	break;
	case 6200://(1,8) (3, 8)
		return 3;//0 3
	break;
	case 6201://(1,8) (3, 9)
		return 3;//0 3
	break;
	case 6202://(1,8) (3, 10)
		return 3;//0 3
	break;
	case 6203://(1,8) (3, 11)
		return 3;//0 3
	break;
	case 6204://(1,8) (3, 12)
		return 3;//0 3
	break;
	case 6205://(1,8) (3, 13)
		return 3;//0 3
	break;
	case 6206://(1,8) (3, 14)
		return 3;//0 3
	break;
	case 6207://(1,8) (3, 15)
		return 3;//0 3
	break;
	case 6208://(1,8) (4, 0)
		return 0;//0 0
	break;
	case 6209://(1,8) (4, 1)
		return 3;//0 3
	break;
	case 6210://(1,8) (4, 2)
		return 0;//0 0
	break;
	case 6211://(1,8) (4, 3)
		return 0;//0 0
	break;
	case 6212://(1,8) (4, 4)
		return 3;//0 3
	break;
	case 6213://(1,8) (4, 5)
		return 3;//0 3
	break;
	case 6214://(1,8) (4, 6)
		return 3;//0 3
	break;
	case 6215://(1,8) (4, 7)
		return 0;//0 0
	break;
	case 6216://(1,8) (4, 8)
		return 3;//0 3
	break;
	case 6217://(1,8) (4, 9)
		return 3;//0 3
	break;
	case 6218://(1,8) (4, 10)
		return 3;//0 3
	break;
	case 6219://(1,8) (4, 11)
		return 3;//0 3
	break;
	case 6220://(1,8) (4, 12)
		return 3;//0 3
	break;
	case 6221://(1,8) (4, 13)
		return 3;//0 3
	break;
	case 6222://(1,8) (4, 14)
		return 3;//0 3
	break;
	case 6223://(1,8) (4, 15)
		return 3;//0 3
	break;
	case 6224://(1,8) (5, 0)
		return 0;//0 0
	break;
	case 6225://(1,8) (5, 1)
		return 3;//0 3
	break;
	case 6226://(1,8) (5, 2)
		return 0;//0 0
	break;
	case 6227://(1,8) (5, 3)
		return 0;//0 0
	break;
	case 6228://(1,8) (5, 4)
		return 3;//0 3
	break;
	case 6229://(1,8) (5, 5)
		return 3;//0 3
	break;
	case 6230://(1,8) (5, 6)
		return 3;//0 3
	break;
	case 6231://(1,8) (5, 7)
		return 0;//0 0
	break;
	case 6232://(1,8) (5, 8)
		return 3;//0 3
	break;
	case 6233://(1,8) (5, 9)
		return 3;//0 3
	break;
	case 6234://(1,8) (5, 10)
		return 3;//0 3
	break;
	case 6235://(1,8) (5, 11)
		return 3;//0 3
	break;
	case 6236://(1,8) (5, 12)
		return 3;//0 3
	break;
	case 6237://(1,8) (5, 13)
		return 3;//0 3
	break;
	case 6238://(1,8) (5, 14)
		return 3;//0 3
	break;
	case 6239://(1,8) (5, 15)
		return 3;//0 3
	break;
	case 6240://(1,8) (6, 0)
		return 64;//4 0
	break;
	case 6241://(1,8) (6, 1)
		return 67;//4 3
	break;
	case 6242://(1,8) (6, 2)
		return 64;//4 0
	break;
	case 6243://(1,8) (6, 3)
		return 64;//4 0
	break;
	case 6244://(1,8) (6, 4)
		return 67;//4 3
	break;
	case 6245://(1,8) (6, 5)
		return 67;//4 3
	break;
	case 6246://(1,8) (6, 6)
		return 67;//4 3
	break;
	case 6247://(1,8) (6, 7)
		return 64;//4 0
	break;
	case 6248://(1,8) (6, 8)
		return 67;//4 3
	break;
	case 6249://(1,8) (6, 9)
		return 67;//4 3
	break;
	case 6250://(1,8) (6, 10)
		return 67;//4 3
	break;
	case 6251://(1,8) (6, 11)
		return 67;//4 3
	break;
	case 6252://(1,8) (6, 12)
		return 67;//4 3
	break;
	case 6253://(1,8) (6, 13)
		return 67;//4 3
	break;
	case 6254://(1,8) (6, 14)
		return 67;//4 3
	break;
	case 6255://(1,8) (6, 15)
		return 67;//4 3
	break;
	case 6256://(1,8) (7, 0)
		return 0;//0 0
	break;
	case 6257://(1,8) (7, 1)
		return 3;//0 3
	break;
	case 6258://(1,8) (7, 2)
		return 0;//0 0
	break;
	case 6259://(1,8) (7, 3)
		return 0;//0 0
	break;
	case 6260://(1,8) (7, 4)
		return 3;//0 3
	break;
	case 6261://(1,8) (7, 5)
		return 3;//0 3
	break;
	case 6262://(1,8) (7, 6)
		return 3;//0 3
	break;
	case 6263://(1,8) (7, 7)
		return 0;//0 0
	break;
	case 6264://(1,8) (7, 8)
		return 3;//0 3
	break;
	case 6265://(1,8) (7, 9)
		return 3;//0 3
	break;
	case 6266://(1,8) (7, 10)
		return 3;//0 3
	break;
	case 6267://(1,8) (7, 11)
		return 3;//0 3
	break;
	case 6268://(1,8) (7, 12)
		return 3;//0 3
	break;
	case 6269://(1,8) (7, 13)
		return 3;//0 3
	break;
	case 6270://(1,8) (7, 14)
		return 3;//0 3
	break;
	case 6271://(1,8) (7, 15)
		return 3;//0 3
	break;
	case 6272://(1,8) (8, 0)
		return 64;//4 0
	break;
	case 6273://(1,8) (8, 1)
		return 67;//4 3
	break;
	case 6274://(1,8) (8, 2)
		return 64;//4 0
	break;
	case 6275://(1,8) (8, 3)
		return 64;//4 0
	break;
	case 6276://(1,8) (8, 4)
		return 67;//4 3
	break;
	case 6277://(1,8) (8, 5)
		return 67;//4 3
	break;
	case 6278://(1,8) (8, 6)
		return 67;//4 3
	break;
	case 6279://(1,8) (8, 7)
		return 64;//4 0
	break;
	case 6280://(1,8) (8, 8)
		return 67;//4 3
	break;
	case 6281://(1,8) (8, 9)
		return 67;//4 3
	break;
	case 6282://(1,8) (8, 10)
		return 67;//4 3
	break;
	case 6283://(1,8) (8, 11)
		return 67;//4 3
	break;
	case 6284://(1,8) (8, 12)
		return 67;//4 3
	break;
	case 6285://(1,8) (8, 13)
		return 67;//4 3
	break;
	case 6286://(1,8) (8, 14)
		return 67;//4 3
	break;
	case 6287://(1,8) (8, 15)
		return 67;//4 3
	break;
	case 6288://(1,8) (9, 0)
		return 64;//4 0
	break;
	case 6289://(1,8) (9, 1)
		return 67;//4 3
	break;
	case 6290://(1,8) (9, 2)
		return 64;//4 0
	break;
	case 6291://(1,8) (9, 3)
		return 64;//4 0
	break;
	case 6292://(1,8) (9, 4)
		return 67;//4 3
	break;
	case 6293://(1,8) (9, 5)
		return 67;//4 3
	break;
	case 6294://(1,8) (9, 6)
		return 67;//4 3
	break;
	case 6295://(1,8) (9, 7)
		return 64;//4 0
	break;
	case 6296://(1,8) (9, 8)
		return 67;//4 3
	break;
	case 6297://(1,8) (9, 9)
		return 67;//4 3
	break;
	case 6298://(1,8) (9, 10)
		return 67;//4 3
	break;
	case 6299://(1,8) (9, 11)
		return 67;//4 3
	break;
	case 6300://(1,8) (9, 12)
		return 67;//4 3
	break;
	case 6301://(1,8) (9, 13)
		return 67;//4 3
	break;
	case 6302://(1,8) (9, 14)
		return 67;//4 3
	break;
	case 6303://(1,8) (9, 15)
		return 67;//4 3
	break;
	case 6304://(1,8) (10, 0)
		return 0;//0 0
	break;
	case 6305://(1,8) (10, 1)
		return 3;//0 3
	break;
	case 6306://(1,8) (10, 2)
		return 0;//0 0
	break;
	case 6307://(1,8) (10, 3)
		return 0;//0 0
	break;
	case 6308://(1,8) (10, 4)
		return 3;//0 3
	break;
	case 6309://(1,8) (10, 5)
		return 3;//0 3
	break;
	case 6310://(1,8) (10, 6)
		return 3;//0 3
	break;
	case 6311://(1,8) (10, 7)
		return 0;//0 0
	break;
	case 6312://(1,8) (10, 8)
		return 3;//0 3
	break;
	case 6313://(1,8) (10, 9)
		return 3;//0 3
	break;
	case 6314://(1,8) (10, 10)
		return 3;//0 3
	break;
	case 6315://(1,8) (10, 11)
		return 3;//0 3
	break;
	case 6316://(1,8) (10, 12)
		return 3;//0 3
	break;
	case 6317://(1,8) (10, 13)
		return 3;//0 3
	break;
	case 6318://(1,8) (10, 14)
		return 3;//0 3
	break;
	case 6319://(1,8) (10, 15)
		return 3;//0 3
	break;
	case 6320://(1,8) (11, 0)
		return 64;//4 0
	break;
	case 6321://(1,8) (11, 1)
		return 67;//4 3
	break;
	case 6322://(1,8) (11, 2)
		return 64;//4 0
	break;
	case 6323://(1,8) (11, 3)
		return 64;//4 0
	break;
	case 6324://(1,8) (11, 4)
		return 67;//4 3
	break;
	case 6325://(1,8) (11, 5)
		return 67;//4 3
	break;
	case 6326://(1,8) (11, 6)
		return 67;//4 3
	break;
	case 6327://(1,8) (11, 7)
		return 64;//4 0
	break;
	case 6328://(1,8) (11, 8)
		return 67;//4 3
	break;
	case 6329://(1,8) (11, 9)
		return 67;//4 3
	break;
	case 6330://(1,8) (11, 10)
		return 67;//4 3
	break;
	case 6331://(1,8) (11, 11)
		return 67;//4 3
	break;
	case 6332://(1,8) (11, 12)
		return 67;//4 3
	break;
	case 6333://(1,8) (11, 13)
		return 67;//4 3
	break;
	case 6334://(1,8) (11, 14)
		return 67;//4 3
	break;
	case 6335://(1,8) (11, 15)
		return 67;//4 3
	break;
	case 6336://(1,8) (12, 0)
		return 0;//0 0
	break;
	case 6337://(1,8) (12, 1)
		return 3;//0 3
	break;
	case 6338://(1,8) (12, 2)
		return 0;//0 0
	break;
	case 6339://(1,8) (12, 3)
		return 0;//0 0
	break;
	case 6340://(1,8) (12, 4)
		return 3;//0 3
	break;
	case 6341://(1,8) (12, 5)
		return 3;//0 3
	break;
	case 6342://(1,8) (12, 6)
		return 3;//0 3
	break;
	case 6343://(1,8) (12, 7)
		return 0;//0 0
	break;
	case 6344://(1,8) (12, 8)
		return 3;//0 3
	break;
	case 6345://(1,8) (12, 9)
		return 3;//0 3
	break;
	case 6346://(1,8) (12, 10)
		return 3;//0 3
	break;
	case 6347://(1,8) (12, 11)
		return 3;//0 3
	break;
	case 6348://(1,8) (12, 12)
		return 3;//0 3
	break;
	case 6349://(1,8) (12, 13)
		return 3;//0 3
	break;
	case 6350://(1,8) (12, 14)
		return 3;//0 3
	break;
	case 6351://(1,8) (12, 15)
		return 3;//0 3
	break;
	case 6352://(1,8) (13, 0)
		return 64;//4 0
	break;
	case 6353://(1,8) (13, 1)
		return 67;//4 3
	break;
	case 6354://(1,8) (13, 2)
		return 64;//4 0
	break;
	case 6355://(1,8) (13, 3)
		return 64;//4 0
	break;
	case 6356://(1,8) (13, 4)
		return 67;//4 3
	break;
	case 6357://(1,8) (13, 5)
		return 67;//4 3
	break;
	case 6358://(1,8) (13, 6)
		return 67;//4 3
	break;
	case 6359://(1,8) (13, 7)
		return 64;//4 0
	break;
	case 6360://(1,8) (13, 8)
		return 67;//4 3
	break;
	case 6361://(1,8) (13, 9)
		return 67;//4 3
	break;
	case 6362://(1,8) (13, 10)
		return 67;//4 3
	break;
	case 6363://(1,8) (13, 11)
		return 67;//4 3
	break;
	case 6364://(1,8) (13, 12)
		return 67;//4 3
	break;
	case 6365://(1,8) (13, 13)
		return 67;//4 3
	break;
	case 6366://(1,8) (13, 14)
		return 67;//4 3
	break;
	case 6367://(1,8) (13, 15)
		return 67;//4 3
	break;
	case 6368://(1,8) (14, 0)
		return 64;//4 0
	break;
	case 6369://(1,8) (14, 1)
		return 67;//4 3
	break;
	case 6370://(1,8) (14, 2)
		return 64;//4 0
	break;
	case 6371://(1,8) (14, 3)
		return 64;//4 0
	break;
	case 6372://(1,8) (14, 4)
		return 67;//4 3
	break;
	case 6373://(1,8) (14, 5)
		return 67;//4 3
	break;
	case 6374://(1,8) (14, 6)
		return 67;//4 3
	break;
	case 6375://(1,8) (14, 7)
		return 64;//4 0
	break;
	case 6376://(1,8) (14, 8)
		return 67;//4 3
	break;
	case 6377://(1,8) (14, 9)
		return 67;//4 3
	break;
	case 6378://(1,8) (14, 10)
		return 67;//4 3
	break;
	case 6379://(1,8) (14, 11)
		return 67;//4 3
	break;
	case 6380://(1,8) (14, 12)
		return 67;//4 3
	break;
	case 6381://(1,8) (14, 13)
		return 67;//4 3
	break;
	case 6382://(1,8) (14, 14)
		return 67;//4 3
	break;
	case 6383://(1,8) (14, 15)
		return 67;//4 3
	break;
	case 6384://(1,8) (15, 0)
		return 64;//4 0
	break;
	case 6385://(1,8) (15, 1)
		return 67;//4 3
	break;
	case 6386://(1,8) (15, 2)
		return 64;//4 0
	break;
	case 6387://(1,8) (15, 3)
		return 64;//4 0
	break;
	case 6388://(1,8) (15, 4)
		return 67;//4 3
	break;
	case 6389://(1,8) (15, 5)
		return 67;//4 3
	break;
	case 6390://(1,8) (15, 6)
		return 67;//4 3
	break;
	case 6391://(1,8) (15, 7)
		return 64;//4 0
	break;
	case 6392://(1,8) (15, 8)
		return 67;//4 3
	break;
	case 6393://(1,8) (15, 9)
		return 67;//4 3
	break;
	case 6394://(1,8) (15, 10)
		return 67;//4 3
	break;
	case 6395://(1,8) (15, 11)
		return 67;//4 3
	break;
	case 6396://(1,8) (15, 12)
		return 67;//4 3
	break;
	case 6397://(1,8) (15, 13)
		return 67;//4 3
	break;
	case 6398://(1,8) (15, 14)
		return 67;//4 3
	break;
	case 6399://(1,8) (15, 15)
		return 67;//4 3
	break;
	case 6400://(1,9) (0, 0)
		return 0;//0 0
	break;
	case 6401://(1,9) (0, 1)
		return 3;//0 3
	break;
	case 6402://(1,9) (0, 2)
		return 3;//0 3
	break;
	case 6403://(1,9) (0, 3)
		return 0;//0 0
	break;
	case 6404://(1,9) (0, 4)
		return 0;//0 0
	break;
	case 6405://(1,9) (0, 5)
		return 3;//0 3
	break;
	case 6406://(1,9) (0, 6)
		return 3;//0 3
	break;
	case 6407://(1,9) (0, 7)
		return 3;//0 3
	break;
	case 6408://(1,9) (0, 8)
		return 3;//0 3
	break;
	case 6409://(1,9) (0, 9)
		return 3;//0 3
	break;
	case 6410://(1,9) (0, 10)
		return 0;//0 0
	break;
	case 6411://(1,9) (0, 11)
		return 3;//0 3
	break;
	case 6412://(1,9) (0, 12)
		return 3;//0 3
	break;
	case 6413://(1,9) (0, 13)
		return 3;//0 3
	break;
	case 6414://(1,9) (0, 14)
		return 3;//0 3
	break;
	case 6415://(1,9) (0, 15)
		return 3;//0 3
	break;
	case 6416://(1,9) (1, 0)
		return 64;//4 0
	break;
	case 6417://(1,9) (1, 1)
		return 67;//4 3
	break;
	case 6418://(1,9) (1, 2)
		return 67;//4 3
	break;
	case 6419://(1,9) (1, 3)
		return 64;//4 0
	break;
	case 6420://(1,9) (1, 4)
		return 64;//4 0
	break;
	case 6421://(1,9) (1, 5)
		return 67;//4 3
	break;
	case 6422://(1,9) (1, 6)
		return 67;//4 3
	break;
	case 6423://(1,9) (1, 7)
		return 67;//4 3
	break;
	case 6424://(1,9) (1, 8)
		return 67;//4 3
	break;
	case 6425://(1,9) (1, 9)
		return 67;//4 3
	break;
	case 6426://(1,9) (1, 10)
		return 64;//4 0
	break;
	case 6427://(1,9) (1, 11)
		return 67;//4 3
	break;
	case 6428://(1,9) (1, 12)
		return 67;//4 3
	break;
	case 6429://(1,9) (1, 13)
		return 67;//4 3
	break;
	case 6430://(1,9) (1, 14)
		return 67;//4 3
	break;
	case 6431://(1,9) (1, 15)
		return 67;//4 3
	break;
	case 6432://(1,9) (2, 0)
		return 0;//0 0
	break;
	case 6433://(1,9) (2, 1)
		return 3;//0 3
	break;
	case 6434://(1,9) (2, 2)
		return 3;//0 3
	break;
	case 6435://(1,9) (2, 3)
		return 0;//0 0
	break;
	case 6436://(1,9) (2, 4)
		return 0;//0 0
	break;
	case 6437://(1,9) (2, 5)
		return 3;//0 3
	break;
	case 6438://(1,9) (2, 6)
		return 3;//0 3
	break;
	case 6439://(1,9) (2, 7)
		return 3;//0 3
	break;
	case 6440://(1,9) (2, 8)
		return 3;//0 3
	break;
	case 6441://(1,9) (2, 9)
		return 3;//0 3
	break;
	case 6442://(1,9) (2, 10)
		return 0;//0 0
	break;
	case 6443://(1,9) (2, 11)
		return 3;//0 3
	break;
	case 6444://(1,9) (2, 12)
		return 3;//0 3
	break;
	case 6445://(1,9) (2, 13)
		return 3;//0 3
	break;
	case 6446://(1,9) (2, 14)
		return 3;//0 3
	break;
	case 6447://(1,9) (2, 15)
		return 3;//0 3
	break;
	case 6448://(1,9) (3, 0)
		return 0;//0 0
	break;
	case 6449://(1,9) (3, 1)
		return 3;//0 3
	break;
	case 6450://(1,9) (3, 2)
		return 3;//0 3
	break;
	case 6451://(1,9) (3, 3)
		return 0;//0 0
	break;
	case 6452://(1,9) (3, 4)
		return 0;//0 0
	break;
	case 6453://(1,9) (3, 5)
		return 3;//0 3
	break;
	case 6454://(1,9) (3, 6)
		return 3;//0 3
	break;
	case 6455://(1,9) (3, 7)
		return 3;//0 3
	break;
	case 6456://(1,9) (3, 8)
		return 3;//0 3
	break;
	case 6457://(1,9) (3, 9)
		return 3;//0 3
	break;
	case 6458://(1,9) (3, 10)
		return 0;//0 0
	break;
	case 6459://(1,9) (3, 11)
		return 3;//0 3
	break;
	case 6460://(1,9) (3, 12)
		return 3;//0 3
	break;
	case 6461://(1,9) (3, 13)
		return 3;//0 3
	break;
	case 6462://(1,9) (3, 14)
		return 3;//0 3
	break;
	case 6463://(1,9) (3, 15)
		return 3;//0 3
	break;
	case 6464://(1,9) (4, 0)
		return 0;//0 0
	break;
	case 6465://(1,9) (4, 1)
		return 3;//0 3
	break;
	case 6466://(1,9) (4, 2)
		return 3;//0 3
	break;
	case 6467://(1,9) (4, 3)
		return 0;//0 0
	break;
	case 6468://(1,9) (4, 4)
		return 0;//0 0
	break;
	case 6469://(1,9) (4, 5)
		return 3;//0 3
	break;
	case 6470://(1,9) (4, 6)
		return 3;//0 3
	break;
	case 6471://(1,9) (4, 7)
		return 3;//0 3
	break;
	case 6472://(1,9) (4, 8)
		return 3;//0 3
	break;
	case 6473://(1,9) (4, 9)
		return 3;//0 3
	break;
	case 6474://(1,9) (4, 10)
		return 0;//0 0
	break;
	case 6475://(1,9) (4, 11)
		return 3;//0 3
	break;
	case 6476://(1,9) (4, 12)
		return 3;//0 3
	break;
	case 6477://(1,9) (4, 13)
		return 3;//0 3
	break;
	case 6478://(1,9) (4, 14)
		return 3;//0 3
	break;
	case 6479://(1,9) (4, 15)
		return 3;//0 3
	break;
	case 6480://(1,9) (5, 0)
		return 0;//0 0
	break;
	case 6481://(1,9) (5, 1)
		return 3;//0 3
	break;
	case 6482://(1,9) (5, 2)
		return 3;//0 3
	break;
	case 6483://(1,9) (5, 3)
		return 0;//0 0
	break;
	case 6484://(1,9) (5, 4)
		return 0;//0 0
	break;
	case 6485://(1,9) (5, 5)
		return 3;//0 3
	break;
	case 6486://(1,9) (5, 6)
		return 3;//0 3
	break;
	case 6487://(1,9) (5, 7)
		return 3;//0 3
	break;
	case 6488://(1,9) (5, 8)
		return 3;//0 3
	break;
	case 6489://(1,9) (5, 9)
		return 3;//0 3
	break;
	case 6490://(1,9) (5, 10)
		return 0;//0 0
	break;
	case 6491://(1,9) (5, 11)
		return 3;//0 3
	break;
	case 6492://(1,9) (5, 12)
		return 3;//0 3
	break;
	case 6493://(1,9) (5, 13)
		return 3;//0 3
	break;
	case 6494://(1,9) (5, 14)
		return 3;//0 3
	break;
	case 6495://(1,9) (5, 15)
		return 3;//0 3
	break;
	case 6496://(1,9) (6, 0)
		return 64;//4 0
	break;
	case 6497://(1,9) (6, 1)
		return 67;//4 3
	break;
	case 6498://(1,9) (6, 2)
		return 67;//4 3
	break;
	case 6499://(1,9) (6, 3)
		return 64;//4 0
	break;
	case 6500://(1,9) (6, 4)
		return 64;//4 0
	break;
	case 6501://(1,9) (6, 5)
		return 67;//4 3
	break;
	case 6502://(1,9) (6, 6)
		return 67;//4 3
	break;
	case 6503://(1,9) (6, 7)
		return 67;//4 3
	break;
	case 6504://(1,9) (6, 8)
		return 67;//4 3
	break;
	case 6505://(1,9) (6, 9)
		return 67;//4 3
	break;
	case 6506://(1,9) (6, 10)
		return 64;//4 0
	break;
	case 6507://(1,9) (6, 11)
		return 67;//4 3
	break;
	case 6508://(1,9) (6, 12)
		return 67;//4 3
	break;
	case 6509://(1,9) (6, 13)
		return 67;//4 3
	break;
	case 6510://(1,9) (6, 14)
		return 67;//4 3
	break;
	case 6511://(1,9) (6, 15)
		return 67;//4 3
	break;
	case 6512://(1,9) (7, 0)
		return 0;//0 0
	break;
	case 6513://(1,9) (7, 1)
		return 3;//0 3
	break;
	case 6514://(1,9) (7, 2)
		return 3;//0 3
	break;
	case 6515://(1,9) (7, 3)
		return 0;//0 0
	break;
	case 6516://(1,9) (7, 4)
		return 0;//0 0
	break;
	case 6517://(1,9) (7, 5)
		return 3;//0 3
	break;
	case 6518://(1,9) (7, 6)
		return 3;//0 3
	break;
	case 6519://(1,9) (7, 7)
		return 3;//0 3
	break;
	case 6520://(1,9) (7, 8)
		return 3;//0 3
	break;
	case 6521://(1,9) (7, 9)
		return 3;//0 3
	break;
	case 6522://(1,9) (7, 10)
		return 0;//0 0
	break;
	case 6523://(1,9) (7, 11)
		return 3;//0 3
	break;
	case 6524://(1,9) (7, 12)
		return 3;//0 3
	break;
	case 6525://(1,9) (7, 13)
		return 3;//0 3
	break;
	case 6526://(1,9) (7, 14)
		return 3;//0 3
	break;
	case 6527://(1,9) (7, 15)
		return 3;//0 3
	break;
	case 6528://(1,9) (8, 0)
		return 64;//4 0
	break;
	case 6529://(1,9) (8, 1)
		return 67;//4 3
	break;
	case 6530://(1,9) (8, 2)
		return 67;//4 3
	break;
	case 6531://(1,9) (8, 3)
		return 64;//4 0
	break;
	case 6532://(1,9) (8, 4)
		return 64;//4 0
	break;
	case 6533://(1,9) (8, 5)
		return 67;//4 3
	break;
	case 6534://(1,9) (8, 6)
		return 67;//4 3
	break;
	case 6535://(1,9) (8, 7)
		return 67;//4 3
	break;
	case 6536://(1,9) (8, 8)
		return 67;//4 3
	break;
	case 6537://(1,9) (8, 9)
		return 67;//4 3
	break;
	case 6538://(1,9) (8, 10)
		return 64;//4 0
	break;
	case 6539://(1,9) (8, 11)
		return 67;//4 3
	break;
	case 6540://(1,9) (8, 12)
		return 67;//4 3
	break;
	case 6541://(1,9) (8, 13)
		return 67;//4 3
	break;
	case 6542://(1,9) (8, 14)
		return 67;//4 3
	break;
	case 6543://(1,9) (8, 15)
		return 67;//4 3
	break;
	case 6544://(1,9) (9, 0)
		return 64;//4 0
	break;
	case 6545://(1,9) (9, 1)
		return 67;//4 3
	break;
	case 6546://(1,9) (9, 2)
		return 67;//4 3
	break;
	case 6547://(1,9) (9, 3)
		return 64;//4 0
	break;
	case 6548://(1,9) (9, 4)
		return 64;//4 0
	break;
	case 6549://(1,9) (9, 5)
		return 67;//4 3
	break;
	case 6550://(1,9) (9, 6)
		return 67;//4 3
	break;
	case 6551://(1,9) (9, 7)
		return 67;//4 3
	break;
	case 6552://(1,9) (9, 8)
		return 67;//4 3
	break;
	case 6553://(1,9) (9, 9)
		return 67;//4 3
	break;
	case 6554://(1,9) (9, 10)
		return 64;//4 0
	break;
	case 6555://(1,9) (9, 11)
		return 67;//4 3
	break;
	case 6556://(1,9) (9, 12)
		return 67;//4 3
	break;
	case 6557://(1,9) (9, 13)
		return 67;//4 3
	break;
	case 6558://(1,9) (9, 14)
		return 67;//4 3
	break;
	case 6559://(1,9) (9, 15)
		return 67;//4 3
	break;
	case 6560://(1,9) (10, 0)
		return 0;//0 0
	break;
	case 6561://(1,9) (10, 1)
		return 3;//0 3
	break;
	case 6562://(1,9) (10, 2)
		return 3;//0 3
	break;
	case 6563://(1,9) (10, 3)
		return 0;//0 0
	break;
	case 6564://(1,9) (10, 4)
		return 0;//0 0
	break;
	case 6565://(1,9) (10, 5)
		return 3;//0 3
	break;
	case 6566://(1,9) (10, 6)
		return 3;//0 3
	break;
	case 6567://(1,9) (10, 7)
		return 3;//0 3
	break;
	case 6568://(1,9) (10, 8)
		return 3;//0 3
	break;
	case 6569://(1,9) (10, 9)
		return 3;//0 3
	break;
	case 6570://(1,9) (10, 10)
		return 0;//0 0
	break;
	case 6571://(1,9) (10, 11)
		return 3;//0 3
	break;
	case 6572://(1,9) (10, 12)
		return 3;//0 3
	break;
	case 6573://(1,9) (10, 13)
		return 3;//0 3
	break;
	case 6574://(1,9) (10, 14)
		return 3;//0 3
	break;
	case 6575://(1,9) (10, 15)
		return 3;//0 3
	break;
	case 6576://(1,9) (11, 0)
		return 64;//4 0
	break;
	case 6577://(1,9) (11, 1)
		return 67;//4 3
	break;
	case 6578://(1,9) (11, 2)
		return 67;//4 3
	break;
	case 6579://(1,9) (11, 3)
		return 64;//4 0
	break;
	case 6580://(1,9) (11, 4)
		return 64;//4 0
	break;
	case 6581://(1,9) (11, 5)
		return 67;//4 3
	break;
	case 6582://(1,9) (11, 6)
		return 67;//4 3
	break;
	case 6583://(1,9) (11, 7)
		return 67;//4 3
	break;
	case 6584://(1,9) (11, 8)
		return 67;//4 3
	break;
	case 6585://(1,9) (11, 9)
		return 67;//4 3
	break;
	case 6586://(1,9) (11, 10)
		return 64;//4 0
	break;
	case 6587://(1,9) (11, 11)
		return 67;//4 3
	break;
	case 6588://(1,9) (11, 12)
		return 67;//4 3
	break;
	case 6589://(1,9) (11, 13)
		return 67;//4 3
	break;
	case 6590://(1,9) (11, 14)
		return 67;//4 3
	break;
	case 6591://(1,9) (11, 15)
		return 67;//4 3
	break;
	case 6592://(1,9) (12, 0)
		return 0;//0 0
	break;
	case 6593://(1,9) (12, 1)
		return 3;//0 3
	break;
	case 6594://(1,9) (12, 2)
		return 3;//0 3
	break;
	case 6595://(1,9) (12, 3)
		return 0;//0 0
	break;
	case 6596://(1,9) (12, 4)
		return 0;//0 0
	break;
	case 6597://(1,9) (12, 5)
		return 3;//0 3
	break;
	case 6598://(1,9) (12, 6)
		return 3;//0 3
	break;
	case 6599://(1,9) (12, 7)
		return 3;//0 3
	break;
	case 6600://(1,9) (12, 8)
		return 3;//0 3
	break;
	case 6601://(1,9) (12, 9)
		return 3;//0 3
	break;
	case 6602://(1,9) (12, 10)
		return 0;//0 0
	break;
	case 6603://(1,9) (12, 11)
		return 3;//0 3
	break;
	case 6604://(1,9) (12, 12)
		return 3;//0 3
	break;
	case 6605://(1,9) (12, 13)
		return 3;//0 3
	break;
	case 6606://(1,9) (12, 14)
		return 3;//0 3
	break;
	case 6607://(1,9) (12, 15)
		return 3;//0 3
	break;
	case 6608://(1,9) (13, 0)
		return 64;//4 0
	break;
	case 6609://(1,9) (13, 1)
		return 67;//4 3
	break;
	case 6610://(1,9) (13, 2)
		return 67;//4 3
	break;
	case 6611://(1,9) (13, 3)
		return 64;//4 0
	break;
	case 6612://(1,9) (13, 4)
		return 64;//4 0
	break;
	case 6613://(1,9) (13, 5)
		return 67;//4 3
	break;
	case 6614://(1,9) (13, 6)
		return 67;//4 3
	break;
	case 6615://(1,9) (13, 7)
		return 67;//4 3
	break;
	case 6616://(1,9) (13, 8)
		return 67;//4 3
	break;
	case 6617://(1,9) (13, 9)
		return 67;//4 3
	break;
	case 6618://(1,9) (13, 10)
		return 64;//4 0
	break;
	case 6619://(1,9) (13, 11)
		return 67;//4 3
	break;
	case 6620://(1,9) (13, 12)
		return 67;//4 3
	break;
	case 6621://(1,9) (13, 13)
		return 67;//4 3
	break;
	case 6622://(1,9) (13, 14)
		return 67;//4 3
	break;
	case 6623://(1,9) (13, 15)
		return 67;//4 3
	break;
	case 6624://(1,9) (14, 0)
		return 64;//4 0
	break;
	case 6625://(1,9) (14, 1)
		return 67;//4 3
	break;
	case 6626://(1,9) (14, 2)
		return 67;//4 3
	break;
	case 6627://(1,9) (14, 3)
		return 64;//4 0
	break;
	case 6628://(1,9) (14, 4)
		return 64;//4 0
	break;
	case 6629://(1,9) (14, 5)
		return 67;//4 3
	break;
	case 6630://(1,9) (14, 6)
		return 67;//4 3
	break;
	case 6631://(1,9) (14, 7)
		return 67;//4 3
	break;
	case 6632://(1,9) (14, 8)
		return 67;//4 3
	break;
	case 6633://(1,9) (14, 9)
		return 67;//4 3
	break;
	case 6634://(1,9) (14, 10)
		return 64;//4 0
	break;
	case 6635://(1,9) (14, 11)
		return 67;//4 3
	break;
	case 6636://(1,9) (14, 12)
		return 67;//4 3
	break;
	case 6637://(1,9) (14, 13)
		return 67;//4 3
	break;
	case 6638://(1,9) (14, 14)
		return 67;//4 3
	break;
	case 6639://(1,9) (14, 15)
		return 67;//4 3
	break;
	case 6640://(1,9) (15, 0)
		return 64;//4 0
	break;
	case 6641://(1,9) (15, 1)
		return 67;//4 3
	break;
	case 6642://(1,9) (15, 2)
		return 67;//4 3
	break;
	case 6643://(1,9) (15, 3)
		return 64;//4 0
	break;
	case 6644://(1,9) (15, 4)
		return 64;//4 0
	break;
	case 6645://(1,9) (15, 5)
		return 67;//4 3
	break;
	case 6646://(1,9) (15, 6)
		return 67;//4 3
	break;
	case 6647://(1,9) (15, 7)
		return 67;//4 3
	break;
	case 6648://(1,9) (15, 8)
		return 67;//4 3
	break;
	case 6649://(1,9) (15, 9)
		return 67;//4 3
	break;
	case 6650://(1,9) (15, 10)
		return 64;//4 0
	break;
	case 6651://(1,9) (15, 11)
		return 67;//4 3
	break;
	case 6652://(1,9) (15, 12)
		return 67;//4 3
	break;
	case 6653://(1,9) (15, 13)
		return 67;//4 3
	break;
	case 6654://(1,9) (15, 14)
		return 67;//4 3
	break;
	case 6655://(1,9) (15, 15)
		return 67;//4 3
	break;
	case 6656://(1,10) (0, 0)
		return 0;//0 0
	break;
	case 6657://(1,10) (0, 1)
		return 0;//0 0
	break;
	case 6658://(1,10) (0, 2)
		return 0;//0 0
	break;
	case 6659://(1,10) (0, 3)
		return 3;//0 3
	break;
	case 6660://(1,10) (0, 4)
		return 3;//0 3
	break;
	case 6661://(1,10) (0, 5)
		return 3;//0 3
	break;
	case 6662://(1,10) (0, 6)
		return 3;//0 3
	break;
	case 6663://(1,10) (0, 7)
		return 3;//0 3
	break;
	case 6664://(1,10) (0, 8)
		return 3;//0 3
	break;
	case 6665://(1,10) (0, 9)
		return 0;//0 0
	break;
	case 6666://(1,10) (0, 10)
		return 3;//0 3
	break;
	case 6667://(1,10) (0, 11)
		return 3;//0 3
	break;
	case 6668://(1,10) (0, 12)
		return 3;//0 3
	break;
	case 6669://(1,10) (0, 13)
		return 3;//0 3
	break;
	case 6670://(1,10) (0, 14)
		return 3;//0 3
	break;
	case 6671://(1,10) (0, 15)
		return 3;//0 3
	break;
	case 6672://(1,10) (1, 0)
		return 64;//4 0
	break;
	case 6673://(1,10) (1, 1)
		return 64;//4 0
	break;
	case 6674://(1,10) (1, 2)
		return 64;//4 0
	break;
	case 6675://(1,10) (1, 3)
		return 67;//4 3
	break;
	case 6676://(1,10) (1, 4)
		return 67;//4 3
	break;
	case 6677://(1,10) (1, 5)
		return 67;//4 3
	break;
	case 6678://(1,10) (1, 6)
		return 67;//4 3
	break;
	case 6679://(1,10) (1, 7)
		return 67;//4 3
	break;
	case 6680://(1,10) (1, 8)
		return 67;//4 3
	break;
	case 6681://(1,10) (1, 9)
		return 64;//4 0
	break;
	case 6682://(1,10) (1, 10)
		return 67;//4 3
	break;
	case 6683://(1,10) (1, 11)
		return 67;//4 3
	break;
	case 6684://(1,10) (1, 12)
		return 67;//4 3
	break;
	case 6685://(1,10) (1, 13)
		return 67;//4 3
	break;
	case 6686://(1,10) (1, 14)
		return 67;//4 3
	break;
	case 6687://(1,10) (1, 15)
		return 67;//4 3
	break;
	case 6688://(1,10) (2, 0)
		return 0;//0 0
	break;
	case 6689://(1,10) (2, 1)
		return 0;//0 0
	break;
	case 6690://(1,10) (2, 2)
		return 0;//0 0
	break;
	case 6691://(1,10) (2, 3)
		return 3;//0 3
	break;
	case 6692://(1,10) (2, 4)
		return 3;//0 3
	break;
	case 6693://(1,10) (2, 5)
		return 3;//0 3
	break;
	case 6694://(1,10) (2, 6)
		return 3;//0 3
	break;
	case 6695://(1,10) (2, 7)
		return 3;//0 3
	break;
	case 6696://(1,10) (2, 8)
		return 3;//0 3
	break;
	case 6697://(1,10) (2, 9)
		return 0;//0 0
	break;
	case 6698://(1,10) (2, 10)
		return 3;//0 3
	break;
	case 6699://(1,10) (2, 11)
		return 3;//0 3
	break;
	case 6700://(1,10) (2, 12)
		return 3;//0 3
	break;
	case 6701://(1,10) (2, 13)
		return 3;//0 3
	break;
	case 6702://(1,10) (2, 14)
		return 3;//0 3
	break;
	case 6703://(1,10) (2, 15)
		return 3;//0 3
	break;
	case 6704://(1,10) (3, 0)
		return 0;//0 0
	break;
	case 6705://(1,10) (3, 1)
		return 0;//0 0
	break;
	case 6706://(1,10) (3, 2)
		return 0;//0 0
	break;
	case 6707://(1,10) (3, 3)
		return 3;//0 3
	break;
	case 6708://(1,10) (3, 4)
		return 3;//0 3
	break;
	case 6709://(1,10) (3, 5)
		return 3;//0 3
	break;
	case 6710://(1,10) (3, 6)
		return 3;//0 3
	break;
	case 6711://(1,10) (3, 7)
		return 3;//0 3
	break;
	case 6712://(1,10) (3, 8)
		return 3;//0 3
	break;
	case 6713://(1,10) (3, 9)
		return 0;//0 0
	break;
	case 6714://(1,10) (3, 10)
		return 3;//0 3
	break;
	case 6715://(1,10) (3, 11)
		return 3;//0 3
	break;
	case 6716://(1,10) (3, 12)
		return 3;//0 3
	break;
	case 6717://(1,10) (3, 13)
		return 3;//0 3
	break;
	case 6718://(1,10) (3, 14)
		return 3;//0 3
	break;
	case 6719://(1,10) (3, 15)
		return 3;//0 3
	break;
	case 6720://(1,10) (4, 0)
		return 0;//0 0
	break;
	case 6721://(1,10) (4, 1)
		return 0;//0 0
	break;
	case 6722://(1,10) (4, 2)
		return 0;//0 0
	break;
	case 6723://(1,10) (4, 3)
		return 3;//0 3
	break;
	case 6724://(1,10) (4, 4)
		return 3;//0 3
	break;
	case 6725://(1,10) (4, 5)
		return 3;//0 3
	break;
	case 6726://(1,10) (4, 6)
		return 3;//0 3
	break;
	case 6727://(1,10) (4, 7)
		return 3;//0 3
	break;
	case 6728://(1,10) (4, 8)
		return 3;//0 3
	break;
	case 6729://(1,10) (4, 9)
		return 0;//0 0
	break;
	case 6730://(1,10) (4, 10)
		return 3;//0 3
	break;
	case 6731://(1,10) (4, 11)
		return 3;//0 3
	break;
	case 6732://(1,10) (4, 12)
		return 3;//0 3
	break;
	case 6733://(1,10) (4, 13)
		return 3;//0 3
	break;
	case 6734://(1,10) (4, 14)
		return 3;//0 3
	break;
	case 6735://(1,10) (4, 15)
		return 3;//0 3
	break;
	case 6736://(1,10) (5, 0)
		return 0;//0 0
	break;
	case 6737://(1,10) (5, 1)
		return 0;//0 0
	break;
	case 6738://(1,10) (5, 2)
		return 0;//0 0
	break;
	case 6739://(1,10) (5, 3)
		return 3;//0 3
	break;
	case 6740://(1,10) (5, 4)
		return 3;//0 3
	break;
	case 6741://(1,10) (5, 5)
		return 3;//0 3
	break;
	case 6742://(1,10) (5, 6)
		return 3;//0 3
	break;
	case 6743://(1,10) (5, 7)
		return 3;//0 3
	break;
	case 6744://(1,10) (5, 8)
		return 3;//0 3
	break;
	case 6745://(1,10) (5, 9)
		return 0;//0 0
	break;
	case 6746://(1,10) (5, 10)
		return 3;//0 3
	break;
	case 6747://(1,10) (5, 11)
		return 3;//0 3
	break;
	case 6748://(1,10) (5, 12)
		return 3;//0 3
	break;
	case 6749://(1,10) (5, 13)
		return 3;//0 3
	break;
	case 6750://(1,10) (5, 14)
		return 3;//0 3
	break;
	case 6751://(1,10) (5, 15)
		return 3;//0 3
	break;
	case 6752://(1,10) (6, 0)
		return 64;//4 0
	break;
	case 6753://(1,10) (6, 1)
		return 64;//4 0
	break;
	case 6754://(1,10) (6, 2)
		return 64;//4 0
	break;
	case 6755://(1,10) (6, 3)
		return 67;//4 3
	break;
	case 6756://(1,10) (6, 4)
		return 67;//4 3
	break;
	case 6757://(1,10) (6, 5)
		return 67;//4 3
	break;
	case 6758://(1,10) (6, 6)
		return 67;//4 3
	break;
	case 6759://(1,10) (6, 7)
		return 67;//4 3
	break;
	case 6760://(1,10) (6, 8)
		return 67;//4 3
	break;
	case 6761://(1,10) (6, 9)
		return 64;//4 0
	break;
	case 6762://(1,10) (6, 10)
		return 67;//4 3
	break;
	case 6763://(1,10) (6, 11)
		return 67;//4 3
	break;
	case 6764://(1,10) (6, 12)
		return 67;//4 3
	break;
	case 6765://(1,10) (6, 13)
		return 67;//4 3
	break;
	case 6766://(1,10) (6, 14)
		return 67;//4 3
	break;
	case 6767://(1,10) (6, 15)
		return 67;//4 3
	break;
	case 6768://(1,10) (7, 0)
		return 0;//0 0
	break;
	case 6769://(1,10) (7, 1)
		return 0;//0 0
	break;
	case 6770://(1,10) (7, 2)
		return 0;//0 0
	break;
	case 6771://(1,10) (7, 3)
		return 3;//0 3
	break;
	case 6772://(1,10) (7, 4)
		return 3;//0 3
	break;
	case 6773://(1,10) (7, 5)
		return 3;//0 3
	break;
	case 6774://(1,10) (7, 6)
		return 3;//0 3
	break;
	case 6775://(1,10) (7, 7)
		return 3;//0 3
	break;
	case 6776://(1,10) (7, 8)
		return 3;//0 3
	break;
	case 6777://(1,10) (7, 9)
		return 0;//0 0
	break;
	case 6778://(1,10) (7, 10)
		return 3;//0 3
	break;
	case 6779://(1,10) (7, 11)
		return 3;//0 3
	break;
	case 6780://(1,10) (7, 12)
		return 3;//0 3
	break;
	case 6781://(1,10) (7, 13)
		return 3;//0 3
	break;
	case 6782://(1,10) (7, 14)
		return 3;//0 3
	break;
	case 6783://(1,10) (7, 15)
		return 3;//0 3
	break;
	case 6784://(1,10) (8, 0)
		return 64;//4 0
	break;
	case 6785://(1,10) (8, 1)
		return 64;//4 0
	break;
	case 6786://(1,10) (8, 2)
		return 64;//4 0
	break;
	case 6787://(1,10) (8, 3)
		return 67;//4 3
	break;
	case 6788://(1,10) (8, 4)
		return 67;//4 3
	break;
	case 6789://(1,10) (8, 5)
		return 67;//4 3
	break;
	case 6790://(1,10) (8, 6)
		return 67;//4 3
	break;
	case 6791://(1,10) (8, 7)
		return 67;//4 3
	break;
	case 6792://(1,10) (8, 8)
		return 67;//4 3
	break;
	case 6793://(1,10) (8, 9)
		return 64;//4 0
	break;
	case 6794://(1,10) (8, 10)
		return 67;//4 3
	break;
	case 6795://(1,10) (8, 11)
		return 67;//4 3
	break;
	case 6796://(1,10) (8, 12)
		return 67;//4 3
	break;
	case 6797://(1,10) (8, 13)
		return 67;//4 3
	break;
	case 6798://(1,10) (8, 14)
		return 67;//4 3
	break;
	case 6799://(1,10) (8, 15)
		return 67;//4 3
	break;
	case 6800://(1,10) (9, 0)
		return 64;//4 0
	break;
	case 6801://(1,10) (9, 1)
		return 64;//4 0
	break;
	case 6802://(1,10) (9, 2)
		return 64;//4 0
	break;
	case 6803://(1,10) (9, 3)
		return 67;//4 3
	break;
	case 6804://(1,10) (9, 4)
		return 67;//4 3
	break;
	case 6805://(1,10) (9, 5)
		return 67;//4 3
	break;
	case 6806://(1,10) (9, 6)
		return 67;//4 3
	break;
	case 6807://(1,10) (9, 7)
		return 67;//4 3
	break;
	case 6808://(1,10) (9, 8)
		return 67;//4 3
	break;
	case 6809://(1,10) (9, 9)
		return 64;//4 0
	break;
	case 6810://(1,10) (9, 10)
		return 67;//4 3
	break;
	case 6811://(1,10) (9, 11)
		return 67;//4 3
	break;
	case 6812://(1,10) (9, 12)
		return 67;//4 3
	break;
	case 6813://(1,10) (9, 13)
		return 67;//4 3
	break;
	case 6814://(1,10) (9, 14)
		return 67;//4 3
	break;
	case 6815://(1,10) (9, 15)
		return 67;//4 3
	break;
	case 6816://(1,10) (10, 0)
		return 0;//0 0
	break;
	case 6817://(1,10) (10, 1)
		return 0;//0 0
	break;
	case 6818://(1,10) (10, 2)
		return 0;//0 0
	break;
	case 6819://(1,10) (10, 3)
		return 3;//0 3
	break;
	case 6820://(1,10) (10, 4)
		return 3;//0 3
	break;
	case 6821://(1,10) (10, 5)
		return 3;//0 3
	break;
	case 6822://(1,10) (10, 6)
		return 3;//0 3
	break;
	case 6823://(1,10) (10, 7)
		return 3;//0 3
	break;
	case 6824://(1,10) (10, 8)
		return 3;//0 3
	break;
	case 6825://(1,10) (10, 9)
		return 0;//0 0
	break;
	case 6826://(1,10) (10, 10)
		return 3;//0 3
	break;
	case 6827://(1,10) (10, 11)
		return 3;//0 3
	break;
	case 6828://(1,10) (10, 12)
		return 3;//0 3
	break;
	case 6829://(1,10) (10, 13)
		return 3;//0 3
	break;
	case 6830://(1,10) (10, 14)
		return 3;//0 3
	break;
	case 6831://(1,10) (10, 15)
		return 3;//0 3
	break;
	case 6832://(1,10) (11, 0)
		return 64;//4 0
	break;
	case 6833://(1,10) (11, 1)
		return 64;//4 0
	break;
	case 6834://(1,10) (11, 2)
		return 64;//4 0
	break;
	case 6835://(1,10) (11, 3)
		return 67;//4 3
	break;
	case 6836://(1,10) (11, 4)
		return 67;//4 3
	break;
	case 6837://(1,10) (11, 5)
		return 67;//4 3
	break;
	case 6838://(1,10) (11, 6)
		return 67;//4 3
	break;
	case 6839://(1,10) (11, 7)
		return 67;//4 3
	break;
	case 6840://(1,10) (11, 8)
		return 67;//4 3
	break;
	case 6841://(1,10) (11, 9)
		return 64;//4 0
	break;
	case 6842://(1,10) (11, 10)
		return 67;//4 3
	break;
	case 6843://(1,10) (11, 11)
		return 67;//4 3
	break;
	case 6844://(1,10) (11, 12)
		return 67;//4 3
	break;
	case 6845://(1,10) (11, 13)
		return 67;//4 3
	break;
	case 6846://(1,10) (11, 14)
		return 67;//4 3
	break;
	case 6847://(1,10) (11, 15)
		return 67;//4 3
	break;
	case 6848://(1,10) (12, 0)
		return 0;//0 0
	break;
	case 6849://(1,10) (12, 1)
		return 0;//0 0
	break;
	case 6850://(1,10) (12, 2)
		return 0;//0 0
	break;
	case 6851://(1,10) (12, 3)
		return 3;//0 3
	break;
	case 6852://(1,10) (12, 4)
		return 3;//0 3
	break;
	case 6853://(1,10) (12, 5)
		return 3;//0 3
	break;
	case 6854://(1,10) (12, 6)
		return 3;//0 3
	break;
	case 6855://(1,10) (12, 7)
		return 3;//0 3
	break;
	case 6856://(1,10) (12, 8)
		return 3;//0 3
	break;
	case 6857://(1,10) (12, 9)
		return 0;//0 0
	break;
	case 6858://(1,10) (12, 10)
		return 3;//0 3
	break;
	case 6859://(1,10) (12, 11)
		return 3;//0 3
	break;
	case 6860://(1,10) (12, 12)
		return 3;//0 3
	break;
	case 6861://(1,10) (12, 13)
		return 3;//0 3
	break;
	case 6862://(1,10) (12, 14)
		return 3;//0 3
	break;
	case 6863://(1,10) (12, 15)
		return 3;//0 3
	break;
	case 6864://(1,10) (13, 0)
		return 64;//4 0
	break;
	case 6865://(1,10) (13, 1)
		return 64;//4 0
	break;
	case 6866://(1,10) (13, 2)
		return 64;//4 0
	break;
	case 6867://(1,10) (13, 3)
		return 67;//4 3
	break;
	case 6868://(1,10) (13, 4)
		return 67;//4 3
	break;
	case 6869://(1,10) (13, 5)
		return 67;//4 3
	break;
	case 6870://(1,10) (13, 6)
		return 67;//4 3
	break;
	case 6871://(1,10) (13, 7)
		return 67;//4 3
	break;
	case 6872://(1,10) (13, 8)
		return 67;//4 3
	break;
	case 6873://(1,10) (13, 9)
		return 64;//4 0
	break;
	case 6874://(1,10) (13, 10)
		return 67;//4 3
	break;
	case 6875://(1,10) (13, 11)
		return 67;//4 3
	break;
	case 6876://(1,10) (13, 12)
		return 67;//4 3
	break;
	case 6877://(1,10) (13, 13)
		return 67;//4 3
	break;
	case 6878://(1,10) (13, 14)
		return 67;//4 3
	break;
	case 6879://(1,10) (13, 15)
		return 67;//4 3
	break;
	case 6880://(1,10) (14, 0)
		return 64;//4 0
	break;
	case 6881://(1,10) (14, 1)
		return 64;//4 0
	break;
	case 6882://(1,10) (14, 2)
		return 64;//4 0
	break;
	case 6883://(1,10) (14, 3)
		return 67;//4 3
	break;
	case 6884://(1,10) (14, 4)
		return 67;//4 3
	break;
	case 6885://(1,10) (14, 5)
		return 67;//4 3
	break;
	case 6886://(1,10) (14, 6)
		return 67;//4 3
	break;
	case 6887://(1,10) (14, 7)
		return 67;//4 3
	break;
	case 6888://(1,10) (14, 8)
		return 67;//4 3
	break;
	case 6889://(1,10) (14, 9)
		return 64;//4 0
	break;
	case 6890://(1,10) (14, 10)
		return 67;//4 3
	break;
	case 6891://(1,10) (14, 11)
		return 67;//4 3
	break;
	case 6892://(1,10) (14, 12)
		return 67;//4 3
	break;
	case 6893://(1,10) (14, 13)
		return 67;//4 3
	break;
	case 6894://(1,10) (14, 14)
		return 67;//4 3
	break;
	case 6895://(1,10) (14, 15)
		return 67;//4 3
	break;
	case 6896://(1,10) (15, 0)
		return 64;//4 0
	break;
	case 6897://(1,10) (15, 1)
		return 64;//4 0
	break;
	case 6898://(1,10) (15, 2)
		return 64;//4 0
	break;
	case 6899://(1,10) (15, 3)
		return 67;//4 3
	break;
	case 6900://(1,10) (15, 4)
		return 67;//4 3
	break;
	case 6901://(1,10) (15, 5)
		return 67;//4 3
	break;
	case 6902://(1,10) (15, 6)
		return 67;//4 3
	break;
	case 6903://(1,10) (15, 7)
		return 67;//4 3
	break;
	case 6904://(1,10) (15, 8)
		return 67;//4 3
	break;
	case 6905://(1,10) (15, 9)
		return 64;//4 0
	break;
	case 6906://(1,10) (15, 10)
		return 67;//4 3
	break;
	case 6907://(1,10) (15, 11)
		return 67;//4 3
	break;
	case 6908://(1,10) (15, 12)
		return 67;//4 3
	break;
	case 6909://(1,10) (15, 13)
		return 67;//4 3
	break;
	case 6910://(1,10) (15, 14)
		return 67;//4 3
	break;
	case 6911://(1,10) (15, 15)
		return 67;//4 3
	break;
	case 6912://(1,11) (0, 0)
		return 0;//0 0
	break;
	case 6913://(1,11) (0, 1)
		return 2;//0 2
	break;
	case 6914://(1,11) (0, 2)
		return 2;//0 2
	break;
	case 6915://(1,11) (0, 3)
		return 2;//0 2
	break;
	case 6916://(1,11) (0, 4)
		return 0;//0 0
	break;
	case 6917://(1,11) (0, 5)
		return 2;//0 2
	break;
	case 6918://(1,11) (0, 6)
		return 2;//0 2
	break;
	case 6919://(1,11) (0, 7)
		return 2;//0 2
	break;
	case 6920://(1,11) (0, 8)
		return 2;//0 2
	break;
	case 6921://(1,11) (0, 9)
		return 2;//0 2
	break;
	case 6922://(1,11) (0, 10)
		return 2;//0 2
	break;
	case 6923://(1,11) (0, 11)
		return 2;//0 2
	break;
	case 6924://(1,11) (0, 12)
		return 2;//0 2
	break;
	case 6925://(1,11) (0, 13)
		return 2;//0 2
	break;
	case 6926://(1,11) (0, 14)
		return 2;//0 2
	break;
	case 6927://(1,11) (0, 15)
		return 2;//0 2
	break;
	case 6928://(1,11) (1, 0)
		return 64;//4 0
	break;
	case 6929://(1,11) (1, 1)
		return 66;//4 2
	break;
	case 6930://(1,11) (1, 2)
		return 66;//4 2
	break;
	case 6931://(1,11) (1, 3)
		return 66;//4 2
	break;
	case 6932://(1,11) (1, 4)
		return 64;//4 0
	break;
	case 6933://(1,11) (1, 5)
		return 66;//4 2
	break;
	case 6934://(1,11) (1, 6)
		return 66;//4 2
	break;
	case 6935://(1,11) (1, 7)
		return 66;//4 2
	break;
	case 6936://(1,11) (1, 8)
		return 66;//4 2
	break;
	case 6937://(1,11) (1, 9)
		return 66;//4 2
	break;
	case 6938://(1,11) (1, 10)
		return 66;//4 2
	break;
	case 6939://(1,11) (1, 11)
		return 66;//4 2
	break;
	case 6940://(1,11) (1, 12)
		return 66;//4 2
	break;
	case 6941://(1,11) (1, 13)
		return 66;//4 2
	break;
	case 6942://(1,11) (1, 14)
		return 66;//4 2
	break;
	case 6943://(1,11) (1, 15)
		return 66;//4 2
	break;
	case 6944://(1,11) (2, 0)
		return 0;//0 0
	break;
	case 6945://(1,11) (2, 1)
		return 2;//0 2
	break;
	case 6946://(1,11) (2, 2)
		return 2;//0 2
	break;
	case 6947://(1,11) (2, 3)
		return 2;//0 2
	break;
	case 6948://(1,11) (2, 4)
		return 0;//0 0
	break;
	case 6949://(1,11) (2, 5)
		return 2;//0 2
	break;
	case 6950://(1,11) (2, 6)
		return 2;//0 2
	break;
	case 6951://(1,11) (2, 7)
		return 2;//0 2
	break;
	case 6952://(1,11) (2, 8)
		return 2;//0 2
	break;
	case 6953://(1,11) (2, 9)
		return 2;//0 2
	break;
	case 6954://(1,11) (2, 10)
		return 2;//0 2
	break;
	case 6955://(1,11) (2, 11)
		return 2;//0 2
	break;
	case 6956://(1,11) (2, 12)
		return 2;//0 2
	break;
	case 6957://(1,11) (2, 13)
		return 2;//0 2
	break;
	case 6958://(1,11) (2, 14)
		return 2;//0 2
	break;
	case 6959://(1,11) (2, 15)
		return 2;//0 2
	break;
	case 6960://(1,11) (3, 0)
		return 0;//0 0
	break;
	case 6961://(1,11) (3, 1)
		return 2;//0 2
	break;
	case 6962://(1,11) (3, 2)
		return 2;//0 2
	break;
	case 6963://(1,11) (3, 3)
		return 2;//0 2
	break;
	case 6964://(1,11) (3, 4)
		return 0;//0 0
	break;
	case 6965://(1,11) (3, 5)
		return 2;//0 2
	break;
	case 6966://(1,11) (3, 6)
		return 2;//0 2
	break;
	case 6967://(1,11) (3, 7)
		return 2;//0 2
	break;
	case 6968://(1,11) (3, 8)
		return 2;//0 2
	break;
	case 6969://(1,11) (3, 9)
		return 2;//0 2
	break;
	case 6970://(1,11) (3, 10)
		return 2;//0 2
	break;
	case 6971://(1,11) (3, 11)
		return 2;//0 2
	break;
	case 6972://(1,11) (3, 12)
		return 2;//0 2
	break;
	case 6973://(1,11) (3, 13)
		return 2;//0 2
	break;
	case 6974://(1,11) (3, 14)
		return 2;//0 2
	break;
	case 6975://(1,11) (3, 15)
		return 2;//0 2
	break;
	case 6976://(1,11) (4, 0)
		return 0;//0 0
	break;
	case 6977://(1,11) (4, 1)
		return 2;//0 2
	break;
	case 6978://(1,11) (4, 2)
		return 2;//0 2
	break;
	case 6979://(1,11) (4, 3)
		return 2;//0 2
	break;
	case 6980://(1,11) (4, 4)
		return 0;//0 0
	break;
	case 6981://(1,11) (4, 5)
		return 2;//0 2
	break;
	case 6982://(1,11) (4, 6)
		return 2;//0 2
	break;
	case 6983://(1,11) (4, 7)
		return 2;//0 2
	break;
	case 6984://(1,11) (4, 8)
		return 2;//0 2
	break;
	case 6985://(1,11) (4, 9)
		return 2;//0 2
	break;
	case 6986://(1,11) (4, 10)
		return 2;//0 2
	break;
	case 6987://(1,11) (4, 11)
		return 2;//0 2
	break;
	case 6988://(1,11) (4, 12)
		return 2;//0 2
	break;
	case 6989://(1,11) (4, 13)
		return 2;//0 2
	break;
	case 6990://(1,11) (4, 14)
		return 2;//0 2
	break;
	case 6991://(1,11) (4, 15)
		return 2;//0 2
	break;
	case 6992://(1,11) (5, 0)
		return 0;//0 0
	break;
	case 6993://(1,11) (5, 1)
		return 2;//0 2
	break;
	case 6994://(1,11) (5, 2)
		return 2;//0 2
	break;
	case 6995://(1,11) (5, 3)
		return 2;//0 2
	break;
	case 6996://(1,11) (5, 4)
		return 0;//0 0
	break;
	case 6997://(1,11) (5, 5)
		return 2;//0 2
	break;
	case 6998://(1,11) (5, 6)
		return 2;//0 2
	break;
	case 6999://(1,11) (5, 7)
		return 2;//0 2
	break;
	case 7000://(1,11) (5, 8)
		return 2;//0 2
	break;
	case 7001://(1,11) (5, 9)
		return 2;//0 2
	break;
	case 7002://(1,11) (5, 10)
		return 2;//0 2
	break;
	case 7003://(1,11) (5, 11)
		return 2;//0 2
	break;
	case 7004://(1,11) (5, 12)
		return 2;//0 2
	break;
	case 7005://(1,11) (5, 13)
		return 2;//0 2
	break;
	case 7006://(1,11) (5, 14)
		return 2;//0 2
	break;
	case 7007://(1,11) (5, 15)
		return 2;//0 2
	break;
	case 7008://(1,11) (6, 0)
		return 64;//4 0
	break;
	case 7009://(1,11) (6, 1)
		return 66;//4 2
	break;
	case 7010://(1,11) (6, 2)
		return 66;//4 2
	break;
	case 7011://(1,11) (6, 3)
		return 66;//4 2
	break;
	case 7012://(1,11) (6, 4)
		return 64;//4 0
	break;
	case 7013://(1,11) (6, 5)
		return 66;//4 2
	break;
	case 7014://(1,11) (6, 6)
		return 66;//4 2
	break;
	case 7015://(1,11) (6, 7)
		return 66;//4 2
	break;
	case 7016://(1,11) (6, 8)
		return 66;//4 2
	break;
	case 7017://(1,11) (6, 9)
		return 66;//4 2
	break;
	case 7018://(1,11) (6, 10)
		return 66;//4 2
	break;
	case 7019://(1,11) (6, 11)
		return 66;//4 2
	break;
	case 7020://(1,11) (6, 12)
		return 66;//4 2
	break;
	case 7021://(1,11) (6, 13)
		return 66;//4 2
	break;
	case 7022://(1,11) (6, 14)
		return 66;//4 2
	break;
	case 7023://(1,11) (6, 15)
		return 66;//4 2
	break;
	case 7024://(1,11) (7, 0)
		return 0;//0 0
	break;
	case 7025://(1,11) (7, 1)
		return 2;//0 2
	break;
	case 7026://(1,11) (7, 2)
		return 2;//0 2
	break;
	case 7027://(1,11) (7, 3)
		return 2;//0 2
	break;
	case 7028://(1,11) (7, 4)
		return 0;//0 0
	break;
	case 7029://(1,11) (7, 5)
		return 2;//0 2
	break;
	case 7030://(1,11) (7, 6)
		return 2;//0 2
	break;
	case 7031://(1,11) (7, 7)
		return 2;//0 2
	break;
	case 7032://(1,11) (7, 8)
		return 2;//0 2
	break;
	case 7033://(1,11) (7, 9)
		return 2;//0 2
	break;
	case 7034://(1,11) (7, 10)
		return 2;//0 2
	break;
	case 7035://(1,11) (7, 11)
		return 2;//0 2
	break;
	case 7036://(1,11) (7, 12)
		return 2;//0 2
	break;
	case 7037://(1,11) (7, 13)
		return 2;//0 2
	break;
	case 7038://(1,11) (7, 14)
		return 2;//0 2
	break;
	case 7039://(1,11) (7, 15)
		return 2;//0 2
	break;
	case 7040://(1,11) (8, 0)
		return 64;//4 0
	break;
	case 7041://(1,11) (8, 1)
		return 66;//4 2
	break;
	case 7042://(1,11) (8, 2)
		return 66;//4 2
	break;
	case 7043://(1,11) (8, 3)
		return 66;//4 2
	break;
	case 7044://(1,11) (8, 4)
		return 64;//4 0
	break;
	case 7045://(1,11) (8, 5)
		return 66;//4 2
	break;
	case 7046://(1,11) (8, 6)
		return 66;//4 2
	break;
	case 7047://(1,11) (8, 7)
		return 66;//4 2
	break;
	case 7048://(1,11) (8, 8)
		return 66;//4 2
	break;
	case 7049://(1,11) (8, 9)
		return 66;//4 2
	break;
	case 7050://(1,11) (8, 10)
		return 66;//4 2
	break;
	case 7051://(1,11) (8, 11)
		return 66;//4 2
	break;
	case 7052://(1,11) (8, 12)
		return 66;//4 2
	break;
	case 7053://(1,11) (8, 13)
		return 66;//4 2
	break;
	case 7054://(1,11) (8, 14)
		return 66;//4 2
	break;
	case 7055://(1,11) (8, 15)
		return 66;//4 2
	break;
	case 7056://(1,11) (9, 0)
		return 64;//4 0
	break;
	case 7057://(1,11) (9, 1)
		return 66;//4 2
	break;
	case 7058://(1,11) (9, 2)
		return 66;//4 2
	break;
	case 7059://(1,11) (9, 3)
		return 66;//4 2
	break;
	case 7060://(1,11) (9, 4)
		return 64;//4 0
	break;
	case 7061://(1,11) (9, 5)
		return 66;//4 2
	break;
	case 7062://(1,11) (9, 6)
		return 66;//4 2
	break;
	case 7063://(1,11) (9, 7)
		return 66;//4 2
	break;
	case 7064://(1,11) (9, 8)
		return 66;//4 2
	break;
	case 7065://(1,11) (9, 9)
		return 66;//4 2
	break;
	case 7066://(1,11) (9, 10)
		return 66;//4 2
	break;
	case 7067://(1,11) (9, 11)
		return 66;//4 2
	break;
	case 7068://(1,11) (9, 12)
		return 66;//4 2
	break;
	case 7069://(1,11) (9, 13)
		return 66;//4 2
	break;
	case 7070://(1,11) (9, 14)
		return 66;//4 2
	break;
	case 7071://(1,11) (9, 15)
		return 66;//4 2
	break;
	case 7072://(1,11) (10, 0)
		return 0;//0 0
	break;
	case 7073://(1,11) (10, 1)
		return 2;//0 2
	break;
	case 7074://(1,11) (10, 2)
		return 2;//0 2
	break;
	case 7075://(1,11) (10, 3)
		return 2;//0 2
	break;
	case 7076://(1,11) (10, 4)
		return 0;//0 0
	break;
	case 7077://(1,11) (10, 5)
		return 2;//0 2
	break;
	case 7078://(1,11) (10, 6)
		return 2;//0 2
	break;
	case 7079://(1,11) (10, 7)
		return 2;//0 2
	break;
	case 7080://(1,11) (10, 8)
		return 2;//0 2
	break;
	case 7081://(1,11) (10, 9)
		return 2;//0 2
	break;
	case 7082://(1,11) (10, 10)
		return 2;//0 2
	break;
	case 7083://(1,11) (10, 11)
		return 2;//0 2
	break;
	case 7084://(1,11) (10, 12)
		return 2;//0 2
	break;
	case 7085://(1,11) (10, 13)
		return 2;//0 2
	break;
	case 7086://(1,11) (10, 14)
		return 2;//0 2
	break;
	case 7087://(1,11) (10, 15)
		return 2;//0 2
	break;
	case 7088://(1,11) (11, 0)
		return 64;//4 0
	break;
	case 7089://(1,11) (11, 1)
		return 66;//4 2
	break;
	case 7090://(1,11) (11, 2)
		return 66;//4 2
	break;
	case 7091://(1,11) (11, 3)
		return 66;//4 2
	break;
	case 7092://(1,11) (11, 4)
		return 64;//4 0
	break;
	case 7093://(1,11) (11, 5)
		return 66;//4 2
	break;
	case 7094://(1,11) (11, 6)
		return 66;//4 2
	break;
	case 7095://(1,11) (11, 7)
		return 66;//4 2
	break;
	case 7096://(1,11) (11, 8)
		return 66;//4 2
	break;
	case 7097://(1,11) (11, 9)
		return 66;//4 2
	break;
	case 7098://(1,11) (11, 10)
		return 66;//4 2
	break;
	case 7099://(1,11) (11, 11)
		return 66;//4 2
	break;
	case 7100://(1,11) (11, 12)
		return 66;//4 2
	break;
	case 7101://(1,11) (11, 13)
		return 66;//4 2
	break;
	case 7102://(1,11) (11, 14)
		return 66;//4 2
	break;
	case 7103://(1,11) (11, 15)
		return 66;//4 2
	break;
	case 7104://(1,11) (12, 0)
		return 0;//0 0
	break;
	case 7105://(1,11) (12, 1)
		return 2;//0 2
	break;
	case 7106://(1,11) (12, 2)
		return 2;//0 2
	break;
	case 7107://(1,11) (12, 3)
		return 2;//0 2
	break;
	case 7108://(1,11) (12, 4)
		return 0;//0 0
	break;
	case 7109://(1,11) (12, 5)
		return 2;//0 2
	break;
	case 7110://(1,11) (12, 6)
		return 2;//0 2
	break;
	case 7111://(1,11) (12, 7)
		return 2;//0 2
	break;
	case 7112://(1,11) (12, 8)
		return 2;//0 2
	break;
	case 7113://(1,11) (12, 9)
		return 2;//0 2
	break;
	case 7114://(1,11) (12, 10)
		return 2;//0 2
	break;
	case 7115://(1,11) (12, 11)
		return 2;//0 2
	break;
	case 7116://(1,11) (12, 12)
		return 2;//0 2
	break;
	case 7117://(1,11) (12, 13)
		return 2;//0 2
	break;
	case 7118://(1,11) (12, 14)
		return 2;//0 2
	break;
	case 7119://(1,11) (12, 15)
		return 2;//0 2
	break;
	case 7120://(1,11) (13, 0)
		return 64;//4 0
	break;
	case 7121://(1,11) (13, 1)
		return 66;//4 2
	break;
	case 7122://(1,11) (13, 2)
		return 66;//4 2
	break;
	case 7123://(1,11) (13, 3)
		return 66;//4 2
	break;
	case 7124://(1,11) (13, 4)
		return 64;//4 0
	break;
	case 7125://(1,11) (13, 5)
		return 66;//4 2
	break;
	case 7126://(1,11) (13, 6)
		return 66;//4 2
	break;
	case 7127://(1,11) (13, 7)
		return 66;//4 2
	break;
	case 7128://(1,11) (13, 8)
		return 66;//4 2
	break;
	case 7129://(1,11) (13, 9)
		return 66;//4 2
	break;
	case 7130://(1,11) (13, 10)
		return 66;//4 2
	break;
	case 7131://(1,11) (13, 11)
		return 66;//4 2
	break;
	case 7132://(1,11) (13, 12)
		return 66;//4 2
	break;
	case 7133://(1,11) (13, 13)
		return 66;//4 2
	break;
	case 7134://(1,11) (13, 14)
		return 66;//4 2
	break;
	case 7135://(1,11) (13, 15)
		return 66;//4 2
	break;
	case 7136://(1,11) (14, 0)
		return 64;//4 0
	break;
	case 7137://(1,11) (14, 1)
		return 66;//4 2
	break;
	case 7138://(1,11) (14, 2)
		return 66;//4 2
	break;
	case 7139://(1,11) (14, 3)
		return 66;//4 2
	break;
	case 7140://(1,11) (14, 4)
		return 64;//4 0
	break;
	case 7141://(1,11) (14, 5)
		return 66;//4 2
	break;
	case 7142://(1,11) (14, 6)
		return 66;//4 2
	break;
	case 7143://(1,11) (14, 7)
		return 66;//4 2
	break;
	case 7144://(1,11) (14, 8)
		return 66;//4 2
	break;
	case 7145://(1,11) (14, 9)
		return 66;//4 2
	break;
	case 7146://(1,11) (14, 10)
		return 66;//4 2
	break;
	case 7147://(1,11) (14, 11)
		return 66;//4 2
	break;
	case 7148://(1,11) (14, 12)
		return 66;//4 2
	break;
	case 7149://(1,11) (14, 13)
		return 66;//4 2
	break;
	case 7150://(1,11) (14, 14)
		return 66;//4 2
	break;
	case 7151://(1,11) (14, 15)
		return 66;//4 2
	break;
	case 7152://(1,11) (15, 0)
		return 64;//4 0
	break;
	case 7153://(1,11) (15, 1)
		return 66;//4 2
	break;
	case 7154://(1,11) (15, 2)
		return 66;//4 2
	break;
	case 7155://(1,11) (15, 3)
		return 66;//4 2
	break;
	case 7156://(1,11) (15, 4)
		return 64;//4 0
	break;
	case 7157://(1,11) (15, 5)
		return 66;//4 2
	break;
	case 7158://(1,11) (15, 6)
		return 66;//4 2
	break;
	case 7159://(1,11) (15, 7)
		return 66;//4 2
	break;
	case 7160://(1,11) (15, 8)
		return 66;//4 2
	break;
	case 7161://(1,11) (15, 9)
		return 66;//4 2
	break;
	case 7162://(1,11) (15, 10)
		return 66;//4 2
	break;
	case 7163://(1,11) (15, 11)
		return 66;//4 2
	break;
	case 7164://(1,11) (15, 12)
		return 66;//4 2
	break;
	case 7165://(1,11) (15, 13)
		return 66;//4 2
	break;
	case 7166://(1,11) (15, 14)
		return 66;//4 2
	break;
	case 7167://(1,11) (15, 15)
		return 66;//4 2
	break;
	case 7168://(1,12) (0, 0)
		return 0;//0 0
	break;
	case 7169://(1,12) (0, 1)
		return 0;//0 0
	break;
	case 7170://(1,12) (0, 2)
		return 2;//0 2
	break;
	case 7171://(1,12) (0, 3)
		return 2;//0 2
	break;
	case 7172://(1,12) (0, 4)
		return 2;//0 2
	break;
	case 7173://(1,12) (0, 5)
		return 2;//0 2
	break;
	case 7174://(1,12) (0, 6)
		return 2;//0 2
	break;
	case 7175://(1,12) (0, 7)
		return 2;//0 2
	break;
	case 7176://(1,12) (0, 8)
		return 2;//0 2
	break;
	case 7177://(1,12) (0, 9)
		return 2;//0 2
	break;
	case 7178://(1,12) (0, 10)
		return 2;//0 2
	break;
	case 7179://(1,12) (0, 11)
		return 2;//0 2
	break;
	case 7180://(1,12) (0, 12)
		return 2;//0 2
	break;
	case 7181://(1,12) (0, 13)
		return 2;//0 2
	break;
	case 7182://(1,12) (0, 14)
		return 2;//0 2
	break;
	case 7183://(1,12) (0, 15)
		return 2;//0 2
	break;
	case 7184://(1,12) (1, 0)
		return 64;//4 0
	break;
	case 7185://(1,12) (1, 1)
		return 64;//4 0
	break;
	case 7186://(1,12) (1, 2)
		return 66;//4 2
	break;
	case 7187://(1,12) (1, 3)
		return 66;//4 2
	break;
	case 7188://(1,12) (1, 4)
		return 66;//4 2
	break;
	case 7189://(1,12) (1, 5)
		return 66;//4 2
	break;
	case 7190://(1,12) (1, 6)
		return 66;//4 2
	break;
	case 7191://(1,12) (1, 7)
		return 66;//4 2
	break;
	case 7192://(1,12) (1, 8)
		return 66;//4 2
	break;
	case 7193://(1,12) (1, 9)
		return 66;//4 2
	break;
	case 7194://(1,12) (1, 10)
		return 66;//4 2
	break;
	case 7195://(1,12) (1, 11)
		return 66;//4 2
	break;
	case 7196://(1,12) (1, 12)
		return 66;//4 2
	break;
	case 7197://(1,12) (1, 13)
		return 66;//4 2
	break;
	case 7198://(1,12) (1, 14)
		return 66;//4 2
	break;
	case 7199://(1,12) (1, 15)
		return 66;//4 2
	break;
	case 7200://(1,12) (2, 0)
		return 0;//0 0
	break;
	case 7201://(1,12) (2, 1)
		return 0;//0 0
	break;
	case 7202://(1,12) (2, 2)
		return 2;//0 2
	break;
	case 7203://(1,12) (2, 3)
		return 2;//0 2
	break;
	case 7204://(1,12) (2, 4)
		return 2;//0 2
	break;
	case 7205://(1,12) (2, 5)
		return 2;//0 2
	break;
	case 7206://(1,12) (2, 6)
		return 2;//0 2
	break;
	case 7207://(1,12) (2, 7)
		return 2;//0 2
	break;
	case 7208://(1,12) (2, 8)
		return 2;//0 2
	break;
	case 7209://(1,12) (2, 9)
		return 2;//0 2
	break;
	case 7210://(1,12) (2, 10)
		return 2;//0 2
	break;
	case 7211://(1,12) (2, 11)
		return 2;//0 2
	break;
	case 7212://(1,12) (2, 12)
		return 2;//0 2
	break;
	case 7213://(1,12) (2, 13)
		return 2;//0 2
	break;
	case 7214://(1,12) (2, 14)
		return 2;//0 2
	break;
	case 7215://(1,12) (2, 15)
		return 2;//0 2
	break;
	case 7216://(1,12) (3, 0)
		return 0;//0 0
	break;
	case 7217://(1,12) (3, 1)
		return 0;//0 0
	break;
	case 7218://(1,12) (3, 2)
		return 2;//0 2
	break;
	case 7219://(1,12) (3, 3)
		return 2;//0 2
	break;
	case 7220://(1,12) (3, 4)
		return 2;//0 2
	break;
	case 7221://(1,12) (3, 5)
		return 2;//0 2
	break;
	case 7222://(1,12) (3, 6)
		return 2;//0 2
	break;
	case 7223://(1,12) (3, 7)
		return 2;//0 2
	break;
	case 7224://(1,12) (3, 8)
		return 2;//0 2
	break;
	case 7225://(1,12) (3, 9)
		return 2;//0 2
	break;
	case 7226://(1,12) (3, 10)
		return 2;//0 2
	break;
	case 7227://(1,12) (3, 11)
		return 2;//0 2
	break;
	case 7228://(1,12) (3, 12)
		return 2;//0 2
	break;
	case 7229://(1,12) (3, 13)
		return 2;//0 2
	break;
	case 7230://(1,12) (3, 14)
		return 2;//0 2
	break;
	case 7231://(1,12) (3, 15)
		return 2;//0 2
	break;
	case 7232://(1,12) (4, 0)
		return 0;//0 0
	break;
	case 7233://(1,12) (4, 1)
		return 0;//0 0
	break;
	case 7234://(1,12) (4, 2)
		return 2;//0 2
	break;
	case 7235://(1,12) (4, 3)
		return 2;//0 2
	break;
	case 7236://(1,12) (4, 4)
		return 2;//0 2
	break;
	case 7237://(1,12) (4, 5)
		return 2;//0 2
	break;
	case 7238://(1,12) (4, 6)
		return 2;//0 2
	break;
	case 7239://(1,12) (4, 7)
		return 2;//0 2
	break;
	case 7240://(1,12) (4, 8)
		return 2;//0 2
	break;
	case 7241://(1,12) (4, 9)
		return 2;//0 2
	break;
	case 7242://(1,12) (4, 10)
		return 2;//0 2
	break;
	case 7243://(1,12) (4, 11)
		return 2;//0 2
	break;
	case 7244://(1,12) (4, 12)
		return 2;//0 2
	break;
	case 7245://(1,12) (4, 13)
		return 2;//0 2
	break;
	case 7246://(1,12) (4, 14)
		return 2;//0 2
	break;
	case 7247://(1,12) (4, 15)
		return 2;//0 2
	break;
	case 7248://(1,12) (5, 0)
		return 0;//0 0
	break;
	case 7249://(1,12) (5, 1)
		return 0;//0 0
	break;
	case 7250://(1,12) (5, 2)
		return 2;//0 2
	break;
	case 7251://(1,12) (5, 3)
		return 2;//0 2
	break;
	case 7252://(1,12) (5, 4)
		return 2;//0 2
	break;
	case 7253://(1,12) (5, 5)
		return 2;//0 2
	break;
	case 7254://(1,12) (5, 6)
		return 2;//0 2
	break;
	case 7255://(1,12) (5, 7)
		return 2;//0 2
	break;
	case 7256://(1,12) (5, 8)
		return 2;//0 2
	break;
	case 7257://(1,12) (5, 9)
		return 2;//0 2
	break;
	case 7258://(1,12) (5, 10)
		return 2;//0 2
	break;
	case 7259://(1,12) (5, 11)
		return 2;//0 2
	break;
	case 7260://(1,12) (5, 12)
		return 2;//0 2
	break;
	case 7261://(1,12) (5, 13)
		return 2;//0 2
	break;
	case 7262://(1,12) (5, 14)
		return 2;//0 2
	break;
	case 7263://(1,12) (5, 15)
		return 2;//0 2
	break;
	case 7264://(1,12) (6, 0)
		return 64;//4 0
	break;
	case 7265://(1,12) (6, 1)
		return 64;//4 0
	break;
	case 7266://(1,12) (6, 2)
		return 66;//4 2
	break;
	case 7267://(1,12) (6, 3)
		return 66;//4 2
	break;
	case 7268://(1,12) (6, 4)
		return 66;//4 2
	break;
	case 7269://(1,12) (6, 5)
		return 66;//4 2
	break;
	case 7270://(1,12) (6, 6)
		return 66;//4 2
	break;
	case 7271://(1,12) (6, 7)
		return 66;//4 2
	break;
	case 7272://(1,12) (6, 8)
		return 66;//4 2
	break;
	case 7273://(1,12) (6, 9)
		return 66;//4 2
	break;
	case 7274://(1,12) (6, 10)
		return 66;//4 2
	break;
	case 7275://(1,12) (6, 11)
		return 66;//4 2
	break;
	case 7276://(1,12) (6, 12)
		return 66;//4 2
	break;
	case 7277://(1,12) (6, 13)
		return 66;//4 2
	break;
	case 7278://(1,12) (6, 14)
		return 66;//4 2
	break;
	case 7279://(1,12) (6, 15)
		return 66;//4 2
	break;
	case 7280://(1,12) (7, 0)
		return 0;//0 0
	break;
	case 7281://(1,12) (7, 1)
		return 0;//0 0
	break;
	case 7282://(1,12) (7, 2)
		return 2;//0 2
	break;
	case 7283://(1,12) (7, 3)
		return 2;//0 2
	break;
	case 7284://(1,12) (7, 4)
		return 2;//0 2
	break;
	case 7285://(1,12) (7, 5)
		return 2;//0 2
	break;
	case 7286://(1,12) (7, 6)
		return 2;//0 2
	break;
	case 7287://(1,12) (7, 7)
		return 2;//0 2
	break;
	case 7288://(1,12) (7, 8)
		return 2;//0 2
	break;
	case 7289://(1,12) (7, 9)
		return 2;//0 2
	break;
	case 7290://(1,12) (7, 10)
		return 2;//0 2
	break;
	case 7291://(1,12) (7, 11)
		return 2;//0 2
	break;
	case 7292://(1,12) (7, 12)
		return 2;//0 2
	break;
	case 7293://(1,12) (7, 13)
		return 2;//0 2
	break;
	case 7294://(1,12) (7, 14)
		return 2;//0 2
	break;
	case 7295://(1,12) (7, 15)
		return 2;//0 2
	break;
	case 7296://(1,12) (8, 0)
		return 64;//4 0
	break;
	case 7297://(1,12) (8, 1)
		return 64;//4 0
	break;
	case 7298://(1,12) (8, 2)
		return 66;//4 2
	break;
	case 7299://(1,12) (8, 3)
		return 66;//4 2
	break;
	case 7300://(1,12) (8, 4)
		return 66;//4 2
	break;
	case 7301://(1,12) (8, 5)
		return 66;//4 2
	break;
	case 7302://(1,12) (8, 6)
		return 66;//4 2
	break;
	case 7303://(1,12) (8, 7)
		return 66;//4 2
	break;
	case 7304://(1,12) (8, 8)
		return 66;//4 2
	break;
	case 7305://(1,12) (8, 9)
		return 66;//4 2
	break;
	case 7306://(1,12) (8, 10)
		return 66;//4 2
	break;
	case 7307://(1,12) (8, 11)
		return 66;//4 2
	break;
	case 7308://(1,12) (8, 12)
		return 66;//4 2
	break;
	case 7309://(1,12) (8, 13)
		return 66;//4 2
	break;
	case 7310://(1,12) (8, 14)
		return 66;//4 2
	break;
	case 7311://(1,12) (8, 15)
		return 66;//4 2
	break;
	case 7312://(1,12) (9, 0)
		return 64;//4 0
	break;
	case 7313://(1,12) (9, 1)
		return 64;//4 0
	break;
	case 7314://(1,12) (9, 2)
		return 66;//4 2
	break;
	case 7315://(1,12) (9, 3)
		return 66;//4 2
	break;
	case 7316://(1,12) (9, 4)
		return 66;//4 2
	break;
	case 7317://(1,12) (9, 5)
		return 66;//4 2
	break;
	case 7318://(1,12) (9, 6)
		return 66;//4 2
	break;
	case 7319://(1,12) (9, 7)
		return 66;//4 2
	break;
	case 7320://(1,12) (9, 8)
		return 66;//4 2
	break;
	case 7321://(1,12) (9, 9)
		return 66;//4 2
	break;
	case 7322://(1,12) (9, 10)
		return 66;//4 2
	break;
	case 7323://(1,12) (9, 11)
		return 66;//4 2
	break;
	case 7324://(1,12) (9, 12)
		return 66;//4 2
	break;
	case 7325://(1,12) (9, 13)
		return 66;//4 2
	break;
	case 7326://(1,12) (9, 14)
		return 66;//4 2
	break;
	case 7327://(1,12) (9, 15)
		return 66;//4 2
	break;
	case 7328://(1,12) (10, 0)
		return 0;//0 0
	break;
	case 7329://(1,12) (10, 1)
		return 0;//0 0
	break;
	case 7330://(1,12) (10, 2)
		return 2;//0 2
	break;
	case 7331://(1,12) (10, 3)
		return 2;//0 2
	break;
	case 7332://(1,12) (10, 4)
		return 2;//0 2
	break;
	case 7333://(1,12) (10, 5)
		return 2;//0 2
	break;
	case 7334://(1,12) (10, 6)
		return 2;//0 2
	break;
	case 7335://(1,12) (10, 7)
		return 2;//0 2
	break;
	case 7336://(1,12) (10, 8)
		return 2;//0 2
	break;
	case 7337://(1,12) (10, 9)
		return 2;//0 2
	break;
	case 7338://(1,12) (10, 10)
		return 2;//0 2
	break;
	case 7339://(1,12) (10, 11)
		return 2;//0 2
	break;
	case 7340://(1,12) (10, 12)
		return 2;//0 2
	break;
	case 7341://(1,12) (10, 13)
		return 2;//0 2
	break;
	case 7342://(1,12) (10, 14)
		return 2;//0 2
	break;
	case 7343://(1,12) (10, 15)
		return 2;//0 2
	break;
	case 7344://(1,12) (11, 0)
		return 64;//4 0
	break;
	case 7345://(1,12) (11, 1)
		return 64;//4 0
	break;
	case 7346://(1,12) (11, 2)
		return 66;//4 2
	break;
	case 7347://(1,12) (11, 3)
		return 66;//4 2
	break;
	case 7348://(1,12) (11, 4)
		return 66;//4 2
	break;
	case 7349://(1,12) (11, 5)
		return 66;//4 2
	break;
	case 7350://(1,12) (11, 6)
		return 66;//4 2
	break;
	case 7351://(1,12) (11, 7)
		return 66;//4 2
	break;
	case 7352://(1,12) (11, 8)
		return 66;//4 2
	break;
	case 7353://(1,12) (11, 9)
		return 66;//4 2
	break;
	case 7354://(1,12) (11, 10)
		return 66;//4 2
	break;
	case 7355://(1,12) (11, 11)
		return 66;//4 2
	break;
	case 7356://(1,12) (11, 12)
		return 66;//4 2
	break;
	case 7357://(1,12) (11, 13)
		return 66;//4 2
	break;
	case 7358://(1,12) (11, 14)
		return 66;//4 2
	break;
	case 7359://(1,12) (11, 15)
		return 66;//4 2
	break;
	case 7360://(1,12) (12, 0)
		return 0;//0 0
	break;
	case 7361://(1,12) (12, 1)
		return 0;//0 0
	break;
	case 7362://(1,12) (12, 2)
		return 2;//0 2
	break;
	case 7363://(1,12) (12, 3)
		return 2;//0 2
	break;
	case 7364://(1,12) (12, 4)
		return 2;//0 2
	break;
	case 7365://(1,12) (12, 5)
		return 2;//0 2
	break;
	case 7366://(1,12) (12, 6)
		return 2;//0 2
	break;
	case 7367://(1,12) (12, 7)
		return 2;//0 2
	break;
	case 7368://(1,12) (12, 8)
		return 2;//0 2
	break;
	case 7369://(1,12) (12, 9)
		return 2;//0 2
	break;
	case 7370://(1,12) (12, 10)
		return 2;//0 2
	break;
	case 7371://(1,12) (12, 11)
		return 2;//0 2
	break;
	case 7372://(1,12) (12, 12)
		return 2;//0 2
	break;
	case 7373://(1,12) (12, 13)
		return 2;//0 2
	break;
	case 7374://(1,12) (12, 14)
		return 2;//0 2
	break;
	case 7375://(1,12) (12, 15)
		return 2;//0 2
	break;
	case 7376://(1,12) (13, 0)
		return 64;//4 0
	break;
	case 7377://(1,12) (13, 1)
		return 64;//4 0
	break;
	case 7378://(1,12) (13, 2)
		return 66;//4 2
	break;
	case 7379://(1,12) (13, 3)
		return 66;//4 2
	break;
	case 7380://(1,12) (13, 4)
		return 66;//4 2
	break;
	case 7381://(1,12) (13, 5)
		return 66;//4 2
	break;
	case 7382://(1,12) (13, 6)
		return 66;//4 2
	break;
	case 7383://(1,12) (13, 7)
		return 66;//4 2
	break;
	case 7384://(1,12) (13, 8)
		return 66;//4 2
	break;
	case 7385://(1,12) (13, 9)
		return 66;//4 2
	break;
	case 7386://(1,12) (13, 10)
		return 66;//4 2
	break;
	case 7387://(1,12) (13, 11)
		return 66;//4 2
	break;
	case 7388://(1,12) (13, 12)
		return 66;//4 2
	break;
	case 7389://(1,12) (13, 13)
		return 66;//4 2
	break;
	case 7390://(1,12) (13, 14)
		return 66;//4 2
	break;
	case 7391://(1,12) (13, 15)
		return 66;//4 2
	break;
	case 7392://(1,12) (14, 0)
		return 64;//4 0
	break;
	case 7393://(1,12) (14, 1)
		return 64;//4 0
	break;
	case 7394://(1,12) (14, 2)
		return 66;//4 2
	break;
	case 7395://(1,12) (14, 3)
		return 66;//4 2
	break;
	case 7396://(1,12) (14, 4)
		return 66;//4 2
	break;
	case 7397://(1,12) (14, 5)
		return 66;//4 2
	break;
	case 7398://(1,12) (14, 6)
		return 66;//4 2
	break;
	case 7399://(1,12) (14, 7)
		return 66;//4 2
	break;
	case 7400://(1,12) (14, 8)
		return 66;//4 2
	break;
	case 7401://(1,12) (14, 9)
		return 66;//4 2
	break;
	case 7402://(1,12) (14, 10)
		return 66;//4 2
	break;
	case 7403://(1,12) (14, 11)
		return 66;//4 2
	break;
	case 7404://(1,12) (14, 12)
		return 66;//4 2
	break;
	case 7405://(1,12) (14, 13)
		return 66;//4 2
	break;
	case 7406://(1,12) (14, 14)
		return 66;//4 2
	break;
	case 7407://(1,12) (14, 15)
		return 66;//4 2
	break;
	case 7408://(1,12) (15, 0)
		return 64;//4 0
	break;
	case 7409://(1,12) (15, 1)
		return 64;//4 0
	break;
	case 7410://(1,12) (15, 2)
		return 66;//4 2
	break;
	case 7411://(1,12) (15, 3)
		return 66;//4 2
	break;
	case 7412://(1,12) (15, 4)
		return 66;//4 2
	break;
	case 7413://(1,12) (15, 5)
		return 66;//4 2
	break;
	case 7414://(1,12) (15, 6)
		return 66;//4 2
	break;
	case 7415://(1,12) (15, 7)
		return 66;//4 2
	break;
	case 7416://(1,12) (15, 8)
		return 66;//4 2
	break;
	case 7417://(1,12) (15, 9)
		return 66;//4 2
	break;
	case 7418://(1,12) (15, 10)
		return 66;//4 2
	break;
	case 7419://(1,12) (15, 11)
		return 66;//4 2
	break;
	case 7420://(1,12) (15, 12)
		return 66;//4 2
	break;
	case 7421://(1,12) (15, 13)
		return 66;//4 2
	break;
	case 7422://(1,12) (15, 14)
		return 66;//4 2
	break;
	case 7423://(1,12) (15, 15)
		return 66;//4 2
	break;
	case 7424://(1,13) (0, 0)
		return 0;//0 0
	break;
	case 7425://(1,13) (0, 1)
		return 2;//0 2
	break;
	case 7426://(1,13) (0, 2)
		return 0;//0 0
	break;
	case 7427://(1,13) (0, 3)
		return 2;//0 2
	break;
	case 7428://(1,13) (0, 4)
		return 2;//0 2
	break;
	case 7429://(1,13) (0, 5)
		return 2;//0 2
	break;
	case 7430://(1,13) (0, 6)
		return 2;//0 2
	break;
	case 7431://(1,13) (0, 7)
		return 2;//0 2
	break;
	case 7432://(1,13) (0, 8)
		return 2;//0 2
	break;
	case 7433://(1,13) (0, 9)
		return 2;//0 2
	break;
	case 7434://(1,13) (0, 10)
		return 2;//0 2
	break;
	case 7435://(1,13) (0, 11)
		return 2;//0 2
	break;
	case 7436://(1,13) (0, 12)
		return 2;//0 2
	break;
	case 7437://(1,13) (0, 13)
		return 2;//0 2
	break;
	case 7438://(1,13) (0, 14)
		return 2;//0 2
	break;
	case 7439://(1,13) (0, 15)
		return 2;//0 2
	break;
	case 7440://(1,13) (1, 0)
		return 64;//4 0
	break;
	case 7441://(1,13) (1, 1)
		return 66;//4 2
	break;
	case 7442://(1,13) (1, 2)
		return 64;//4 0
	break;
	case 7443://(1,13) (1, 3)
		return 66;//4 2
	break;
	case 7444://(1,13) (1, 4)
		return 66;//4 2
	break;
	case 7445://(1,13) (1, 5)
		return 66;//4 2
	break;
	case 7446://(1,13) (1, 6)
		return 66;//4 2
	break;
	case 7447://(1,13) (1, 7)
		return 66;//4 2
	break;
	case 7448://(1,13) (1, 8)
		return 66;//4 2
	break;
	case 7449://(1,13) (1, 9)
		return 66;//4 2
	break;
	case 7450://(1,13) (1, 10)
		return 66;//4 2
	break;
	case 7451://(1,13) (1, 11)
		return 66;//4 2
	break;
	case 7452://(1,13) (1, 12)
		return 66;//4 2
	break;
	case 7453://(1,13) (1, 13)
		return 66;//4 2
	break;
	case 7454://(1,13) (1, 14)
		return 66;//4 2
	break;
	case 7455://(1,13) (1, 15)
		return 66;//4 2
	break;
	case 7456://(1,13) (2, 0)
		return 0;//0 0
	break;
	case 7457://(1,13) (2, 1)
		return 2;//0 2
	break;
	case 7458://(1,13) (2, 2)
		return 0;//0 0
	break;
	case 7459://(1,13) (2, 3)
		return 2;//0 2
	break;
	case 7460://(1,13) (2, 4)
		return 2;//0 2
	break;
	case 7461://(1,13) (2, 5)
		return 2;//0 2
	break;
	case 7462://(1,13) (2, 6)
		return 2;//0 2
	break;
	case 7463://(1,13) (2, 7)
		return 2;//0 2
	break;
	case 7464://(1,13) (2, 8)
		return 2;//0 2
	break;
	case 7465://(1,13) (2, 9)
		return 2;//0 2
	break;
	case 7466://(1,13) (2, 10)
		return 2;//0 2
	break;
	case 7467://(1,13) (2, 11)
		return 2;//0 2
	break;
	case 7468://(1,13) (2, 12)
		return 2;//0 2
	break;
	case 7469://(1,13) (2, 13)
		return 2;//0 2
	break;
	case 7470://(1,13) (2, 14)
		return 2;//0 2
	break;
	case 7471://(1,13) (2, 15)
		return 2;//0 2
	break;
	case 7472://(1,13) (3, 0)
		return 0;//0 0
	break;
	case 7473://(1,13) (3, 1)
		return 2;//0 2
	break;
	case 7474://(1,13) (3, 2)
		return 0;//0 0
	break;
	case 7475://(1,13) (3, 3)
		return 2;//0 2
	break;
	case 7476://(1,13) (3, 4)
		return 2;//0 2
	break;
	case 7477://(1,13) (3, 5)
		return 2;//0 2
	break;
	case 7478://(1,13) (3, 6)
		return 2;//0 2
	break;
	case 7479://(1,13) (3, 7)
		return 2;//0 2
	break;
	case 7480://(1,13) (3, 8)
		return 2;//0 2
	break;
	case 7481://(1,13) (3, 9)
		return 2;//0 2
	break;
	case 7482://(1,13) (3, 10)
		return 2;//0 2
	break;
	case 7483://(1,13) (3, 11)
		return 2;//0 2
	break;
	case 7484://(1,13) (3, 12)
		return 2;//0 2
	break;
	case 7485://(1,13) (3, 13)
		return 2;//0 2
	break;
	case 7486://(1,13) (3, 14)
		return 2;//0 2
	break;
	case 7487://(1,13) (3, 15)
		return 2;//0 2
	break;
	case 7488://(1,13) (4, 0)
		return 0;//0 0
	break;
	case 7489://(1,13) (4, 1)
		return 2;//0 2
	break;
	case 7490://(1,13) (4, 2)
		return 0;//0 0
	break;
	case 7491://(1,13) (4, 3)
		return 2;//0 2
	break;
	case 7492://(1,13) (4, 4)
		return 2;//0 2
	break;
	case 7493://(1,13) (4, 5)
		return 2;//0 2
	break;
	case 7494://(1,13) (4, 6)
		return 2;//0 2
	break;
	case 7495://(1,13) (4, 7)
		return 2;//0 2
	break;
	case 7496://(1,13) (4, 8)
		return 2;//0 2
	break;
	case 7497://(1,13) (4, 9)
		return 2;//0 2
	break;
	case 7498://(1,13) (4, 10)
		return 2;//0 2
	break;
	case 7499://(1,13) (4, 11)
		return 2;//0 2
	break;
	case 7500://(1,13) (4, 12)
		return 2;//0 2
	break;
	case 7501://(1,13) (4, 13)
		return 2;//0 2
	break;
	case 7502://(1,13) (4, 14)
		return 2;//0 2
	break;
	case 7503://(1,13) (4, 15)
		return 2;//0 2
	break;
	case 7504://(1,13) (5, 0)
		return 0;//0 0
	break;
	case 7505://(1,13) (5, 1)
		return 2;//0 2
	break;
	case 7506://(1,13) (5, 2)
		return 0;//0 0
	break;
	case 7507://(1,13) (5, 3)
		return 2;//0 2
	break;
	case 7508://(1,13) (5, 4)
		return 2;//0 2
	break;
	case 7509://(1,13) (5, 5)
		return 2;//0 2
	break;
	case 7510://(1,13) (5, 6)
		return 2;//0 2
	break;
	case 7511://(1,13) (5, 7)
		return 2;//0 2
	break;
	case 7512://(1,13) (5, 8)
		return 2;//0 2
	break;
	case 7513://(1,13) (5, 9)
		return 2;//0 2
	break;
	case 7514://(1,13) (5, 10)
		return 2;//0 2
	break;
	case 7515://(1,13) (5, 11)
		return 2;//0 2
	break;
	case 7516://(1,13) (5, 12)
		return 2;//0 2
	break;
	case 7517://(1,13) (5, 13)
		return 2;//0 2
	break;
	case 7518://(1,13) (5, 14)
		return 2;//0 2
	break;
	case 7519://(1,13) (5, 15)
		return 2;//0 2
	break;
	case 7520://(1,13) (6, 0)
		return 64;//4 0
	break;
	case 7521://(1,13) (6, 1)
		return 66;//4 2
	break;
	case 7522://(1,13) (6, 2)
		return 64;//4 0
	break;
	case 7523://(1,13) (6, 3)
		return 66;//4 2
	break;
	case 7524://(1,13) (6, 4)
		return 66;//4 2
	break;
	case 7525://(1,13) (6, 5)
		return 66;//4 2
	break;
	case 7526://(1,13) (6, 6)
		return 66;//4 2
	break;
	case 7527://(1,13) (6, 7)
		return 66;//4 2
	break;
	case 7528://(1,13) (6, 8)
		return 66;//4 2
	break;
	case 7529://(1,13) (6, 9)
		return 66;//4 2
	break;
	case 7530://(1,13) (6, 10)
		return 66;//4 2
	break;
	case 7531://(1,13) (6, 11)
		return 66;//4 2
	break;
	case 7532://(1,13) (6, 12)
		return 66;//4 2
	break;
	case 7533://(1,13) (6, 13)
		return 66;//4 2
	break;
	case 7534://(1,13) (6, 14)
		return 66;//4 2
	break;
	case 7535://(1,13) (6, 15)
		return 66;//4 2
	break;
	case 7536://(1,13) (7, 0)
		return 0;//0 0
	break;
	case 7537://(1,13) (7, 1)
		return 2;//0 2
	break;
	case 7538://(1,13) (7, 2)
		return 0;//0 0
	break;
	case 7539://(1,13) (7, 3)
		return 2;//0 2
	break;
	case 7540://(1,13) (7, 4)
		return 2;//0 2
	break;
	case 7541://(1,13) (7, 5)
		return 2;//0 2
	break;
	case 7542://(1,13) (7, 6)
		return 2;//0 2
	break;
	case 7543://(1,13) (7, 7)
		return 2;//0 2
	break;
	case 7544://(1,13) (7, 8)
		return 2;//0 2
	break;
	case 7545://(1,13) (7, 9)
		return 2;//0 2
	break;
	case 7546://(1,13) (7, 10)
		return 2;//0 2
	break;
	case 7547://(1,13) (7, 11)
		return 2;//0 2
	break;
	case 7548://(1,13) (7, 12)
		return 2;//0 2
	break;
	case 7549://(1,13) (7, 13)
		return 2;//0 2
	break;
	case 7550://(1,13) (7, 14)
		return 2;//0 2
	break;
	case 7551://(1,13) (7, 15)
		return 2;//0 2
	break;
	case 7552://(1,13) (8, 0)
		return 64;//4 0
	break;
	case 7553://(1,13) (8, 1)
		return 66;//4 2
	break;
	case 7554://(1,13) (8, 2)
		return 64;//4 0
	break;
	case 7555://(1,13) (8, 3)
		return 66;//4 2
	break;
	case 7556://(1,13) (8, 4)
		return 66;//4 2
	break;
	case 7557://(1,13) (8, 5)
		return 66;//4 2
	break;
	case 7558://(1,13) (8, 6)
		return 66;//4 2
	break;
	case 7559://(1,13) (8, 7)
		return 66;//4 2
	break;
	case 7560://(1,13) (8, 8)
		return 66;//4 2
	break;
	case 7561://(1,13) (8, 9)
		return 66;//4 2
	break;
	case 7562://(1,13) (8, 10)
		return 66;//4 2
	break;
	case 7563://(1,13) (8, 11)
		return 66;//4 2
	break;
	case 7564://(1,13) (8, 12)
		return 66;//4 2
	break;
	case 7565://(1,13) (8, 13)
		return 66;//4 2
	break;
	case 7566://(1,13) (8, 14)
		return 66;//4 2
	break;
	case 7567://(1,13) (8, 15)
		return 66;//4 2
	break;
	case 7568://(1,13) (9, 0)
		return 64;//4 0
	break;
	case 7569://(1,13) (9, 1)
		return 66;//4 2
	break;
	case 7570://(1,13) (9, 2)
		return 64;//4 0
	break;
	case 7571://(1,13) (9, 3)
		return 66;//4 2
	break;
	case 7572://(1,13) (9, 4)
		return 66;//4 2
	break;
	case 7573://(1,13) (9, 5)
		return 66;//4 2
	break;
	case 7574://(1,13) (9, 6)
		return 66;//4 2
	break;
	case 7575://(1,13) (9, 7)
		return 66;//4 2
	break;
	case 7576://(1,13) (9, 8)
		return 66;//4 2
	break;
	case 7577://(1,13) (9, 9)
		return 66;//4 2
	break;
	case 7578://(1,13) (9, 10)
		return 66;//4 2
	break;
	case 7579://(1,13) (9, 11)
		return 66;//4 2
	break;
	case 7580://(1,13) (9, 12)
		return 66;//4 2
	break;
	case 7581://(1,13) (9, 13)
		return 66;//4 2
	break;
	case 7582://(1,13) (9, 14)
		return 66;//4 2
	break;
	case 7583://(1,13) (9, 15)
		return 66;//4 2
	break;
	case 7584://(1,13) (10, 0)
		return 0;//0 0
	break;
	case 7585://(1,13) (10, 1)
		return 2;//0 2
	break;
	case 7586://(1,13) (10, 2)
		return 0;//0 0
	break;
	case 7587://(1,13) (10, 3)
		return 2;//0 2
	break;
	case 7588://(1,13) (10, 4)
		return 2;//0 2
	break;
	case 7589://(1,13) (10, 5)
		return 2;//0 2
	break;
	case 7590://(1,13) (10, 6)
		return 2;//0 2
	break;
	case 7591://(1,13) (10, 7)
		return 2;//0 2
	break;
	case 7592://(1,13) (10, 8)
		return 2;//0 2
	break;
	case 7593://(1,13) (10, 9)
		return 2;//0 2
	break;
	case 7594://(1,13) (10, 10)
		return 2;//0 2
	break;
	case 7595://(1,13) (10, 11)
		return 2;//0 2
	break;
	case 7596://(1,13) (10, 12)
		return 2;//0 2
	break;
	case 7597://(1,13) (10, 13)
		return 2;//0 2
	break;
	case 7598://(1,13) (10, 14)
		return 2;//0 2
	break;
	case 7599://(1,13) (10, 15)
		return 2;//0 2
	break;
	case 7600://(1,13) (11, 0)
		return 64;//4 0
	break;
	case 7601://(1,13) (11, 1)
		return 66;//4 2
	break;
	case 7602://(1,13) (11, 2)
		return 64;//4 0
	break;
	case 7603://(1,13) (11, 3)
		return 66;//4 2
	break;
	case 7604://(1,13) (11, 4)
		return 66;//4 2
	break;
	case 7605://(1,13) (11, 5)
		return 66;//4 2
	break;
	case 7606://(1,13) (11, 6)
		return 66;//4 2
	break;
	case 7607://(1,13) (11, 7)
		return 66;//4 2
	break;
	case 7608://(1,13) (11, 8)
		return 66;//4 2
	break;
	case 7609://(1,13) (11, 9)
		return 66;//4 2
	break;
	case 7610://(1,13) (11, 10)
		return 66;//4 2
	break;
	case 7611://(1,13) (11, 11)
		return 66;//4 2
	break;
	case 7612://(1,13) (11, 12)
		return 66;//4 2
	break;
	case 7613://(1,13) (11, 13)
		return 66;//4 2
	break;
	case 7614://(1,13) (11, 14)
		return 66;//4 2
	break;
	case 7615://(1,13) (11, 15)
		return 66;//4 2
	break;
	case 7616://(1,13) (12, 0)
		return 0;//0 0
	break;
	case 7617://(1,13) (12, 1)
		return 2;//0 2
	break;
	case 7618://(1,13) (12, 2)
		return 0;//0 0
	break;
	case 7619://(1,13) (12, 3)
		return 2;//0 2
	break;
	case 7620://(1,13) (12, 4)
		return 2;//0 2
	break;
	case 7621://(1,13) (12, 5)
		return 2;//0 2
	break;
	case 7622://(1,13) (12, 6)
		return 2;//0 2
	break;
	case 7623://(1,13) (12, 7)
		return 2;//0 2
	break;
	case 7624://(1,13) (12, 8)
		return 2;//0 2
	break;
	case 7625://(1,13) (12, 9)
		return 2;//0 2
	break;
	case 7626://(1,13) (12, 10)
		return 2;//0 2
	break;
	case 7627://(1,13) (12, 11)
		return 2;//0 2
	break;
	case 7628://(1,13) (12, 12)
		return 2;//0 2
	break;
	case 7629://(1,13) (12, 13)
		return 2;//0 2
	break;
	case 7630://(1,13) (12, 14)
		return 2;//0 2
	break;
	case 7631://(1,13) (12, 15)
		return 2;//0 2
	break;
	case 7632://(1,13) (13, 0)
		return 64;//4 0
	break;
	case 7633://(1,13) (13, 1)
		return 66;//4 2
	break;
	case 7634://(1,13) (13, 2)
		return 64;//4 0
	break;
	case 7635://(1,13) (13, 3)
		return 66;//4 2
	break;
	case 7636://(1,13) (13, 4)
		return 66;//4 2
	break;
	case 7637://(1,13) (13, 5)
		return 66;//4 2
	break;
	case 7638://(1,13) (13, 6)
		return 66;//4 2
	break;
	case 7639://(1,13) (13, 7)
		return 66;//4 2
	break;
	case 7640://(1,13) (13, 8)
		return 66;//4 2
	break;
	case 7641://(1,13) (13, 9)
		return 66;//4 2
	break;
	case 7642://(1,13) (13, 10)
		return 66;//4 2
	break;
	case 7643://(1,13) (13, 11)
		return 66;//4 2
	break;
	case 7644://(1,13) (13, 12)
		return 66;//4 2
	break;
	case 7645://(1,13) (13, 13)
		return 66;//4 2
	break;
	case 7646://(1,13) (13, 14)
		return 66;//4 2
	break;
	case 7647://(1,13) (13, 15)
		return 66;//4 2
	break;
	case 7648://(1,13) (14, 0)
		return 64;//4 0
	break;
	case 7649://(1,13) (14, 1)
		return 66;//4 2
	break;
	case 7650://(1,13) (14, 2)
		return 64;//4 0
	break;
	case 7651://(1,13) (14, 3)
		return 66;//4 2
	break;
	case 7652://(1,13) (14, 4)
		return 66;//4 2
	break;
	case 7653://(1,13) (14, 5)
		return 66;//4 2
	break;
	case 7654://(1,13) (14, 6)
		return 66;//4 2
	break;
	case 7655://(1,13) (14, 7)
		return 66;//4 2
	break;
	case 7656://(1,13) (14, 8)
		return 66;//4 2
	break;
	case 7657://(1,13) (14, 9)
		return 66;//4 2
	break;
	case 7658://(1,13) (14, 10)
		return 66;//4 2
	break;
	case 7659://(1,13) (14, 11)
		return 66;//4 2
	break;
	case 7660://(1,13) (14, 12)
		return 66;//4 2
	break;
	case 7661://(1,13) (14, 13)
		return 66;//4 2
	break;
	case 7662://(1,13) (14, 14)
		return 66;//4 2
	break;
	case 7663://(1,13) (14, 15)
		return 66;//4 2
	break;
	case 7664://(1,13) (15, 0)
		return 64;//4 0
	break;
	case 7665://(1,13) (15, 1)
		return 66;//4 2
	break;
	case 7666://(1,13) (15, 2)
		return 64;//4 0
	break;
	case 7667://(1,13) (15, 3)
		return 66;//4 2
	break;
	case 7668://(1,13) (15, 4)
		return 66;//4 2
	break;
	case 7669://(1,13) (15, 5)
		return 66;//4 2
	break;
	case 7670://(1,13) (15, 6)
		return 66;//4 2
	break;
	case 7671://(1,13) (15, 7)
		return 66;//4 2
	break;
	case 7672://(1,13) (15, 8)
		return 66;//4 2
	break;
	case 7673://(1,13) (15, 9)
		return 66;//4 2
	break;
	case 7674://(1,13) (15, 10)
		return 66;//4 2
	break;
	case 7675://(1,13) (15, 11)
		return 66;//4 2
	break;
	case 7676://(1,13) (15, 12)
		return 66;//4 2
	break;
	case 7677://(1,13) (15, 13)
		return 66;//4 2
	break;
	case 7678://(1,13) (15, 14)
		return 66;//4 2
	break;
	case 7679://(1,13) (15, 15)
		return 66;//4 2
	break;
	case 7680://(1,14) (0, 0)
		return 0;//0 0
	break;
	case 7681://(1,14) (0, 1)
		return 2;//0 2
	break;
	case 7682://(1,14) (0, 2)
		return 2;//0 2
	break;
	case 7683://(1,14) (0, 3)
		return 0;//0 0
	break;
	case 7684://(1,14) (0, 4)
		return 2;//0 2
	break;
	case 7685://(1,14) (0, 5)
		return 2;//0 2
	break;
	case 7686://(1,14) (0, 6)
		return 2;//0 2
	break;
	case 7687://(1,14) (0, 7)
		return 2;//0 2
	break;
	case 7688://(1,14) (0, 8)
		return 2;//0 2
	break;
	case 7689://(1,14) (0, 9)
		return 2;//0 2
	break;
	case 7690://(1,14) (0, 10)
		return 2;//0 2
	break;
	case 7691://(1,14) (0, 11)
		return 2;//0 2
	break;
	case 7692://(1,14) (0, 12)
		return 2;//0 2
	break;
	case 7693://(1,14) (0, 13)
		return 2;//0 2
	break;
	case 7694://(1,14) (0, 14)
		return 2;//0 2
	break;
	case 7695://(1,14) (0, 15)
		return 2;//0 2
	break;
	case 7696://(1,14) (1, 0)
		return 64;//4 0
	break;
	case 7697://(1,14) (1, 1)
		return 66;//4 2
	break;
	case 7698://(1,14) (1, 2)
		return 66;//4 2
	break;
	case 7699://(1,14) (1, 3)
		return 64;//4 0
	break;
	case 7700://(1,14) (1, 4)
		return 66;//4 2
	break;
	case 7701://(1,14) (1, 5)
		return 66;//4 2
	break;
	case 7702://(1,14) (1, 6)
		return 66;//4 2
	break;
	case 7703://(1,14) (1, 7)
		return 66;//4 2
	break;
	case 7704://(1,14) (1, 8)
		return 66;//4 2
	break;
	case 7705://(1,14) (1, 9)
		return 66;//4 2
	break;
	case 7706://(1,14) (1, 10)
		return 66;//4 2
	break;
	case 7707://(1,14) (1, 11)
		return 66;//4 2
	break;
	case 7708://(1,14) (1, 12)
		return 66;//4 2
	break;
	case 7709://(1,14) (1, 13)
		return 66;//4 2
	break;
	case 7710://(1,14) (1, 14)
		return 66;//4 2
	break;
	case 7711://(1,14) (1, 15)
		return 66;//4 2
	break;
	case 7712://(1,14) (2, 0)
		return 0;//0 0
	break;
	case 7713://(1,14) (2, 1)
		return 2;//0 2
	break;
	case 7714://(1,14) (2, 2)
		return 2;//0 2
	break;
	case 7715://(1,14) (2, 3)
		return 0;//0 0
	break;
	case 7716://(1,14) (2, 4)
		return 2;//0 2
	break;
	case 7717://(1,14) (2, 5)
		return 2;//0 2
	break;
	case 7718://(1,14) (2, 6)
		return 2;//0 2
	break;
	case 7719://(1,14) (2, 7)
		return 2;//0 2
	break;
	case 7720://(1,14) (2, 8)
		return 2;//0 2
	break;
	case 7721://(1,14) (2, 9)
		return 2;//0 2
	break;
	case 7722://(1,14) (2, 10)
		return 2;//0 2
	break;
	case 7723://(1,14) (2, 11)
		return 2;//0 2
	break;
	case 7724://(1,14) (2, 12)
		return 2;//0 2
	break;
	case 7725://(1,14) (2, 13)
		return 2;//0 2
	break;
	case 7726://(1,14) (2, 14)
		return 2;//0 2
	break;
	case 7727://(1,14) (2, 15)
		return 2;//0 2
	break;
	case 7728://(1,14) (3, 0)
		return 0;//0 0
	break;
	case 7729://(1,14) (3, 1)
		return 2;//0 2
	break;
	case 7730://(1,14) (3, 2)
		return 2;//0 2
	break;
	case 7731://(1,14) (3, 3)
		return 0;//0 0
	break;
	case 7732://(1,14) (3, 4)
		return 2;//0 2
	break;
	case 7733://(1,14) (3, 5)
		return 2;//0 2
	break;
	case 7734://(1,14) (3, 6)
		return 2;//0 2
	break;
	case 7735://(1,14) (3, 7)
		return 2;//0 2
	break;
	case 7736://(1,14) (3, 8)
		return 2;//0 2
	break;
	case 7737://(1,14) (3, 9)
		return 2;//0 2
	break;
	case 7738://(1,14) (3, 10)
		return 2;//0 2
	break;
	case 7739://(1,14) (3, 11)
		return 2;//0 2
	break;
	case 7740://(1,14) (3, 12)
		return 2;//0 2
	break;
	case 7741://(1,14) (3, 13)
		return 2;//0 2
	break;
	case 7742://(1,14) (3, 14)
		return 2;//0 2
	break;
	case 7743://(1,14) (3, 15)
		return 2;//0 2
	break;
	case 7744://(1,14) (4, 0)
		return 0;//0 0
	break;
	case 7745://(1,14) (4, 1)
		return 2;//0 2
	break;
	case 7746://(1,14) (4, 2)
		return 2;//0 2
	break;
	case 7747://(1,14) (4, 3)
		return 0;//0 0
	break;
	case 7748://(1,14) (4, 4)
		return 2;//0 2
	break;
	case 7749://(1,14) (4, 5)
		return 2;//0 2
	break;
	case 7750://(1,14) (4, 6)
		return 2;//0 2
	break;
	case 7751://(1,14) (4, 7)
		return 2;//0 2
	break;
	case 7752://(1,14) (4, 8)
		return 2;//0 2
	break;
	case 7753://(1,14) (4, 9)
		return 2;//0 2
	break;
	case 7754://(1,14) (4, 10)
		return 2;//0 2
	break;
	case 7755://(1,14) (4, 11)
		return 2;//0 2
	break;
	case 7756://(1,14) (4, 12)
		return 2;//0 2
	break;
	case 7757://(1,14) (4, 13)
		return 2;//0 2
	break;
	case 7758://(1,14) (4, 14)
		return 2;//0 2
	break;
	case 7759://(1,14) (4, 15)
		return 2;//0 2
	break;
	case 7760://(1,14) (5, 0)
		return 0;//0 0
	break;
	case 7761://(1,14) (5, 1)
		return 2;//0 2
	break;
	case 7762://(1,14) (5, 2)
		return 2;//0 2
	break;
	case 7763://(1,14) (5, 3)
		return 0;//0 0
	break;
	case 7764://(1,14) (5, 4)
		return 2;//0 2
	break;
	case 7765://(1,14) (5, 5)
		return 2;//0 2
	break;
	case 7766://(1,14) (5, 6)
		return 2;//0 2
	break;
	case 7767://(1,14) (5, 7)
		return 2;//0 2
	break;
	case 7768://(1,14) (5, 8)
		return 2;//0 2
	break;
	case 7769://(1,14) (5, 9)
		return 2;//0 2
	break;
	case 7770://(1,14) (5, 10)
		return 2;//0 2
	break;
	case 7771://(1,14) (5, 11)
		return 2;//0 2
	break;
	case 7772://(1,14) (5, 12)
		return 2;//0 2
	break;
	case 7773://(1,14) (5, 13)
		return 2;//0 2
	break;
	case 7774://(1,14) (5, 14)
		return 2;//0 2
	break;
	case 7775://(1,14) (5, 15)
		return 2;//0 2
	break;
	case 7776://(1,14) (6, 0)
		return 64;//4 0
	break;
	case 7777://(1,14) (6, 1)
		return 66;//4 2
	break;
	case 7778://(1,14) (6, 2)
		return 66;//4 2
	break;
	case 7779://(1,14) (6, 3)
		return 64;//4 0
	break;
	case 7780://(1,14) (6, 4)
		return 66;//4 2
	break;
	case 7781://(1,14) (6, 5)
		return 66;//4 2
	break;
	case 7782://(1,14) (6, 6)
		return 66;//4 2
	break;
	case 7783://(1,14) (6, 7)
		return 66;//4 2
	break;
	case 7784://(1,14) (6, 8)
		return 66;//4 2
	break;
	case 7785://(1,14) (6, 9)
		return 66;//4 2
	break;
	case 7786://(1,14) (6, 10)
		return 66;//4 2
	break;
	case 7787://(1,14) (6, 11)
		return 66;//4 2
	break;
	case 7788://(1,14) (6, 12)
		return 66;//4 2
	break;
	case 7789://(1,14) (6, 13)
		return 66;//4 2
	break;
	case 7790://(1,14) (6, 14)
		return 66;//4 2
	break;
	case 7791://(1,14) (6, 15)
		return 66;//4 2
	break;
	case 7792://(1,14) (7, 0)
		return 0;//0 0
	break;
	case 7793://(1,14) (7, 1)
		return 2;//0 2
	break;
	case 7794://(1,14) (7, 2)
		return 2;//0 2
	break;
	case 7795://(1,14) (7, 3)
		return 0;//0 0
	break;
	case 7796://(1,14) (7, 4)
		return 2;//0 2
	break;
	case 7797://(1,14) (7, 5)
		return 2;//0 2
	break;
	case 7798://(1,14) (7, 6)
		return 2;//0 2
	break;
	case 7799://(1,14) (7, 7)
		return 2;//0 2
	break;
	case 7800://(1,14) (7, 8)
		return 2;//0 2
	break;
	case 7801://(1,14) (7, 9)
		return 2;//0 2
	break;
	case 7802://(1,14) (7, 10)
		return 2;//0 2
	break;
	case 7803://(1,14) (7, 11)
		return 2;//0 2
	break;
	case 7804://(1,14) (7, 12)
		return 2;//0 2
	break;
	case 7805://(1,14) (7, 13)
		return 2;//0 2
	break;
	case 7806://(1,14) (7, 14)
		return 2;//0 2
	break;
	case 7807://(1,14) (7, 15)
		return 2;//0 2
	break;
	case 7808://(1,14) (8, 0)
		return 64;//4 0
	break;
	case 7809://(1,14) (8, 1)
		return 66;//4 2
	break;
	case 7810://(1,14) (8, 2)
		return 66;//4 2
	break;
	case 7811://(1,14) (8, 3)
		return 64;//4 0
	break;
	case 7812://(1,14) (8, 4)
		return 66;//4 2
	break;
	case 7813://(1,14) (8, 5)
		return 66;//4 2
	break;
	case 7814://(1,14) (8, 6)
		return 66;//4 2
	break;
	case 7815://(1,14) (8, 7)
		return 66;//4 2
	break;
	case 7816://(1,14) (8, 8)
		return 66;//4 2
	break;
	case 7817://(1,14) (8, 9)
		return 66;//4 2
	break;
	case 7818://(1,14) (8, 10)
		return 66;//4 2
	break;
	case 7819://(1,14) (8, 11)
		return 66;//4 2
	break;
	case 7820://(1,14) (8, 12)
		return 66;//4 2
	break;
	case 7821://(1,14) (8, 13)
		return 66;//4 2
	break;
	case 7822://(1,14) (8, 14)
		return 66;//4 2
	break;
	case 7823://(1,14) (8, 15)
		return 66;//4 2
	break;
	case 7824://(1,14) (9, 0)
		return 64;//4 0
	break;
	case 7825://(1,14) (9, 1)
		return 66;//4 2
	break;
	case 7826://(1,14) (9, 2)
		return 66;//4 2
	break;
	case 7827://(1,14) (9, 3)
		return 64;//4 0
	break;
	case 7828://(1,14) (9, 4)
		return 66;//4 2
	break;
	case 7829://(1,14) (9, 5)
		return 66;//4 2
	break;
	case 7830://(1,14) (9, 6)
		return 66;//4 2
	break;
	case 7831://(1,14) (9, 7)
		return 66;//4 2
	break;
	case 7832://(1,14) (9, 8)
		return 66;//4 2
	break;
	case 7833://(1,14) (9, 9)
		return 66;//4 2
	break;
	case 7834://(1,14) (9, 10)
		return 66;//4 2
	break;
	case 7835://(1,14) (9, 11)
		return 66;//4 2
	break;
	case 7836://(1,14) (9, 12)
		return 66;//4 2
	break;
	case 7837://(1,14) (9, 13)
		return 66;//4 2
	break;
	case 7838://(1,14) (9, 14)
		return 66;//4 2
	break;
	case 7839://(1,14) (9, 15)
		return 66;//4 2
	break;
	case 7840://(1,14) (10, 0)
		return 0;//0 0
	break;
	case 7841://(1,14) (10, 1)
		return 2;//0 2
	break;
	case 7842://(1,14) (10, 2)
		return 2;//0 2
	break;
	case 7843://(1,14) (10, 3)
		return 0;//0 0
	break;
	case 7844://(1,14) (10, 4)
		return 2;//0 2
	break;
	case 7845://(1,14) (10, 5)
		return 2;//0 2
	break;
	case 7846://(1,14) (10, 6)
		return 2;//0 2
	break;
	case 7847://(1,14) (10, 7)
		return 2;//0 2
	break;
	case 7848://(1,14) (10, 8)
		return 2;//0 2
	break;
	case 7849://(1,14) (10, 9)
		return 2;//0 2
	break;
	case 7850://(1,14) (10, 10)
		return 2;//0 2
	break;
	case 7851://(1,14) (10, 11)
		return 2;//0 2
	break;
	case 7852://(1,14) (10, 12)
		return 2;//0 2
	break;
	case 7853://(1,14) (10, 13)
		return 2;//0 2
	break;
	case 7854://(1,14) (10, 14)
		return 2;//0 2
	break;
	case 7855://(1,14) (10, 15)
		return 2;//0 2
	break;
	case 7856://(1,14) (11, 0)
		return 64;//4 0
	break;
	case 7857://(1,14) (11, 1)
		return 66;//4 2
	break;
	case 7858://(1,14) (11, 2)
		return 66;//4 2
	break;
	case 7859://(1,14) (11, 3)
		return 64;//4 0
	break;
	case 7860://(1,14) (11, 4)
		return 66;//4 2
	break;
	case 7861://(1,14) (11, 5)
		return 66;//4 2
	break;
	case 7862://(1,14) (11, 6)
		return 66;//4 2
	break;
	case 7863://(1,14) (11, 7)
		return 66;//4 2
	break;
	case 7864://(1,14) (11, 8)
		return 66;//4 2
	break;
	case 7865://(1,14) (11, 9)
		return 66;//4 2
	break;
	case 7866://(1,14) (11, 10)
		return 66;//4 2
	break;
	case 7867://(1,14) (11, 11)
		return 66;//4 2
	break;
	case 7868://(1,14) (11, 12)
		return 66;//4 2
	break;
	case 7869://(1,14) (11, 13)
		return 66;//4 2
	break;
	case 7870://(1,14) (11, 14)
		return 66;//4 2
	break;
	case 7871://(1,14) (11, 15)
		return 66;//4 2
	break;
	case 7872://(1,14) (12, 0)
		return 0;//0 0
	break;
	case 7873://(1,14) (12, 1)
		return 2;//0 2
	break;
	case 7874://(1,14) (12, 2)
		return 2;//0 2
	break;
	case 7875://(1,14) (12, 3)
		return 0;//0 0
	break;
	case 7876://(1,14) (12, 4)
		return 2;//0 2
	break;
	case 7877://(1,14) (12, 5)
		return 2;//0 2
	break;
	case 7878://(1,14) (12, 6)
		return 2;//0 2
	break;
	case 7879://(1,14) (12, 7)
		return 2;//0 2
	break;
	case 7880://(1,14) (12, 8)
		return 2;//0 2
	break;
	case 7881://(1,14) (12, 9)
		return 2;//0 2
	break;
	case 7882://(1,14) (12, 10)
		return 2;//0 2
	break;
	case 7883://(1,14) (12, 11)
		return 2;//0 2
	break;
	case 7884://(1,14) (12, 12)
		return 2;//0 2
	break;
	case 7885://(1,14) (12, 13)
		return 2;//0 2
	break;
	case 7886://(1,14) (12, 14)
		return 2;//0 2
	break;
	case 7887://(1,14) (12, 15)
		return 2;//0 2
	break;
	case 7888://(1,14) (13, 0)
		return 64;//4 0
	break;
	case 7889://(1,14) (13, 1)
		return 66;//4 2
	break;
	case 7890://(1,14) (13, 2)
		return 66;//4 2
	break;
	case 7891://(1,14) (13, 3)
		return 64;//4 0
	break;
	case 7892://(1,14) (13, 4)
		return 66;//4 2
	break;
	case 7893://(1,14) (13, 5)
		return 66;//4 2
	break;
	case 7894://(1,14) (13, 6)
		return 66;//4 2
	break;
	case 7895://(1,14) (13, 7)
		return 66;//4 2
	break;
	case 7896://(1,14) (13, 8)
		return 66;//4 2
	break;
	case 7897://(1,14) (13, 9)
		return 66;//4 2
	break;
	case 7898://(1,14) (13, 10)
		return 66;//4 2
	break;
	case 7899://(1,14) (13, 11)
		return 66;//4 2
	break;
	case 7900://(1,14) (13, 12)
		return 66;//4 2
	break;
	case 7901://(1,14) (13, 13)
		return 66;//4 2
	break;
	case 7902://(1,14) (13, 14)
		return 66;//4 2
	break;
	case 7903://(1,14) (13, 15)
		return 66;//4 2
	break;
	case 7904://(1,14) (14, 0)
		return 64;//4 0
	break;
	case 7905://(1,14) (14, 1)
		return 66;//4 2
	break;
	case 7906://(1,14) (14, 2)
		return 66;//4 2
	break;
	case 7907://(1,14) (14, 3)
		return 64;//4 0
	break;
	case 7908://(1,14) (14, 4)
		return 66;//4 2
	break;
	case 7909://(1,14) (14, 5)
		return 66;//4 2
	break;
	case 7910://(1,14) (14, 6)
		return 66;//4 2
	break;
	case 7911://(1,14) (14, 7)
		return 66;//4 2
	break;
	case 7912://(1,14) (14, 8)
		return 66;//4 2
	break;
	case 7913://(1,14) (14, 9)
		return 66;//4 2
	break;
	case 7914://(1,14) (14, 10)
		return 66;//4 2
	break;
	case 7915://(1,14) (14, 11)
		return 66;//4 2
	break;
	case 7916://(1,14) (14, 12)
		return 66;//4 2
	break;
	case 7917://(1,14) (14, 13)
		return 66;//4 2
	break;
	case 7918://(1,14) (14, 14)
		return 66;//4 2
	break;
	case 7919://(1,14) (14, 15)
		return 66;//4 2
	break;
	case 7920://(1,14) (15, 0)
		return 64;//4 0
	break;
	case 7921://(1,14) (15, 1)
		return 66;//4 2
	break;
	case 7922://(1,14) (15, 2)
		return 66;//4 2
	break;
	case 7923://(1,14) (15, 3)
		return 64;//4 0
	break;
	case 7924://(1,14) (15, 4)
		return 66;//4 2
	break;
	case 7925://(1,14) (15, 5)
		return 66;//4 2
	break;
	case 7926://(1,14) (15, 6)
		return 66;//4 2
	break;
	case 7927://(1,14) (15, 7)
		return 66;//4 2
	break;
	case 7928://(1,14) (15, 8)
		return 66;//4 2
	break;
	case 7929://(1,14) (15, 9)
		return 66;//4 2
	break;
	case 7930://(1,14) (15, 10)
		return 66;//4 2
	break;
	case 7931://(1,14) (15, 11)
		return 66;//4 2
	break;
	case 7932://(1,14) (15, 12)
		return 66;//4 2
	break;
	case 7933://(1,14) (15, 13)
		return 66;//4 2
	break;
	case 7934://(1,14) (15, 14)
		return 66;//4 2
	break;
	case 7935://(1,14) (15, 15)
		return 66;//4 2
	break;
	case 7936://(1,15) (0, 0)
		return 1;//0 1
	break;
	case 7937://(1,15) (0, 1)
		return 1;//0 1
	break;
	case 7938://(1,15) (0, 2)
		return 1;//0 1
	break;
	case 7939://(1,15) (0, 3)
		return 1;//0 1
	break;
	case 7940://(1,15) (0, 4)
		return 1;//0 1
	break;
	case 7941://(1,15) (0, 5)
		return 1;//0 1
	break;
	case 7942://(1,15) (0, 6)
		return 1;//0 1
	break;
	case 7943://(1,15) (0, 7)
		return 1;//0 1
	break;
	case 7944://(1,15) (0, 8)
		return 1;//0 1
	break;
	case 7945://(1,15) (0, 9)
		return 1;//0 1
	break;
	case 7946://(1,15) (0, 10)
		return 1;//0 1
	break;
	case 7947://(1,15) (0, 11)
		return 1;//0 1
	break;
	case 7948://(1,15) (0, 12)
		return 1;//0 1
	break;
	case 7949://(1,15) (0, 13)
		return 1;//0 1
	break;
	case 7950://(1,15) (0, 14)
		return 1;//0 1
	break;
	case 7951://(1,15) (0, 15)
		return 1;//0 1
	break;
	case 7952://(1,15) (1, 0)
		return 65;//4 1
	break;
	case 7953://(1,15) (1, 1)
		return 65;//4 1
	break;
	case 7954://(1,15) (1, 2)
		return 65;//4 1
	break;
	case 7955://(1,15) (1, 3)
		return 65;//4 1
	break;
	case 7956://(1,15) (1, 4)
		return 65;//4 1
	break;
	case 7957://(1,15) (1, 5)
		return 65;//4 1
	break;
	case 7958://(1,15) (1, 6)
		return 65;//4 1
	break;
	case 7959://(1,15) (1, 7)
		return 65;//4 1
	break;
	case 7960://(1,15) (1, 8)
		return 65;//4 1
	break;
	case 7961://(1,15) (1, 9)
		return 65;//4 1
	break;
	case 7962://(1,15) (1, 10)
		return 65;//4 1
	break;
	case 7963://(1,15) (1, 11)
		return 65;//4 1
	break;
	case 7964://(1,15) (1, 12)
		return 65;//4 1
	break;
	case 7965://(1,15) (1, 13)
		return 65;//4 1
	break;
	case 7966://(1,15) (1, 14)
		return 65;//4 1
	break;
	case 7967://(1,15) (1, 15)
		return 65;//4 1
	break;
	case 7968://(1,15) (2, 0)
		return 1;//0 1
	break;
	case 7969://(1,15) (2, 1)
		return 1;//0 1
	break;
	case 7970://(1,15) (2, 2)
		return 1;//0 1
	break;
	case 7971://(1,15) (2, 3)
		return 1;//0 1
	break;
	case 7972://(1,15) (2, 4)
		return 1;//0 1
	break;
	case 7973://(1,15) (2, 5)
		return 1;//0 1
	break;
	case 7974://(1,15) (2, 6)
		return 1;//0 1
	break;
	case 7975://(1,15) (2, 7)
		return 1;//0 1
	break;
	case 7976://(1,15) (2, 8)
		return 1;//0 1
	break;
	case 7977://(1,15) (2, 9)
		return 1;//0 1
	break;
	case 7978://(1,15) (2, 10)
		return 1;//0 1
	break;
	case 7979://(1,15) (2, 11)
		return 1;//0 1
	break;
	case 7980://(1,15) (2, 12)
		return 1;//0 1
	break;
	case 7981://(1,15) (2, 13)
		return 1;//0 1
	break;
	case 7982://(1,15) (2, 14)
		return 1;//0 1
	break;
	case 7983://(1,15) (2, 15)
		return 1;//0 1
	break;
	case 7984://(1,15) (3, 0)
		return 1;//0 1
	break;
	case 7985://(1,15) (3, 1)
		return 1;//0 1
	break;
	case 7986://(1,15) (3, 2)
		return 1;//0 1
	break;
	case 7987://(1,15) (3, 3)
		return 1;//0 1
	break;
	case 7988://(1,15) (3, 4)
		return 1;//0 1
	break;
	case 7989://(1,15) (3, 5)
		return 1;//0 1
	break;
	case 7990://(1,15) (3, 6)
		return 1;//0 1
	break;
	case 7991://(1,15) (3, 7)
		return 1;//0 1
	break;
	case 7992://(1,15) (3, 8)
		return 1;//0 1
	break;
	case 7993://(1,15) (3, 9)
		return 1;//0 1
	break;
	case 7994://(1,15) (3, 10)
		return 1;//0 1
	break;
	case 7995://(1,15) (3, 11)
		return 1;//0 1
	break;
	case 7996://(1,15) (3, 12)
		return 1;//0 1
	break;
	case 7997://(1,15) (3, 13)
		return 1;//0 1
	break;
	case 7998://(1,15) (3, 14)
		return 1;//0 1
	break;
	case 7999://(1,15) (3, 15)
		return 1;//0 1
	break;
	case 8000://(1,15) (4, 0)
		return 1;//0 1
	break;
	case 8001://(1,15) (4, 1)
		return 1;//0 1
	break;
	case 8002://(1,15) (4, 2)
		return 1;//0 1
	break;
	case 8003://(1,15) (4, 3)
		return 1;//0 1
	break;
	case 8004://(1,15) (4, 4)
		return 1;//0 1
	break;
	case 8005://(1,15) (4, 5)
		return 1;//0 1
	break;
	case 8006://(1,15) (4, 6)
		return 1;//0 1
	break;
	case 8007://(1,15) (4, 7)
		return 1;//0 1
	break;
	case 8008://(1,15) (4, 8)
		return 1;//0 1
	break;
	case 8009://(1,15) (4, 9)
		return 1;//0 1
	break;
	case 8010://(1,15) (4, 10)
		return 1;//0 1
	break;
	case 8011://(1,15) (4, 11)
		return 1;//0 1
	break;
	case 8012://(1,15) (4, 12)
		return 1;//0 1
	break;
	case 8013://(1,15) (4, 13)
		return 1;//0 1
	break;
	case 8014://(1,15) (4, 14)
		return 1;//0 1
	break;
	case 8015://(1,15) (4, 15)
		return 1;//0 1
	break;
	case 8016://(1,15) (5, 0)
		return 1;//0 1
	break;
	case 8017://(1,15) (5, 1)
		return 1;//0 1
	break;
	case 8018://(1,15) (5, 2)
		return 1;//0 1
	break;
	case 8019://(1,15) (5, 3)
		return 1;//0 1
	break;
	case 8020://(1,15) (5, 4)
		return 1;//0 1
	break;
	case 8021://(1,15) (5, 5)
		return 1;//0 1
	break;
	case 8022://(1,15) (5, 6)
		return 1;//0 1
	break;
	case 8023://(1,15) (5, 7)
		return 1;//0 1
	break;
	case 8024://(1,15) (5, 8)
		return 1;//0 1
	break;
	case 8025://(1,15) (5, 9)
		return 1;//0 1
	break;
	case 8026://(1,15) (5, 10)
		return 1;//0 1
	break;
	case 8027://(1,15) (5, 11)
		return 1;//0 1
	break;
	case 8028://(1,15) (5, 12)
		return 1;//0 1
	break;
	case 8029://(1,15) (5, 13)
		return 1;//0 1
	break;
	case 8030://(1,15) (5, 14)
		return 1;//0 1
	break;
	case 8031://(1,15) (5, 15)
		return 1;//0 1
	break;
	case 8032://(1,15) (6, 0)
		return 65;//4 1
	break;
	case 8033://(1,15) (6, 1)
		return 65;//4 1
	break;
	case 8034://(1,15) (6, 2)
		return 65;//4 1
	break;
	case 8035://(1,15) (6, 3)
		return 65;//4 1
	break;
	case 8036://(1,15) (6, 4)
		return 65;//4 1
	break;
	case 8037://(1,15) (6, 5)
		return 65;//4 1
	break;
	case 8038://(1,15) (6, 6)
		return 65;//4 1
	break;
	case 8039://(1,15) (6, 7)
		return 65;//4 1
	break;
	case 8040://(1,15) (6, 8)
		return 65;//4 1
	break;
	case 8041://(1,15) (6, 9)
		return 65;//4 1
	break;
	case 8042://(1,15) (6, 10)
		return 65;//4 1
	break;
	case 8043://(1,15) (6, 11)
		return 65;//4 1
	break;
	case 8044://(1,15) (6, 12)
		return 65;//4 1
	break;
	case 8045://(1,15) (6, 13)
		return 65;//4 1
	break;
	case 8046://(1,15) (6, 14)
		return 65;//4 1
	break;
	case 8047://(1,15) (6, 15)
		return 65;//4 1
	break;
	case 8048://(1,15) (7, 0)
		return 1;//0 1
	break;
	case 8049://(1,15) (7, 1)
		return 1;//0 1
	break;
	case 8050://(1,15) (7, 2)
		return 1;//0 1
	break;
	case 8051://(1,15) (7, 3)
		return 1;//0 1
	break;
	case 8052://(1,15) (7, 4)
		return 1;//0 1
	break;
	case 8053://(1,15) (7, 5)
		return 1;//0 1
	break;
	case 8054://(1,15) (7, 6)
		return 1;//0 1
	break;
	case 8055://(1,15) (7, 7)
		return 1;//0 1
	break;
	case 8056://(1,15) (7, 8)
		return 1;//0 1
	break;
	case 8057://(1,15) (7, 9)
		return 1;//0 1
	break;
	case 8058://(1,15) (7, 10)
		return 1;//0 1
	break;
	case 8059://(1,15) (7, 11)
		return 1;//0 1
	break;
	case 8060://(1,15) (7, 12)
		return 1;//0 1
	break;
	case 8061://(1,15) (7, 13)
		return 1;//0 1
	break;
	case 8062://(1,15) (7, 14)
		return 1;//0 1
	break;
	case 8063://(1,15) (7, 15)
		return 1;//0 1
	break;
	case 8064://(1,15) (8, 0)
		return 65;//4 1
	break;
	case 8065://(1,15) (8, 1)
		return 65;//4 1
	break;
	case 8066://(1,15) (8, 2)
		return 65;//4 1
	break;
	case 8067://(1,15) (8, 3)
		return 65;//4 1
	break;
	case 8068://(1,15) (8, 4)
		return 65;//4 1
	break;
	case 8069://(1,15) (8, 5)
		return 65;//4 1
	break;
	case 8070://(1,15) (8, 6)
		return 65;//4 1
	break;
	case 8071://(1,15) (8, 7)
		return 65;//4 1
	break;
	case 8072://(1,15) (8, 8)
		return 65;//4 1
	break;
	case 8073://(1,15) (8, 9)
		return 65;//4 1
	break;
	case 8074://(1,15) (8, 10)
		return 65;//4 1
	break;
	case 8075://(1,15) (8, 11)
		return 65;//4 1
	break;
	case 8076://(1,15) (8, 12)
		return 65;//4 1
	break;
	case 8077://(1,15) (8, 13)
		return 65;//4 1
	break;
	case 8078://(1,15) (8, 14)
		return 65;//4 1
	break;
	case 8079://(1,15) (8, 15)
		return 65;//4 1
	break;
	case 8080://(1,15) (9, 0)
		return 65;//4 1
	break;
	case 8081://(1,15) (9, 1)
		return 65;//4 1
	break;
	case 8082://(1,15) (9, 2)
		return 65;//4 1
	break;
	case 8083://(1,15) (9, 3)
		return 65;//4 1
	break;
	case 8084://(1,15) (9, 4)
		return 65;//4 1
	break;
	case 8085://(1,15) (9, 5)
		return 65;//4 1
	break;
	case 8086://(1,15) (9, 6)
		return 65;//4 1
	break;
	case 8087://(1,15) (9, 7)
		return 65;//4 1
	break;
	case 8088://(1,15) (9, 8)
		return 65;//4 1
	break;
	case 8089://(1,15) (9, 9)
		return 65;//4 1
	break;
	case 8090://(1,15) (9, 10)
		return 65;//4 1
	break;
	case 8091://(1,15) (9, 11)
		return 65;//4 1
	break;
	case 8092://(1,15) (9, 12)
		return 65;//4 1
	break;
	case 8093://(1,15) (9, 13)
		return 65;//4 1
	break;
	case 8094://(1,15) (9, 14)
		return 65;//4 1
	break;
	case 8095://(1,15) (9, 15)
		return 65;//4 1
	break;
	case 8096://(1,15) (10, 0)
		return 1;//0 1
	break;
	case 8097://(1,15) (10, 1)
		return 1;//0 1
	break;
	case 8098://(1,15) (10, 2)
		return 1;//0 1
	break;
	case 8099://(1,15) (10, 3)
		return 1;//0 1
	break;
	case 8100://(1,15) (10, 4)
		return 1;//0 1
	break;
	case 8101://(1,15) (10, 5)
		return 1;//0 1
	break;
	case 8102://(1,15) (10, 6)
		return 1;//0 1
	break;
	case 8103://(1,15) (10, 7)
		return 1;//0 1
	break;
	case 8104://(1,15) (10, 8)
		return 1;//0 1
	break;
	case 8105://(1,15) (10, 9)
		return 1;//0 1
	break;
	case 8106://(1,15) (10, 10)
		return 1;//0 1
	break;
	case 8107://(1,15) (10, 11)
		return 1;//0 1
	break;
	case 8108://(1,15) (10, 12)
		return 1;//0 1
	break;
	case 8109://(1,15) (10, 13)
		return 1;//0 1
	break;
	case 8110://(1,15) (10, 14)
		return 1;//0 1
	break;
	case 8111://(1,15) (10, 15)
		return 1;//0 1
	break;
	case 8112://(1,15) (11, 0)
		return 65;//4 1
	break;
	case 8113://(1,15) (11, 1)
		return 65;//4 1
	break;
	case 8114://(1,15) (11, 2)
		return 65;//4 1
	break;
	case 8115://(1,15) (11, 3)
		return 65;//4 1
	break;
	case 8116://(1,15) (11, 4)
		return 65;//4 1
	break;
	case 8117://(1,15) (11, 5)
		return 65;//4 1
	break;
	case 8118://(1,15) (11, 6)
		return 65;//4 1
	break;
	case 8119://(1,15) (11, 7)
		return 65;//4 1
	break;
	case 8120://(1,15) (11, 8)
		return 65;//4 1
	break;
	case 8121://(1,15) (11, 9)
		return 65;//4 1
	break;
	case 8122://(1,15) (11, 10)
		return 65;//4 1
	break;
	case 8123://(1,15) (11, 11)
		return 65;//4 1
	break;
	case 8124://(1,15) (11, 12)
		return 65;//4 1
	break;
	case 8125://(1,15) (11, 13)
		return 65;//4 1
	break;
	case 8126://(1,15) (11, 14)
		return 65;//4 1
	break;
	case 8127://(1,15) (11, 15)
		return 65;//4 1
	break;
	case 8128://(1,15) (12, 0)
		return 1;//0 1
	break;
	case 8129://(1,15) (12, 1)
		return 1;//0 1
	break;
	case 8130://(1,15) (12, 2)
		return 1;//0 1
	break;
	case 8131://(1,15) (12, 3)
		return 1;//0 1
	break;
	case 8132://(1,15) (12, 4)
		return 1;//0 1
	break;
	case 8133://(1,15) (12, 5)
		return 1;//0 1
	break;
	case 8134://(1,15) (12, 6)
		return 1;//0 1
	break;
	case 8135://(1,15) (12, 7)
		return 1;//0 1
	break;
	case 8136://(1,15) (12, 8)
		return 1;//0 1
	break;
	case 8137://(1,15) (12, 9)
		return 1;//0 1
	break;
	case 8138://(1,15) (12, 10)
		return 1;//0 1
	break;
	case 8139://(1,15) (12, 11)
		return 1;//0 1
	break;
	case 8140://(1,15) (12, 12)
		return 1;//0 1
	break;
	case 8141://(1,15) (12, 13)
		return 1;//0 1
	break;
	case 8142://(1,15) (12, 14)
		return 1;//0 1
	break;
	case 8143://(1,15) (12, 15)
		return 1;//0 1
	break;
	case 8144://(1,15) (13, 0)
		return 65;//4 1
	break;
	case 8145://(1,15) (13, 1)
		return 65;//4 1
	break;
	case 8146://(1,15) (13, 2)
		return 65;//4 1
	break;
	case 8147://(1,15) (13, 3)
		return 65;//4 1
	break;
	case 8148://(1,15) (13, 4)
		return 65;//4 1
	break;
	case 8149://(1,15) (13, 5)
		return 65;//4 1
	break;
	case 8150://(1,15) (13, 6)
		return 65;//4 1
	break;
	case 8151://(1,15) (13, 7)
		return 65;//4 1
	break;
	case 8152://(1,15) (13, 8)
		return 65;//4 1
	break;
	case 8153://(1,15) (13, 9)
		return 65;//4 1
	break;
	case 8154://(1,15) (13, 10)
		return 65;//4 1
	break;
	case 8155://(1,15) (13, 11)
		return 65;//4 1
	break;
	case 8156://(1,15) (13, 12)
		return 65;//4 1
	break;
	case 8157://(1,15) (13, 13)
		return 65;//4 1
	break;
	case 8158://(1,15) (13, 14)
		return 65;//4 1
	break;
	case 8159://(1,15) (13, 15)
		return 65;//4 1
	break;
	case 8160://(1,15) (14, 0)
		return 65;//4 1
	break;
	case 8161://(1,15) (14, 1)
		return 65;//4 1
	break;
	case 8162://(1,15) (14, 2)
		return 65;//4 1
	break;
	case 8163://(1,15) (14, 3)
		return 65;//4 1
	break;
	case 8164://(1,15) (14, 4)
		return 65;//4 1
	break;
	case 8165://(1,15) (14, 5)
		return 65;//4 1
	break;
	case 8166://(1,15) (14, 6)
		return 65;//4 1
	break;
	case 8167://(1,15) (14, 7)
		return 65;//4 1
	break;
	case 8168://(1,15) (14, 8)
		return 65;//4 1
	break;
	case 8169://(1,15) (14, 9)
		return 65;//4 1
	break;
	case 8170://(1,15) (14, 10)
		return 65;//4 1
	break;
	case 8171://(1,15) (14, 11)
		return 65;//4 1
	break;
	case 8172://(1,15) (14, 12)
		return 65;//4 1
	break;
	case 8173://(1,15) (14, 13)
		return 65;//4 1
	break;
	case 8174://(1,15) (14, 14)
		return 65;//4 1
	break;
	case 8175://(1,15) (14, 15)
		return 65;//4 1
	break;
	case 8176://(1,15) (15, 0)
		return 65;//4 1
	break;
	case 8177://(1,15) (15, 1)
		return 65;//4 1
	break;
	case 8178://(1,15) (15, 2)
		return 65;//4 1
	break;
	case 8179://(1,15) (15, 3)
		return 65;//4 1
	break;
	case 8180://(1,15) (15, 4)
		return 65;//4 1
	break;
	case 8181://(1,15) (15, 5)
		return 65;//4 1
	break;
	case 8182://(1,15) (15, 6)
		return 65;//4 1
	break;
	case 8183://(1,15) (15, 7)
		return 65;//4 1
	break;
	case 8184://(1,15) (15, 8)
		return 65;//4 1
	break;
	case 8185://(1,15) (15, 9)
		return 65;//4 1
	break;
	case 8186://(1,15) (15, 10)
		return 65;//4 1
	break;
	case 8187://(1,15) (15, 11)
		return 65;//4 1
	break;
	case 8188://(1,15) (15, 12)
		return 65;//4 1
	break;
	case 8189://(1,15) (15, 13)
		return 65;//4 1
	break;
	case 8190://(1,15) (15, 14)
		return 65;//4 1
	break;
	case 8191://(1,15) (15, 15)
		return 65;//4 1
	break;
	case 8192://(2,0) (0, 0)
		return 0;//0 0
	break;
	case 8193://(2,0) (0, 1)
		return 0;//0 0
	break;
	case 8194://(2,0) (0, 2)
		return 0;//0 0
	break;
	case 8195://(2,0) (0, 3)
		return 0;//0 0
	break;
	case 8196://(2,0) (0, 4)
		return 0;//0 0
	break;
	case 8197://(2,0) (0, 5)
		return 0;//0 0
	break;
	case 8198://(2,0) (0, 6)
		return 0;//0 0
	break;
	case 8199://(2,0) (0, 7)
		return 0;//0 0
	break;
	case 8200://(2,0) (0, 8)
		return 0;//0 0
	break;
	case 8201://(2,0) (0, 9)
		return 0;//0 0
	break;
	case 8202://(2,0) (0, 10)
		return 0;//0 0
	break;
	case 8203://(2,0) (0, 11)
		return 0;//0 0
	break;
	case 8204://(2,0) (0, 12)
		return 0;//0 0
	break;
	case 8205://(2,0) (0, 13)
		return 0;//0 0
	break;
	case 8206://(2,0) (0, 14)
		return 0;//0 0
	break;
	case 8207://(2,0) (0, 15)
		return 0;//0 0
	break;
	case 8208://(2,0) (1, 0)
		return 0;//0 0
	break;
	case 8209://(2,0) (1, 1)
		return 0;//0 0
	break;
	case 8210://(2,0) (1, 2)
		return 0;//0 0
	break;
	case 8211://(2,0) (1, 3)
		return 0;//0 0
	break;
	case 8212://(2,0) (1, 4)
		return 0;//0 0
	break;
	case 8213://(2,0) (1, 5)
		return 0;//0 0
	break;
	case 8214://(2,0) (1, 6)
		return 0;//0 0
	break;
	case 8215://(2,0) (1, 7)
		return 0;//0 0
	break;
	case 8216://(2,0) (1, 8)
		return 0;//0 0
	break;
	case 8217://(2,0) (1, 9)
		return 0;//0 0
	break;
	case 8218://(2,0) (1, 10)
		return 0;//0 0
	break;
	case 8219://(2,0) (1, 11)
		return 0;//0 0
	break;
	case 8220://(2,0) (1, 12)
		return 0;//0 0
	break;
	case 8221://(2,0) (1, 13)
		return 0;//0 0
	break;
	case 8222://(2,0) (1, 14)
		return 0;//0 0
	break;
	case 8223://(2,0) (1, 15)
		return 0;//0 0
	break;
	case 8224://(2,0) (2, 0)
		return 64;//4 0
	break;
	case 8225://(2,0) (2, 1)
		return 64;//4 0
	break;
	case 8226://(2,0) (2, 2)
		return 64;//4 0
	break;
	case 8227://(2,0) (2, 3)
		return 64;//4 0
	break;
	case 8228://(2,0) (2, 4)
		return 64;//4 0
	break;
	case 8229://(2,0) (2, 5)
		return 64;//4 0
	break;
	case 8230://(2,0) (2, 6)
		return 64;//4 0
	break;
	case 8231://(2,0) (2, 7)
		return 64;//4 0
	break;
	case 8232://(2,0) (2, 8)
		return 64;//4 0
	break;
	case 8233://(2,0) (2, 9)
		return 64;//4 0
	break;
	case 8234://(2,0) (2, 10)
		return 64;//4 0
	break;
	case 8235://(2,0) (2, 11)
		return 64;//4 0
	break;
	case 8236://(2,0) (2, 12)
		return 64;//4 0
	break;
	case 8237://(2,0) (2, 13)
		return 64;//4 0
	break;
	case 8238://(2,0) (2, 14)
		return 64;//4 0
	break;
	case 8239://(2,0) (2, 15)
		return 64;//4 0
	break;
	case 8240://(2,0) (3, 0)
		return 0;//0 0
	break;
	case 8241://(2,0) (3, 1)
		return 0;//0 0
	break;
	case 8242://(2,0) (3, 2)
		return 0;//0 0
	break;
	case 8243://(2,0) (3, 3)
		return 0;//0 0
	break;
	case 8244://(2,0) (3, 4)
		return 0;//0 0
	break;
	case 8245://(2,0) (3, 5)
		return 0;//0 0
	break;
	case 8246://(2,0) (3, 6)
		return 0;//0 0
	break;
	case 8247://(2,0) (3, 7)
		return 0;//0 0
	break;
	case 8248://(2,0) (3, 8)
		return 0;//0 0
	break;
	case 8249://(2,0) (3, 9)
		return 0;//0 0
	break;
	case 8250://(2,0) (3, 10)
		return 0;//0 0
	break;
	case 8251://(2,0) (3, 11)
		return 0;//0 0
	break;
	case 8252://(2,0) (3, 12)
		return 0;//0 0
	break;
	case 8253://(2,0) (3, 13)
		return 0;//0 0
	break;
	case 8254://(2,0) (3, 14)
		return 0;//0 0
	break;
	case 8255://(2,0) (3, 15)
		return 0;//0 0
	break;
	case 8256://(2,0) (4, 0)
		return 0;//0 0
	break;
	case 8257://(2,0) (4, 1)
		return 0;//0 0
	break;
	case 8258://(2,0) (4, 2)
		return 0;//0 0
	break;
	case 8259://(2,0) (4, 3)
		return 0;//0 0
	break;
	case 8260://(2,0) (4, 4)
		return 0;//0 0
	break;
	case 8261://(2,0) (4, 5)
		return 0;//0 0
	break;
	case 8262://(2,0) (4, 6)
		return 0;//0 0
	break;
	case 8263://(2,0) (4, 7)
		return 0;//0 0
	break;
	case 8264://(2,0) (4, 8)
		return 0;//0 0
	break;
	case 8265://(2,0) (4, 9)
		return 0;//0 0
	break;
	case 8266://(2,0) (4, 10)
		return 0;//0 0
	break;
	case 8267://(2,0) (4, 11)
		return 0;//0 0
	break;
	case 8268://(2,0) (4, 12)
		return 0;//0 0
	break;
	case 8269://(2,0) (4, 13)
		return 0;//0 0
	break;
	case 8270://(2,0) (4, 14)
		return 0;//0 0
	break;
	case 8271://(2,0) (4, 15)
		return 0;//0 0
	break;
	case 8272://(2,0) (5, 0)
		return 64;//4 0
	break;
	case 8273://(2,0) (5, 1)
		return 64;//4 0
	break;
	case 8274://(2,0) (5, 2)
		return 64;//4 0
	break;
	case 8275://(2,0) (5, 3)
		return 64;//4 0
	break;
	case 8276://(2,0) (5, 4)
		return 64;//4 0
	break;
	case 8277://(2,0) (5, 5)
		return 64;//4 0
	break;
	case 8278://(2,0) (5, 6)
		return 64;//4 0
	break;
	case 8279://(2,0) (5, 7)
		return 64;//4 0
	break;
	case 8280://(2,0) (5, 8)
		return 64;//4 0
	break;
	case 8281://(2,0) (5, 9)
		return 64;//4 0
	break;
	case 8282://(2,0) (5, 10)
		return 64;//4 0
	break;
	case 8283://(2,0) (5, 11)
		return 64;//4 0
	break;
	case 8284://(2,0) (5, 12)
		return 64;//4 0
	break;
	case 8285://(2,0) (5, 13)
		return 64;//4 0
	break;
	case 8286://(2,0) (5, 14)
		return 64;//4 0
	break;
	case 8287://(2,0) (5, 15)
		return 64;//4 0
	break;
	case 8288://(2,0) (6, 0)
		return 0;//0 0
	break;
	case 8289://(2,0) (6, 1)
		return 0;//0 0
	break;
	case 8290://(2,0) (6, 2)
		return 0;//0 0
	break;
	case 8291://(2,0) (6, 3)
		return 0;//0 0
	break;
	case 8292://(2,0) (6, 4)
		return 0;//0 0
	break;
	case 8293://(2,0) (6, 5)
		return 0;//0 0
	break;
	case 8294://(2,0) (6, 6)
		return 0;//0 0
	break;
	case 8295://(2,0) (6, 7)
		return 0;//0 0
	break;
	case 8296://(2,0) (6, 8)
		return 0;//0 0
	break;
	case 8297://(2,0) (6, 9)
		return 0;//0 0
	break;
	case 8298://(2,0) (6, 10)
		return 0;//0 0
	break;
	case 8299://(2,0) (6, 11)
		return 0;//0 0
	break;
	case 8300://(2,0) (6, 12)
		return 0;//0 0
	break;
	case 8301://(2,0) (6, 13)
		return 0;//0 0
	break;
	case 8302://(2,0) (6, 14)
		return 0;//0 0
	break;
	case 8303://(2,0) (6, 15)
		return 0;//0 0
	break;
	case 8304://(2,0) (7, 0)
		return 64;//4 0
	break;
	case 8305://(2,0) (7, 1)
		return 64;//4 0
	break;
	case 8306://(2,0) (7, 2)
		return 64;//4 0
	break;
	case 8307://(2,0) (7, 3)
		return 64;//4 0
	break;
	case 8308://(2,0) (7, 4)
		return 64;//4 0
	break;
	case 8309://(2,0) (7, 5)
		return 64;//4 0
	break;
	case 8310://(2,0) (7, 6)
		return 64;//4 0
	break;
	case 8311://(2,0) (7, 7)
		return 64;//4 0
	break;
	case 8312://(2,0) (7, 8)
		return 64;//4 0
	break;
	case 8313://(2,0) (7, 9)
		return 64;//4 0
	break;
	case 8314://(2,0) (7, 10)
		return 64;//4 0
	break;
	case 8315://(2,0) (7, 11)
		return 64;//4 0
	break;
	case 8316://(2,0) (7, 12)
		return 64;//4 0
	break;
	case 8317://(2,0) (7, 13)
		return 64;//4 0
	break;
	case 8318://(2,0) (7, 14)
		return 64;//4 0
	break;
	case 8319://(2,0) (7, 15)
		return 64;//4 0
	break;
	case 8320://(2,0) (8, 0)
		return 0;//0 0
	break;
	case 8321://(2,0) (8, 1)
		return 0;//0 0
	break;
	case 8322://(2,0) (8, 2)
		return 0;//0 0
	break;
	case 8323://(2,0) (8, 3)
		return 0;//0 0
	break;
	case 8324://(2,0) (8, 4)
		return 0;//0 0
	break;
	case 8325://(2,0) (8, 5)
		return 0;//0 0
	break;
	case 8326://(2,0) (8, 6)
		return 0;//0 0
	break;
	case 8327://(2,0) (8, 7)
		return 0;//0 0
	break;
	case 8328://(2,0) (8, 8)
		return 0;//0 0
	break;
	case 8329://(2,0) (8, 9)
		return 0;//0 0
	break;
	case 8330://(2,0) (8, 10)
		return 0;//0 0
	break;
	case 8331://(2,0) (8, 11)
		return 0;//0 0
	break;
	case 8332://(2,0) (8, 12)
		return 0;//0 0
	break;
	case 8333://(2,0) (8, 13)
		return 0;//0 0
	break;
	case 8334://(2,0) (8, 14)
		return 0;//0 0
	break;
	case 8335://(2,0) (8, 15)
		return 0;//0 0
	break;
	case 8336://(2,0) (9, 0)
		return 64;//4 0
	break;
	case 8337://(2,0) (9, 1)
		return 64;//4 0
	break;
	case 8338://(2,0) (9, 2)
		return 64;//4 0
	break;
	case 8339://(2,0) (9, 3)
		return 64;//4 0
	break;
	case 8340://(2,0) (9, 4)
		return 64;//4 0
	break;
	case 8341://(2,0) (9, 5)
		return 64;//4 0
	break;
	case 8342://(2,0) (9, 6)
		return 64;//4 0
	break;
	case 8343://(2,0) (9, 7)
		return 64;//4 0
	break;
	case 8344://(2,0) (9, 8)
		return 64;//4 0
	break;
	case 8345://(2,0) (9, 9)
		return 64;//4 0
	break;
	case 8346://(2,0) (9, 10)
		return 64;//4 0
	break;
	case 8347://(2,0) (9, 11)
		return 64;//4 0
	break;
	case 8348://(2,0) (9, 12)
		return 64;//4 0
	break;
	case 8349://(2,0) (9, 13)
		return 64;//4 0
	break;
	case 8350://(2,0) (9, 14)
		return 64;//4 0
	break;
	case 8351://(2,0) (9, 15)
		return 64;//4 0
	break;
	case 8352://(2,0) (10, 0)
		return 0;//0 0
	break;
	case 8353://(2,0) (10, 1)
		return 0;//0 0
	break;
	case 8354://(2,0) (10, 2)
		return 0;//0 0
	break;
	case 8355://(2,0) (10, 3)
		return 0;//0 0
	break;
	case 8356://(2,0) (10, 4)
		return 0;//0 0
	break;
	case 8357://(2,0) (10, 5)
		return 0;//0 0
	break;
	case 8358://(2,0) (10, 6)
		return 0;//0 0
	break;
	case 8359://(2,0) (10, 7)
		return 0;//0 0
	break;
	case 8360://(2,0) (10, 8)
		return 0;//0 0
	break;
	case 8361://(2,0) (10, 9)
		return 0;//0 0
	break;
	case 8362://(2,0) (10, 10)
		return 0;//0 0
	break;
	case 8363://(2,0) (10, 11)
		return 0;//0 0
	break;
	case 8364://(2,0) (10, 12)
		return 0;//0 0
	break;
	case 8365://(2,0) (10, 13)
		return 0;//0 0
	break;
	case 8366://(2,0) (10, 14)
		return 0;//0 0
	break;
	case 8367://(2,0) (10, 15)
		return 0;//0 0
	break;
	case 8368://(2,0) (11, 0)
		return 64;//4 0
	break;
	case 8369://(2,0) (11, 1)
		return 64;//4 0
	break;
	case 8370://(2,0) (11, 2)
		return 64;//4 0
	break;
	case 8371://(2,0) (11, 3)
		return 64;//4 0
	break;
	case 8372://(2,0) (11, 4)
		return 64;//4 0
	break;
	case 8373://(2,0) (11, 5)
		return 64;//4 0
	break;
	case 8374://(2,0) (11, 6)
		return 64;//4 0
	break;
	case 8375://(2,0) (11, 7)
		return 64;//4 0
	break;
	case 8376://(2,0) (11, 8)
		return 64;//4 0
	break;
	case 8377://(2,0) (11, 9)
		return 64;//4 0
	break;
	case 8378://(2,0) (11, 10)
		return 64;//4 0
	break;
	case 8379://(2,0) (11, 11)
		return 64;//4 0
	break;
	case 8380://(2,0) (11, 12)
		return 64;//4 0
	break;
	case 8381://(2,0) (11, 13)
		return 64;//4 0
	break;
	case 8382://(2,0) (11, 14)
		return 64;//4 0
	break;
	case 8383://(2,0) (11, 15)
		return 64;//4 0
	break;
	case 8384://(2,0) (12, 0)
		return 64;//4 0
	break;
	case 8385://(2,0) (12, 1)
		return 64;//4 0
	break;
	case 8386://(2,0) (12, 2)
		return 64;//4 0
	break;
	case 8387://(2,0) (12, 3)
		return 64;//4 0
	break;
	case 8388://(2,0) (12, 4)
		return 64;//4 0
	break;
	case 8389://(2,0) (12, 5)
		return 64;//4 0
	break;
	case 8390://(2,0) (12, 6)
		return 64;//4 0
	break;
	case 8391://(2,0) (12, 7)
		return 64;//4 0
	break;
	case 8392://(2,0) (12, 8)
		return 64;//4 0
	break;
	case 8393://(2,0) (12, 9)
		return 64;//4 0
	break;
	case 8394://(2,0) (12, 10)
		return 64;//4 0
	break;
	case 8395://(2,0) (12, 11)
		return 64;//4 0
	break;
	case 8396://(2,0) (12, 12)
		return 64;//4 0
	break;
	case 8397://(2,0) (12, 13)
		return 64;//4 0
	break;
	case 8398://(2,0) (12, 14)
		return 64;//4 0
	break;
	case 8399://(2,0) (12, 15)
		return 64;//4 0
	break;
	case 8400://(2,0) (13, 0)
		return 0;//0 0
	break;
	case 8401://(2,0) (13, 1)
		return 0;//0 0
	break;
	case 8402://(2,0) (13, 2)
		return 0;//0 0
	break;
	case 8403://(2,0) (13, 3)
		return 0;//0 0
	break;
	case 8404://(2,0) (13, 4)
		return 0;//0 0
	break;
	case 8405://(2,0) (13, 5)
		return 0;//0 0
	break;
	case 8406://(2,0) (13, 6)
		return 0;//0 0
	break;
	case 8407://(2,0) (13, 7)
		return 0;//0 0
	break;
	case 8408://(2,0) (13, 8)
		return 0;//0 0
	break;
	case 8409://(2,0) (13, 9)
		return 0;//0 0
	break;
	case 8410://(2,0) (13, 10)
		return 0;//0 0
	break;
	case 8411://(2,0) (13, 11)
		return 0;//0 0
	break;
	case 8412://(2,0) (13, 12)
		return 0;//0 0
	break;
	case 8413://(2,0) (13, 13)
		return 0;//0 0
	break;
	case 8414://(2,0) (13, 14)
		return 0;//0 0
	break;
	case 8415://(2,0) (13, 15)
		return 0;//0 0
	break;
	case 8416://(2,0) (14, 0)
		return 64;//4 0
	break;
	case 8417://(2,0) (14, 1)
		return 64;//4 0
	break;
	case 8418://(2,0) (14, 2)
		return 64;//4 0
	break;
	case 8419://(2,0) (14, 3)
		return 64;//4 0
	break;
	case 8420://(2,0) (14, 4)
		return 64;//4 0
	break;
	case 8421://(2,0) (14, 5)
		return 64;//4 0
	break;
	case 8422://(2,0) (14, 6)
		return 64;//4 0
	break;
	case 8423://(2,0) (14, 7)
		return 64;//4 0
	break;
	case 8424://(2,0) (14, 8)
		return 64;//4 0
	break;
	case 8425://(2,0) (14, 9)
		return 64;//4 0
	break;
	case 8426://(2,0) (14, 10)
		return 64;//4 0
	break;
	case 8427://(2,0) (14, 11)
		return 64;//4 0
	break;
	case 8428://(2,0) (14, 12)
		return 64;//4 0
	break;
	case 8429://(2,0) (14, 13)
		return 64;//4 0
	break;
	case 8430://(2,0) (14, 14)
		return 64;//4 0
	break;
	case 8431://(2,0) (14, 15)
		return 64;//4 0
	break;
	case 8432://(2,0) (15, 0)
		return 64;//4 0
	break;
	case 8433://(2,0) (15, 1)
		return 64;//4 0
	break;
	case 8434://(2,0) (15, 2)
		return 64;//4 0
	break;
	case 8435://(2,0) (15, 3)
		return 64;//4 0
	break;
	case 8436://(2,0) (15, 4)
		return 64;//4 0
	break;
	case 8437://(2,0) (15, 5)
		return 64;//4 0
	break;
	case 8438://(2,0) (15, 6)
		return 64;//4 0
	break;
	case 8439://(2,0) (15, 7)
		return 64;//4 0
	break;
	case 8440://(2,0) (15, 8)
		return 64;//4 0
	break;
	case 8441://(2,0) (15, 9)
		return 64;//4 0
	break;
	case 8442://(2,0) (15, 10)
		return 64;//4 0
	break;
	case 8443://(2,0) (15, 11)
		return 64;//4 0
	break;
	case 8444://(2,0) (15, 12)
		return 64;//4 0
	break;
	case 8445://(2,0) (15, 13)
		return 64;//4 0
	break;
	case 8446://(2,0) (15, 14)
		return 64;//4 0
	break;
	case 8447://(2,0) (15, 15)
		return 64;//4 0
	break;
	case 8448://(2,1) (0, 0)
		return 0;//0 0
	break;
	case 8449://(2,1) (0, 1)
		return 4;//0 4
	break;
	case 8450://(2,1) (0, 2)
		return 0;//0 0
	break;
	case 8451://(2,1) (0, 3)
		return 0;//0 0
	break;
	case 8452://(2,1) (0, 4)
		return 0;//0 0
	break;
	case 8453://(2,1) (0, 5)
		return 0;//0 0
	break;
	case 8454://(2,1) (0, 6)
		return 4;//0 4
	break;
	case 8455://(2,1) (0, 7)
		return 0;//0 0
	break;
	case 8456://(2,1) (0, 8)
		return 4;//0 4
	break;
	case 8457://(2,1) (0, 9)
		return 4;//0 4
	break;
	case 8458://(2,1) (0, 10)
		return 0;//0 0
	break;
	case 8459://(2,1) (0, 11)
		return 4;//0 4
	break;
	case 8460://(2,1) (0, 12)
		return 0;//0 0
	break;
	case 8461://(2,1) (0, 13)
		return 4;//0 4
	break;
	case 8462://(2,1) (0, 14)
		return 4;//0 4
	break;
	case 8463://(2,1) (0, 15)
		return 4;//0 4
	break;
	case 8464://(2,1) (1, 0)
		return 0;//0 0
	break;
	case 8465://(2,1) (1, 1)
		return 4;//0 4
	break;
	case 8466://(2,1) (1, 2)
		return 0;//0 0
	break;
	case 8467://(2,1) (1, 3)
		return 0;//0 0
	break;
	case 8468://(2,1) (1, 4)
		return 0;//0 0
	break;
	case 8469://(2,1) (1, 5)
		return 0;//0 0
	break;
	case 8470://(2,1) (1, 6)
		return 4;//0 4
	break;
	case 8471://(2,1) (1, 7)
		return 0;//0 0
	break;
	case 8472://(2,1) (1, 8)
		return 4;//0 4
	break;
	case 8473://(2,1) (1, 9)
		return 4;//0 4
	break;
	case 8474://(2,1) (1, 10)
		return 0;//0 0
	break;
	case 8475://(2,1) (1, 11)
		return 4;//0 4
	break;
	case 8476://(2,1) (1, 12)
		return 0;//0 0
	break;
	case 8477://(2,1) (1, 13)
		return 4;//0 4
	break;
	case 8478://(2,1) (1, 14)
		return 4;//0 4
	break;
	case 8479://(2,1) (1, 15)
		return 4;//0 4
	break;
	case 8480://(2,1) (2, 0)
		return 64;//4 0
	break;
	case 8481://(2,1) (2, 1)
		return 68;//4 4
	break;
	case 8482://(2,1) (2, 2)
		return 64;//4 0
	break;
	case 8483://(2,1) (2, 3)
		return 64;//4 0
	break;
	case 8484://(2,1) (2, 4)
		return 64;//4 0
	break;
	case 8485://(2,1) (2, 5)
		return 64;//4 0
	break;
	case 8486://(2,1) (2, 6)
		return 68;//4 4
	break;
	case 8487://(2,1) (2, 7)
		return 64;//4 0
	break;
	case 8488://(2,1) (2, 8)
		return 68;//4 4
	break;
	case 8489://(2,1) (2, 9)
		return 68;//4 4
	break;
	case 8490://(2,1) (2, 10)
		return 64;//4 0
	break;
	case 8491://(2,1) (2, 11)
		return 68;//4 4
	break;
	case 8492://(2,1) (2, 12)
		return 64;//4 0
	break;
	case 8493://(2,1) (2, 13)
		return 68;//4 4
	break;
	case 8494://(2,1) (2, 14)
		return 68;//4 4
	break;
	case 8495://(2,1) (2, 15)
		return 68;//4 4
	break;
	case 8496://(2,1) (3, 0)
		return 0;//0 0
	break;
	case 8497://(2,1) (3, 1)
		return 4;//0 4
	break;
	case 8498://(2,1) (3, 2)
		return 0;//0 0
	break;
	case 8499://(2,1) (3, 3)
		return 0;//0 0
	break;
	case 8500://(2,1) (3, 4)
		return 0;//0 0
	break;
	case 8501://(2,1) (3, 5)
		return 0;//0 0
	break;
	case 8502://(2,1) (3, 6)
		return 4;//0 4
	break;
	case 8503://(2,1) (3, 7)
		return 0;//0 0
	break;
	case 8504://(2,1) (3, 8)
		return 4;//0 4
	break;
	case 8505://(2,1) (3, 9)
		return 4;//0 4
	break;
	case 8506://(2,1) (3, 10)
		return 0;//0 0
	break;
	case 8507://(2,1) (3, 11)
		return 4;//0 4
	break;
	case 8508://(2,1) (3, 12)
		return 0;//0 0
	break;
	case 8509://(2,1) (3, 13)
		return 4;//0 4
	break;
	case 8510://(2,1) (3, 14)
		return 4;//0 4
	break;
	case 8511://(2,1) (3, 15)
		return 4;//0 4
	break;
	case 8512://(2,1) (4, 0)
		return 0;//0 0
	break;
	case 8513://(2,1) (4, 1)
		return 4;//0 4
	break;
	case 8514://(2,1) (4, 2)
		return 0;//0 0
	break;
	case 8515://(2,1) (4, 3)
		return 0;//0 0
	break;
	case 8516://(2,1) (4, 4)
		return 0;//0 0
	break;
	case 8517://(2,1) (4, 5)
		return 0;//0 0
	break;
	case 8518://(2,1) (4, 6)
		return 4;//0 4
	break;
	case 8519://(2,1) (4, 7)
		return 0;//0 0
	break;
	case 8520://(2,1) (4, 8)
		return 4;//0 4
	break;
	case 8521://(2,1) (4, 9)
		return 4;//0 4
	break;
	case 8522://(2,1) (4, 10)
		return 0;//0 0
	break;
	case 8523://(2,1) (4, 11)
		return 4;//0 4
	break;
	case 8524://(2,1) (4, 12)
		return 0;//0 0
	break;
	case 8525://(2,1) (4, 13)
		return 4;//0 4
	break;
	case 8526://(2,1) (4, 14)
		return 4;//0 4
	break;
	case 8527://(2,1) (4, 15)
		return 4;//0 4
	break;
	case 8528://(2,1) (5, 0)
		return 64;//4 0
	break;
	case 8529://(2,1) (5, 1)
		return 68;//4 4
	break;
	case 8530://(2,1) (5, 2)
		return 64;//4 0
	break;
	case 8531://(2,1) (5, 3)
		return 64;//4 0
	break;
	case 8532://(2,1) (5, 4)
		return 64;//4 0
	break;
	case 8533://(2,1) (5, 5)
		return 64;//4 0
	break;
	case 8534://(2,1) (5, 6)
		return 68;//4 4
	break;
	case 8535://(2,1) (5, 7)
		return 64;//4 0
	break;
	case 8536://(2,1) (5, 8)
		return 68;//4 4
	break;
	case 8537://(2,1) (5, 9)
		return 68;//4 4
	break;
	case 8538://(2,1) (5, 10)
		return 64;//4 0
	break;
	case 8539://(2,1) (5, 11)
		return 68;//4 4
	break;
	case 8540://(2,1) (5, 12)
		return 64;//4 0
	break;
	case 8541://(2,1) (5, 13)
		return 68;//4 4
	break;
	case 8542://(2,1) (5, 14)
		return 68;//4 4
	break;
	case 8543://(2,1) (5, 15)
		return 68;//4 4
	break;
	case 8544://(2,1) (6, 0)
		return 0;//0 0
	break;
	case 8545://(2,1) (6, 1)
		return 4;//0 4
	break;
	case 8546://(2,1) (6, 2)
		return 0;//0 0
	break;
	case 8547://(2,1) (6, 3)
		return 0;//0 0
	break;
	case 8548://(2,1) (6, 4)
		return 0;//0 0
	break;
	case 8549://(2,1) (6, 5)
		return 0;//0 0
	break;
	case 8550://(2,1) (6, 6)
		return 4;//0 4
	break;
	case 8551://(2,1) (6, 7)
		return 0;//0 0
	break;
	case 8552://(2,1) (6, 8)
		return 4;//0 4
	break;
	case 8553://(2,1) (6, 9)
		return 4;//0 4
	break;
	case 8554://(2,1) (6, 10)
		return 0;//0 0
	break;
	case 8555://(2,1) (6, 11)
		return 4;//0 4
	break;
	case 8556://(2,1) (6, 12)
		return 0;//0 0
	break;
	case 8557://(2,1) (6, 13)
		return 4;//0 4
	break;
	case 8558://(2,1) (6, 14)
		return 4;//0 4
	break;
	case 8559://(2,1) (6, 15)
		return 4;//0 4
	break;
	case 8560://(2,1) (7, 0)
		return 64;//4 0
	break;
	case 8561://(2,1) (7, 1)
		return 68;//4 4
	break;
	case 8562://(2,1) (7, 2)
		return 64;//4 0
	break;
	case 8563://(2,1) (7, 3)
		return 64;//4 0
	break;
	case 8564://(2,1) (7, 4)
		return 64;//4 0
	break;
	case 8565://(2,1) (7, 5)
		return 64;//4 0
	break;
	case 8566://(2,1) (7, 6)
		return 68;//4 4
	break;
	case 8567://(2,1) (7, 7)
		return 64;//4 0
	break;
	case 8568://(2,1) (7, 8)
		return 68;//4 4
	break;
	case 8569://(2,1) (7, 9)
		return 68;//4 4
	break;
	case 8570://(2,1) (7, 10)
		return 64;//4 0
	break;
	case 8571://(2,1) (7, 11)
		return 68;//4 4
	break;
	case 8572://(2,1) (7, 12)
		return 64;//4 0
	break;
	case 8573://(2,1) (7, 13)
		return 68;//4 4
	break;
	case 8574://(2,1) (7, 14)
		return 68;//4 4
	break;
	case 8575://(2,1) (7, 15)
		return 68;//4 4
	break;
	case 8576://(2,1) (8, 0)
		return 0;//0 0
	break;
	case 8577://(2,1) (8, 1)
		return 4;//0 4
	break;
	case 8578://(2,1) (8, 2)
		return 0;//0 0
	break;
	case 8579://(2,1) (8, 3)
		return 0;//0 0
	break;
	case 8580://(2,1) (8, 4)
		return 0;//0 0
	break;
	case 8581://(2,1) (8, 5)
		return 0;//0 0
	break;
	case 8582://(2,1) (8, 6)
		return 4;//0 4
	break;
	case 8583://(2,1) (8, 7)
		return 0;//0 0
	break;
	case 8584://(2,1) (8, 8)
		return 4;//0 4
	break;
	case 8585://(2,1) (8, 9)
		return 4;//0 4
	break;
	case 8586://(2,1) (8, 10)
		return 0;//0 0
	break;
	case 8587://(2,1) (8, 11)
		return 4;//0 4
	break;
	case 8588://(2,1) (8, 12)
		return 0;//0 0
	break;
	case 8589://(2,1) (8, 13)
		return 4;//0 4
	break;
	case 8590://(2,1) (8, 14)
		return 4;//0 4
	break;
	case 8591://(2,1) (8, 15)
		return 4;//0 4
	break;
	case 8592://(2,1) (9, 0)
		return 64;//4 0
	break;
	case 8593://(2,1) (9, 1)
		return 68;//4 4
	break;
	case 8594://(2,1) (9, 2)
		return 64;//4 0
	break;
	case 8595://(2,1) (9, 3)
		return 64;//4 0
	break;
	case 8596://(2,1) (9, 4)
		return 64;//4 0
	break;
	case 8597://(2,1) (9, 5)
		return 64;//4 0
	break;
	case 8598://(2,1) (9, 6)
		return 68;//4 4
	break;
	case 8599://(2,1) (9, 7)
		return 64;//4 0
	break;
	case 8600://(2,1) (9, 8)
		return 68;//4 4
	break;
	case 8601://(2,1) (9, 9)
		return 68;//4 4
	break;
	case 8602://(2,1) (9, 10)
		return 64;//4 0
	break;
	case 8603://(2,1) (9, 11)
		return 68;//4 4
	break;
	case 8604://(2,1) (9, 12)
		return 64;//4 0
	break;
	case 8605://(2,1) (9, 13)
		return 68;//4 4
	break;
	case 8606://(2,1) (9, 14)
		return 68;//4 4
	break;
	case 8607://(2,1) (9, 15)
		return 68;//4 4
	break;
	case 8608://(2,1) (10, 0)
		return 0;//0 0
	break;
	case 8609://(2,1) (10, 1)
		return 4;//0 4
	break;
	case 8610://(2,1) (10, 2)
		return 0;//0 0
	break;
	case 8611://(2,1) (10, 3)
		return 0;//0 0
	break;
	case 8612://(2,1) (10, 4)
		return 0;//0 0
	break;
	case 8613://(2,1) (10, 5)
		return 0;//0 0
	break;
	case 8614://(2,1) (10, 6)
		return 4;//0 4
	break;
	case 8615://(2,1) (10, 7)
		return 0;//0 0
	break;
	case 8616://(2,1) (10, 8)
		return 4;//0 4
	break;
	case 8617://(2,1) (10, 9)
		return 4;//0 4
	break;
	case 8618://(2,1) (10, 10)
		return 0;//0 0
	break;
	case 8619://(2,1) (10, 11)
		return 4;//0 4
	break;
	case 8620://(2,1) (10, 12)
		return 0;//0 0
	break;
	case 8621://(2,1) (10, 13)
		return 4;//0 4
	break;
	case 8622://(2,1) (10, 14)
		return 4;//0 4
	break;
	case 8623://(2,1) (10, 15)
		return 4;//0 4
	break;
	case 8624://(2,1) (11, 0)
		return 64;//4 0
	break;
	case 8625://(2,1) (11, 1)
		return 68;//4 4
	break;
	case 8626://(2,1) (11, 2)
		return 64;//4 0
	break;
	case 8627://(2,1) (11, 3)
		return 64;//4 0
	break;
	case 8628://(2,1) (11, 4)
		return 64;//4 0
	break;
	case 8629://(2,1) (11, 5)
		return 64;//4 0
	break;
	case 8630://(2,1) (11, 6)
		return 68;//4 4
	break;
	case 8631://(2,1) (11, 7)
		return 64;//4 0
	break;
	case 8632://(2,1) (11, 8)
		return 68;//4 4
	break;
	case 8633://(2,1) (11, 9)
		return 68;//4 4
	break;
	case 8634://(2,1) (11, 10)
		return 64;//4 0
	break;
	case 8635://(2,1) (11, 11)
		return 68;//4 4
	break;
	case 8636://(2,1) (11, 12)
		return 64;//4 0
	break;
	case 8637://(2,1) (11, 13)
		return 68;//4 4
	break;
	case 8638://(2,1) (11, 14)
		return 68;//4 4
	break;
	case 8639://(2,1) (11, 15)
		return 68;//4 4
	break;
	case 8640://(2,1) (12, 0)
		return 64;//4 0
	break;
	case 8641://(2,1) (12, 1)
		return 68;//4 4
	break;
	case 8642://(2,1) (12, 2)
		return 64;//4 0
	break;
	case 8643://(2,1) (12, 3)
		return 64;//4 0
	break;
	case 8644://(2,1) (12, 4)
		return 64;//4 0
	break;
	case 8645://(2,1) (12, 5)
		return 64;//4 0
	break;
	case 8646://(2,1) (12, 6)
		return 68;//4 4
	break;
	case 8647://(2,1) (12, 7)
		return 64;//4 0
	break;
	case 8648://(2,1) (12, 8)
		return 68;//4 4
	break;
	case 8649://(2,1) (12, 9)
		return 68;//4 4
	break;
	case 8650://(2,1) (12, 10)
		return 64;//4 0
	break;
	case 8651://(2,1) (12, 11)
		return 68;//4 4
	break;
	case 8652://(2,1) (12, 12)
		return 64;//4 0
	break;
	case 8653://(2,1) (12, 13)
		return 68;//4 4
	break;
	case 8654://(2,1) (12, 14)
		return 68;//4 4
	break;
	case 8655://(2,1) (12, 15)
		return 68;//4 4
	break;
	case 8656://(2,1) (13, 0)
		return 0;//0 0
	break;
	case 8657://(2,1) (13, 1)
		return 4;//0 4
	break;
	case 8658://(2,1) (13, 2)
		return 0;//0 0
	break;
	case 8659://(2,1) (13, 3)
		return 0;//0 0
	break;
	case 8660://(2,1) (13, 4)
		return 0;//0 0
	break;
	case 8661://(2,1) (13, 5)
		return 0;//0 0
	break;
	case 8662://(2,1) (13, 6)
		return 4;//0 4
	break;
	case 8663://(2,1) (13, 7)
		return 0;//0 0
	break;
	case 8664://(2,1) (13, 8)
		return 4;//0 4
	break;
	case 8665://(2,1) (13, 9)
		return 4;//0 4
	break;
	case 8666://(2,1) (13, 10)
		return 0;//0 0
	break;
	case 8667://(2,1) (13, 11)
		return 4;//0 4
	break;
	case 8668://(2,1) (13, 12)
		return 0;//0 0
	break;
	case 8669://(2,1) (13, 13)
		return 4;//0 4
	break;
	case 8670://(2,1) (13, 14)
		return 4;//0 4
	break;
	case 8671://(2,1) (13, 15)
		return 4;//0 4
	break;
	case 8672://(2,1) (14, 0)
		return 64;//4 0
	break;
	case 8673://(2,1) (14, 1)
		return 68;//4 4
	break;
	case 8674://(2,1) (14, 2)
		return 64;//4 0
	break;
	case 8675://(2,1) (14, 3)
		return 64;//4 0
	break;
	case 8676://(2,1) (14, 4)
		return 64;//4 0
	break;
	case 8677://(2,1) (14, 5)
		return 64;//4 0
	break;
	case 8678://(2,1) (14, 6)
		return 68;//4 4
	break;
	case 8679://(2,1) (14, 7)
		return 64;//4 0
	break;
	case 8680://(2,1) (14, 8)
		return 68;//4 4
	break;
	case 8681://(2,1) (14, 9)
		return 68;//4 4
	break;
	case 8682://(2,1) (14, 10)
		return 64;//4 0
	break;
	case 8683://(2,1) (14, 11)
		return 68;//4 4
	break;
	case 8684://(2,1) (14, 12)
		return 64;//4 0
	break;
	case 8685://(2,1) (14, 13)
		return 68;//4 4
	break;
	case 8686://(2,1) (14, 14)
		return 68;//4 4
	break;
	case 8687://(2,1) (14, 15)
		return 68;//4 4
	break;
	case 8688://(2,1) (15, 0)
		return 64;//4 0
	break;
	case 8689://(2,1) (15, 1)
		return 68;//4 4
	break;
	case 8690://(2,1) (15, 2)
		return 64;//4 0
	break;
	case 8691://(2,1) (15, 3)
		return 64;//4 0
	break;
	case 8692://(2,1) (15, 4)
		return 64;//4 0
	break;
	case 8693://(2,1) (15, 5)
		return 64;//4 0
	break;
	case 8694://(2,1) (15, 6)
		return 68;//4 4
	break;
	case 8695://(2,1) (15, 7)
		return 64;//4 0
	break;
	case 8696://(2,1) (15, 8)
		return 68;//4 4
	break;
	case 8697://(2,1) (15, 9)
		return 68;//4 4
	break;
	case 8698://(2,1) (15, 10)
		return 64;//4 0
	break;
	case 8699://(2,1) (15, 11)
		return 68;//4 4
	break;
	case 8700://(2,1) (15, 12)
		return 64;//4 0
	break;
	case 8701://(2,1) (15, 13)
		return 68;//4 4
	break;
	case 8702://(2,1) (15, 14)
		return 68;//4 4
	break;
	case 8703://(2,1) (15, 15)
		return 68;//4 4
	break;
	case 8704://(2,2) (0, 0)
		return 0;//0 0
	break;
	case 8705://(2,2) (0, 1)
		return 0;//0 0
	break;
	case 8706://(2,2) (0, 2)
		return 4;//0 4
	break;
	case 8707://(2,2) (0, 3)
		return 0;//0 0
	break;
	case 8708://(2,2) (0, 4)
		return 0;//0 0
	break;
	case 8709://(2,2) (0, 5)
		return 4;//0 4
	break;
	case 8710://(2,2) (0, 6)
		return 0;//0 0
	break;
	case 8711://(2,2) (0, 7)
		return 4;//0 4
	break;
	case 8712://(2,2) (0, 8)
		return 0;//0 0
	break;
	case 8713://(2,2) (0, 9)
		return 4;//0 4
	break;
	case 8714://(2,2) (0, 10)
		return 0;//0 0
	break;
	case 8715://(2,2) (0, 11)
		return 4;//0 4
	break;
	case 8716://(2,2) (0, 12)
		return 4;//0 4
	break;
	case 8717://(2,2) (0, 13)
		return 0;//0 0
	break;
	case 8718://(2,2) (0, 14)
		return 4;//0 4
	break;
	case 8719://(2,2) (0, 15)
		return 4;//0 4
	break;
	case 8720://(2,2) (1, 0)
		return 0;//0 0
	break;
	case 8721://(2,2) (1, 1)
		return 0;//0 0
	break;
	case 8722://(2,2) (1, 2)
		return 4;//0 4
	break;
	case 8723://(2,2) (1, 3)
		return 0;//0 0
	break;
	case 8724://(2,2) (1, 4)
		return 0;//0 0
	break;
	case 8725://(2,2) (1, 5)
		return 4;//0 4
	break;
	case 8726://(2,2) (1, 6)
		return 0;//0 0
	break;
	case 8727://(2,2) (1, 7)
		return 4;//0 4
	break;
	case 8728://(2,2) (1, 8)
		return 0;//0 0
	break;
	case 8729://(2,2) (1, 9)
		return 4;//0 4
	break;
	case 8730://(2,2) (1, 10)
		return 0;//0 0
	break;
	case 8731://(2,2) (1, 11)
		return 4;//0 4
	break;
	case 8732://(2,2) (1, 12)
		return 4;//0 4
	break;
	case 8733://(2,2) (1, 13)
		return 0;//0 0
	break;
	case 8734://(2,2) (1, 14)
		return 4;//0 4
	break;
	case 8735://(2,2) (1, 15)
		return 4;//0 4
	break;
	case 8736://(2,2) (2, 0)
		return 64;//4 0
	break;
	case 8737://(2,2) (2, 1)
		return 64;//4 0
	break;
	case 8738://(2,2) (2, 2)
		return 68;//4 4
	break;
	case 8739://(2,2) (2, 3)
		return 64;//4 0
	break;
	case 8740://(2,2) (2, 4)
		return 64;//4 0
	break;
	case 8741://(2,2) (2, 5)
		return 68;//4 4
	break;
	case 8742://(2,2) (2, 6)
		return 64;//4 0
	break;
	case 8743://(2,2) (2, 7)
		return 68;//4 4
	break;
	case 8744://(2,2) (2, 8)
		return 64;//4 0
	break;
	case 8745://(2,2) (2, 9)
		return 68;//4 4
	break;
	case 8746://(2,2) (2, 10)
		return 64;//4 0
	break;
	case 8747://(2,2) (2, 11)
		return 68;//4 4
	break;
	case 8748://(2,2) (2, 12)
		return 68;//4 4
	break;
	case 8749://(2,2) (2, 13)
		return 64;//4 0
	break;
	case 8750://(2,2) (2, 14)
		return 68;//4 4
	break;
	case 8751://(2,2) (2, 15)
		return 68;//4 4
	break;
	case 8752://(2,2) (3, 0)
		return 0;//0 0
	break;
	case 8753://(2,2) (3, 1)
		return 0;//0 0
	break;
	case 8754://(2,2) (3, 2)
		return 4;//0 4
	break;
	case 8755://(2,2) (3, 3)
		return 0;//0 0
	break;
	case 8756://(2,2) (3, 4)
		return 0;//0 0
	break;
	case 8757://(2,2) (3, 5)
		return 4;//0 4
	break;
	case 8758://(2,2) (3, 6)
		return 0;//0 0
	break;
	case 8759://(2,2) (3, 7)
		return 4;//0 4
	break;
	case 8760://(2,2) (3, 8)
		return 0;//0 0
	break;
	case 8761://(2,2) (3, 9)
		return 4;//0 4
	break;
	case 8762://(2,2) (3, 10)
		return 0;//0 0
	break;
	case 8763://(2,2) (3, 11)
		return 4;//0 4
	break;
	case 8764://(2,2) (3, 12)
		return 4;//0 4
	break;
	case 8765://(2,2) (3, 13)
		return 0;//0 0
	break;
	case 8766://(2,2) (3, 14)
		return 4;//0 4
	break;
	case 8767://(2,2) (3, 15)
		return 4;//0 4
	break;
	case 8768://(2,2) (4, 0)
		return 0;//0 0
	break;
	case 8769://(2,2) (4, 1)
		return 0;//0 0
	break;
	case 8770://(2,2) (4, 2)
		return 4;//0 4
	break;
	case 8771://(2,2) (4, 3)
		return 0;//0 0
	break;
	case 8772://(2,2) (4, 4)
		return 0;//0 0
	break;
	case 8773://(2,2) (4, 5)
		return 4;//0 4
	break;
	case 8774://(2,2) (4, 6)
		return 0;//0 0
	break;
	case 8775://(2,2) (4, 7)
		return 4;//0 4
	break;
	case 8776://(2,2) (4, 8)
		return 0;//0 0
	break;
	case 8777://(2,2) (4, 9)
		return 4;//0 4
	break;
	case 8778://(2,2) (4, 10)
		return 0;//0 0
	break;
	case 8779://(2,2) (4, 11)
		return 4;//0 4
	break;
	case 8780://(2,2) (4, 12)
		return 4;//0 4
	break;
	case 8781://(2,2) (4, 13)
		return 0;//0 0
	break;
	case 8782://(2,2) (4, 14)
		return 4;//0 4
	break;
	case 8783://(2,2) (4, 15)
		return 4;//0 4
	break;
	case 8784://(2,2) (5, 0)
		return 64;//4 0
	break;
	case 8785://(2,2) (5, 1)
		return 64;//4 0
	break;
	case 8786://(2,2) (5, 2)
		return 68;//4 4
	break;
	case 8787://(2,2) (5, 3)
		return 64;//4 0
	break;
	case 8788://(2,2) (5, 4)
		return 64;//4 0
	break;
	case 8789://(2,2) (5, 5)
		return 68;//4 4
	break;
	case 8790://(2,2) (5, 6)
		return 64;//4 0
	break;
	case 8791://(2,2) (5, 7)
		return 68;//4 4
	break;
	case 8792://(2,2) (5, 8)
		return 64;//4 0
	break;
	case 8793://(2,2) (5, 9)
		return 68;//4 4
	break;
	case 8794://(2,2) (5, 10)
		return 64;//4 0
	break;
	case 8795://(2,2) (5, 11)
		return 68;//4 4
	break;
	case 8796://(2,2) (5, 12)
		return 68;//4 4
	break;
	case 8797://(2,2) (5, 13)
		return 64;//4 0
	break;
	case 8798://(2,2) (5, 14)
		return 68;//4 4
	break;
	case 8799://(2,2) (5, 15)
		return 68;//4 4
	break;
	case 8800://(2,2) (6, 0)
		return 0;//0 0
	break;
	case 8801://(2,2) (6, 1)
		return 0;//0 0
	break;
	case 8802://(2,2) (6, 2)
		return 4;//0 4
	break;
	case 8803://(2,2) (6, 3)
		return 0;//0 0
	break;
	case 8804://(2,2) (6, 4)
		return 0;//0 0
	break;
	case 8805://(2,2) (6, 5)
		return 4;//0 4
	break;
	case 8806://(2,2) (6, 6)
		return 0;//0 0
	break;
	case 8807://(2,2) (6, 7)
		return 4;//0 4
	break;
	case 8808://(2,2) (6, 8)
		return 0;//0 0
	break;
	case 8809://(2,2) (6, 9)
		return 4;//0 4
	break;
	case 8810://(2,2) (6, 10)
		return 0;//0 0
	break;
	case 8811://(2,2) (6, 11)
		return 4;//0 4
	break;
	case 8812://(2,2) (6, 12)
		return 4;//0 4
	break;
	case 8813://(2,2) (6, 13)
		return 0;//0 0
	break;
	case 8814://(2,2) (6, 14)
		return 4;//0 4
	break;
	case 8815://(2,2) (6, 15)
		return 4;//0 4
	break;
	case 8816://(2,2) (7, 0)
		return 64;//4 0
	break;
	case 8817://(2,2) (7, 1)
		return 64;//4 0
	break;
	case 8818://(2,2) (7, 2)
		return 68;//4 4
	break;
	case 8819://(2,2) (7, 3)
		return 64;//4 0
	break;
	case 8820://(2,2) (7, 4)
		return 64;//4 0
	break;
	case 8821://(2,2) (7, 5)
		return 68;//4 4
	break;
	case 8822://(2,2) (7, 6)
		return 64;//4 0
	break;
	case 8823://(2,2) (7, 7)
		return 68;//4 4
	break;
	case 8824://(2,2) (7, 8)
		return 64;//4 0
	break;
	case 8825://(2,2) (7, 9)
		return 68;//4 4
	break;
	case 8826://(2,2) (7, 10)
		return 64;//4 0
	break;
	case 8827://(2,2) (7, 11)
		return 68;//4 4
	break;
	case 8828://(2,2) (7, 12)
		return 68;//4 4
	break;
	case 8829://(2,2) (7, 13)
		return 64;//4 0
	break;
	case 8830://(2,2) (7, 14)
		return 68;//4 4
	break;
	case 8831://(2,2) (7, 15)
		return 68;//4 4
	break;
	case 8832://(2,2) (8, 0)
		return 0;//0 0
	break;
	case 8833://(2,2) (8, 1)
		return 0;//0 0
	break;
	case 8834://(2,2) (8, 2)
		return 4;//0 4
	break;
	case 8835://(2,2) (8, 3)
		return 0;//0 0
	break;
	case 8836://(2,2) (8, 4)
		return 0;//0 0
	break;
	case 8837://(2,2) (8, 5)
		return 4;//0 4
	break;
	case 8838://(2,2) (8, 6)
		return 0;//0 0
	break;
	case 8839://(2,2) (8, 7)
		return 4;//0 4
	break;
	case 8840://(2,2) (8, 8)
		return 0;//0 0
	break;
	case 8841://(2,2) (8, 9)
		return 4;//0 4
	break;
	case 8842://(2,2) (8, 10)
		return 0;//0 0
	break;
	case 8843://(2,2) (8, 11)
		return 4;//0 4
	break;
	case 8844://(2,2) (8, 12)
		return 4;//0 4
	break;
	case 8845://(2,2) (8, 13)
		return 0;//0 0
	break;
	case 8846://(2,2) (8, 14)
		return 4;//0 4
	break;
	case 8847://(2,2) (8, 15)
		return 4;//0 4
	break;
	case 8848://(2,2) (9, 0)
		return 64;//4 0
	break;
	case 8849://(2,2) (9, 1)
		return 64;//4 0
	break;
	case 8850://(2,2) (9, 2)
		return 68;//4 4
	break;
	case 8851://(2,2) (9, 3)
		return 64;//4 0
	break;
	case 8852://(2,2) (9, 4)
		return 64;//4 0
	break;
	case 8853://(2,2) (9, 5)
		return 68;//4 4
	break;
	case 8854://(2,2) (9, 6)
		return 64;//4 0
	break;
	case 8855://(2,2) (9, 7)
		return 68;//4 4
	break;
	case 8856://(2,2) (9, 8)
		return 64;//4 0
	break;
	case 8857://(2,2) (9, 9)
		return 68;//4 4
	break;
	case 8858://(2,2) (9, 10)
		return 64;//4 0
	break;
	case 8859://(2,2) (9, 11)
		return 68;//4 4
	break;
	case 8860://(2,2) (9, 12)
		return 68;//4 4
	break;
	case 8861://(2,2) (9, 13)
		return 64;//4 0
	break;
	case 8862://(2,2) (9, 14)
		return 68;//4 4
	break;
	case 8863://(2,2) (9, 15)
		return 68;//4 4
	break;
	case 8864://(2,2) (10, 0)
		return 0;//0 0
	break;
	case 8865://(2,2) (10, 1)
		return 0;//0 0
	break;
	case 8866://(2,2) (10, 2)
		return 4;//0 4
	break;
	case 8867://(2,2) (10, 3)
		return 0;//0 0
	break;
	case 8868://(2,2) (10, 4)
		return 0;//0 0
	break;
	case 8869://(2,2) (10, 5)
		return 4;//0 4
	break;
	case 8870://(2,2) (10, 6)
		return 0;//0 0
	break;
	case 8871://(2,2) (10, 7)
		return 4;//0 4
	break;
	case 8872://(2,2) (10, 8)
		return 0;//0 0
	break;
	case 8873://(2,2) (10, 9)
		return 4;//0 4
	break;
	case 8874://(2,2) (10, 10)
		return 0;//0 0
	break;
	case 8875://(2,2) (10, 11)
		return 4;//0 4
	break;
	case 8876://(2,2) (10, 12)
		return 4;//0 4
	break;
	case 8877://(2,2) (10, 13)
		return 0;//0 0
	break;
	case 8878://(2,2) (10, 14)
		return 4;//0 4
	break;
	case 8879://(2,2) (10, 15)
		return 4;//0 4
	break;
	case 8880://(2,2) (11, 0)
		return 64;//4 0
	break;
	case 8881://(2,2) (11, 1)
		return 64;//4 0
	break;
	case 8882://(2,2) (11, 2)
		return 68;//4 4
	break;
	case 8883://(2,2) (11, 3)
		return 64;//4 0
	break;
	case 8884://(2,2) (11, 4)
		return 64;//4 0
	break;
	case 8885://(2,2) (11, 5)
		return 68;//4 4
	break;
	case 8886://(2,2) (11, 6)
		return 64;//4 0
	break;
	case 8887://(2,2) (11, 7)
		return 68;//4 4
	break;
	case 8888://(2,2) (11, 8)
		return 64;//4 0
	break;
	case 8889://(2,2) (11, 9)
		return 68;//4 4
	break;
	case 8890://(2,2) (11, 10)
		return 64;//4 0
	break;
	case 8891://(2,2) (11, 11)
		return 68;//4 4
	break;
	case 8892://(2,2) (11, 12)
		return 68;//4 4
	break;
	case 8893://(2,2) (11, 13)
		return 64;//4 0
	break;
	case 8894://(2,2) (11, 14)
		return 68;//4 4
	break;
	case 8895://(2,2) (11, 15)
		return 68;//4 4
	break;
	case 8896://(2,2) (12, 0)
		return 64;//4 0
	break;
	case 8897://(2,2) (12, 1)
		return 64;//4 0
	break;
	case 8898://(2,2) (12, 2)
		return 68;//4 4
	break;
	case 8899://(2,2) (12, 3)
		return 64;//4 0
	break;
	case 8900://(2,2) (12, 4)
		return 64;//4 0
	break;
	case 8901://(2,2) (12, 5)
		return 68;//4 4
	break;
	case 8902://(2,2) (12, 6)
		return 64;//4 0
	break;
	case 8903://(2,2) (12, 7)
		return 68;//4 4
	break;
	case 8904://(2,2) (12, 8)
		return 64;//4 0
	break;
	case 8905://(2,2) (12, 9)
		return 68;//4 4
	break;
	case 8906://(2,2) (12, 10)
		return 64;//4 0
	break;
	case 8907://(2,2) (12, 11)
		return 68;//4 4
	break;
	case 8908://(2,2) (12, 12)
		return 68;//4 4
	break;
	case 8909://(2,2) (12, 13)
		return 64;//4 0
	break;
	case 8910://(2,2) (12, 14)
		return 68;//4 4
	break;
	case 8911://(2,2) (12, 15)
		return 68;//4 4
	break;
	case 8912://(2,2) (13, 0)
		return 0;//0 0
	break;
	case 8913://(2,2) (13, 1)
		return 0;//0 0
	break;
	case 8914://(2,2) (13, 2)
		return 4;//0 4
	break;
	case 8915://(2,2) (13, 3)
		return 0;//0 0
	break;
	case 8916://(2,2) (13, 4)
		return 0;//0 0
	break;
	case 8917://(2,2) (13, 5)
		return 4;//0 4
	break;
	case 8918://(2,2) (13, 6)
		return 0;//0 0
	break;
	case 8919://(2,2) (13, 7)
		return 4;//0 4
	break;
	case 8920://(2,2) (13, 8)
		return 0;//0 0
	break;
	case 8921://(2,2) (13, 9)
		return 4;//0 4
	break;
	case 8922://(2,2) (13, 10)
		return 0;//0 0
	break;
	case 8923://(2,2) (13, 11)
		return 4;//0 4
	break;
	case 8924://(2,2) (13, 12)
		return 4;//0 4
	break;
	case 8925://(2,2) (13, 13)
		return 0;//0 0
	break;
	case 8926://(2,2) (13, 14)
		return 4;//0 4
	break;
	case 8927://(2,2) (13, 15)
		return 4;//0 4
	break;
	case 8928://(2,2) (14, 0)
		return 64;//4 0
	break;
	case 8929://(2,2) (14, 1)
		return 64;//4 0
	break;
	case 8930://(2,2) (14, 2)
		return 68;//4 4
	break;
	case 8931://(2,2) (14, 3)
		return 64;//4 0
	break;
	case 8932://(2,2) (14, 4)
		return 64;//4 0
	break;
	case 8933://(2,2) (14, 5)
		return 68;//4 4
	break;
	case 8934://(2,2) (14, 6)
		return 64;//4 0
	break;
	case 8935://(2,2) (14, 7)
		return 68;//4 4
	break;
	case 8936://(2,2) (14, 8)
		return 64;//4 0
	break;
	case 8937://(2,2) (14, 9)
		return 68;//4 4
	break;
	case 8938://(2,2) (14, 10)
		return 64;//4 0
	break;
	case 8939://(2,2) (14, 11)
		return 68;//4 4
	break;
	case 8940://(2,2) (14, 12)
		return 68;//4 4
	break;
	case 8941://(2,2) (14, 13)
		return 64;//4 0
	break;
	case 8942://(2,2) (14, 14)
		return 68;//4 4
	break;
	case 8943://(2,2) (14, 15)
		return 68;//4 4
	break;
	case 8944://(2,2) (15, 0)
		return 64;//4 0
	break;
	case 8945://(2,2) (15, 1)
		return 64;//4 0
	break;
	case 8946://(2,2) (15, 2)
		return 68;//4 4
	break;
	case 8947://(2,2) (15, 3)
		return 64;//4 0
	break;
	case 8948://(2,2) (15, 4)
		return 64;//4 0
	break;
	case 8949://(2,2) (15, 5)
		return 68;//4 4
	break;
	case 8950://(2,2) (15, 6)
		return 64;//4 0
	break;
	case 8951://(2,2) (15, 7)
		return 68;//4 4
	break;
	case 8952://(2,2) (15, 8)
		return 64;//4 0
	break;
	case 8953://(2,2) (15, 9)
		return 68;//4 4
	break;
	case 8954://(2,2) (15, 10)
		return 64;//4 0
	break;
	case 8955://(2,2) (15, 11)
		return 68;//4 4
	break;
	case 8956://(2,2) (15, 12)
		return 68;//4 4
	break;
	case 8957://(2,2) (15, 13)
		return 64;//4 0
	break;
	case 8958://(2,2) (15, 14)
		return 68;//4 4
	break;
	case 8959://(2,2) (15, 15)
		return 68;//4 4
	break;
	case 8960://(2,3) (0, 0)
		return 0;//0 0
	break;
	case 8961://(2,3) (0, 1)
		return 0;//0 0
	break;
	case 8962://(2,3) (0, 2)
		return 0;//0 0
	break;
	case 8963://(2,3) (0, 3)
		return 4;//0 4
	break;
	case 8964://(2,3) (0, 4)
		return 0;//0 0
	break;
	case 8965://(2,3) (0, 5)
		return 0;//0 0
	break;
	case 8966://(2,3) (0, 6)
		return 4;//0 4
	break;
	case 8967://(2,3) (0, 7)
		return 4;//0 4
	break;
	case 8968://(2,3) (0, 8)
		return 0;//0 0
	break;
	case 8969://(2,3) (0, 9)
		return 0;//0 0
	break;
	case 8970://(2,3) (0, 10)
		return 4;//0 4
	break;
	case 8971://(2,3) (0, 11)
		return 4;//0 4
	break;
	case 8972://(2,3) (0, 12)
		return 4;//0 4
	break;
	case 8973://(2,3) (0, 13)
		return 4;//0 4
	break;
	case 8974://(2,3) (0, 14)
		return 0;//0 0
	break;
	case 8975://(2,3) (0, 15)
		return 4;//0 4
	break;
	case 8976://(2,3) (1, 0)
		return 0;//0 0
	break;
	case 8977://(2,3) (1, 1)
		return 0;//0 0
	break;
	case 8978://(2,3) (1, 2)
		return 0;//0 0
	break;
	case 8979://(2,3) (1, 3)
		return 4;//0 4
	break;
	case 8980://(2,3) (1, 4)
		return 0;//0 0
	break;
	case 8981://(2,3) (1, 5)
		return 0;//0 0
	break;
	case 8982://(2,3) (1, 6)
		return 4;//0 4
	break;
	case 8983://(2,3) (1, 7)
		return 4;//0 4
	break;
	case 8984://(2,3) (1, 8)
		return 0;//0 0
	break;
	case 8985://(2,3) (1, 9)
		return 0;//0 0
	break;
	case 8986://(2,3) (1, 10)
		return 4;//0 4
	break;
	case 8987://(2,3) (1, 11)
		return 4;//0 4
	break;
	case 8988://(2,3) (1, 12)
		return 4;//0 4
	break;
	case 8989://(2,3) (1, 13)
		return 4;//0 4
	break;
	case 8990://(2,3) (1, 14)
		return 0;//0 0
	break;
	case 8991://(2,3) (1, 15)
		return 4;//0 4
	break;
	case 8992://(2,3) (2, 0)
		return 64;//4 0
	break;
	case 8993://(2,3) (2, 1)
		return 64;//4 0
	break;
	case 8994://(2,3) (2, 2)
		return 64;//4 0
	break;
	case 8995://(2,3) (2, 3)
		return 68;//4 4
	break;
	case 8996://(2,3) (2, 4)
		return 64;//4 0
	break;
	case 8997://(2,3) (2, 5)
		return 64;//4 0
	break;
	case 8998://(2,3) (2, 6)
		return 68;//4 4
	break;
	case 8999://(2,3) (2, 7)
		return 68;//4 4
	break;
	case 9000://(2,3) (2, 8)
		return 64;//4 0
	break;
	case 9001://(2,3) (2, 9)
		return 64;//4 0
	break;
	case 9002://(2,3) (2, 10)
		return 68;//4 4
	break;
	case 9003://(2,3) (2, 11)
		return 68;//4 4
	break;
	case 9004://(2,3) (2, 12)
		return 68;//4 4
	break;
	case 9005://(2,3) (2, 13)
		return 68;//4 4
	break;
	case 9006://(2,3) (2, 14)
		return 64;//4 0
	break;
	case 9007://(2,3) (2, 15)
		return 68;//4 4
	break;
	case 9008://(2,3) (3, 0)
		return 0;//0 0
	break;
	case 9009://(2,3) (3, 1)
		return 0;//0 0
	break;
	case 9010://(2,3) (3, 2)
		return 0;//0 0
	break;
	case 9011://(2,3) (3, 3)
		return 4;//0 4
	break;
	case 9012://(2,3) (3, 4)
		return 0;//0 0
	break;
	case 9013://(2,3) (3, 5)
		return 0;//0 0
	break;
	case 9014://(2,3) (3, 6)
		return 4;//0 4
	break;
	case 9015://(2,3) (3, 7)
		return 4;//0 4
	break;
	case 9016://(2,3) (3, 8)
		return 0;//0 0
	break;
	case 9017://(2,3) (3, 9)
		return 0;//0 0
	break;
	case 9018://(2,3) (3, 10)
		return 4;//0 4
	break;
	case 9019://(2,3) (3, 11)
		return 4;//0 4
	break;
	case 9020://(2,3) (3, 12)
		return 4;//0 4
	break;
	case 9021://(2,3) (3, 13)
		return 4;//0 4
	break;
	case 9022://(2,3) (3, 14)
		return 0;//0 0
	break;
	case 9023://(2,3) (3, 15)
		return 4;//0 4
	break;
	case 9024://(2,3) (4, 0)
		return 0;//0 0
	break;
	case 9025://(2,3) (4, 1)
		return 0;//0 0
	break;
	case 9026://(2,3) (4, 2)
		return 0;//0 0
	break;
	case 9027://(2,3) (4, 3)
		return 4;//0 4
	break;
	case 9028://(2,3) (4, 4)
		return 0;//0 0
	break;
	case 9029://(2,3) (4, 5)
		return 0;//0 0
	break;
	case 9030://(2,3) (4, 6)
		return 4;//0 4
	break;
	case 9031://(2,3) (4, 7)
		return 4;//0 4
	break;
	case 9032://(2,3) (4, 8)
		return 0;//0 0
	break;
	case 9033://(2,3) (4, 9)
		return 0;//0 0
	break;
	case 9034://(2,3) (4, 10)
		return 4;//0 4
	break;
	case 9035://(2,3) (4, 11)
		return 4;//0 4
	break;
	case 9036://(2,3) (4, 12)
		return 4;//0 4
	break;
	case 9037://(2,3) (4, 13)
		return 4;//0 4
	break;
	case 9038://(2,3) (4, 14)
		return 0;//0 0
	break;
	case 9039://(2,3) (4, 15)
		return 4;//0 4
	break;
	case 9040://(2,3) (5, 0)
		return 64;//4 0
	break;
	case 9041://(2,3) (5, 1)
		return 64;//4 0
	break;
	case 9042://(2,3) (5, 2)
		return 64;//4 0
	break;
	case 9043://(2,3) (5, 3)
		return 68;//4 4
	break;
	case 9044://(2,3) (5, 4)
		return 64;//4 0
	break;
	case 9045://(2,3) (5, 5)
		return 64;//4 0
	break;
	case 9046://(2,3) (5, 6)
		return 68;//4 4
	break;
	case 9047://(2,3) (5, 7)
		return 68;//4 4
	break;
	case 9048://(2,3) (5, 8)
		return 64;//4 0
	break;
	case 9049://(2,3) (5, 9)
		return 64;//4 0
	break;
	case 9050://(2,3) (5, 10)
		return 68;//4 4
	break;
	case 9051://(2,3) (5, 11)
		return 68;//4 4
	break;
	case 9052://(2,3) (5, 12)
		return 68;//4 4
	break;
	case 9053://(2,3) (5, 13)
		return 68;//4 4
	break;
	case 9054://(2,3) (5, 14)
		return 64;//4 0
	break;
	case 9055://(2,3) (5, 15)
		return 68;//4 4
	break;
	case 9056://(2,3) (6, 0)
		return 0;//0 0
	break;
	case 9057://(2,3) (6, 1)
		return 0;//0 0
	break;
	case 9058://(2,3) (6, 2)
		return 0;//0 0
	break;
	case 9059://(2,3) (6, 3)
		return 4;//0 4
	break;
	case 9060://(2,3) (6, 4)
		return 0;//0 0
	break;
	case 9061://(2,3) (6, 5)
		return 0;//0 0
	break;
	case 9062://(2,3) (6, 6)
		return 4;//0 4
	break;
	case 9063://(2,3) (6, 7)
		return 4;//0 4
	break;
	case 9064://(2,3) (6, 8)
		return 0;//0 0
	break;
	case 9065://(2,3) (6, 9)
		return 0;//0 0
	break;
	case 9066://(2,3) (6, 10)
		return 4;//0 4
	break;
	case 9067://(2,3) (6, 11)
		return 4;//0 4
	break;
	case 9068://(2,3) (6, 12)
		return 4;//0 4
	break;
	case 9069://(2,3) (6, 13)
		return 4;//0 4
	break;
	case 9070://(2,3) (6, 14)
		return 0;//0 0
	break;
	case 9071://(2,3) (6, 15)
		return 4;//0 4
	break;
	case 9072://(2,3) (7, 0)
		return 64;//4 0
	break;
	case 9073://(2,3) (7, 1)
		return 64;//4 0
	break;
	case 9074://(2,3) (7, 2)
		return 64;//4 0
	break;
	case 9075://(2,3) (7, 3)
		return 68;//4 4
	break;
	case 9076://(2,3) (7, 4)
		return 64;//4 0
	break;
	case 9077://(2,3) (7, 5)
		return 64;//4 0
	break;
	case 9078://(2,3) (7, 6)
		return 68;//4 4
	break;
	case 9079://(2,3) (7, 7)
		return 68;//4 4
	break;
	case 9080://(2,3) (7, 8)
		return 64;//4 0
	break;
	case 9081://(2,3) (7, 9)
		return 64;//4 0
	break;
	case 9082://(2,3) (7, 10)
		return 68;//4 4
	break;
	case 9083://(2,3) (7, 11)
		return 68;//4 4
	break;
	case 9084://(2,3) (7, 12)
		return 68;//4 4
	break;
	case 9085://(2,3) (7, 13)
		return 68;//4 4
	break;
	case 9086://(2,3) (7, 14)
		return 64;//4 0
	break;
	case 9087://(2,3) (7, 15)
		return 68;//4 4
	break;
	case 9088://(2,3) (8, 0)
		return 0;//0 0
	break;
	case 9089://(2,3) (8, 1)
		return 0;//0 0
	break;
	case 9090://(2,3) (8, 2)
		return 0;//0 0
	break;
	case 9091://(2,3) (8, 3)
		return 4;//0 4
	break;
	case 9092://(2,3) (8, 4)
		return 0;//0 0
	break;
	case 9093://(2,3) (8, 5)
		return 0;//0 0
	break;
	case 9094://(2,3) (8, 6)
		return 4;//0 4
	break;
	case 9095://(2,3) (8, 7)
		return 4;//0 4
	break;
	case 9096://(2,3) (8, 8)
		return 0;//0 0
	break;
	case 9097://(2,3) (8, 9)
		return 0;//0 0
	break;
	case 9098://(2,3) (8, 10)
		return 4;//0 4
	break;
	case 9099://(2,3) (8, 11)
		return 4;//0 4
	break;
	case 9100://(2,3) (8, 12)
		return 4;//0 4
	break;
	case 9101://(2,3) (8, 13)
		return 4;//0 4
	break;
	case 9102://(2,3) (8, 14)
		return 0;//0 0
	break;
	case 9103://(2,3) (8, 15)
		return 4;//0 4
	break;
	case 9104://(2,3) (9, 0)
		return 64;//4 0
	break;
	case 9105://(2,3) (9, 1)
		return 64;//4 0
	break;
	case 9106://(2,3) (9, 2)
		return 64;//4 0
	break;
	case 9107://(2,3) (9, 3)
		return 68;//4 4
	break;
	case 9108://(2,3) (9, 4)
		return 64;//4 0
	break;
	case 9109://(2,3) (9, 5)
		return 64;//4 0
	break;
	case 9110://(2,3) (9, 6)
		return 68;//4 4
	break;
	case 9111://(2,3) (9, 7)
		return 68;//4 4
	break;
	case 9112://(2,3) (9, 8)
		return 64;//4 0
	break;
	case 9113://(2,3) (9, 9)
		return 64;//4 0
	break;
	case 9114://(2,3) (9, 10)
		return 68;//4 4
	break;
	case 9115://(2,3) (9, 11)
		return 68;//4 4
	break;
	case 9116://(2,3) (9, 12)
		return 68;//4 4
	break;
	case 9117://(2,3) (9, 13)
		return 68;//4 4
	break;
	case 9118://(2,3) (9, 14)
		return 64;//4 0
	break;
	case 9119://(2,3) (9, 15)
		return 68;//4 4
	break;
	case 9120://(2,3) (10, 0)
		return 0;//0 0
	break;
	case 9121://(2,3) (10, 1)
		return 0;//0 0
	break;
	case 9122://(2,3) (10, 2)
		return 0;//0 0
	break;
	case 9123://(2,3) (10, 3)
		return 4;//0 4
	break;
	case 9124://(2,3) (10, 4)
		return 0;//0 0
	break;
	case 9125://(2,3) (10, 5)
		return 0;//0 0
	break;
	case 9126://(2,3) (10, 6)
		return 4;//0 4
	break;
	case 9127://(2,3) (10, 7)
		return 4;//0 4
	break;
	case 9128://(2,3) (10, 8)
		return 0;//0 0
	break;
	case 9129://(2,3) (10, 9)
		return 0;//0 0
	break;
	case 9130://(2,3) (10, 10)
		return 4;//0 4
	break;
	case 9131://(2,3) (10, 11)
		return 4;//0 4
	break;
	case 9132://(2,3) (10, 12)
		return 4;//0 4
	break;
	case 9133://(2,3) (10, 13)
		return 4;//0 4
	break;
	case 9134://(2,3) (10, 14)
		return 0;//0 0
	break;
	case 9135://(2,3) (10, 15)
		return 4;//0 4
	break;
	case 9136://(2,3) (11, 0)
		return 64;//4 0
	break;
	case 9137://(2,3) (11, 1)
		return 64;//4 0
	break;
	case 9138://(2,3) (11, 2)
		return 64;//4 0
	break;
	case 9139://(2,3) (11, 3)
		return 68;//4 4
	break;
	case 9140://(2,3) (11, 4)
		return 64;//4 0
	break;
	case 9141://(2,3) (11, 5)
		return 64;//4 0
	break;
	case 9142://(2,3) (11, 6)
		return 68;//4 4
	break;
	case 9143://(2,3) (11, 7)
		return 68;//4 4
	break;
	case 9144://(2,3) (11, 8)
		return 64;//4 0
	break;
	case 9145://(2,3) (11, 9)
		return 64;//4 0
	break;
	case 9146://(2,3) (11, 10)
		return 68;//4 4
	break;
	case 9147://(2,3) (11, 11)
		return 68;//4 4
	break;
	case 9148://(2,3) (11, 12)
		return 68;//4 4
	break;
	case 9149://(2,3) (11, 13)
		return 68;//4 4
	break;
	case 9150://(2,3) (11, 14)
		return 64;//4 0
	break;
	case 9151://(2,3) (11, 15)
		return 68;//4 4
	break;
	case 9152://(2,3) (12, 0)
		return 64;//4 0
	break;
	case 9153://(2,3) (12, 1)
		return 64;//4 0
	break;
	case 9154://(2,3) (12, 2)
		return 64;//4 0
	break;
	case 9155://(2,3) (12, 3)
		return 68;//4 4
	break;
	case 9156://(2,3) (12, 4)
		return 64;//4 0
	break;
	case 9157://(2,3) (12, 5)
		return 64;//4 0
	break;
	case 9158://(2,3) (12, 6)
		return 68;//4 4
	break;
	case 9159://(2,3) (12, 7)
		return 68;//4 4
	break;
	case 9160://(2,3) (12, 8)
		return 64;//4 0
	break;
	case 9161://(2,3) (12, 9)
		return 64;//4 0
	break;
	case 9162://(2,3) (12, 10)
		return 68;//4 4
	break;
	case 9163://(2,3) (12, 11)
		return 68;//4 4
	break;
	case 9164://(2,3) (12, 12)
		return 68;//4 4
	break;
	case 9165://(2,3) (12, 13)
		return 68;//4 4
	break;
	case 9166://(2,3) (12, 14)
		return 64;//4 0
	break;
	case 9167://(2,3) (12, 15)
		return 68;//4 4
	break;
	case 9168://(2,3) (13, 0)
		return 0;//0 0
	break;
	case 9169://(2,3) (13, 1)
		return 0;//0 0
	break;
	case 9170://(2,3) (13, 2)
		return 0;//0 0
	break;
	case 9171://(2,3) (13, 3)
		return 4;//0 4
	break;
	case 9172://(2,3) (13, 4)
		return 0;//0 0
	break;
	case 9173://(2,3) (13, 5)
		return 0;//0 0
	break;
	case 9174://(2,3) (13, 6)
		return 4;//0 4
	break;
	case 9175://(2,3) (13, 7)
		return 4;//0 4
	break;
	case 9176://(2,3) (13, 8)
		return 0;//0 0
	break;
	case 9177://(2,3) (13, 9)
		return 0;//0 0
	break;
	case 9178://(2,3) (13, 10)
		return 4;//0 4
	break;
	case 9179://(2,3) (13, 11)
		return 4;//0 4
	break;
	case 9180://(2,3) (13, 12)
		return 4;//0 4
	break;
	case 9181://(2,3) (13, 13)
		return 4;//0 4
	break;
	case 9182://(2,3) (13, 14)
		return 0;//0 0
	break;
	case 9183://(2,3) (13, 15)
		return 4;//0 4
	break;
	case 9184://(2,3) (14, 0)
		return 64;//4 0
	break;
	case 9185://(2,3) (14, 1)
		return 64;//4 0
	break;
	case 9186://(2,3) (14, 2)
		return 64;//4 0
	break;
	case 9187://(2,3) (14, 3)
		return 68;//4 4
	break;
	case 9188://(2,3) (14, 4)
		return 64;//4 0
	break;
	case 9189://(2,3) (14, 5)
		return 64;//4 0
	break;
	case 9190://(2,3) (14, 6)
		return 68;//4 4
	break;
	case 9191://(2,3) (14, 7)
		return 68;//4 4
	break;
	case 9192://(2,3) (14, 8)
		return 64;//4 0
	break;
	case 9193://(2,3) (14, 9)
		return 64;//4 0
	break;
	case 9194://(2,3) (14, 10)
		return 68;//4 4
	break;
	case 9195://(2,3) (14, 11)
		return 68;//4 4
	break;
	case 9196://(2,3) (14, 12)
		return 68;//4 4
	break;
	case 9197://(2,3) (14, 13)
		return 68;//4 4
	break;
	case 9198://(2,3) (14, 14)
		return 64;//4 0
	break;
	case 9199://(2,3) (14, 15)
		return 68;//4 4
	break;
	case 9200://(2,3) (15, 0)
		return 64;//4 0
	break;
	case 9201://(2,3) (15, 1)
		return 64;//4 0
	break;
	case 9202://(2,3) (15, 2)
		return 64;//4 0
	break;
	case 9203://(2,3) (15, 3)
		return 68;//4 4
	break;
	case 9204://(2,3) (15, 4)
		return 64;//4 0
	break;
	case 9205://(2,3) (15, 5)
		return 64;//4 0
	break;
	case 9206://(2,3) (15, 6)
		return 68;//4 4
	break;
	case 9207://(2,3) (15, 7)
		return 68;//4 4
	break;
	case 9208://(2,3) (15, 8)
		return 64;//4 0
	break;
	case 9209://(2,3) (15, 9)
		return 64;//4 0
	break;
	case 9210://(2,3) (15, 10)
		return 68;//4 4
	break;
	case 9211://(2,3) (15, 11)
		return 68;//4 4
	break;
	case 9212://(2,3) (15, 12)
		return 68;//4 4
	break;
	case 9213://(2,3) (15, 13)
		return 68;//4 4
	break;
	case 9214://(2,3) (15, 14)
		return 64;//4 0
	break;
	case 9215://(2,3) (15, 15)
		return 68;//4 4
	break;
	case 9216://(2,4) (0, 0)
		return 0;//0 0
	break;
	case 9217://(2,4) (0, 1)
		return 0;//0 0
	break;
	case 9218://(2,4) (0, 2)
		return 0;//0 0
	break;
	case 9219://(2,4) (0, 3)
		return 0;//0 0
	break;
	case 9220://(2,4) (0, 4)
		return 4;//0 4
	break;
	case 9221://(2,4) (0, 5)
		return 4;//0 4
	break;
	case 9222://(2,4) (0, 6)
		return 0;//0 0
	break;
	case 9223://(2,4) (0, 7)
		return 0;//0 0
	break;
	case 9224://(2,4) (0, 8)
		return 4;//0 4
	break;
	case 9225://(2,4) (0, 9)
		return 0;//0 0
	break;
	case 9226://(2,4) (0, 10)
		return 4;//0 4
	break;
	case 9227://(2,4) (0, 11)
		return 0;//0 0
	break;
	case 9228://(2,4) (0, 12)
		return 4;//0 4
	break;
	case 9229://(2,4) (0, 13)
		return 4;//0 4
	break;
	case 9230://(2,4) (0, 14)
		return 4;//0 4
	break;
	case 9231://(2,4) (0, 15)
		return 4;//0 4
	break;
	case 9232://(2,4) (1, 0)
		return 0;//0 0
	break;
	case 9233://(2,4) (1, 1)
		return 0;//0 0
	break;
	case 9234://(2,4) (1, 2)
		return 0;//0 0
	break;
	case 9235://(2,4) (1, 3)
		return 0;//0 0
	break;
	case 9236://(2,4) (1, 4)
		return 4;//0 4
	break;
	case 9237://(2,4) (1, 5)
		return 4;//0 4
	break;
	case 9238://(2,4) (1, 6)
		return 0;//0 0
	break;
	case 9239://(2,4) (1, 7)
		return 0;//0 0
	break;
	case 9240://(2,4) (1, 8)
		return 4;//0 4
	break;
	case 9241://(2,4) (1, 9)
		return 0;//0 0
	break;
	case 9242://(2,4) (1, 10)
		return 4;//0 4
	break;
	case 9243://(2,4) (1, 11)
		return 0;//0 0
	break;
	case 9244://(2,4) (1, 12)
		return 4;//0 4
	break;
	case 9245://(2,4) (1, 13)
		return 4;//0 4
	break;
	case 9246://(2,4) (1, 14)
		return 4;//0 4
	break;
	case 9247://(2,4) (1, 15)
		return 4;//0 4
	break;
	case 9248://(2,4) (2, 0)
		return 64;//4 0
	break;
	case 9249://(2,4) (2, 1)
		return 64;//4 0
	break;
	case 9250://(2,4) (2, 2)
		return 64;//4 0
	break;
	case 9251://(2,4) (2, 3)
		return 64;//4 0
	break;
	case 9252://(2,4) (2, 4)
		return 68;//4 4
	break;
	case 9253://(2,4) (2, 5)
		return 68;//4 4
	break;
	case 9254://(2,4) (2, 6)
		return 64;//4 0
	break;
	case 9255://(2,4) (2, 7)
		return 64;//4 0
	break;
	case 9256://(2,4) (2, 8)
		return 68;//4 4
	break;
	case 9257://(2,4) (2, 9)
		return 64;//4 0
	break;
	case 9258://(2,4) (2, 10)
		return 68;//4 4
	break;
	case 9259://(2,4) (2, 11)
		return 64;//4 0
	break;
	case 9260://(2,4) (2, 12)
		return 68;//4 4
	break;
	case 9261://(2,4) (2, 13)
		return 68;//4 4
	break;
	case 9262://(2,4) (2, 14)
		return 68;//4 4
	break;
	case 9263://(2,4) (2, 15)
		return 68;//4 4
	break;
	case 9264://(2,4) (3, 0)
		return 0;//0 0
	break;
	case 9265://(2,4) (3, 1)
		return 0;//0 0
	break;
	case 9266://(2,4) (3, 2)
		return 0;//0 0
	break;
	case 9267://(2,4) (3, 3)
		return 0;//0 0
	break;
	case 9268://(2,4) (3, 4)
		return 4;//0 4
	break;
	case 9269://(2,4) (3, 5)
		return 4;//0 4
	break;
	case 9270://(2,4) (3, 6)
		return 0;//0 0
	break;
	case 9271://(2,4) (3, 7)
		return 0;//0 0
	break;
	case 9272://(2,4) (3, 8)
		return 4;//0 4
	break;
	case 9273://(2,4) (3, 9)
		return 0;//0 0
	break;
	case 9274://(2,4) (3, 10)
		return 4;//0 4
	break;
	case 9275://(2,4) (3, 11)
		return 0;//0 0
	break;
	case 9276://(2,4) (3, 12)
		return 4;//0 4
	break;
	case 9277://(2,4) (3, 13)
		return 4;//0 4
	break;
	case 9278://(2,4) (3, 14)
		return 4;//0 4
	break;
	case 9279://(2,4) (3, 15)
		return 4;//0 4
	break;
	case 9280://(2,4) (4, 0)
		return 0;//0 0
	break;
	case 9281://(2,4) (4, 1)
		return 0;//0 0
	break;
	case 9282://(2,4) (4, 2)
		return 0;//0 0
	break;
	case 9283://(2,4) (4, 3)
		return 0;//0 0
	break;
	case 9284://(2,4) (4, 4)
		return 4;//0 4
	break;
	case 9285://(2,4) (4, 5)
		return 4;//0 4
	break;
	case 9286://(2,4) (4, 6)
		return 0;//0 0
	break;
	case 9287://(2,4) (4, 7)
		return 0;//0 0
	break;
	case 9288://(2,4) (4, 8)
		return 4;//0 4
	break;
	case 9289://(2,4) (4, 9)
		return 0;//0 0
	break;
	case 9290://(2,4) (4, 10)
		return 4;//0 4
	break;
	case 9291://(2,4) (4, 11)
		return 0;//0 0
	break;
	case 9292://(2,4) (4, 12)
		return 4;//0 4
	break;
	case 9293://(2,4) (4, 13)
		return 4;//0 4
	break;
	case 9294://(2,4) (4, 14)
		return 4;//0 4
	break;
	case 9295://(2,4) (4, 15)
		return 4;//0 4
	break;
	case 9296://(2,4) (5, 0)
		return 64;//4 0
	break;
	case 9297://(2,4) (5, 1)
		return 64;//4 0
	break;
	case 9298://(2,4) (5, 2)
		return 64;//4 0
	break;
	case 9299://(2,4) (5, 3)
		return 64;//4 0
	break;
	case 9300://(2,4) (5, 4)
		return 68;//4 4
	break;
	case 9301://(2,4) (5, 5)
		return 68;//4 4
	break;
	case 9302://(2,4) (5, 6)
		return 64;//4 0
	break;
	case 9303://(2,4) (5, 7)
		return 64;//4 0
	break;
	case 9304://(2,4) (5, 8)
		return 68;//4 4
	break;
	case 9305://(2,4) (5, 9)
		return 64;//4 0
	break;
	case 9306://(2,4) (5, 10)
		return 68;//4 4
	break;
	case 9307://(2,4) (5, 11)
		return 64;//4 0
	break;
	case 9308://(2,4) (5, 12)
		return 68;//4 4
	break;
	case 9309://(2,4) (5, 13)
		return 68;//4 4
	break;
	case 9310://(2,4) (5, 14)
		return 68;//4 4
	break;
	case 9311://(2,4) (5, 15)
		return 68;//4 4
	break;
	case 9312://(2,4) (6, 0)
		return 0;//0 0
	break;
	case 9313://(2,4) (6, 1)
		return 0;//0 0
	break;
	case 9314://(2,4) (6, 2)
		return 0;//0 0
	break;
	case 9315://(2,4) (6, 3)
		return 0;//0 0
	break;
	case 9316://(2,4) (6, 4)
		return 4;//0 4
	break;
	case 9317://(2,4) (6, 5)
		return 4;//0 4
	break;
	case 9318://(2,4) (6, 6)
		return 0;//0 0
	break;
	case 9319://(2,4) (6, 7)
		return 0;//0 0
	break;
	case 9320://(2,4) (6, 8)
		return 4;//0 4
	break;
	case 9321://(2,4) (6, 9)
		return 0;//0 0
	break;
	case 9322://(2,4) (6, 10)
		return 4;//0 4
	break;
	case 9323://(2,4) (6, 11)
		return 0;//0 0
	break;
	case 9324://(2,4) (6, 12)
		return 4;//0 4
	break;
	case 9325://(2,4) (6, 13)
		return 4;//0 4
	break;
	case 9326://(2,4) (6, 14)
		return 4;//0 4
	break;
	case 9327://(2,4) (6, 15)
		return 4;//0 4
	break;
	case 9328://(2,4) (7, 0)
		return 64;//4 0
	break;
	case 9329://(2,4) (7, 1)
		return 64;//4 0
	break;
	case 9330://(2,4) (7, 2)
		return 64;//4 0
	break;
	case 9331://(2,4) (7, 3)
		return 64;//4 0
	break;
	case 9332://(2,4) (7, 4)
		return 68;//4 4
	break;
	case 9333://(2,4) (7, 5)
		return 68;//4 4
	break;
	case 9334://(2,4) (7, 6)
		return 64;//4 0
	break;
	case 9335://(2,4) (7, 7)
		return 64;//4 0
	break;
	case 9336://(2,4) (7, 8)
		return 68;//4 4
	break;
	case 9337://(2,4) (7, 9)
		return 64;//4 0
	break;
	case 9338://(2,4) (7, 10)
		return 68;//4 4
	break;
	case 9339://(2,4) (7, 11)
		return 64;//4 0
	break;
	case 9340://(2,4) (7, 12)
		return 68;//4 4
	break;
	case 9341://(2,4) (7, 13)
		return 68;//4 4
	break;
	case 9342://(2,4) (7, 14)
		return 68;//4 4
	break;
	case 9343://(2,4) (7, 15)
		return 68;//4 4
	break;
	case 9344://(2,4) (8, 0)
		return 0;//0 0
	break;
	case 9345://(2,4) (8, 1)
		return 0;//0 0
	break;
	case 9346://(2,4) (8, 2)
		return 0;//0 0
	break;
	case 9347://(2,4) (8, 3)
		return 0;//0 0
	break;
	case 9348://(2,4) (8, 4)
		return 4;//0 4
	break;
	case 9349://(2,4) (8, 5)
		return 4;//0 4
	break;
	case 9350://(2,4) (8, 6)
		return 0;//0 0
	break;
	case 9351://(2,4) (8, 7)
		return 0;//0 0
	break;
	case 9352://(2,4) (8, 8)
		return 4;//0 4
	break;
	case 9353://(2,4) (8, 9)
		return 0;//0 0
	break;
	case 9354://(2,4) (8, 10)
		return 4;//0 4
	break;
	case 9355://(2,4) (8, 11)
		return 0;//0 0
	break;
	case 9356://(2,4) (8, 12)
		return 4;//0 4
	break;
	case 9357://(2,4) (8, 13)
		return 4;//0 4
	break;
	case 9358://(2,4) (8, 14)
		return 4;//0 4
	break;
	case 9359://(2,4) (8, 15)
		return 4;//0 4
	break;
	case 9360://(2,4) (9, 0)
		return 64;//4 0
	break;
	case 9361://(2,4) (9, 1)
		return 64;//4 0
	break;
	case 9362://(2,4) (9, 2)
		return 64;//4 0
	break;
	case 9363://(2,4) (9, 3)
		return 64;//4 0
	break;
	case 9364://(2,4) (9, 4)
		return 68;//4 4
	break;
	case 9365://(2,4) (9, 5)
		return 68;//4 4
	break;
	case 9366://(2,4) (9, 6)
		return 64;//4 0
	break;
	case 9367://(2,4) (9, 7)
		return 64;//4 0
	break;
	case 9368://(2,4) (9, 8)
		return 68;//4 4
	break;
	case 9369://(2,4) (9, 9)
		return 64;//4 0
	break;
	case 9370://(2,4) (9, 10)
		return 68;//4 4
	break;
	case 9371://(2,4) (9, 11)
		return 64;//4 0
	break;
	case 9372://(2,4) (9, 12)
		return 68;//4 4
	break;
	case 9373://(2,4) (9, 13)
		return 68;//4 4
	break;
	case 9374://(2,4) (9, 14)
		return 68;//4 4
	break;
	case 9375://(2,4) (9, 15)
		return 68;//4 4
	break;
	case 9376://(2,4) (10, 0)
		return 0;//0 0
	break;
	case 9377://(2,4) (10, 1)
		return 0;//0 0
	break;
	case 9378://(2,4) (10, 2)
		return 0;//0 0
	break;
	case 9379://(2,4) (10, 3)
		return 0;//0 0
	break;
	case 9380://(2,4) (10, 4)
		return 4;//0 4
	break;
	case 9381://(2,4) (10, 5)
		return 4;//0 4
	break;
	case 9382://(2,4) (10, 6)
		return 0;//0 0
	break;
	case 9383://(2,4) (10, 7)
		return 0;//0 0
	break;
	case 9384://(2,4) (10, 8)
		return 4;//0 4
	break;
	case 9385://(2,4) (10, 9)
		return 0;//0 0
	break;
	case 9386://(2,4) (10, 10)
		return 4;//0 4
	break;
	case 9387://(2,4) (10, 11)
		return 0;//0 0
	break;
	case 9388://(2,4) (10, 12)
		return 4;//0 4
	break;
	case 9389://(2,4) (10, 13)
		return 4;//0 4
	break;
	case 9390://(2,4) (10, 14)
		return 4;//0 4
	break;
	case 9391://(2,4) (10, 15)
		return 4;//0 4
	break;
	case 9392://(2,4) (11, 0)
		return 64;//4 0
	break;
	case 9393://(2,4) (11, 1)
		return 64;//4 0
	break;
	case 9394://(2,4) (11, 2)
		return 64;//4 0
	break;
	case 9395://(2,4) (11, 3)
		return 64;//4 0
	break;
	case 9396://(2,4) (11, 4)
		return 68;//4 4
	break;
	case 9397://(2,4) (11, 5)
		return 68;//4 4
	break;
	case 9398://(2,4) (11, 6)
		return 64;//4 0
	break;
	case 9399://(2,4) (11, 7)
		return 64;//4 0
	break;
	case 9400://(2,4) (11, 8)
		return 68;//4 4
	break;
	case 9401://(2,4) (11, 9)
		return 64;//4 0
	break;
	case 9402://(2,4) (11, 10)
		return 68;//4 4
	break;
	case 9403://(2,4) (11, 11)
		return 64;//4 0
	break;
	case 9404://(2,4) (11, 12)
		return 68;//4 4
	break;
	case 9405://(2,4) (11, 13)
		return 68;//4 4
	break;
	case 9406://(2,4) (11, 14)
		return 68;//4 4
	break;
	case 9407://(2,4) (11, 15)
		return 68;//4 4
	break;
	case 9408://(2,4) (12, 0)
		return 64;//4 0
	break;
	case 9409://(2,4) (12, 1)
		return 64;//4 0
	break;
	case 9410://(2,4) (12, 2)
		return 64;//4 0
	break;
	case 9411://(2,4) (12, 3)
		return 64;//4 0
	break;
	case 9412://(2,4) (12, 4)
		return 68;//4 4
	break;
	case 9413://(2,4) (12, 5)
		return 68;//4 4
	break;
	case 9414://(2,4) (12, 6)
		return 64;//4 0
	break;
	case 9415://(2,4) (12, 7)
		return 64;//4 0
	break;
	case 9416://(2,4) (12, 8)
		return 68;//4 4
	break;
	case 9417://(2,4) (12, 9)
		return 64;//4 0
	break;
	case 9418://(2,4) (12, 10)
		return 68;//4 4
	break;
	case 9419://(2,4) (12, 11)
		return 64;//4 0
	break;
	case 9420://(2,4) (12, 12)
		return 68;//4 4
	break;
	case 9421://(2,4) (12, 13)
		return 68;//4 4
	break;
	case 9422://(2,4) (12, 14)
		return 68;//4 4
	break;
	case 9423://(2,4) (12, 15)
		return 68;//4 4
	break;
	case 9424://(2,4) (13, 0)
		return 0;//0 0
	break;
	case 9425://(2,4) (13, 1)
		return 0;//0 0
	break;
	case 9426://(2,4) (13, 2)
		return 0;//0 0
	break;
	case 9427://(2,4) (13, 3)
		return 0;//0 0
	break;
	case 9428://(2,4) (13, 4)
		return 4;//0 4
	break;
	case 9429://(2,4) (13, 5)
		return 4;//0 4
	break;
	case 9430://(2,4) (13, 6)
		return 0;//0 0
	break;
	case 9431://(2,4) (13, 7)
		return 0;//0 0
	break;
	case 9432://(2,4) (13, 8)
		return 4;//0 4
	break;
	case 9433://(2,4) (13, 9)
		return 0;//0 0
	break;
	case 9434://(2,4) (13, 10)
		return 4;//0 4
	break;
	case 9435://(2,4) (13, 11)
		return 0;//0 0
	break;
	case 9436://(2,4) (13, 12)
		return 4;//0 4
	break;
	case 9437://(2,4) (13, 13)
		return 4;//0 4
	break;
	case 9438://(2,4) (13, 14)
		return 4;//0 4
	break;
	case 9439://(2,4) (13, 15)
		return 4;//0 4
	break;
	case 9440://(2,4) (14, 0)
		return 64;//4 0
	break;
	case 9441://(2,4) (14, 1)
		return 64;//4 0
	break;
	case 9442://(2,4) (14, 2)
		return 64;//4 0
	break;
	case 9443://(2,4) (14, 3)
		return 64;//4 0
	break;
	case 9444://(2,4) (14, 4)
		return 68;//4 4
	break;
	case 9445://(2,4) (14, 5)
		return 68;//4 4
	break;
	case 9446://(2,4) (14, 6)
		return 64;//4 0
	break;
	case 9447://(2,4) (14, 7)
		return 64;//4 0
	break;
	case 9448://(2,4) (14, 8)
		return 68;//4 4
	break;
	case 9449://(2,4) (14, 9)
		return 64;//4 0
	break;
	case 9450://(2,4) (14, 10)
		return 68;//4 4
	break;
	case 9451://(2,4) (14, 11)
		return 64;//4 0
	break;
	case 9452://(2,4) (14, 12)
		return 68;//4 4
	break;
	case 9453://(2,4) (14, 13)
		return 68;//4 4
	break;
	case 9454://(2,4) (14, 14)
		return 68;//4 4
	break;
	case 9455://(2,4) (14, 15)
		return 68;//4 4
	break;
	case 9456://(2,4) (15, 0)
		return 64;//4 0
	break;
	case 9457://(2,4) (15, 1)
		return 64;//4 0
	break;
	case 9458://(2,4) (15, 2)
		return 64;//4 0
	break;
	case 9459://(2,4) (15, 3)
		return 64;//4 0
	break;
	case 9460://(2,4) (15, 4)
		return 68;//4 4
	break;
	case 9461://(2,4) (15, 5)
		return 68;//4 4
	break;
	case 9462://(2,4) (15, 6)
		return 64;//4 0
	break;
	case 9463://(2,4) (15, 7)
		return 64;//4 0
	break;
	case 9464://(2,4) (15, 8)
		return 68;//4 4
	break;
	case 9465://(2,4) (15, 9)
		return 64;//4 0
	break;
	case 9466://(2,4) (15, 10)
		return 68;//4 4
	break;
	case 9467://(2,4) (15, 11)
		return 64;//4 0
	break;
	case 9468://(2,4) (15, 12)
		return 68;//4 4
	break;
	case 9469://(2,4) (15, 13)
		return 68;//4 4
	break;
	case 9470://(2,4) (15, 14)
		return 68;//4 4
	break;
	case 9471://(2,4) (15, 15)
		return 68;//4 4
	break;
	case 9472://(2,5) (0, 0)
		return 0;//0 0
	break;
	case 9473://(2,5) (0, 1)
		return 0;//0 0
	break;
	case 9474://(2,5) (0, 2)
		return 3;//0 3
	break;
	case 9475://(2,5) (0, 3)
		return 0;//0 0
	break;
	case 9476://(2,5) (0, 4)
		return 3;//0 3
	break;
	case 9477://(2,5) (0, 5)
		return 3;//0 3
	break;
	case 9478://(2,5) (0, 6)
		return 0;//0 0
	break;
	case 9479://(2,5) (0, 7)
		return 3;//0 3
	break;
	case 9480://(2,5) (0, 8)
		return 3;//0 3
	break;
	case 9481://(2,5) (0, 9)
		return 3;//0 3
	break;
	case 9482://(2,5) (0, 10)
		return 3;//0 3
	break;
	case 9483://(2,5) (0, 11)
		return 3;//0 3
	break;
	case 9484://(2,5) (0, 12)
		return 3;//0 3
	break;
	case 9485://(2,5) (0, 13)
		return 3;//0 3
	break;
	case 9486://(2,5) (0, 14)
		return 3;//0 3
	break;
	case 9487://(2,5) (0, 15)
		return 3;//0 3
	break;
	case 9488://(2,5) (1, 0)
		return 0;//0 0
	break;
	case 9489://(2,5) (1, 1)
		return 0;//0 0
	break;
	case 9490://(2,5) (1, 2)
		return 3;//0 3
	break;
	case 9491://(2,5) (1, 3)
		return 0;//0 0
	break;
	case 9492://(2,5) (1, 4)
		return 3;//0 3
	break;
	case 9493://(2,5) (1, 5)
		return 3;//0 3
	break;
	case 9494://(2,5) (1, 6)
		return 0;//0 0
	break;
	case 9495://(2,5) (1, 7)
		return 3;//0 3
	break;
	case 9496://(2,5) (1, 8)
		return 3;//0 3
	break;
	case 9497://(2,5) (1, 9)
		return 3;//0 3
	break;
	case 9498://(2,5) (1, 10)
		return 3;//0 3
	break;
	case 9499://(2,5) (1, 11)
		return 3;//0 3
	break;
	case 9500://(2,5) (1, 12)
		return 3;//0 3
	break;
	case 9501://(2,5) (1, 13)
		return 3;//0 3
	break;
	case 9502://(2,5) (1, 14)
		return 3;//0 3
	break;
	case 9503://(2,5) (1, 15)
		return 3;//0 3
	break;
	case 9504://(2,5) (2, 0)
		return 64;//4 0
	break;
	case 9505://(2,5) (2, 1)
		return 64;//4 0
	break;
	case 9506://(2,5) (2, 2)
		return 67;//4 3
	break;
	case 9507://(2,5) (2, 3)
		return 64;//4 0
	break;
	case 9508://(2,5) (2, 4)
		return 67;//4 3
	break;
	case 9509://(2,5) (2, 5)
		return 67;//4 3
	break;
	case 9510://(2,5) (2, 6)
		return 64;//4 0
	break;
	case 9511://(2,5) (2, 7)
		return 67;//4 3
	break;
	case 9512://(2,5) (2, 8)
		return 67;//4 3
	break;
	case 9513://(2,5) (2, 9)
		return 67;//4 3
	break;
	case 9514://(2,5) (2, 10)
		return 67;//4 3
	break;
	case 9515://(2,5) (2, 11)
		return 67;//4 3
	break;
	case 9516://(2,5) (2, 12)
		return 67;//4 3
	break;
	case 9517://(2,5) (2, 13)
		return 67;//4 3
	break;
	case 9518://(2,5) (2, 14)
		return 67;//4 3
	break;
	case 9519://(2,5) (2, 15)
		return 67;//4 3
	break;
	case 9520://(2,5) (3, 0)
		return 0;//0 0
	break;
	case 9521://(2,5) (3, 1)
		return 0;//0 0
	break;
	case 9522://(2,5) (3, 2)
		return 3;//0 3
	break;
	case 9523://(2,5) (3, 3)
		return 0;//0 0
	break;
	case 9524://(2,5) (3, 4)
		return 3;//0 3
	break;
	case 9525://(2,5) (3, 5)
		return 3;//0 3
	break;
	case 9526://(2,5) (3, 6)
		return 0;//0 0
	break;
	case 9527://(2,5) (3, 7)
		return 3;//0 3
	break;
	case 9528://(2,5) (3, 8)
		return 3;//0 3
	break;
	case 9529://(2,5) (3, 9)
		return 3;//0 3
	break;
	case 9530://(2,5) (3, 10)
		return 3;//0 3
	break;
	case 9531://(2,5) (3, 11)
		return 3;//0 3
	break;
	case 9532://(2,5) (3, 12)
		return 3;//0 3
	break;
	case 9533://(2,5) (3, 13)
		return 3;//0 3
	break;
	case 9534://(2,5) (3, 14)
		return 3;//0 3
	break;
	case 9535://(2,5) (3, 15)
		return 3;//0 3
	break;
	case 9536://(2,5) (4, 0)
		return 0;//0 0
	break;
	case 9537://(2,5) (4, 1)
		return 0;//0 0
	break;
	case 9538://(2,5) (4, 2)
		return 3;//0 3
	break;
	case 9539://(2,5) (4, 3)
		return 0;//0 0
	break;
	case 9540://(2,5) (4, 4)
		return 3;//0 3
	break;
	case 9541://(2,5) (4, 5)
		return 3;//0 3
	break;
	case 9542://(2,5) (4, 6)
		return 0;//0 0
	break;
	case 9543://(2,5) (4, 7)
		return 3;//0 3
	break;
	case 9544://(2,5) (4, 8)
		return 3;//0 3
	break;
	case 9545://(2,5) (4, 9)
		return 3;//0 3
	break;
	case 9546://(2,5) (4, 10)
		return 3;//0 3
	break;
	case 9547://(2,5) (4, 11)
		return 3;//0 3
	break;
	case 9548://(2,5) (4, 12)
		return 3;//0 3
	break;
	case 9549://(2,5) (4, 13)
		return 3;//0 3
	break;
	case 9550://(2,5) (4, 14)
		return 3;//0 3
	break;
	case 9551://(2,5) (4, 15)
		return 3;//0 3
	break;
	case 9552://(2,5) (5, 0)
		return 64;//4 0
	break;
	case 9553://(2,5) (5, 1)
		return 64;//4 0
	break;
	case 9554://(2,5) (5, 2)
		return 67;//4 3
	break;
	case 9555://(2,5) (5, 3)
		return 64;//4 0
	break;
	case 9556://(2,5) (5, 4)
		return 67;//4 3
	break;
	case 9557://(2,5) (5, 5)
		return 67;//4 3
	break;
	case 9558://(2,5) (5, 6)
		return 64;//4 0
	break;
	case 9559://(2,5) (5, 7)
		return 67;//4 3
	break;
	case 9560://(2,5) (5, 8)
		return 67;//4 3
	break;
	case 9561://(2,5) (5, 9)
		return 67;//4 3
	break;
	case 9562://(2,5) (5, 10)
		return 67;//4 3
	break;
	case 9563://(2,5) (5, 11)
		return 67;//4 3
	break;
	case 9564://(2,5) (5, 12)
		return 67;//4 3
	break;
	case 9565://(2,5) (5, 13)
		return 67;//4 3
	break;
	case 9566://(2,5) (5, 14)
		return 67;//4 3
	break;
	case 9567://(2,5) (5, 15)
		return 67;//4 3
	break;
	case 9568://(2,5) (6, 0)
		return 0;//0 0
	break;
	case 9569://(2,5) (6, 1)
		return 0;//0 0
	break;
	case 9570://(2,5) (6, 2)
		return 3;//0 3
	break;
	case 9571://(2,5) (6, 3)
		return 0;//0 0
	break;
	case 9572://(2,5) (6, 4)
		return 3;//0 3
	break;
	case 9573://(2,5) (6, 5)
		return 3;//0 3
	break;
	case 9574://(2,5) (6, 6)
		return 0;//0 0
	break;
	case 9575://(2,5) (6, 7)
		return 3;//0 3
	break;
	case 9576://(2,5) (6, 8)
		return 3;//0 3
	break;
	case 9577://(2,5) (6, 9)
		return 3;//0 3
	break;
	case 9578://(2,5) (6, 10)
		return 3;//0 3
	break;
	case 9579://(2,5) (6, 11)
		return 3;//0 3
	break;
	case 9580://(2,5) (6, 12)
		return 3;//0 3
	break;
	case 9581://(2,5) (6, 13)
		return 3;//0 3
	break;
	case 9582://(2,5) (6, 14)
		return 3;//0 3
	break;
	case 9583://(2,5) (6, 15)
		return 3;//0 3
	break;
	case 9584://(2,5) (7, 0)
		return 64;//4 0
	break;
	case 9585://(2,5) (7, 1)
		return 64;//4 0
	break;
	case 9586://(2,5) (7, 2)
		return 67;//4 3
	break;
	case 9587://(2,5) (7, 3)
		return 64;//4 0
	break;
	case 9588://(2,5) (7, 4)
		return 67;//4 3
	break;
	case 9589://(2,5) (7, 5)
		return 67;//4 3
	break;
	case 9590://(2,5) (7, 6)
		return 64;//4 0
	break;
	case 9591://(2,5) (7, 7)
		return 67;//4 3
	break;
	case 9592://(2,5) (7, 8)
		return 67;//4 3
	break;
	case 9593://(2,5) (7, 9)
		return 67;//4 3
	break;
	case 9594://(2,5) (7, 10)
		return 67;//4 3
	break;
	case 9595://(2,5) (7, 11)
		return 67;//4 3
	break;
	case 9596://(2,5) (7, 12)
		return 67;//4 3
	break;
	case 9597://(2,5) (7, 13)
		return 67;//4 3
	break;
	case 9598://(2,5) (7, 14)
		return 67;//4 3
	break;
	case 9599://(2,5) (7, 15)
		return 67;//4 3
	break;
	case 9600://(2,5) (8, 0)
		return 0;//0 0
	break;
	case 9601://(2,5) (8, 1)
		return 0;//0 0
	break;
	case 9602://(2,5) (8, 2)
		return 3;//0 3
	break;
	case 9603://(2,5) (8, 3)
		return 0;//0 0
	break;
	case 9604://(2,5) (8, 4)
		return 3;//0 3
	break;
	case 9605://(2,5) (8, 5)
		return 3;//0 3
	break;
	case 9606://(2,5) (8, 6)
		return 0;//0 0
	break;
	case 9607://(2,5) (8, 7)
		return 3;//0 3
	break;
	case 9608://(2,5) (8, 8)
		return 3;//0 3
	break;
	case 9609://(2,5) (8, 9)
		return 3;//0 3
	break;
	case 9610://(2,5) (8, 10)
		return 3;//0 3
	break;
	case 9611://(2,5) (8, 11)
		return 3;//0 3
	break;
	case 9612://(2,5) (8, 12)
		return 3;//0 3
	break;
	case 9613://(2,5) (8, 13)
		return 3;//0 3
	break;
	case 9614://(2,5) (8, 14)
		return 3;//0 3
	break;
	case 9615://(2,5) (8, 15)
		return 3;//0 3
	break;
	case 9616://(2,5) (9, 0)
		return 64;//4 0
	break;
	case 9617://(2,5) (9, 1)
		return 64;//4 0
	break;
	case 9618://(2,5) (9, 2)
		return 67;//4 3
	break;
	case 9619://(2,5) (9, 3)
		return 64;//4 0
	break;
	case 9620://(2,5) (9, 4)
		return 67;//4 3
	break;
	case 9621://(2,5) (9, 5)
		return 67;//4 3
	break;
	case 9622://(2,5) (9, 6)
		return 64;//4 0
	break;
	case 9623://(2,5) (9, 7)
		return 67;//4 3
	break;
	case 9624://(2,5) (9, 8)
		return 67;//4 3
	break;
	case 9625://(2,5) (9, 9)
		return 67;//4 3
	break;
	case 9626://(2,5) (9, 10)
		return 67;//4 3
	break;
	case 9627://(2,5) (9, 11)
		return 67;//4 3
	break;
	case 9628://(2,5) (9, 12)
		return 67;//4 3
	break;
	case 9629://(2,5) (9, 13)
		return 67;//4 3
	break;
	case 9630://(2,5) (9, 14)
		return 67;//4 3
	break;
	case 9631://(2,5) (9, 15)
		return 67;//4 3
	break;
	case 9632://(2,5) (10, 0)
		return 0;//0 0
	break;
	case 9633://(2,5) (10, 1)
		return 0;//0 0
	break;
	case 9634://(2,5) (10, 2)
		return 3;//0 3
	break;
	case 9635://(2,5) (10, 3)
		return 0;//0 0
	break;
	case 9636://(2,5) (10, 4)
		return 3;//0 3
	break;
	case 9637://(2,5) (10, 5)
		return 3;//0 3
	break;
	case 9638://(2,5) (10, 6)
		return 0;//0 0
	break;
	case 9639://(2,5) (10, 7)
		return 3;//0 3
	break;
	case 9640://(2,5) (10, 8)
		return 3;//0 3
	break;
	case 9641://(2,5) (10, 9)
		return 3;//0 3
	break;
	case 9642://(2,5) (10, 10)
		return 3;//0 3
	break;
	case 9643://(2,5) (10, 11)
		return 3;//0 3
	break;
	case 9644://(2,5) (10, 12)
		return 3;//0 3
	break;
	case 9645://(2,5) (10, 13)
		return 3;//0 3
	break;
	case 9646://(2,5) (10, 14)
		return 3;//0 3
	break;
	case 9647://(2,5) (10, 15)
		return 3;//0 3
	break;
	case 9648://(2,5) (11, 0)
		return 64;//4 0
	break;
	case 9649://(2,5) (11, 1)
		return 64;//4 0
	break;
	case 9650://(2,5) (11, 2)
		return 67;//4 3
	break;
	case 9651://(2,5) (11, 3)
		return 64;//4 0
	break;
	case 9652://(2,5) (11, 4)
		return 67;//4 3
	break;
	case 9653://(2,5) (11, 5)
		return 67;//4 3
	break;
	case 9654://(2,5) (11, 6)
		return 64;//4 0
	break;
	case 9655://(2,5) (11, 7)
		return 67;//4 3
	break;
	case 9656://(2,5) (11, 8)
		return 67;//4 3
	break;
	case 9657://(2,5) (11, 9)
		return 67;//4 3
	break;
	case 9658://(2,5) (11, 10)
		return 67;//4 3
	break;
	case 9659://(2,5) (11, 11)
		return 67;//4 3
	break;
	case 9660://(2,5) (11, 12)
		return 67;//4 3
	break;
	case 9661://(2,5) (11, 13)
		return 67;//4 3
	break;
	case 9662://(2,5) (11, 14)
		return 67;//4 3
	break;
	case 9663://(2,5) (11, 15)
		return 67;//4 3
	break;
	case 9664://(2,5) (12, 0)
		return 64;//4 0
	break;
	case 9665://(2,5) (12, 1)
		return 64;//4 0
	break;
	case 9666://(2,5) (12, 2)
		return 67;//4 3
	break;
	case 9667://(2,5) (12, 3)
		return 64;//4 0
	break;
	case 9668://(2,5) (12, 4)
		return 67;//4 3
	break;
	case 9669://(2,5) (12, 5)
		return 67;//4 3
	break;
	case 9670://(2,5) (12, 6)
		return 64;//4 0
	break;
	case 9671://(2,5) (12, 7)
		return 67;//4 3
	break;
	case 9672://(2,5) (12, 8)
		return 67;//4 3
	break;
	case 9673://(2,5) (12, 9)
		return 67;//4 3
	break;
	case 9674://(2,5) (12, 10)
		return 67;//4 3
	break;
	case 9675://(2,5) (12, 11)
		return 67;//4 3
	break;
	case 9676://(2,5) (12, 12)
		return 67;//4 3
	break;
	case 9677://(2,5) (12, 13)
		return 67;//4 3
	break;
	case 9678://(2,5) (12, 14)
		return 67;//4 3
	break;
	case 9679://(2,5) (12, 15)
		return 67;//4 3
	break;
	case 9680://(2,5) (13, 0)
		return 0;//0 0
	break;
	case 9681://(2,5) (13, 1)
		return 0;//0 0
	break;
	case 9682://(2,5) (13, 2)
		return 3;//0 3
	break;
	case 9683://(2,5) (13, 3)
		return 0;//0 0
	break;
	case 9684://(2,5) (13, 4)
		return 3;//0 3
	break;
	case 9685://(2,5) (13, 5)
		return 3;//0 3
	break;
	case 9686://(2,5) (13, 6)
		return 0;//0 0
	break;
	case 9687://(2,5) (13, 7)
		return 3;//0 3
	break;
	case 9688://(2,5) (13, 8)
		return 3;//0 3
	break;
	case 9689://(2,5) (13, 9)
		return 3;//0 3
	break;
	case 9690://(2,5) (13, 10)
		return 3;//0 3
	break;
	case 9691://(2,5) (13, 11)
		return 3;//0 3
	break;
	case 9692://(2,5) (13, 12)
		return 3;//0 3
	break;
	case 9693://(2,5) (13, 13)
		return 3;//0 3
	break;
	case 9694://(2,5) (13, 14)
		return 3;//0 3
	break;
	case 9695://(2,5) (13, 15)
		return 3;//0 3
	break;
	case 9696://(2,5) (14, 0)
		return 64;//4 0
	break;
	case 9697://(2,5) (14, 1)
		return 64;//4 0
	break;
	case 9698://(2,5) (14, 2)
		return 67;//4 3
	break;
	case 9699://(2,5) (14, 3)
		return 64;//4 0
	break;
	case 9700://(2,5) (14, 4)
		return 67;//4 3
	break;
	case 9701://(2,5) (14, 5)
		return 67;//4 3
	break;
	case 9702://(2,5) (14, 6)
		return 64;//4 0
	break;
	case 9703://(2,5) (14, 7)
		return 67;//4 3
	break;
	case 9704://(2,5) (14, 8)
		return 67;//4 3
	break;
	case 9705://(2,5) (14, 9)
		return 67;//4 3
	break;
	case 9706://(2,5) (14, 10)
		return 67;//4 3
	break;
	case 9707://(2,5) (14, 11)
		return 67;//4 3
	break;
	case 9708://(2,5) (14, 12)
		return 67;//4 3
	break;
	case 9709://(2,5) (14, 13)
		return 67;//4 3
	break;
	case 9710://(2,5) (14, 14)
		return 67;//4 3
	break;
	case 9711://(2,5) (14, 15)
		return 67;//4 3
	break;
	case 9712://(2,5) (15, 0)
		return 64;//4 0
	break;
	case 9713://(2,5) (15, 1)
		return 64;//4 0
	break;
	case 9714://(2,5) (15, 2)
		return 67;//4 3
	break;
	case 9715://(2,5) (15, 3)
		return 64;//4 0
	break;
	case 9716://(2,5) (15, 4)
		return 67;//4 3
	break;
	case 9717://(2,5) (15, 5)
		return 67;//4 3
	break;
	case 9718://(2,5) (15, 6)
		return 64;//4 0
	break;
	case 9719://(2,5) (15, 7)
		return 67;//4 3
	break;
	case 9720://(2,5) (15, 8)
		return 67;//4 3
	break;
	case 9721://(2,5) (15, 9)
		return 67;//4 3
	break;
	case 9722://(2,5) (15, 10)
		return 67;//4 3
	break;
	case 9723://(2,5) (15, 11)
		return 67;//4 3
	break;
	case 9724://(2,5) (15, 12)
		return 67;//4 3
	break;
	case 9725://(2,5) (15, 13)
		return 67;//4 3
	break;
	case 9726://(2,5) (15, 14)
		return 67;//4 3
	break;
	case 9727://(2,5) (15, 15)
		return 67;//4 3
	break;
	case 9728://(2,6) (0, 0)
		return 0;//0 0
	break;
	case 9729://(2,6) (0, 1)
		return 3;//0 3
	break;
	case 9730://(2,6) (0, 2)
		return 0;//0 0
	break;
	case 9731://(2,6) (0, 3)
		return 3;//0 3
	break;
	case 9732://(2,6) (0, 4)
		return 0;//0 0
	break;
	case 9733://(2,6) (0, 5)
		return 0;//0 0
	break;
	case 9734://(2,6) (0, 6)
		return 3;//0 3
	break;
	case 9735://(2,6) (0, 7)
		return 3;//0 3
	break;
	case 9736://(2,6) (0, 8)
		return 3;//0 3
	break;
	case 9737://(2,6) (0, 9)
		return 3;//0 3
	break;
	case 9738://(2,6) (0, 10)
		return 3;//0 3
	break;
	case 9739://(2,6) (0, 11)
		return 3;//0 3
	break;
	case 9740://(2,6) (0, 12)
		return 3;//0 3
	break;
	case 9741://(2,6) (0, 13)
		return 3;//0 3
	break;
	case 9742://(2,6) (0, 14)
		return 3;//0 3
	break;
	case 9743://(2,6) (0, 15)
		return 3;//0 3
	break;
	case 9744://(2,6) (1, 0)
		return 0;//0 0
	break;
	case 9745://(2,6) (1, 1)
		return 3;//0 3
	break;
	case 9746://(2,6) (1, 2)
		return 0;//0 0
	break;
	case 9747://(2,6) (1, 3)
		return 3;//0 3
	break;
	case 9748://(2,6) (1, 4)
		return 0;//0 0
	break;
	case 9749://(2,6) (1, 5)
		return 0;//0 0
	break;
	case 9750://(2,6) (1, 6)
		return 3;//0 3
	break;
	case 9751://(2,6) (1, 7)
		return 3;//0 3
	break;
	case 9752://(2,6) (1, 8)
		return 3;//0 3
	break;
	case 9753://(2,6) (1, 9)
		return 3;//0 3
	break;
	case 9754://(2,6) (1, 10)
		return 3;//0 3
	break;
	case 9755://(2,6) (1, 11)
		return 3;//0 3
	break;
	case 9756://(2,6) (1, 12)
		return 3;//0 3
	break;
	case 9757://(2,6) (1, 13)
		return 3;//0 3
	break;
	case 9758://(2,6) (1, 14)
		return 3;//0 3
	break;
	case 9759://(2,6) (1, 15)
		return 3;//0 3
	break;
	case 9760://(2,6) (2, 0)
		return 64;//4 0
	break;
	case 9761://(2,6) (2, 1)
		return 67;//4 3
	break;
	case 9762://(2,6) (2, 2)
		return 64;//4 0
	break;
	case 9763://(2,6) (2, 3)
		return 67;//4 3
	break;
	case 9764://(2,6) (2, 4)
		return 64;//4 0
	break;
	case 9765://(2,6) (2, 5)
		return 64;//4 0
	break;
	case 9766://(2,6) (2, 6)
		return 67;//4 3
	break;
	case 9767://(2,6) (2, 7)
		return 67;//4 3
	break;
	case 9768://(2,6) (2, 8)
		return 67;//4 3
	break;
	case 9769://(2,6) (2, 9)
		return 67;//4 3
	break;
	case 9770://(2,6) (2, 10)
		return 67;//4 3
	break;
	case 9771://(2,6) (2, 11)
		return 67;//4 3
	break;
	case 9772://(2,6) (2, 12)
		return 67;//4 3
	break;
	case 9773://(2,6) (2, 13)
		return 67;//4 3
	break;
	case 9774://(2,6) (2, 14)
		return 67;//4 3
	break;
	case 9775://(2,6) (2, 15)
		return 67;//4 3
	break;
	case 9776://(2,6) (3, 0)
		return 0;//0 0
	break;
	case 9777://(2,6) (3, 1)
		return 3;//0 3
	break;
	case 9778://(2,6) (3, 2)
		return 0;//0 0
	break;
	case 9779://(2,6) (3, 3)
		return 3;//0 3
	break;
	case 9780://(2,6) (3, 4)
		return 0;//0 0
	break;
	case 9781://(2,6) (3, 5)
		return 0;//0 0
	break;
	case 9782://(2,6) (3, 6)
		return 3;//0 3
	break;
	case 9783://(2,6) (3, 7)
		return 3;//0 3
	break;
	case 9784://(2,6) (3, 8)
		return 3;//0 3
	break;
	case 9785://(2,6) (3, 9)
		return 3;//0 3
	break;
	case 9786://(2,6) (3, 10)
		return 3;//0 3
	break;
	case 9787://(2,6) (3, 11)
		return 3;//0 3
	break;
	case 9788://(2,6) (3, 12)
		return 3;//0 3
	break;
	case 9789://(2,6) (3, 13)
		return 3;//0 3
	break;
	case 9790://(2,6) (3, 14)
		return 3;//0 3
	break;
	case 9791://(2,6) (3, 15)
		return 3;//0 3
	break;
	case 9792://(2,6) (4, 0)
		return 0;//0 0
	break;
	case 9793://(2,6) (4, 1)
		return 3;//0 3
	break;
	case 9794://(2,6) (4, 2)
		return 0;//0 0
	break;
	case 9795://(2,6) (4, 3)
		return 3;//0 3
	break;
	case 9796://(2,6) (4, 4)
		return 0;//0 0
	break;
	case 9797://(2,6) (4, 5)
		return 0;//0 0
	break;
	case 9798://(2,6) (4, 6)
		return 3;//0 3
	break;
	case 9799://(2,6) (4, 7)
		return 3;//0 3
	break;
	case 9800://(2,6) (4, 8)
		return 3;//0 3
	break;
	case 9801://(2,6) (4, 9)
		return 3;//0 3
	break;
	case 9802://(2,6) (4, 10)
		return 3;//0 3
	break;
	case 9803://(2,6) (4, 11)
		return 3;//0 3
	break;
	case 9804://(2,6) (4, 12)
		return 3;//0 3
	break;
	case 9805://(2,6) (4, 13)
		return 3;//0 3
	break;
	case 9806://(2,6) (4, 14)
		return 3;//0 3
	break;
	case 9807://(2,6) (4, 15)
		return 3;//0 3
	break;
	case 9808://(2,6) (5, 0)
		return 64;//4 0
	break;
	case 9809://(2,6) (5, 1)
		return 67;//4 3
	break;
	case 9810://(2,6) (5, 2)
		return 64;//4 0
	break;
	case 9811://(2,6) (5, 3)
		return 67;//4 3
	break;
	case 9812://(2,6) (5, 4)
		return 64;//4 0
	break;
	case 9813://(2,6) (5, 5)
		return 64;//4 0
	break;
	case 9814://(2,6) (5, 6)
		return 67;//4 3
	break;
	case 9815://(2,6) (5, 7)
		return 67;//4 3
	break;
	case 9816://(2,6) (5, 8)
		return 67;//4 3
	break;
	case 9817://(2,6) (5, 9)
		return 67;//4 3
	break;
	case 9818://(2,6) (5, 10)
		return 67;//4 3
	break;
	case 9819://(2,6) (5, 11)
		return 67;//4 3
	break;
	case 9820://(2,6) (5, 12)
		return 67;//4 3
	break;
	case 9821://(2,6) (5, 13)
		return 67;//4 3
	break;
	case 9822://(2,6) (5, 14)
		return 67;//4 3
	break;
	case 9823://(2,6) (5, 15)
		return 67;//4 3
	break;
	case 9824://(2,6) (6, 0)
		return 0;//0 0
	break;
	case 9825://(2,6) (6, 1)
		return 3;//0 3
	break;
	case 9826://(2,6) (6, 2)
		return 0;//0 0
	break;
	case 9827://(2,6) (6, 3)
		return 3;//0 3
	break;
	case 9828://(2,6) (6, 4)
		return 0;//0 0
	break;
	case 9829://(2,6) (6, 5)
		return 0;//0 0
	break;
	case 9830://(2,6) (6, 6)
		return 3;//0 3
	break;
	case 9831://(2,6) (6, 7)
		return 3;//0 3
	break;
	case 9832://(2,6) (6, 8)
		return 3;//0 3
	break;
	case 9833://(2,6) (6, 9)
		return 3;//0 3
	break;
	case 9834://(2,6) (6, 10)
		return 3;//0 3
	break;
	case 9835://(2,6) (6, 11)
		return 3;//0 3
	break;
	case 9836://(2,6) (6, 12)
		return 3;//0 3
	break;
	case 9837://(2,6) (6, 13)
		return 3;//0 3
	break;
	case 9838://(2,6) (6, 14)
		return 3;//0 3
	break;
	case 9839://(2,6) (6, 15)
		return 3;//0 3
	break;
	case 9840://(2,6) (7, 0)
		return 64;//4 0
	break;
	case 9841://(2,6) (7, 1)
		return 67;//4 3
	break;
	case 9842://(2,6) (7, 2)
		return 64;//4 0
	break;
	case 9843://(2,6) (7, 3)
		return 67;//4 3
	break;
	case 9844://(2,6) (7, 4)
		return 64;//4 0
	break;
	case 9845://(2,6) (7, 5)
		return 64;//4 0
	break;
	case 9846://(2,6) (7, 6)
		return 67;//4 3
	break;
	case 9847://(2,6) (7, 7)
		return 67;//4 3
	break;
	case 9848://(2,6) (7, 8)
		return 67;//4 3
	break;
	case 9849://(2,6) (7, 9)
		return 67;//4 3
	break;
	case 9850://(2,6) (7, 10)
		return 67;//4 3
	break;
	case 9851://(2,6) (7, 11)
		return 67;//4 3
	break;
	case 9852://(2,6) (7, 12)
		return 67;//4 3
	break;
	case 9853://(2,6) (7, 13)
		return 67;//4 3
	break;
	case 9854://(2,6) (7, 14)
		return 67;//4 3
	break;
	case 9855://(2,6) (7, 15)
		return 67;//4 3
	break;
	case 9856://(2,6) (8, 0)
		return 0;//0 0
	break;
	case 9857://(2,6) (8, 1)
		return 3;//0 3
	break;
	case 9858://(2,6) (8, 2)
		return 0;//0 0
	break;
	case 9859://(2,6) (8, 3)
		return 3;//0 3
	break;
	case 9860://(2,6) (8, 4)
		return 0;//0 0
	break;
	case 9861://(2,6) (8, 5)
		return 0;//0 0
	break;
	case 9862://(2,6) (8, 6)
		return 3;//0 3
	break;
	case 9863://(2,6) (8, 7)
		return 3;//0 3
	break;
	case 9864://(2,6) (8, 8)
		return 3;//0 3
	break;
	case 9865://(2,6) (8, 9)
		return 3;//0 3
	break;
	case 9866://(2,6) (8, 10)
		return 3;//0 3
	break;
	case 9867://(2,6) (8, 11)
		return 3;//0 3
	break;
	case 9868://(2,6) (8, 12)
		return 3;//0 3
	break;
	case 9869://(2,6) (8, 13)
		return 3;//0 3
	break;
	case 9870://(2,6) (8, 14)
		return 3;//0 3
	break;
	case 9871://(2,6) (8, 15)
		return 3;//0 3
	break;
	case 9872://(2,6) (9, 0)
		return 64;//4 0
	break;
	case 9873://(2,6) (9, 1)
		return 67;//4 3
	break;
	case 9874://(2,6) (9, 2)
		return 64;//4 0
	break;
	case 9875://(2,6) (9, 3)
		return 67;//4 3
	break;
	case 9876://(2,6) (9, 4)
		return 64;//4 0
	break;
	case 9877://(2,6) (9, 5)
		return 64;//4 0
	break;
	case 9878://(2,6) (9, 6)
		return 67;//4 3
	break;
	case 9879://(2,6) (9, 7)
		return 67;//4 3
	break;
	case 9880://(2,6) (9, 8)
		return 67;//4 3
	break;
	case 9881://(2,6) (9, 9)
		return 67;//4 3
	break;
	case 9882://(2,6) (9, 10)
		return 67;//4 3
	break;
	case 9883://(2,6) (9, 11)
		return 67;//4 3
	break;
	case 9884://(2,6) (9, 12)
		return 67;//4 3
	break;
	case 9885://(2,6) (9, 13)
		return 67;//4 3
	break;
	case 9886://(2,6) (9, 14)
		return 67;//4 3
	break;
	case 9887://(2,6) (9, 15)
		return 67;//4 3
	break;
	case 9888://(2,6) (10, 0)
		return 0;//0 0
	break;
	case 9889://(2,6) (10, 1)
		return 3;//0 3
	break;
	case 9890://(2,6) (10, 2)
		return 0;//0 0
	break;
	case 9891://(2,6) (10, 3)
		return 3;//0 3
	break;
	case 9892://(2,6) (10, 4)
		return 0;//0 0
	break;
	case 9893://(2,6) (10, 5)
		return 0;//0 0
	break;
	case 9894://(2,6) (10, 6)
		return 3;//0 3
	break;
	case 9895://(2,6) (10, 7)
		return 3;//0 3
	break;
	case 9896://(2,6) (10, 8)
		return 3;//0 3
	break;
	case 9897://(2,6) (10, 9)
		return 3;//0 3
	break;
	case 9898://(2,6) (10, 10)
		return 3;//0 3
	break;
	case 9899://(2,6) (10, 11)
		return 3;//0 3
	break;
	case 9900://(2,6) (10, 12)
		return 3;//0 3
	break;
	case 9901://(2,6) (10, 13)
		return 3;//0 3
	break;
	case 9902://(2,6) (10, 14)
		return 3;//0 3
	break;
	case 9903://(2,6) (10, 15)
		return 3;//0 3
	break;
	case 9904://(2,6) (11, 0)
		return 64;//4 0
	break;
	case 9905://(2,6) (11, 1)
		return 67;//4 3
	break;
	case 9906://(2,6) (11, 2)
		return 64;//4 0
	break;
	case 9907://(2,6) (11, 3)
		return 67;//4 3
	break;
	case 9908://(2,6) (11, 4)
		return 64;//4 0
	break;
	case 9909://(2,6) (11, 5)
		return 64;//4 0
	break;
	case 9910://(2,6) (11, 6)
		return 67;//4 3
	break;
	case 9911://(2,6) (11, 7)
		return 67;//4 3
	break;
	case 9912://(2,6) (11, 8)
		return 67;//4 3
	break;
	case 9913://(2,6) (11, 9)
		return 67;//4 3
	break;
	case 9914://(2,6) (11, 10)
		return 67;//4 3
	break;
	case 9915://(2,6) (11, 11)
		return 67;//4 3
	break;
	case 9916://(2,6) (11, 12)
		return 67;//4 3
	break;
	case 9917://(2,6) (11, 13)
		return 67;//4 3
	break;
	case 9918://(2,6) (11, 14)
		return 67;//4 3
	break;
	case 9919://(2,6) (11, 15)
		return 67;//4 3
	break;
	case 9920://(2,6) (12, 0)
		return 64;//4 0
	break;
	case 9921://(2,6) (12, 1)
		return 67;//4 3
	break;
	case 9922://(2,6) (12, 2)
		return 64;//4 0
	break;
	case 9923://(2,6) (12, 3)
		return 67;//4 3
	break;
	case 9924://(2,6) (12, 4)
		return 64;//4 0
	break;
	case 9925://(2,6) (12, 5)
		return 64;//4 0
	break;
	case 9926://(2,6) (12, 6)
		return 67;//4 3
	break;
	case 9927://(2,6) (12, 7)
		return 67;//4 3
	break;
	case 9928://(2,6) (12, 8)
		return 67;//4 3
	break;
	case 9929://(2,6) (12, 9)
		return 67;//4 3
	break;
	case 9930://(2,6) (12, 10)
		return 67;//4 3
	break;
	case 9931://(2,6) (12, 11)
		return 67;//4 3
	break;
	case 9932://(2,6) (12, 12)
		return 67;//4 3
	break;
	case 9933://(2,6) (12, 13)
		return 67;//4 3
	break;
	case 9934://(2,6) (12, 14)
		return 67;//4 3
	break;
	case 9935://(2,6) (12, 15)
		return 67;//4 3
	break;
	case 9936://(2,6) (13, 0)
		return 0;//0 0
	break;
	case 9937://(2,6) (13, 1)
		return 3;//0 3
	break;
	case 9938://(2,6) (13, 2)
		return 0;//0 0
	break;
	case 9939://(2,6) (13, 3)
		return 3;//0 3
	break;
	case 9940://(2,6) (13, 4)
		return 0;//0 0
	break;
	case 9941://(2,6) (13, 5)
		return 0;//0 0
	break;
	case 9942://(2,6) (13, 6)
		return 3;//0 3
	break;
	case 9943://(2,6) (13, 7)
		return 3;//0 3
	break;
	case 9944://(2,6) (13, 8)
		return 3;//0 3
	break;
	case 9945://(2,6) (13, 9)
		return 3;//0 3
	break;
	case 9946://(2,6) (13, 10)
		return 3;//0 3
	break;
	case 9947://(2,6) (13, 11)
		return 3;//0 3
	break;
	case 9948://(2,6) (13, 12)
		return 3;//0 3
	break;
	case 9949://(2,6) (13, 13)
		return 3;//0 3
	break;
	case 9950://(2,6) (13, 14)
		return 3;//0 3
	break;
	case 9951://(2,6) (13, 15)
		return 3;//0 3
	break;
	case 9952://(2,6) (14, 0)
		return 64;//4 0
	break;
	case 9953://(2,6) (14, 1)
		return 67;//4 3
	break;
	case 9954://(2,6) (14, 2)
		return 64;//4 0
	break;
	case 9955://(2,6) (14, 3)
		return 67;//4 3
	break;
	case 9956://(2,6) (14, 4)
		return 64;//4 0
	break;
	case 9957://(2,6) (14, 5)
		return 64;//4 0
	break;
	case 9958://(2,6) (14, 6)
		return 67;//4 3
	break;
	case 9959://(2,6) (14, 7)
		return 67;//4 3
	break;
	case 9960://(2,6) (14, 8)
		return 67;//4 3
	break;
	case 9961://(2,6) (14, 9)
		return 67;//4 3
	break;
	case 9962://(2,6) (14, 10)
		return 67;//4 3
	break;
	case 9963://(2,6) (14, 11)
		return 67;//4 3
	break;
	case 9964://(2,6) (14, 12)
		return 67;//4 3
	break;
	case 9965://(2,6) (14, 13)
		return 67;//4 3
	break;
	case 9966://(2,6) (14, 14)
		return 67;//4 3
	break;
	case 9967://(2,6) (14, 15)
		return 67;//4 3
	break;
	case 9968://(2,6) (15, 0)
		return 64;//4 0
	break;
	case 9969://(2,6) (15, 1)
		return 67;//4 3
	break;
	case 9970://(2,6) (15, 2)
		return 64;//4 0
	break;
	case 9971://(2,6) (15, 3)
		return 67;//4 3
	break;
	case 9972://(2,6) (15, 4)
		return 64;//4 0
	break;
	case 9973://(2,6) (15, 5)
		return 64;//4 0
	break;
	case 9974://(2,6) (15, 6)
		return 67;//4 3
	break;
	case 9975://(2,6) (15, 7)
		return 67;//4 3
	break;
	case 9976://(2,6) (15, 8)
		return 67;//4 3
	break;
	case 9977://(2,6) (15, 9)
		return 67;//4 3
	break;
	case 9978://(2,6) (15, 10)
		return 67;//4 3
	break;
	case 9979://(2,6) (15, 11)
		return 67;//4 3
	break;
	case 9980://(2,6) (15, 12)
		return 67;//4 3
	break;
	case 9981://(2,6) (15, 13)
		return 67;//4 3
	break;
	case 9982://(2,6) (15, 14)
		return 67;//4 3
	break;
	case 9983://(2,6) (15, 15)
		return 67;//4 3
	break;
	case 9984://(2,7) (0, 0)
		return 0;//0 0
	break;
	case 9985://(2,7) (0, 1)
		return 0;//0 0
	break;
	case 9986://(2,7) (0, 2)
		return 3;//0 3
	break;
	case 9987://(2,7) (0, 3)
		return 3;//0 3
	break;
	case 9988://(2,7) (0, 4)
		return 0;//0 0
	break;
	case 9989://(2,7) (0, 5)
		return 3;//0 3
	break;
	case 9990://(2,7) (0, 6)
		return 3;//0 3
	break;
	case 9991://(2,7) (0, 7)
		return 3;//0 3
	break;
	case 9992://(2,7) (0, 8)
		return 0;//0 0
	break;
	case 9993://(2,7) (0, 9)
		return 3;//0 3
	break;
	case 9994://(2,7) (0, 10)
		return 3;//0 3
	break;
	case 9995://(2,7) (0, 11)
		return 3;//0 3
	break;
	case 9996://(2,7) (0, 12)
		return 3;//0 3
	break;
	case 9997://(2,7) (0, 13)
		return 3;//0 3
	break;
	case 9998://(2,7) (0, 14)
		return 3;//0 3
	break;
	case 9999://(2,7) (0, 15)
		return 3;//0 3
	break;
	case 10000://(2,7) (1, 0)
		return 0;//0 0
	break;
	case 10001://(2,7) (1, 1)
		return 0;//0 0
	break;
	case 10002://(2,7) (1, 2)
		return 3;//0 3
	break;
	case 10003://(2,7) (1, 3)
		return 3;//0 3
	break;
	case 10004://(2,7) (1, 4)
		return 0;//0 0
	break;
	case 10005://(2,7) (1, 5)
		return 3;//0 3
	break;
	case 10006://(2,7) (1, 6)
		return 3;//0 3
	break;
	case 10007://(2,7) (1, 7)
		return 3;//0 3
	break;
	case 10008://(2,7) (1, 8)
		return 0;//0 0
	break;
	case 10009://(2,7) (1, 9)
		return 3;//0 3
	break;
	case 10010://(2,7) (1, 10)
		return 3;//0 3
	break;
	case 10011://(2,7) (1, 11)
		return 3;//0 3
	break;
	case 10012://(2,7) (1, 12)
		return 3;//0 3
	break;
	case 10013://(2,7) (1, 13)
		return 3;//0 3
	break;
	case 10014://(2,7) (1, 14)
		return 3;//0 3
	break;
	case 10015://(2,7) (1, 15)
		return 3;//0 3
	break;
	case 10016://(2,7) (2, 0)
		return 64;//4 0
	break;
	case 10017://(2,7) (2, 1)
		return 64;//4 0
	break;
	case 10018://(2,7) (2, 2)
		return 67;//4 3
	break;
	case 10019://(2,7) (2, 3)
		return 67;//4 3
	break;
	case 10020://(2,7) (2, 4)
		return 64;//4 0
	break;
	case 10021://(2,7) (2, 5)
		return 67;//4 3
	break;
	case 10022://(2,7) (2, 6)
		return 67;//4 3
	break;
	case 10023://(2,7) (2, 7)
		return 67;//4 3
	break;
	case 10024://(2,7) (2, 8)
		return 64;//4 0
	break;
	case 10025://(2,7) (2, 9)
		return 67;//4 3
	break;
	case 10026://(2,7) (2, 10)
		return 67;//4 3
	break;
	case 10027://(2,7) (2, 11)
		return 67;//4 3
	break;
	case 10028://(2,7) (2, 12)
		return 67;//4 3
	break;
	case 10029://(2,7) (2, 13)
		return 67;//4 3
	break;
	case 10030://(2,7) (2, 14)
		return 67;//4 3
	break;
	case 10031://(2,7) (2, 15)
		return 67;//4 3
	break;
	case 10032://(2,7) (3, 0)
		return 0;//0 0
	break;
	case 10033://(2,7) (3, 1)
		return 0;//0 0
	break;
	case 10034://(2,7) (3, 2)
		return 3;//0 3
	break;
	case 10035://(2,7) (3, 3)
		return 3;//0 3
	break;
	case 10036://(2,7) (3, 4)
		return 0;//0 0
	break;
	case 10037://(2,7) (3, 5)
		return 3;//0 3
	break;
	case 10038://(2,7) (3, 6)
		return 3;//0 3
	break;
	case 10039://(2,7) (3, 7)
		return 3;//0 3
	break;
	case 10040://(2,7) (3, 8)
		return 0;//0 0
	break;
	case 10041://(2,7) (3, 9)
		return 3;//0 3
	break;
	case 10042://(2,7) (3, 10)
		return 3;//0 3
	break;
	case 10043://(2,7) (3, 11)
		return 3;//0 3
	break;
	case 10044://(2,7) (3, 12)
		return 3;//0 3
	break;
	case 10045://(2,7) (3, 13)
		return 3;//0 3
	break;
	case 10046://(2,7) (3, 14)
		return 3;//0 3
	break;
	case 10047://(2,7) (3, 15)
		return 3;//0 3
	break;
	case 10048://(2,7) (4, 0)
		return 0;//0 0
	break;
	case 10049://(2,7) (4, 1)
		return 0;//0 0
	break;
	case 10050://(2,7) (4, 2)
		return 3;//0 3
	break;
	case 10051://(2,7) (4, 3)
		return 3;//0 3
	break;
	case 10052://(2,7) (4, 4)
		return 0;//0 0
	break;
	case 10053://(2,7) (4, 5)
		return 3;//0 3
	break;
	case 10054://(2,7) (4, 6)
		return 3;//0 3
	break;
	case 10055://(2,7) (4, 7)
		return 3;//0 3
	break;
	case 10056://(2,7) (4, 8)
		return 0;//0 0
	break;
	case 10057://(2,7) (4, 9)
		return 3;//0 3
	break;
	case 10058://(2,7) (4, 10)
		return 3;//0 3
	break;
	case 10059://(2,7) (4, 11)
		return 3;//0 3
	break;
	case 10060://(2,7) (4, 12)
		return 3;//0 3
	break;
	case 10061://(2,7) (4, 13)
		return 3;//0 3
	break;
	case 10062://(2,7) (4, 14)
		return 3;//0 3
	break;
	case 10063://(2,7) (4, 15)
		return 3;//0 3
	break;
	case 10064://(2,7) (5, 0)
		return 64;//4 0
	break;
	case 10065://(2,7) (5, 1)
		return 64;//4 0
	break;
	case 10066://(2,7) (5, 2)
		return 67;//4 3
	break;
	case 10067://(2,7) (5, 3)
		return 67;//4 3
	break;
	case 10068://(2,7) (5, 4)
		return 64;//4 0
	break;
	case 10069://(2,7) (5, 5)
		return 67;//4 3
	break;
	case 10070://(2,7) (5, 6)
		return 67;//4 3
	break;
	case 10071://(2,7) (5, 7)
		return 67;//4 3
	break;
	case 10072://(2,7) (5, 8)
		return 64;//4 0
	break;
	case 10073://(2,7) (5, 9)
		return 67;//4 3
	break;
	case 10074://(2,7) (5, 10)
		return 67;//4 3
	break;
	case 10075://(2,7) (5, 11)
		return 67;//4 3
	break;
	case 10076://(2,7) (5, 12)
		return 67;//4 3
	break;
	case 10077://(2,7) (5, 13)
		return 67;//4 3
	break;
	case 10078://(2,7) (5, 14)
		return 67;//4 3
	break;
	case 10079://(2,7) (5, 15)
		return 67;//4 3
	break;
	case 10080://(2,7) (6, 0)
		return 0;//0 0
	break;
	case 10081://(2,7) (6, 1)
		return 0;//0 0
	break;
	case 10082://(2,7) (6, 2)
		return 3;//0 3
	break;
	case 10083://(2,7) (6, 3)
		return 3;//0 3
	break;
	case 10084://(2,7) (6, 4)
		return 0;//0 0
	break;
	case 10085://(2,7) (6, 5)
		return 3;//0 3
	break;
	case 10086://(2,7) (6, 6)
		return 3;//0 3
	break;
	case 10087://(2,7) (6, 7)
		return 3;//0 3
	break;
	case 10088://(2,7) (6, 8)
		return 0;//0 0
	break;
	case 10089://(2,7) (6, 9)
		return 3;//0 3
	break;
	case 10090://(2,7) (6, 10)
		return 3;//0 3
	break;
	case 10091://(2,7) (6, 11)
		return 3;//0 3
	break;
	case 10092://(2,7) (6, 12)
		return 3;//0 3
	break;
	case 10093://(2,7) (6, 13)
		return 3;//0 3
	break;
	case 10094://(2,7) (6, 14)
		return 3;//0 3
	break;
	case 10095://(2,7) (6, 15)
		return 3;//0 3
	break;
	case 10096://(2,7) (7, 0)
		return 64;//4 0
	break;
	case 10097://(2,7) (7, 1)
		return 64;//4 0
	break;
	case 10098://(2,7) (7, 2)
		return 67;//4 3
	break;
	case 10099://(2,7) (7, 3)
		return 67;//4 3
	break;
	case 10100://(2,7) (7, 4)
		return 64;//4 0
	break;
	case 10101://(2,7) (7, 5)
		return 67;//4 3
	break;
	case 10102://(2,7) (7, 6)
		return 67;//4 3
	break;
	case 10103://(2,7) (7, 7)
		return 67;//4 3
	break;
	case 10104://(2,7) (7, 8)
		return 64;//4 0
	break;
	case 10105://(2,7) (7, 9)
		return 67;//4 3
	break;
	case 10106://(2,7) (7, 10)
		return 67;//4 3
	break;
	case 10107://(2,7) (7, 11)
		return 67;//4 3
	break;
	case 10108://(2,7) (7, 12)
		return 67;//4 3
	break;
	case 10109://(2,7) (7, 13)
		return 67;//4 3
	break;
	case 10110://(2,7) (7, 14)
		return 67;//4 3
	break;
	case 10111://(2,7) (7, 15)
		return 67;//4 3
	break;
	case 10112://(2,7) (8, 0)
		return 0;//0 0
	break;
	case 10113://(2,7) (8, 1)
		return 0;//0 0
	break;
	case 10114://(2,7) (8, 2)
		return 3;//0 3
	break;
	case 10115://(2,7) (8, 3)
		return 3;//0 3
	break;
	case 10116://(2,7) (8, 4)
		return 0;//0 0
	break;
	case 10117://(2,7) (8, 5)
		return 3;//0 3
	break;
	case 10118://(2,7) (8, 6)
		return 3;//0 3
	break;
	case 10119://(2,7) (8, 7)
		return 3;//0 3
	break;
	case 10120://(2,7) (8, 8)
		return 0;//0 0
	break;
	case 10121://(2,7) (8, 9)
		return 3;//0 3
	break;
	case 10122://(2,7) (8, 10)
		return 3;//0 3
	break;
	case 10123://(2,7) (8, 11)
		return 3;//0 3
	break;
	case 10124://(2,7) (8, 12)
		return 3;//0 3
	break;
	case 10125://(2,7) (8, 13)
		return 3;//0 3
	break;
	case 10126://(2,7) (8, 14)
		return 3;//0 3
	break;
	case 10127://(2,7) (8, 15)
		return 3;//0 3
	break;
	case 10128://(2,7) (9, 0)
		return 64;//4 0
	break;
	case 10129://(2,7) (9, 1)
		return 64;//4 0
	break;
	case 10130://(2,7) (9, 2)
		return 67;//4 3
	break;
	case 10131://(2,7) (9, 3)
		return 67;//4 3
	break;
	case 10132://(2,7) (9, 4)
		return 64;//4 0
	break;
	case 10133://(2,7) (9, 5)
		return 67;//4 3
	break;
	case 10134://(2,7) (9, 6)
		return 67;//4 3
	break;
	case 10135://(2,7) (9, 7)
		return 67;//4 3
	break;
	case 10136://(2,7) (9, 8)
		return 64;//4 0
	break;
	case 10137://(2,7) (9, 9)
		return 67;//4 3
	break;
	case 10138://(2,7) (9, 10)
		return 67;//4 3
	break;
	case 10139://(2,7) (9, 11)
		return 67;//4 3
	break;
	case 10140://(2,7) (9, 12)
		return 67;//4 3
	break;
	case 10141://(2,7) (9, 13)
		return 67;//4 3
	break;
	case 10142://(2,7) (9, 14)
		return 67;//4 3
	break;
	case 10143://(2,7) (9, 15)
		return 67;//4 3
	break;
	case 10144://(2,7) (10, 0)
		return 0;//0 0
	break;
	case 10145://(2,7) (10, 1)
		return 0;//0 0
	break;
	case 10146://(2,7) (10, 2)
		return 3;//0 3
	break;
	case 10147://(2,7) (10, 3)
		return 3;//0 3
	break;
	case 10148://(2,7) (10, 4)
		return 0;//0 0
	break;
	case 10149://(2,7) (10, 5)
		return 3;//0 3
	break;
	case 10150://(2,7) (10, 6)
		return 3;//0 3
	break;
	case 10151://(2,7) (10, 7)
		return 3;//0 3
	break;
	case 10152://(2,7) (10, 8)
		return 0;//0 0
	break;
	case 10153://(2,7) (10, 9)
		return 3;//0 3
	break;
	case 10154://(2,7) (10, 10)
		return 3;//0 3
	break;
	case 10155://(2,7) (10, 11)
		return 3;//0 3
	break;
	case 10156://(2,7) (10, 12)
		return 3;//0 3
	break;
	case 10157://(2,7) (10, 13)
		return 3;//0 3
	break;
	case 10158://(2,7) (10, 14)
		return 3;//0 3
	break;
	case 10159://(2,7) (10, 15)
		return 3;//0 3
	break;
	case 10160://(2,7) (11, 0)
		return 64;//4 0
	break;
	case 10161://(2,7) (11, 1)
		return 64;//4 0
	break;
	case 10162://(2,7) (11, 2)
		return 67;//4 3
	break;
	case 10163://(2,7) (11, 3)
		return 67;//4 3
	break;
	case 10164://(2,7) (11, 4)
		return 64;//4 0
	break;
	case 10165://(2,7) (11, 5)
		return 67;//4 3
	break;
	case 10166://(2,7) (11, 6)
		return 67;//4 3
	break;
	case 10167://(2,7) (11, 7)
		return 67;//4 3
	break;
	case 10168://(2,7) (11, 8)
		return 64;//4 0
	break;
	case 10169://(2,7) (11, 9)
		return 67;//4 3
	break;
	case 10170://(2,7) (11, 10)
		return 67;//4 3
	break;
	case 10171://(2,7) (11, 11)
		return 67;//4 3
	break;
	case 10172://(2,7) (11, 12)
		return 67;//4 3
	break;
	case 10173://(2,7) (11, 13)
		return 67;//4 3
	break;
	case 10174://(2,7) (11, 14)
		return 67;//4 3
	break;
	case 10175://(2,7) (11, 15)
		return 67;//4 3
	break;
	case 10176://(2,7) (12, 0)
		return 64;//4 0
	break;
	case 10177://(2,7) (12, 1)
		return 64;//4 0
	break;
	case 10178://(2,7) (12, 2)
		return 67;//4 3
	break;
	case 10179://(2,7) (12, 3)
		return 67;//4 3
	break;
	case 10180://(2,7) (12, 4)
		return 64;//4 0
	break;
	case 10181://(2,7) (12, 5)
		return 67;//4 3
	break;
	case 10182://(2,7) (12, 6)
		return 67;//4 3
	break;
	case 10183://(2,7) (12, 7)
		return 67;//4 3
	break;
	case 10184://(2,7) (12, 8)
		return 64;//4 0
	break;
	case 10185://(2,7) (12, 9)
		return 67;//4 3
	break;
	case 10186://(2,7) (12, 10)
		return 67;//4 3
	break;
	case 10187://(2,7) (12, 11)
		return 67;//4 3
	break;
	case 10188://(2,7) (12, 12)
		return 67;//4 3
	break;
	case 10189://(2,7) (12, 13)
		return 67;//4 3
	break;
	case 10190://(2,7) (12, 14)
		return 67;//4 3
	break;
	case 10191://(2,7) (12, 15)
		return 67;//4 3
	break;
	case 10192://(2,7) (13, 0)
		return 0;//0 0
	break;
	case 10193://(2,7) (13, 1)
		return 0;//0 0
	break;
	case 10194://(2,7) (13, 2)
		return 3;//0 3
	break;
	case 10195://(2,7) (13, 3)
		return 3;//0 3
	break;
	case 10196://(2,7) (13, 4)
		return 0;//0 0
	break;
	case 10197://(2,7) (13, 5)
		return 3;//0 3
	break;
	case 10198://(2,7) (13, 6)
		return 3;//0 3
	break;
	case 10199://(2,7) (13, 7)
		return 3;//0 3
	break;
	case 10200://(2,7) (13, 8)
		return 0;//0 0
	break;
	case 10201://(2,7) (13, 9)
		return 3;//0 3
	break;
	case 10202://(2,7) (13, 10)
		return 3;//0 3
	break;
	case 10203://(2,7) (13, 11)
		return 3;//0 3
	break;
	case 10204://(2,7) (13, 12)
		return 3;//0 3
	break;
	case 10205://(2,7) (13, 13)
		return 3;//0 3
	break;
	case 10206://(2,7) (13, 14)
		return 3;//0 3
	break;
	case 10207://(2,7) (13, 15)
		return 3;//0 3
	break;
	case 10208://(2,7) (14, 0)
		return 64;//4 0
	break;
	case 10209://(2,7) (14, 1)
		return 64;//4 0
	break;
	case 10210://(2,7) (14, 2)
		return 67;//4 3
	break;
	case 10211://(2,7) (14, 3)
		return 67;//4 3
	break;
	case 10212://(2,7) (14, 4)
		return 64;//4 0
	break;
	case 10213://(2,7) (14, 5)
		return 67;//4 3
	break;
	case 10214://(2,7) (14, 6)
		return 67;//4 3
	break;
	case 10215://(2,7) (14, 7)
		return 67;//4 3
	break;
	case 10216://(2,7) (14, 8)
		return 64;//4 0
	break;
	case 10217://(2,7) (14, 9)
		return 67;//4 3
	break;
	case 10218://(2,7) (14, 10)
		return 67;//4 3
	break;
	case 10219://(2,7) (14, 11)
		return 67;//4 3
	break;
	case 10220://(2,7) (14, 12)
		return 67;//4 3
	break;
	case 10221://(2,7) (14, 13)
		return 67;//4 3
	break;
	case 10222://(2,7) (14, 14)
		return 67;//4 3
	break;
	case 10223://(2,7) (14, 15)
		return 67;//4 3
	break;
	case 10224://(2,7) (15, 0)
		return 64;//4 0
	break;
	case 10225://(2,7) (15, 1)
		return 64;//4 0
	break;
	case 10226://(2,7) (15, 2)
		return 67;//4 3
	break;
	case 10227://(2,7) (15, 3)
		return 67;//4 3
	break;
	case 10228://(2,7) (15, 4)
		return 64;//4 0
	break;
	case 10229://(2,7) (15, 5)
		return 67;//4 3
	break;
	case 10230://(2,7) (15, 6)
		return 67;//4 3
	break;
	case 10231://(2,7) (15, 7)
		return 67;//4 3
	break;
	case 10232://(2,7) (15, 8)
		return 64;//4 0
	break;
	case 10233://(2,7) (15, 9)
		return 67;//4 3
	break;
	case 10234://(2,7) (15, 10)
		return 67;//4 3
	break;
	case 10235://(2,7) (15, 11)
		return 67;//4 3
	break;
	case 10236://(2,7) (15, 12)
		return 67;//4 3
	break;
	case 10237://(2,7) (15, 13)
		return 67;//4 3
	break;
	case 10238://(2,7) (15, 14)
		return 67;//4 3
	break;
	case 10239://(2,7) (15, 15)
		return 67;//4 3
	break;
	case 10240://(2,8) (0, 0)
		return 0;//0 0
	break;
	case 10241://(2,8) (0, 1)
		return 3;//0 3
	break;
	case 10242://(2,8) (0, 2)
		return 0;//0 0
	break;
	case 10243://(2,8) (0, 3)
		return 0;//0 0
	break;
	case 10244://(2,8) (0, 4)
		return 3;//0 3
	break;
	case 10245://(2,8) (0, 5)
		return 3;//0 3
	break;
	case 10246://(2,8) (0, 6)
		return 3;//0 3
	break;
	case 10247://(2,8) (0, 7)
		return 0;//0 0
	break;
	case 10248://(2,8) (0, 8)
		return 3;//0 3
	break;
	case 10249://(2,8) (0, 9)
		return 3;//0 3
	break;
	case 10250://(2,8) (0, 10)
		return 3;//0 3
	break;
	case 10251://(2,8) (0, 11)
		return 3;//0 3
	break;
	case 10252://(2,8) (0, 12)
		return 3;//0 3
	break;
	case 10253://(2,8) (0, 13)
		return 3;//0 3
	break;
	case 10254://(2,8) (0, 14)
		return 3;//0 3
	break;
	case 10255://(2,8) (0, 15)
		return 3;//0 3
	break;
	case 10256://(2,8) (1, 0)
		return 0;//0 0
	break;
	case 10257://(2,8) (1, 1)
		return 3;//0 3
	break;
	case 10258://(2,8) (1, 2)
		return 0;//0 0
	break;
	case 10259://(2,8) (1, 3)
		return 0;//0 0
	break;
	case 10260://(2,8) (1, 4)
		return 3;//0 3
	break;
	case 10261://(2,8) (1, 5)
		return 3;//0 3
	break;
	case 10262://(2,8) (1, 6)
		return 3;//0 3
	break;
	case 10263://(2,8) (1, 7)
		return 0;//0 0
	break;
	case 10264://(2,8) (1, 8)
		return 3;//0 3
	break;
	case 10265://(2,8) (1, 9)
		return 3;//0 3
	break;
	case 10266://(2,8) (1, 10)
		return 3;//0 3
	break;
	case 10267://(2,8) (1, 11)
		return 3;//0 3
	break;
	case 10268://(2,8) (1, 12)
		return 3;//0 3
	break;
	case 10269://(2,8) (1, 13)
		return 3;//0 3
	break;
	case 10270://(2,8) (1, 14)
		return 3;//0 3
	break;
	case 10271://(2,8) (1, 15)
		return 3;//0 3
	break;
	case 10272://(2,8) (2, 0)
		return 64;//4 0
	break;
	case 10273://(2,8) (2, 1)
		return 67;//4 3
	break;
	case 10274://(2,8) (2, 2)
		return 64;//4 0
	break;
	case 10275://(2,8) (2, 3)
		return 64;//4 0
	break;
	case 10276://(2,8) (2, 4)
		return 67;//4 3
	break;
	case 10277://(2,8) (2, 5)
		return 67;//4 3
	break;
	case 10278://(2,8) (2, 6)
		return 67;//4 3
	break;
	case 10279://(2,8) (2, 7)
		return 64;//4 0
	break;
	case 10280://(2,8) (2, 8)
		return 67;//4 3
	break;
	case 10281://(2,8) (2, 9)
		return 67;//4 3
	break;
	case 10282://(2,8) (2, 10)
		return 67;//4 3
	break;
	case 10283://(2,8) (2, 11)
		return 67;//4 3
	break;
	case 10284://(2,8) (2, 12)
		return 67;//4 3
	break;
	case 10285://(2,8) (2, 13)
		return 67;//4 3
	break;
	case 10286://(2,8) (2, 14)
		return 67;//4 3
	break;
	case 10287://(2,8) (2, 15)
		return 67;//4 3
	break;
	case 10288://(2,8) (3, 0)
		return 0;//0 0
	break;
	case 10289://(2,8) (3, 1)
		return 3;//0 3
	break;
	case 10290://(2,8) (3, 2)
		return 0;//0 0
	break;
	case 10291://(2,8) (3, 3)
		return 0;//0 0
	break;
	case 10292://(2,8) (3, 4)
		return 3;//0 3
	break;
	case 10293://(2,8) (3, 5)
		return 3;//0 3
	break;
	case 10294://(2,8) (3, 6)
		return 3;//0 3
	break;
	case 10295://(2,8) (3, 7)
		return 0;//0 0
	break;
	case 10296://(2,8) (3, 8)
		return 3;//0 3
	break;
	case 10297://(2,8) (3, 9)
		return 3;//0 3
	break;
	case 10298://(2,8) (3, 10)
		return 3;//0 3
	break;
	case 10299://(2,8) (3, 11)
		return 3;//0 3
	break;
	case 10300://(2,8) (3, 12)
		return 3;//0 3
	break;
	case 10301://(2,8) (3, 13)
		return 3;//0 3
	break;
	case 10302://(2,8) (3, 14)
		return 3;//0 3
	break;
	case 10303://(2,8) (3, 15)
		return 3;//0 3
	break;
	case 10304://(2,8) (4, 0)
		return 0;//0 0
	break;
	case 10305://(2,8) (4, 1)
		return 3;//0 3
	break;
	case 10306://(2,8) (4, 2)
		return 0;//0 0
	break;
	case 10307://(2,8) (4, 3)
		return 0;//0 0
	break;
	case 10308://(2,8) (4, 4)
		return 3;//0 3
	break;
	case 10309://(2,8) (4, 5)
		return 3;//0 3
	break;
	case 10310://(2,8) (4, 6)
		return 3;//0 3
	break;
	case 10311://(2,8) (4, 7)
		return 0;//0 0
	break;
	case 10312://(2,8) (4, 8)
		return 3;//0 3
	break;
	case 10313://(2,8) (4, 9)
		return 3;//0 3
	break;
	case 10314://(2,8) (4, 10)
		return 3;//0 3
	break;
	case 10315://(2,8) (4, 11)
		return 3;//0 3
	break;
	case 10316://(2,8) (4, 12)
		return 3;//0 3
	break;
	case 10317://(2,8) (4, 13)
		return 3;//0 3
	break;
	case 10318://(2,8) (4, 14)
		return 3;//0 3
	break;
	case 10319://(2,8) (4, 15)
		return 3;//0 3
	break;
	case 10320://(2,8) (5, 0)
		return 64;//4 0
	break;
	case 10321://(2,8) (5, 1)
		return 67;//4 3
	break;
	case 10322://(2,8) (5, 2)
		return 64;//4 0
	break;
	case 10323://(2,8) (5, 3)
		return 64;//4 0
	break;
	case 10324://(2,8) (5, 4)
		return 67;//4 3
	break;
	case 10325://(2,8) (5, 5)
		return 67;//4 3
	break;
	case 10326://(2,8) (5, 6)
		return 67;//4 3
	break;
	case 10327://(2,8) (5, 7)
		return 64;//4 0
	break;
	case 10328://(2,8) (5, 8)
		return 67;//4 3
	break;
	case 10329://(2,8) (5, 9)
		return 67;//4 3
	break;
	case 10330://(2,8) (5, 10)
		return 67;//4 3
	break;
	case 10331://(2,8) (5, 11)
		return 67;//4 3
	break;
	case 10332://(2,8) (5, 12)
		return 67;//4 3
	break;
	case 10333://(2,8) (5, 13)
		return 67;//4 3
	break;
	case 10334://(2,8) (5, 14)
		return 67;//4 3
	break;
	case 10335://(2,8) (5, 15)
		return 67;//4 3
	break;
	case 10336://(2,8) (6, 0)
		return 0;//0 0
	break;
	case 10337://(2,8) (6, 1)
		return 3;//0 3
	break;
	case 10338://(2,8) (6, 2)
		return 0;//0 0
	break;
	case 10339://(2,8) (6, 3)
		return 0;//0 0
	break;
	case 10340://(2,8) (6, 4)
		return 3;//0 3
	break;
	case 10341://(2,8) (6, 5)
		return 3;//0 3
	break;
	case 10342://(2,8) (6, 6)
		return 3;//0 3
	break;
	case 10343://(2,8) (6, 7)
		return 0;//0 0
	break;
	case 10344://(2,8) (6, 8)
		return 3;//0 3
	break;
	case 10345://(2,8) (6, 9)
		return 3;//0 3
	break;
	case 10346://(2,8) (6, 10)
		return 3;//0 3
	break;
	case 10347://(2,8) (6, 11)
		return 3;//0 3
	break;
	case 10348://(2,8) (6, 12)
		return 3;//0 3
	break;
	case 10349://(2,8) (6, 13)
		return 3;//0 3
	break;
	case 10350://(2,8) (6, 14)
		return 3;//0 3
	break;
	case 10351://(2,8) (6, 15)
		return 3;//0 3
	break;
	case 10352://(2,8) (7, 0)
		return 64;//4 0
	break;
	case 10353://(2,8) (7, 1)
		return 67;//4 3
	break;
	case 10354://(2,8) (7, 2)
		return 64;//4 0
	break;
	case 10355://(2,8) (7, 3)
		return 64;//4 0
	break;
	case 10356://(2,8) (7, 4)
		return 67;//4 3
	break;
	case 10357://(2,8) (7, 5)
		return 67;//4 3
	break;
	case 10358://(2,8) (7, 6)
		return 67;//4 3
	break;
	case 10359://(2,8) (7, 7)
		return 64;//4 0
	break;
	case 10360://(2,8) (7, 8)
		return 67;//4 3
	break;
	case 10361://(2,8) (7, 9)
		return 67;//4 3
	break;
	case 10362://(2,8) (7, 10)
		return 67;//4 3
	break;
	case 10363://(2,8) (7, 11)
		return 67;//4 3
	break;
	case 10364://(2,8) (7, 12)
		return 67;//4 3
	break;
	case 10365://(2,8) (7, 13)
		return 67;//4 3
	break;
	case 10366://(2,8) (7, 14)
		return 67;//4 3
	break;
	case 10367://(2,8) (7, 15)
		return 67;//4 3
	break;
	case 10368://(2,8) (8, 0)
		return 0;//0 0
	break;
	case 10369://(2,8) (8, 1)
		return 3;//0 3
	break;
	case 10370://(2,8) (8, 2)
		return 0;//0 0
	break;
	case 10371://(2,8) (8, 3)
		return 0;//0 0
	break;
	case 10372://(2,8) (8, 4)
		return 3;//0 3
	break;
	case 10373://(2,8) (8, 5)
		return 3;//0 3
	break;
	case 10374://(2,8) (8, 6)
		return 3;//0 3
	break;
	case 10375://(2,8) (8, 7)
		return 0;//0 0
	break;
	case 10376://(2,8) (8, 8)
		return 3;//0 3
	break;
	case 10377://(2,8) (8, 9)
		return 3;//0 3
	break;
	case 10378://(2,8) (8, 10)
		return 3;//0 3
	break;
	case 10379://(2,8) (8, 11)
		return 3;//0 3
	break;
	case 10380://(2,8) (8, 12)
		return 3;//0 3
	break;
	case 10381://(2,8) (8, 13)
		return 3;//0 3
	break;
	case 10382://(2,8) (8, 14)
		return 3;//0 3
	break;
	case 10383://(2,8) (8, 15)
		return 3;//0 3
	break;
	case 10384://(2,8) (9, 0)
		return 64;//4 0
	break;
	case 10385://(2,8) (9, 1)
		return 67;//4 3
	break;
	case 10386://(2,8) (9, 2)
		return 64;//4 0
	break;
	case 10387://(2,8) (9, 3)
		return 64;//4 0
	break;
	case 10388://(2,8) (9, 4)
		return 67;//4 3
	break;
	case 10389://(2,8) (9, 5)
		return 67;//4 3
	break;
	case 10390://(2,8) (9, 6)
		return 67;//4 3
	break;
	case 10391://(2,8) (9, 7)
		return 64;//4 0
	break;
	case 10392://(2,8) (9, 8)
		return 67;//4 3
	break;
	case 10393://(2,8) (9, 9)
		return 67;//4 3
	break;
	case 10394://(2,8) (9, 10)
		return 67;//4 3
	break;
	case 10395://(2,8) (9, 11)
		return 67;//4 3
	break;
	case 10396://(2,8) (9, 12)
		return 67;//4 3
	break;
	case 10397://(2,8) (9, 13)
		return 67;//4 3
	break;
	case 10398://(2,8) (9, 14)
		return 67;//4 3
	break;
	case 10399://(2,8) (9, 15)
		return 67;//4 3
	break;
	case 10400://(2,8) (10, 0)
		return 0;//0 0
	break;
	case 10401://(2,8) (10, 1)
		return 3;//0 3
	break;
	case 10402://(2,8) (10, 2)
		return 0;//0 0
	break;
	case 10403://(2,8) (10, 3)
		return 0;//0 0
	break;
	case 10404://(2,8) (10, 4)
		return 3;//0 3
	break;
	case 10405://(2,8) (10, 5)
		return 3;//0 3
	break;
	case 10406://(2,8) (10, 6)
		return 3;//0 3
	break;
	case 10407://(2,8) (10, 7)
		return 0;//0 0
	break;
	case 10408://(2,8) (10, 8)
		return 3;//0 3
	break;
	case 10409://(2,8) (10, 9)
		return 3;//0 3
	break;
	case 10410://(2,8) (10, 10)
		return 3;//0 3
	break;
	case 10411://(2,8) (10, 11)
		return 3;//0 3
	break;
	case 10412://(2,8) (10, 12)
		return 3;//0 3
	break;
	case 10413://(2,8) (10, 13)
		return 3;//0 3
	break;
	case 10414://(2,8) (10, 14)
		return 3;//0 3
	break;
	case 10415://(2,8) (10, 15)
		return 3;//0 3
	break;
	case 10416://(2,8) (11, 0)
		return 64;//4 0
	break;
	case 10417://(2,8) (11, 1)
		return 67;//4 3
	break;
	case 10418://(2,8) (11, 2)
		return 64;//4 0
	break;
	case 10419://(2,8) (11, 3)
		return 64;//4 0
	break;
	case 10420://(2,8) (11, 4)
		return 67;//4 3
	break;
	case 10421://(2,8) (11, 5)
		return 67;//4 3
	break;
	case 10422://(2,8) (11, 6)
		return 67;//4 3
	break;
	case 10423://(2,8) (11, 7)
		return 64;//4 0
	break;
	case 10424://(2,8) (11, 8)
		return 67;//4 3
	break;
	case 10425://(2,8) (11, 9)
		return 67;//4 3
	break;
	case 10426://(2,8) (11, 10)
		return 67;//4 3
	break;
	case 10427://(2,8) (11, 11)
		return 67;//4 3
	break;
	case 10428://(2,8) (11, 12)
		return 67;//4 3
	break;
	case 10429://(2,8) (11, 13)
		return 67;//4 3
	break;
	case 10430://(2,8) (11, 14)
		return 67;//4 3
	break;
	case 10431://(2,8) (11, 15)
		return 67;//4 3
	break;
	case 10432://(2,8) (12, 0)
		return 64;//4 0
	break;
	case 10433://(2,8) (12, 1)
		return 67;//4 3
	break;
	case 10434://(2,8) (12, 2)
		return 64;//4 0
	break;
	case 10435://(2,8) (12, 3)
		return 64;//4 0
	break;
	case 10436://(2,8) (12, 4)
		return 67;//4 3
	break;
	case 10437://(2,8) (12, 5)
		return 67;//4 3
	break;
	case 10438://(2,8) (12, 6)
		return 67;//4 3
	break;
	case 10439://(2,8) (12, 7)
		return 64;//4 0
	break;
	case 10440://(2,8) (12, 8)
		return 67;//4 3
	break;
	case 10441://(2,8) (12, 9)
		return 67;//4 3
	break;
	case 10442://(2,8) (12, 10)
		return 67;//4 3
	break;
	case 10443://(2,8) (12, 11)
		return 67;//4 3
	break;
	case 10444://(2,8) (12, 12)
		return 67;//4 3
	break;
	case 10445://(2,8) (12, 13)
		return 67;//4 3
	break;
	case 10446://(2,8) (12, 14)
		return 67;//4 3
	break;
	case 10447://(2,8) (12, 15)
		return 67;//4 3
	break;
	case 10448://(2,8) (13, 0)
		return 0;//0 0
	break;
	case 10449://(2,8) (13, 1)
		return 3;//0 3
	break;
	case 10450://(2,8) (13, 2)
		return 0;//0 0
	break;
	case 10451://(2,8) (13, 3)
		return 0;//0 0
	break;
	case 10452://(2,8) (13, 4)
		return 3;//0 3
	break;
	case 10453://(2,8) (13, 5)
		return 3;//0 3
	break;
	case 10454://(2,8) (13, 6)
		return 3;//0 3
	break;
	case 10455://(2,8) (13, 7)
		return 0;//0 0
	break;
	case 10456://(2,8) (13, 8)
		return 3;//0 3
	break;
	case 10457://(2,8) (13, 9)
		return 3;//0 3
	break;
	case 10458://(2,8) (13, 10)
		return 3;//0 3
	break;
	case 10459://(2,8) (13, 11)
		return 3;//0 3
	break;
	case 10460://(2,8) (13, 12)
		return 3;//0 3
	break;
	case 10461://(2,8) (13, 13)
		return 3;//0 3
	break;
	case 10462://(2,8) (13, 14)
		return 3;//0 3
	break;
	case 10463://(2,8) (13, 15)
		return 3;//0 3
	break;
	case 10464://(2,8) (14, 0)
		return 64;//4 0
	break;
	case 10465://(2,8) (14, 1)
		return 67;//4 3
	break;
	case 10466://(2,8) (14, 2)
		return 64;//4 0
	break;
	case 10467://(2,8) (14, 3)
		return 64;//4 0
	break;
	case 10468://(2,8) (14, 4)
		return 67;//4 3
	break;
	case 10469://(2,8) (14, 5)
		return 67;//4 3
	break;
	case 10470://(2,8) (14, 6)
		return 67;//4 3
	break;
	case 10471://(2,8) (14, 7)
		return 64;//4 0
	break;
	case 10472://(2,8) (14, 8)
		return 67;//4 3
	break;
	case 10473://(2,8) (14, 9)
		return 67;//4 3
	break;
	case 10474://(2,8) (14, 10)
		return 67;//4 3
	break;
	case 10475://(2,8) (14, 11)
		return 67;//4 3
	break;
	case 10476://(2,8) (14, 12)
		return 67;//4 3
	break;
	case 10477://(2,8) (14, 13)
		return 67;//4 3
	break;
	case 10478://(2,8) (14, 14)
		return 67;//4 3
	break;
	case 10479://(2,8) (14, 15)
		return 67;//4 3
	break;
	case 10480://(2,8) (15, 0)
		return 64;//4 0
	break;
	case 10481://(2,8) (15, 1)
		return 67;//4 3
	break;
	case 10482://(2,8) (15, 2)
		return 64;//4 0
	break;
	case 10483://(2,8) (15, 3)
		return 64;//4 0
	break;
	case 10484://(2,8) (15, 4)
		return 67;//4 3
	break;
	case 10485://(2,8) (15, 5)
		return 67;//4 3
	break;
	case 10486://(2,8) (15, 6)
		return 67;//4 3
	break;
	case 10487://(2,8) (15, 7)
		return 64;//4 0
	break;
	case 10488://(2,8) (15, 8)
		return 67;//4 3
	break;
	case 10489://(2,8) (15, 9)
		return 67;//4 3
	break;
	case 10490://(2,8) (15, 10)
		return 67;//4 3
	break;
	case 10491://(2,8) (15, 11)
		return 67;//4 3
	break;
	case 10492://(2,8) (15, 12)
		return 67;//4 3
	break;
	case 10493://(2,8) (15, 13)
		return 67;//4 3
	break;
	case 10494://(2,8) (15, 14)
		return 67;//4 3
	break;
	case 10495://(2,8) (15, 15)
		return 67;//4 3
	break;
	case 10496://(2,9) (0, 0)
		return 0;//0 0
	break;
	case 10497://(2,9) (0, 1)
		return 3;//0 3
	break;
	case 10498://(2,9) (0, 2)
		return 3;//0 3
	break;
	case 10499://(2,9) (0, 3)
		return 0;//0 0
	break;
	case 10500://(2,9) (0, 4)
		return 0;//0 0
	break;
	case 10501://(2,9) (0, 5)
		return 3;//0 3
	break;
	case 10502://(2,9) (0, 6)
		return 3;//0 3
	break;
	case 10503://(2,9) (0, 7)
		return 3;//0 3
	break;
	case 10504://(2,9) (0, 8)
		return 3;//0 3
	break;
	case 10505://(2,9) (0, 9)
		return 3;//0 3
	break;
	case 10506://(2,9) (0, 10)
		return 0;//0 0
	break;
	case 10507://(2,9) (0, 11)
		return 3;//0 3
	break;
	case 10508://(2,9) (0, 12)
		return 3;//0 3
	break;
	case 10509://(2,9) (0, 13)
		return 3;//0 3
	break;
	case 10510://(2,9) (0, 14)
		return 3;//0 3
	break;
	case 10511://(2,9) (0, 15)
		return 3;//0 3
	break;
	case 10512://(2,9) (1, 0)
		return 0;//0 0
	break;
	case 10513://(2,9) (1, 1)
		return 3;//0 3
	break;
	case 10514://(2,9) (1, 2)
		return 3;//0 3
	break;
	case 10515://(2,9) (1, 3)
		return 0;//0 0
	break;
	case 10516://(2,9) (1, 4)
		return 0;//0 0
	break;
	case 10517://(2,9) (1, 5)
		return 3;//0 3
	break;
	case 10518://(2,9) (1, 6)
		return 3;//0 3
	break;
	case 10519://(2,9) (1, 7)
		return 3;//0 3
	break;
	case 10520://(2,9) (1, 8)
		return 3;//0 3
	break;
	case 10521://(2,9) (1, 9)
		return 3;//0 3
	break;
	case 10522://(2,9) (1, 10)
		return 0;//0 0
	break;
	case 10523://(2,9) (1, 11)
		return 3;//0 3
	break;
	case 10524://(2,9) (1, 12)
		return 3;//0 3
	break;
	case 10525://(2,9) (1, 13)
		return 3;//0 3
	break;
	case 10526://(2,9) (1, 14)
		return 3;//0 3
	break;
	case 10527://(2,9) (1, 15)
		return 3;//0 3
	break;
	case 10528://(2,9) (2, 0)
		return 64;//4 0
	break;
	case 10529://(2,9) (2, 1)
		return 67;//4 3
	break;
	case 10530://(2,9) (2, 2)
		return 67;//4 3
	break;
	case 10531://(2,9) (2, 3)
		return 64;//4 0
	break;
	case 10532://(2,9) (2, 4)
		return 64;//4 0
	break;
	case 10533://(2,9) (2, 5)
		return 67;//4 3
	break;
	case 10534://(2,9) (2, 6)
		return 67;//4 3
	break;
	case 10535://(2,9) (2, 7)
		return 67;//4 3
	break;
	case 10536://(2,9) (2, 8)
		return 67;//4 3
	break;
	case 10537://(2,9) (2, 9)
		return 67;//4 3
	break;
	case 10538://(2,9) (2, 10)
		return 64;//4 0
	break;
	case 10539://(2,9) (2, 11)
		return 67;//4 3
	break;
	case 10540://(2,9) (2, 12)
		return 67;//4 3
	break;
	case 10541://(2,9) (2, 13)
		return 67;//4 3
	break;
	case 10542://(2,9) (2, 14)
		return 67;//4 3
	break;
	case 10543://(2,9) (2, 15)
		return 67;//4 3
	break;
	case 10544://(2,9) (3, 0)
		return 0;//0 0
	break;
	case 10545://(2,9) (3, 1)
		return 3;//0 3
	break;
	case 10546://(2,9) (3, 2)
		return 3;//0 3
	break;
	case 10547://(2,9) (3, 3)
		return 0;//0 0
	break;
	case 10548://(2,9) (3, 4)
		return 0;//0 0
	break;
	case 10549://(2,9) (3, 5)
		return 3;//0 3
	break;
	case 10550://(2,9) (3, 6)
		return 3;//0 3
	break;
	case 10551://(2,9) (3, 7)
		return 3;//0 3
	break;
	case 10552://(2,9) (3, 8)
		return 3;//0 3
	break;
	case 10553://(2,9) (3, 9)
		return 3;//0 3
	break;
	case 10554://(2,9) (3, 10)
		return 0;//0 0
	break;
	case 10555://(2,9) (3, 11)
		return 3;//0 3
	break;
	case 10556://(2,9) (3, 12)
		return 3;//0 3
	break;
	case 10557://(2,9) (3, 13)
		return 3;//0 3
	break;
	case 10558://(2,9) (3, 14)
		return 3;//0 3
	break;
	case 10559://(2,9) (3, 15)
		return 3;//0 3
	break;
	case 10560://(2,9) (4, 0)
		return 0;//0 0
	break;
	case 10561://(2,9) (4, 1)
		return 3;//0 3
	break;
	case 10562://(2,9) (4, 2)
		return 3;//0 3
	break;
	case 10563://(2,9) (4, 3)
		return 0;//0 0
	break;
	case 10564://(2,9) (4, 4)
		return 0;//0 0
	break;
	case 10565://(2,9) (4, 5)
		return 3;//0 3
	break;
	case 10566://(2,9) (4, 6)
		return 3;//0 3
	break;
	case 10567://(2,9) (4, 7)
		return 3;//0 3
	break;
	case 10568://(2,9) (4, 8)
		return 3;//0 3
	break;
	case 10569://(2,9) (4, 9)
		return 3;//0 3
	break;
	case 10570://(2,9) (4, 10)
		return 0;//0 0
	break;
	case 10571://(2,9) (4, 11)
		return 3;//0 3
	break;
	case 10572://(2,9) (4, 12)
		return 3;//0 3
	break;
	case 10573://(2,9) (4, 13)
		return 3;//0 3
	break;
	case 10574://(2,9) (4, 14)
		return 3;//0 3
	break;
	case 10575://(2,9) (4, 15)
		return 3;//0 3
	break;
	case 10576://(2,9) (5, 0)
		return 64;//4 0
	break;
	case 10577://(2,9) (5, 1)
		return 67;//4 3
	break;
	case 10578://(2,9) (5, 2)
		return 67;//4 3
	break;
	case 10579://(2,9) (5, 3)
		return 64;//4 0
	break;
	case 10580://(2,9) (5, 4)
		return 64;//4 0
	break;
	case 10581://(2,9) (5, 5)
		return 67;//4 3
	break;
	case 10582://(2,9) (5, 6)
		return 67;//4 3
	break;
	case 10583://(2,9) (5, 7)
		return 67;//4 3
	break;
	case 10584://(2,9) (5, 8)
		return 67;//4 3
	break;
	case 10585://(2,9) (5, 9)
		return 67;//4 3
	break;
	case 10586://(2,9) (5, 10)
		return 64;//4 0
	break;
	case 10587://(2,9) (5, 11)
		return 67;//4 3
	break;
	case 10588://(2,9) (5, 12)
		return 67;//4 3
	break;
	case 10589://(2,9) (5, 13)
		return 67;//4 3
	break;
	case 10590://(2,9) (5, 14)
		return 67;//4 3
	break;
	case 10591://(2,9) (5, 15)
		return 67;//4 3
	break;
	case 10592://(2,9) (6, 0)
		return 0;//0 0
	break;
	case 10593://(2,9) (6, 1)
		return 3;//0 3
	break;
	case 10594://(2,9) (6, 2)
		return 3;//0 3
	break;
	case 10595://(2,9) (6, 3)
		return 0;//0 0
	break;
	case 10596://(2,9) (6, 4)
		return 0;//0 0
	break;
	case 10597://(2,9) (6, 5)
		return 3;//0 3
	break;
	case 10598://(2,9) (6, 6)
		return 3;//0 3
	break;
	case 10599://(2,9) (6, 7)
		return 3;//0 3
	break;
	case 10600://(2,9) (6, 8)
		return 3;//0 3
	break;
	case 10601://(2,9) (6, 9)
		return 3;//0 3
	break;
	case 10602://(2,9) (6, 10)
		return 0;//0 0
	break;
	case 10603://(2,9) (6, 11)
		return 3;//0 3
	break;
	case 10604://(2,9) (6, 12)
		return 3;//0 3
	break;
	case 10605://(2,9) (6, 13)
		return 3;//0 3
	break;
	case 10606://(2,9) (6, 14)
		return 3;//0 3
	break;
	case 10607://(2,9) (6, 15)
		return 3;//0 3
	break;
	case 10608://(2,9) (7, 0)
		return 64;//4 0
	break;
	case 10609://(2,9) (7, 1)
		return 67;//4 3
	break;
	case 10610://(2,9) (7, 2)
		return 67;//4 3
	break;
	case 10611://(2,9) (7, 3)
		return 64;//4 0
	break;
	case 10612://(2,9) (7, 4)
		return 64;//4 0
	break;
	case 10613://(2,9) (7, 5)
		return 67;//4 3
	break;
	case 10614://(2,9) (7, 6)
		return 67;//4 3
	break;
	case 10615://(2,9) (7, 7)
		return 67;//4 3
	break;
	case 10616://(2,9) (7, 8)
		return 67;//4 3
	break;
	case 10617://(2,9) (7, 9)
		return 67;//4 3
	break;
	case 10618://(2,9) (7, 10)
		return 64;//4 0
	break;
	case 10619://(2,9) (7, 11)
		return 67;//4 3
	break;
	case 10620://(2,9) (7, 12)
		return 67;//4 3
	break;
	case 10621://(2,9) (7, 13)
		return 67;//4 3
	break;
	case 10622://(2,9) (7, 14)
		return 67;//4 3
	break;
	case 10623://(2,9) (7, 15)
		return 67;//4 3
	break;
	case 10624://(2,9) (8, 0)
		return 0;//0 0
	break;
	case 10625://(2,9) (8, 1)
		return 3;//0 3
	break;
	case 10626://(2,9) (8, 2)
		return 3;//0 3
	break;
	case 10627://(2,9) (8, 3)
		return 0;//0 0
	break;
	case 10628://(2,9) (8, 4)
		return 0;//0 0
	break;
	case 10629://(2,9) (8, 5)
		return 3;//0 3
	break;
	case 10630://(2,9) (8, 6)
		return 3;//0 3
	break;
	case 10631://(2,9) (8, 7)
		return 3;//0 3
	break;
	case 10632://(2,9) (8, 8)
		return 3;//0 3
	break;
	case 10633://(2,9) (8, 9)
		return 3;//0 3
	break;
	case 10634://(2,9) (8, 10)
		return 0;//0 0
	break;
	case 10635://(2,9) (8, 11)
		return 3;//0 3
	break;
	case 10636://(2,9) (8, 12)
		return 3;//0 3
	break;
	case 10637://(2,9) (8, 13)
		return 3;//0 3
	break;
	case 10638://(2,9) (8, 14)
		return 3;//0 3
	break;
	case 10639://(2,9) (8, 15)
		return 3;//0 3
	break;
	case 10640://(2,9) (9, 0)
		return 64;//4 0
	break;
	case 10641://(2,9) (9, 1)
		return 67;//4 3
	break;
	case 10642://(2,9) (9, 2)
		return 67;//4 3
	break;
	case 10643://(2,9) (9, 3)
		return 64;//4 0
	break;
	case 10644://(2,9) (9, 4)
		return 64;//4 0
	break;
	case 10645://(2,9) (9, 5)
		return 67;//4 3
	break;
	case 10646://(2,9) (9, 6)
		return 67;//4 3
	break;
	case 10647://(2,9) (9, 7)
		return 67;//4 3
	break;
	case 10648://(2,9) (9, 8)
		return 67;//4 3
	break;
	case 10649://(2,9) (9, 9)
		return 67;//4 3
	break;
	case 10650://(2,9) (9, 10)
		return 64;//4 0
	break;
	case 10651://(2,9) (9, 11)
		return 67;//4 3
	break;
	case 10652://(2,9) (9, 12)
		return 67;//4 3
	break;
	case 10653://(2,9) (9, 13)
		return 67;//4 3
	break;
	case 10654://(2,9) (9, 14)
		return 67;//4 3
	break;
	case 10655://(2,9) (9, 15)
		return 67;//4 3
	break;
	case 10656://(2,9) (10, 0)
		return 0;//0 0
	break;
	case 10657://(2,9) (10, 1)
		return 3;//0 3
	break;
	case 10658://(2,9) (10, 2)
		return 3;//0 3
	break;
	case 10659://(2,9) (10, 3)
		return 0;//0 0
	break;
	case 10660://(2,9) (10, 4)
		return 0;//0 0
	break;
	case 10661://(2,9) (10, 5)
		return 3;//0 3
	break;
	case 10662://(2,9) (10, 6)
		return 3;//0 3
	break;
	case 10663://(2,9) (10, 7)
		return 3;//0 3
	break;
	case 10664://(2,9) (10, 8)
		return 3;//0 3
	break;
	case 10665://(2,9) (10, 9)
		return 3;//0 3
	break;
	case 10666://(2,9) (10, 10)
		return 0;//0 0
	break;
	case 10667://(2,9) (10, 11)
		return 3;//0 3
	break;
	case 10668://(2,9) (10, 12)
		return 3;//0 3
	break;
	case 10669://(2,9) (10, 13)
		return 3;//0 3
	break;
	case 10670://(2,9) (10, 14)
		return 3;//0 3
	break;
	case 10671://(2,9) (10, 15)
		return 3;//0 3
	break;
	case 10672://(2,9) (11, 0)
		return 64;//4 0
	break;
	case 10673://(2,9) (11, 1)
		return 67;//4 3
	break;
	case 10674://(2,9) (11, 2)
		return 67;//4 3
	break;
	case 10675://(2,9) (11, 3)
		return 64;//4 0
	break;
	case 10676://(2,9) (11, 4)
		return 64;//4 0
	break;
	case 10677://(2,9) (11, 5)
		return 67;//4 3
	break;
	case 10678://(2,9) (11, 6)
		return 67;//4 3
	break;
	case 10679://(2,9) (11, 7)
		return 67;//4 3
	break;
	case 10680://(2,9) (11, 8)
		return 67;//4 3
	break;
	case 10681://(2,9) (11, 9)
		return 67;//4 3
	break;
	case 10682://(2,9) (11, 10)
		return 64;//4 0
	break;
	case 10683://(2,9) (11, 11)
		return 67;//4 3
	break;
	case 10684://(2,9) (11, 12)
		return 67;//4 3
	break;
	case 10685://(2,9) (11, 13)
		return 67;//4 3
	break;
	case 10686://(2,9) (11, 14)
		return 67;//4 3
	break;
	case 10687://(2,9) (11, 15)
		return 67;//4 3
	break;
	case 10688://(2,9) (12, 0)
		return 64;//4 0
	break;
	case 10689://(2,9) (12, 1)
		return 67;//4 3
	break;
	case 10690://(2,9) (12, 2)
		return 67;//4 3
	break;
	case 10691://(2,9) (12, 3)
		return 64;//4 0
	break;
	case 10692://(2,9) (12, 4)
		return 64;//4 0
	break;
	case 10693://(2,9) (12, 5)
		return 67;//4 3
	break;
	case 10694://(2,9) (12, 6)
		return 67;//4 3
	break;
	case 10695://(2,9) (12, 7)
		return 67;//4 3
	break;
	case 10696://(2,9) (12, 8)
		return 67;//4 3
	break;
	case 10697://(2,9) (12, 9)
		return 67;//4 3
	break;
	case 10698://(2,9) (12, 10)
		return 64;//4 0
	break;
	case 10699://(2,9) (12, 11)
		return 67;//4 3
	break;
	case 10700://(2,9) (12, 12)
		return 67;//4 3
	break;
	case 10701://(2,9) (12, 13)
		return 67;//4 3
	break;
	case 10702://(2,9) (12, 14)
		return 67;//4 3
	break;
	case 10703://(2,9) (12, 15)
		return 67;//4 3
	break;
	case 10704://(2,9) (13, 0)
		return 0;//0 0
	break;
	case 10705://(2,9) (13, 1)
		return 3;//0 3
	break;
	case 10706://(2,9) (13, 2)
		return 3;//0 3
	break;
	case 10707://(2,9) (13, 3)
		return 0;//0 0
	break;
	case 10708://(2,9) (13, 4)
		return 0;//0 0
	break;
	case 10709://(2,9) (13, 5)
		return 3;//0 3
	break;
	case 10710://(2,9) (13, 6)
		return 3;//0 3
	break;
	case 10711://(2,9) (13, 7)
		return 3;//0 3
	break;
	case 10712://(2,9) (13, 8)
		return 3;//0 3
	break;
	case 10713://(2,9) (13, 9)
		return 3;//0 3
	break;
	case 10714://(2,9) (13, 10)
		return 0;//0 0
	break;
	case 10715://(2,9) (13, 11)
		return 3;//0 3
	break;
	case 10716://(2,9) (13, 12)
		return 3;//0 3
	break;
	case 10717://(2,9) (13, 13)
		return 3;//0 3
	break;
	case 10718://(2,9) (13, 14)
		return 3;//0 3
	break;
	case 10719://(2,9) (13, 15)
		return 3;//0 3
	break;
	case 10720://(2,9) (14, 0)
		return 64;//4 0
	break;
	case 10721://(2,9) (14, 1)
		return 67;//4 3
	break;
	case 10722://(2,9) (14, 2)
		return 67;//4 3
	break;
	case 10723://(2,9) (14, 3)
		return 64;//4 0
	break;
	case 10724://(2,9) (14, 4)
		return 64;//4 0
	break;
	case 10725://(2,9) (14, 5)
		return 67;//4 3
	break;
	case 10726://(2,9) (14, 6)
		return 67;//4 3
	break;
	case 10727://(2,9) (14, 7)
		return 67;//4 3
	break;
	case 10728://(2,9) (14, 8)
		return 67;//4 3
	break;
	case 10729://(2,9) (14, 9)
		return 67;//4 3
	break;
	case 10730://(2,9) (14, 10)
		return 64;//4 0
	break;
	case 10731://(2,9) (14, 11)
		return 67;//4 3
	break;
	case 10732://(2,9) (14, 12)
		return 67;//4 3
	break;
	case 10733://(2,9) (14, 13)
		return 67;//4 3
	break;
	case 10734://(2,9) (14, 14)
		return 67;//4 3
	break;
	case 10735://(2,9) (14, 15)
		return 67;//4 3
	break;
	case 10736://(2,9) (15, 0)
		return 64;//4 0
	break;
	case 10737://(2,9) (15, 1)
		return 67;//4 3
	break;
	case 10738://(2,9) (15, 2)
		return 67;//4 3
	break;
	case 10739://(2,9) (15, 3)
		return 64;//4 0
	break;
	case 10740://(2,9) (15, 4)
		return 64;//4 0
	break;
	case 10741://(2,9) (15, 5)
		return 67;//4 3
	break;
	case 10742://(2,9) (15, 6)
		return 67;//4 3
	break;
	case 10743://(2,9) (15, 7)
		return 67;//4 3
	break;
	case 10744://(2,9) (15, 8)
		return 67;//4 3
	break;
	case 10745://(2,9) (15, 9)
		return 67;//4 3
	break;
	case 10746://(2,9) (15, 10)
		return 64;//4 0
	break;
	case 10747://(2,9) (15, 11)
		return 67;//4 3
	break;
	case 10748://(2,9) (15, 12)
		return 67;//4 3
	break;
	case 10749://(2,9) (15, 13)
		return 67;//4 3
	break;
	case 10750://(2,9) (15, 14)
		return 67;//4 3
	break;
	case 10751://(2,9) (15, 15)
		return 67;//4 3
	break;
	case 10752://(2,10) (0, 0)
		return 0;//0 0
	break;
	case 10753://(2,10) (0, 1)
		return 0;//0 0
	break;
	case 10754://(2,10) (0, 2)
		return 0;//0 0
	break;
	case 10755://(2,10) (0, 3)
		return 3;//0 3
	break;
	case 10756://(2,10) (0, 4)
		return 3;//0 3
	break;
	case 10757://(2,10) (0, 5)
		return 3;//0 3
	break;
	case 10758://(2,10) (0, 6)
		return 3;//0 3
	break;
	case 10759://(2,10) (0, 7)
		return 3;//0 3
	break;
	case 10760://(2,10) (0, 8)
		return 3;//0 3
	break;
	case 10761://(2,10) (0, 9)
		return 0;//0 0
	break;
	case 10762://(2,10) (0, 10)
		return 3;//0 3
	break;
	case 10763://(2,10) (0, 11)
		return 3;//0 3
	break;
	case 10764://(2,10) (0, 12)
		return 3;//0 3
	break;
	case 10765://(2,10) (0, 13)
		return 3;//0 3
	break;
	case 10766://(2,10) (0, 14)
		return 3;//0 3
	break;
	case 10767://(2,10) (0, 15)
		return 3;//0 3
	break;
	case 10768://(2,10) (1, 0)
		return 0;//0 0
	break;
	case 10769://(2,10) (1, 1)
		return 0;//0 0
	break;
	case 10770://(2,10) (1, 2)
		return 0;//0 0
	break;
	case 10771://(2,10) (1, 3)
		return 3;//0 3
	break;
	case 10772://(2,10) (1, 4)
		return 3;//0 3
	break;
	case 10773://(2,10) (1, 5)
		return 3;//0 3
	break;
	case 10774://(2,10) (1, 6)
		return 3;//0 3
	break;
	case 10775://(2,10) (1, 7)
		return 3;//0 3
	break;
	case 10776://(2,10) (1, 8)
		return 3;//0 3
	break;
	case 10777://(2,10) (1, 9)
		return 0;//0 0
	break;
	case 10778://(2,10) (1, 10)
		return 3;//0 3
	break;
	case 10779://(2,10) (1, 11)
		return 3;//0 3
	break;
	case 10780://(2,10) (1, 12)
		return 3;//0 3
	break;
	case 10781://(2,10) (1, 13)
		return 3;//0 3
	break;
	case 10782://(2,10) (1, 14)
		return 3;//0 3
	break;
	case 10783://(2,10) (1, 15)
		return 3;//0 3
	break;
	case 10784://(2,10) (2, 0)
		return 64;//4 0
	break;
	case 10785://(2,10) (2, 1)
		return 64;//4 0
	break;
	case 10786://(2,10) (2, 2)
		return 64;//4 0
	break;
	case 10787://(2,10) (2, 3)
		return 67;//4 3
	break;
	case 10788://(2,10) (2, 4)
		return 67;//4 3
	break;
	case 10789://(2,10) (2, 5)
		return 67;//4 3
	break;
	case 10790://(2,10) (2, 6)
		return 67;//4 3
	break;
	case 10791://(2,10) (2, 7)
		return 67;//4 3
	break;
	case 10792://(2,10) (2, 8)
		return 67;//4 3
	break;
	case 10793://(2,10) (2, 9)
		return 64;//4 0
	break;
	case 10794://(2,10) (2, 10)
		return 67;//4 3
	break;
	case 10795://(2,10) (2, 11)
		return 67;//4 3
	break;
	case 10796://(2,10) (2, 12)
		return 67;//4 3
	break;
	case 10797://(2,10) (2, 13)
		return 67;//4 3
	break;
	case 10798://(2,10) (2, 14)
		return 67;//4 3
	break;
	case 10799://(2,10) (2, 15)
		return 67;//4 3
	break;
	case 10800://(2,10) (3, 0)
		return 0;//0 0
	break;
	case 10801://(2,10) (3, 1)
		return 0;//0 0
	break;
	case 10802://(2,10) (3, 2)
		return 0;//0 0
	break;
	case 10803://(2,10) (3, 3)
		return 3;//0 3
	break;
	case 10804://(2,10) (3, 4)
		return 3;//0 3
	break;
	case 10805://(2,10) (3, 5)
		return 3;//0 3
	break;
	case 10806://(2,10) (3, 6)
		return 3;//0 3
	break;
	case 10807://(2,10) (3, 7)
		return 3;//0 3
	break;
	case 10808://(2,10) (3, 8)
		return 3;//0 3
	break;
	case 10809://(2,10) (3, 9)
		return 0;//0 0
	break;
	case 10810://(2,10) (3, 10)
		return 3;//0 3
	break;
	case 10811://(2,10) (3, 11)
		return 3;//0 3
	break;
	case 10812://(2,10) (3, 12)
		return 3;//0 3
	break;
	case 10813://(2,10) (3, 13)
		return 3;//0 3
	break;
	case 10814://(2,10) (3, 14)
		return 3;//0 3
	break;
	case 10815://(2,10) (3, 15)
		return 3;//0 3
	break;
	case 10816://(2,10) (4, 0)
		return 0;//0 0
	break;
	case 10817://(2,10) (4, 1)
		return 0;//0 0
	break;
	case 10818://(2,10) (4, 2)
		return 0;//0 0
	break;
	case 10819://(2,10) (4, 3)
		return 3;//0 3
	break;
	case 10820://(2,10) (4, 4)
		return 3;//0 3
	break;
	case 10821://(2,10) (4, 5)
		return 3;//0 3
	break;
	case 10822://(2,10) (4, 6)
		return 3;//0 3
	break;
	case 10823://(2,10) (4, 7)
		return 3;//0 3
	break;
	case 10824://(2,10) (4, 8)
		return 3;//0 3
	break;
	case 10825://(2,10) (4, 9)
		return 0;//0 0
	break;
	case 10826://(2,10) (4, 10)
		return 3;//0 3
	break;
	case 10827://(2,10) (4, 11)
		return 3;//0 3
	break;
	case 10828://(2,10) (4, 12)
		return 3;//0 3
	break;
	case 10829://(2,10) (4, 13)
		return 3;//0 3
	break;
	case 10830://(2,10) (4, 14)
		return 3;//0 3
	break;
	case 10831://(2,10) (4, 15)
		return 3;//0 3
	break;
	case 10832://(2,10) (5, 0)
		return 64;//4 0
	break;
	case 10833://(2,10) (5, 1)
		return 64;//4 0
	break;
	case 10834://(2,10) (5, 2)
		return 64;//4 0
	break;
	case 10835://(2,10) (5, 3)
		return 67;//4 3
	break;
	case 10836://(2,10) (5, 4)
		return 67;//4 3
	break;
	case 10837://(2,10) (5, 5)
		return 67;//4 3
	break;
	case 10838://(2,10) (5, 6)
		return 67;//4 3
	break;
	case 10839://(2,10) (5, 7)
		return 67;//4 3
	break;
	case 10840://(2,10) (5, 8)
		return 67;//4 3
	break;
	case 10841://(2,10) (5, 9)
		return 64;//4 0
	break;
	case 10842://(2,10) (5, 10)
		return 67;//4 3
	break;
	case 10843://(2,10) (5, 11)
		return 67;//4 3
	break;
	case 10844://(2,10) (5, 12)
		return 67;//4 3
	break;
	case 10845://(2,10) (5, 13)
		return 67;//4 3
	break;
	case 10846://(2,10) (5, 14)
		return 67;//4 3
	break;
	case 10847://(2,10) (5, 15)
		return 67;//4 3
	break;
	case 10848://(2,10) (6, 0)
		return 0;//0 0
	break;
	case 10849://(2,10) (6, 1)
		return 0;//0 0
	break;
	case 10850://(2,10) (6, 2)
		return 0;//0 0
	break;
	case 10851://(2,10) (6, 3)
		return 3;//0 3
	break;
	case 10852://(2,10) (6, 4)
		return 3;//0 3
	break;
	case 10853://(2,10) (6, 5)
		return 3;//0 3
	break;
	case 10854://(2,10) (6, 6)
		return 3;//0 3
	break;
	case 10855://(2,10) (6, 7)
		return 3;//0 3
	break;
	case 10856://(2,10) (6, 8)
		return 3;//0 3
	break;
	case 10857://(2,10) (6, 9)
		return 0;//0 0
	break;
	case 10858://(2,10) (6, 10)
		return 3;//0 3
	break;
	case 10859://(2,10) (6, 11)
		return 3;//0 3
	break;
	case 10860://(2,10) (6, 12)
		return 3;//0 3
	break;
	case 10861://(2,10) (6, 13)
		return 3;//0 3
	break;
	case 10862://(2,10) (6, 14)
		return 3;//0 3
	break;
	case 10863://(2,10) (6, 15)
		return 3;//0 3
	break;
	case 10864://(2,10) (7, 0)
		return 64;//4 0
	break;
	case 10865://(2,10) (7, 1)
		return 64;//4 0
	break;
	case 10866://(2,10) (7, 2)
		return 64;//4 0
	break;
	case 10867://(2,10) (7, 3)
		return 67;//4 3
	break;
	case 10868://(2,10) (7, 4)
		return 67;//4 3
	break;
	case 10869://(2,10) (7, 5)
		return 67;//4 3
	break;
	case 10870://(2,10) (7, 6)
		return 67;//4 3
	break;
	case 10871://(2,10) (7, 7)
		return 67;//4 3
	break;
	case 10872://(2,10) (7, 8)
		return 67;//4 3
	break;
	case 10873://(2,10) (7, 9)
		return 64;//4 0
	break;
	case 10874://(2,10) (7, 10)
		return 67;//4 3
	break;
	case 10875://(2,10) (7, 11)
		return 67;//4 3
	break;
	case 10876://(2,10) (7, 12)
		return 67;//4 3
	break;
	case 10877://(2,10) (7, 13)
		return 67;//4 3
	break;
	case 10878://(2,10) (7, 14)
		return 67;//4 3
	break;
	case 10879://(2,10) (7, 15)
		return 67;//4 3
	break;
	case 10880://(2,10) (8, 0)
		return 0;//0 0
	break;
	case 10881://(2,10) (8, 1)
		return 0;//0 0
	break;
	case 10882://(2,10) (8, 2)
		return 0;//0 0
	break;
	case 10883://(2,10) (8, 3)
		return 3;//0 3
	break;
	case 10884://(2,10) (8, 4)
		return 3;//0 3
	break;
	case 10885://(2,10) (8, 5)
		return 3;//0 3
	break;
	case 10886://(2,10) (8, 6)
		return 3;//0 3
	break;
	case 10887://(2,10) (8, 7)
		return 3;//0 3
	break;
	case 10888://(2,10) (8, 8)
		return 3;//0 3
	break;
	case 10889://(2,10) (8, 9)
		return 0;//0 0
	break;
	case 10890://(2,10) (8, 10)
		return 3;//0 3
	break;
	case 10891://(2,10) (8, 11)
		return 3;//0 3
	break;
	case 10892://(2,10) (8, 12)
		return 3;//0 3
	break;
	case 10893://(2,10) (8, 13)
		return 3;//0 3
	break;
	case 10894://(2,10) (8, 14)
		return 3;//0 3
	break;
	case 10895://(2,10) (8, 15)
		return 3;//0 3
	break;
	case 10896://(2,10) (9, 0)
		return 64;//4 0
	break;
	case 10897://(2,10) (9, 1)
		return 64;//4 0
	break;
	case 10898://(2,10) (9, 2)
		return 64;//4 0
	break;
	case 10899://(2,10) (9, 3)
		return 67;//4 3
	break;
	case 10900://(2,10) (9, 4)
		return 67;//4 3
	break;
	case 10901://(2,10) (9, 5)
		return 67;//4 3
	break;
	case 10902://(2,10) (9, 6)
		return 67;//4 3
	break;
	case 10903://(2,10) (9, 7)
		return 67;//4 3
	break;
	case 10904://(2,10) (9, 8)
		return 67;//4 3
	break;
	case 10905://(2,10) (9, 9)
		return 64;//4 0
	break;
	case 10906://(2,10) (9, 10)
		return 67;//4 3
	break;
	case 10907://(2,10) (9, 11)
		return 67;//4 3
	break;
	case 10908://(2,10) (9, 12)
		return 67;//4 3
	break;
	case 10909://(2,10) (9, 13)
		return 67;//4 3
	break;
	case 10910://(2,10) (9, 14)
		return 67;//4 3
	break;
	case 10911://(2,10) (9, 15)
		return 67;//4 3
	break;
	case 10912://(2,10) (10, 0)
		return 0;//0 0
	break;
	case 10913://(2,10) (10, 1)
		return 0;//0 0
	break;
	case 10914://(2,10) (10, 2)
		return 0;//0 0
	break;
	case 10915://(2,10) (10, 3)
		return 3;//0 3
	break;
	case 10916://(2,10) (10, 4)
		return 3;//0 3
	break;
	case 10917://(2,10) (10, 5)
		return 3;//0 3
	break;
	case 10918://(2,10) (10, 6)
		return 3;//0 3
	break;
	case 10919://(2,10) (10, 7)
		return 3;//0 3
	break;
	case 10920://(2,10) (10, 8)
		return 3;//0 3
	break;
	case 10921://(2,10) (10, 9)
		return 0;//0 0
	break;
	case 10922://(2,10) (10, 10)
		return 3;//0 3
	break;
	case 10923://(2,10) (10, 11)
		return 3;//0 3
	break;
	case 10924://(2,10) (10, 12)
		return 3;//0 3
	break;
	case 10925://(2,10) (10, 13)
		return 3;//0 3
	break;
	case 10926://(2,10) (10, 14)
		return 3;//0 3
	break;
	case 10927://(2,10) (10, 15)
		return 3;//0 3
	break;
	case 10928://(2,10) (11, 0)
		return 64;//4 0
	break;
	case 10929://(2,10) (11, 1)
		return 64;//4 0
	break;
	case 10930://(2,10) (11, 2)
		return 64;//4 0
	break;
	case 10931://(2,10) (11, 3)
		return 67;//4 3
	break;
	case 10932://(2,10) (11, 4)
		return 67;//4 3
	break;
	case 10933://(2,10) (11, 5)
		return 67;//4 3
	break;
	case 10934://(2,10) (11, 6)
		return 67;//4 3
	break;
	case 10935://(2,10) (11, 7)
		return 67;//4 3
	break;
	case 10936://(2,10) (11, 8)
		return 67;//4 3
	break;
	case 10937://(2,10) (11, 9)
		return 64;//4 0
	break;
	case 10938://(2,10) (11, 10)
		return 67;//4 3
	break;
	case 10939://(2,10) (11, 11)
		return 67;//4 3
	break;
	case 10940://(2,10) (11, 12)
		return 67;//4 3
	break;
	case 10941://(2,10) (11, 13)
		return 67;//4 3
	break;
	case 10942://(2,10) (11, 14)
		return 67;//4 3
	break;
	case 10943://(2,10) (11, 15)
		return 67;//4 3
	break;
	case 10944://(2,10) (12, 0)
		return 64;//4 0
	break;
	case 10945://(2,10) (12, 1)
		return 64;//4 0
	break;
	case 10946://(2,10) (12, 2)
		return 64;//4 0
	break;
	case 10947://(2,10) (12, 3)
		return 67;//4 3
	break;
	case 10948://(2,10) (12, 4)
		return 67;//4 3
	break;
	case 10949://(2,10) (12, 5)
		return 67;//4 3
	break;
	case 10950://(2,10) (12, 6)
		return 67;//4 3
	break;
	case 10951://(2,10) (12, 7)
		return 67;//4 3
	break;
	case 10952://(2,10) (12, 8)
		return 67;//4 3
	break;
	case 10953://(2,10) (12, 9)
		return 64;//4 0
	break;
	case 10954://(2,10) (12, 10)
		return 67;//4 3
	break;
	case 10955://(2,10) (12, 11)
		return 67;//4 3
	break;
	case 10956://(2,10) (12, 12)
		return 67;//4 3
	break;
	case 10957://(2,10) (12, 13)
		return 67;//4 3
	break;
	case 10958://(2,10) (12, 14)
		return 67;//4 3
	break;
	case 10959://(2,10) (12, 15)
		return 67;//4 3
	break;
	case 10960://(2,10) (13, 0)
		return 0;//0 0
	break;
	case 10961://(2,10) (13, 1)
		return 0;//0 0
	break;
	case 10962://(2,10) (13, 2)
		return 0;//0 0
	break;
	case 10963://(2,10) (13, 3)
		return 3;//0 3
	break;
	case 10964://(2,10) (13, 4)
		return 3;//0 3
	break;
	case 10965://(2,10) (13, 5)
		return 3;//0 3
	break;
	case 10966://(2,10) (13, 6)
		return 3;//0 3
	break;
	case 10967://(2,10) (13, 7)
		return 3;//0 3
	break;
	case 10968://(2,10) (13, 8)
		return 3;//0 3
	break;
	case 10969://(2,10) (13, 9)
		return 0;//0 0
	break;
	case 10970://(2,10) (13, 10)
		return 3;//0 3
	break;
	case 10971://(2,10) (13, 11)
		return 3;//0 3
	break;
	case 10972://(2,10) (13, 12)
		return 3;//0 3
	break;
	case 10973://(2,10) (13, 13)
		return 3;//0 3
	break;
	case 10974://(2,10) (13, 14)
		return 3;//0 3
	break;
	case 10975://(2,10) (13, 15)
		return 3;//0 3
	break;
	case 10976://(2,10) (14, 0)
		return 64;//4 0
	break;
	case 10977://(2,10) (14, 1)
		return 64;//4 0
	break;
	case 10978://(2,10) (14, 2)
		return 64;//4 0
	break;
	case 10979://(2,10) (14, 3)
		return 67;//4 3
	break;
	case 10980://(2,10) (14, 4)
		return 67;//4 3
	break;
	case 10981://(2,10) (14, 5)
		return 67;//4 3
	break;
	case 10982://(2,10) (14, 6)
		return 67;//4 3
	break;
	case 10983://(2,10) (14, 7)
		return 67;//4 3
	break;
	case 10984://(2,10) (14, 8)
		return 67;//4 3
	break;
	case 10985://(2,10) (14, 9)
		return 64;//4 0
	break;
	case 10986://(2,10) (14, 10)
		return 67;//4 3
	break;
	case 10987://(2,10) (14, 11)
		return 67;//4 3
	break;
	case 10988://(2,10) (14, 12)
		return 67;//4 3
	break;
	case 10989://(2,10) (14, 13)
		return 67;//4 3
	break;
	case 10990://(2,10) (14, 14)
		return 67;//4 3
	break;
	case 10991://(2,10) (14, 15)
		return 67;//4 3
	break;
	case 10992://(2,10) (15, 0)
		return 64;//4 0
	break;
	case 10993://(2,10) (15, 1)
		return 64;//4 0
	break;
	case 10994://(2,10) (15, 2)
		return 64;//4 0
	break;
	case 10995://(2,10) (15, 3)
		return 67;//4 3
	break;
	case 10996://(2,10) (15, 4)
		return 67;//4 3
	break;
	case 10997://(2,10) (15, 5)
		return 67;//4 3
	break;
	case 10998://(2,10) (15, 6)
		return 67;//4 3
	break;
	case 10999://(2,10) (15, 7)
		return 67;//4 3
	break;
	case 11000://(2,10) (15, 8)
		return 67;//4 3
	break;
	case 11001://(2,10) (15, 9)
		return 64;//4 0
	break;
	case 11002://(2,10) (15, 10)
		return 67;//4 3
	break;
	case 11003://(2,10) (15, 11)
		return 67;//4 3
	break;
	case 11004://(2,10) (15, 12)
		return 67;//4 3
	break;
	case 11005://(2,10) (15, 13)
		return 67;//4 3
	break;
	case 11006://(2,10) (15, 14)
		return 67;//4 3
	break;
	case 11007://(2,10) (15, 15)
		return 67;//4 3
	break;
	case 11008://(2,11) (0, 0)
		return 0;//0 0
	break;
	case 11009://(2,11) (0, 1)
		return 2;//0 2
	break;
	case 11010://(2,11) (0, 2)
		return 2;//0 2
	break;
	case 11011://(2,11) (0, 3)
		return 2;//0 2
	break;
	case 11012://(2,11) (0, 4)
		return 0;//0 0
	break;
	case 11013://(2,11) (0, 5)
		return 2;//0 2
	break;
	case 11014://(2,11) (0, 6)
		return 2;//0 2
	break;
	case 11015://(2,11) (0, 7)
		return 2;//0 2
	break;
	case 11016://(2,11) (0, 8)
		return 2;//0 2
	break;
	case 11017://(2,11) (0, 9)
		return 2;//0 2
	break;
	case 11018://(2,11) (0, 10)
		return 2;//0 2
	break;
	case 11019://(2,11) (0, 11)
		return 2;//0 2
	break;
	case 11020://(2,11) (0, 12)
		return 2;//0 2
	break;
	case 11021://(2,11) (0, 13)
		return 2;//0 2
	break;
	case 11022://(2,11) (0, 14)
		return 2;//0 2
	break;
	case 11023://(2,11) (0, 15)
		return 2;//0 2
	break;
	case 11024://(2,11) (1, 0)
		return 0;//0 0
	break;
	case 11025://(2,11) (1, 1)
		return 2;//0 2
	break;
	case 11026://(2,11) (1, 2)
		return 2;//0 2
	break;
	case 11027://(2,11) (1, 3)
		return 2;//0 2
	break;
	case 11028://(2,11) (1, 4)
		return 0;//0 0
	break;
	case 11029://(2,11) (1, 5)
		return 2;//0 2
	break;
	case 11030://(2,11) (1, 6)
		return 2;//0 2
	break;
	case 11031://(2,11) (1, 7)
		return 2;//0 2
	break;
	case 11032://(2,11) (1, 8)
		return 2;//0 2
	break;
	case 11033://(2,11) (1, 9)
		return 2;//0 2
	break;
	case 11034://(2,11) (1, 10)
		return 2;//0 2
	break;
	case 11035://(2,11) (1, 11)
		return 2;//0 2
	break;
	case 11036://(2,11) (1, 12)
		return 2;//0 2
	break;
	case 11037://(2,11) (1, 13)
		return 2;//0 2
	break;
	case 11038://(2,11) (1, 14)
		return 2;//0 2
	break;
	case 11039://(2,11) (1, 15)
		return 2;//0 2
	break;
	case 11040://(2,11) (2, 0)
		return 64;//4 0
	break;
	case 11041://(2,11) (2, 1)
		return 66;//4 2
	break;
	case 11042://(2,11) (2, 2)
		return 66;//4 2
	break;
	case 11043://(2,11) (2, 3)
		return 66;//4 2
	break;
	case 11044://(2,11) (2, 4)
		return 64;//4 0
	break;
	case 11045://(2,11) (2, 5)
		return 66;//4 2
	break;
	case 11046://(2,11) (2, 6)
		return 66;//4 2
	break;
	case 11047://(2,11) (2, 7)
		return 66;//4 2
	break;
	case 11048://(2,11) (2, 8)
		return 66;//4 2
	break;
	case 11049://(2,11) (2, 9)
		return 66;//4 2
	break;
	case 11050://(2,11) (2, 10)
		return 66;//4 2
	break;
	case 11051://(2,11) (2, 11)
		return 66;//4 2
	break;
	case 11052://(2,11) (2, 12)
		return 66;//4 2
	break;
	case 11053://(2,11) (2, 13)
		return 66;//4 2
	break;
	case 11054://(2,11) (2, 14)
		return 66;//4 2
	break;
	case 11055://(2,11) (2, 15)
		return 66;//4 2
	break;
	case 11056://(2,11) (3, 0)
		return 0;//0 0
	break;
	case 11057://(2,11) (3, 1)
		return 2;//0 2
	break;
	case 11058://(2,11) (3, 2)
		return 2;//0 2
	break;
	case 11059://(2,11) (3, 3)
		return 2;//0 2
	break;
	case 11060://(2,11) (3, 4)
		return 0;//0 0
	break;
	case 11061://(2,11) (3, 5)
		return 2;//0 2
	break;
	case 11062://(2,11) (3, 6)
		return 2;//0 2
	break;
	case 11063://(2,11) (3, 7)
		return 2;//0 2
	break;
	case 11064://(2,11) (3, 8)
		return 2;//0 2
	break;
	case 11065://(2,11) (3, 9)
		return 2;//0 2
	break;
	case 11066://(2,11) (3, 10)
		return 2;//0 2
	break;
	case 11067://(2,11) (3, 11)
		return 2;//0 2
	break;
	case 11068://(2,11) (3, 12)
		return 2;//0 2
	break;
	case 11069://(2,11) (3, 13)
		return 2;//0 2
	break;
	case 11070://(2,11) (3, 14)
		return 2;//0 2
	break;
	case 11071://(2,11) (3, 15)
		return 2;//0 2
	break;
	case 11072://(2,11) (4, 0)
		return 0;//0 0
	break;
	case 11073://(2,11) (4, 1)
		return 2;//0 2
	break;
	case 11074://(2,11) (4, 2)
		return 2;//0 2
	break;
	case 11075://(2,11) (4, 3)
		return 2;//0 2
	break;
	case 11076://(2,11) (4, 4)
		return 0;//0 0
	break;
	case 11077://(2,11) (4, 5)
		return 2;//0 2
	break;
	case 11078://(2,11) (4, 6)
		return 2;//0 2
	break;
	case 11079://(2,11) (4, 7)
		return 2;//0 2
	break;
	case 11080://(2,11) (4, 8)
		return 2;//0 2
	break;
	case 11081://(2,11) (4, 9)
		return 2;//0 2
	break;
	case 11082://(2,11) (4, 10)
		return 2;//0 2
	break;
	case 11083://(2,11) (4, 11)
		return 2;//0 2
	break;
	case 11084://(2,11) (4, 12)
		return 2;//0 2
	break;
	case 11085://(2,11) (4, 13)
		return 2;//0 2
	break;
	case 11086://(2,11) (4, 14)
		return 2;//0 2
	break;
	case 11087://(2,11) (4, 15)
		return 2;//0 2
	break;
	case 11088://(2,11) (5, 0)
		return 64;//4 0
	break;
	case 11089://(2,11) (5, 1)
		return 66;//4 2
	break;
	case 11090://(2,11) (5, 2)
		return 66;//4 2
	break;
	case 11091://(2,11) (5, 3)
		return 66;//4 2
	break;
	case 11092://(2,11) (5, 4)
		return 64;//4 0
	break;
	case 11093://(2,11) (5, 5)
		return 66;//4 2
	break;
	case 11094://(2,11) (5, 6)
		return 66;//4 2
	break;
	case 11095://(2,11) (5, 7)
		return 66;//4 2
	break;
	case 11096://(2,11) (5, 8)
		return 66;//4 2
	break;
	case 11097://(2,11) (5, 9)
		return 66;//4 2
	break;
	case 11098://(2,11) (5, 10)
		return 66;//4 2
	break;
	case 11099://(2,11) (5, 11)
		return 66;//4 2
	break;
	case 11100://(2,11) (5, 12)
		return 66;//4 2
	break;
	case 11101://(2,11) (5, 13)
		return 66;//4 2
	break;
	case 11102://(2,11) (5, 14)
		return 66;//4 2
	break;
	case 11103://(2,11) (5, 15)
		return 66;//4 2
	break;
	case 11104://(2,11) (6, 0)
		return 0;//0 0
	break;
	case 11105://(2,11) (6, 1)
		return 2;//0 2
	break;
	case 11106://(2,11) (6, 2)
		return 2;//0 2
	break;
	case 11107://(2,11) (6, 3)
		return 2;//0 2
	break;
	case 11108://(2,11) (6, 4)
		return 0;//0 0
	break;
	case 11109://(2,11) (6, 5)
		return 2;//0 2
	break;
	case 11110://(2,11) (6, 6)
		return 2;//0 2
	break;
	case 11111://(2,11) (6, 7)
		return 2;//0 2
	break;
	case 11112://(2,11) (6, 8)
		return 2;//0 2
	break;
	case 11113://(2,11) (6, 9)
		return 2;//0 2
	break;
	case 11114://(2,11) (6, 10)
		return 2;//0 2
	break;
	case 11115://(2,11) (6, 11)
		return 2;//0 2
	break;
	case 11116://(2,11) (6, 12)
		return 2;//0 2
	break;
	case 11117://(2,11) (6, 13)
		return 2;//0 2
	break;
	case 11118://(2,11) (6, 14)
		return 2;//0 2
	break;
	case 11119://(2,11) (6, 15)
		return 2;//0 2
	break;
	case 11120://(2,11) (7, 0)
		return 64;//4 0
	break;
	case 11121://(2,11) (7, 1)
		return 66;//4 2
	break;
	case 11122://(2,11) (7, 2)
		return 66;//4 2
	break;
	case 11123://(2,11) (7, 3)
		return 66;//4 2
	break;
	case 11124://(2,11) (7, 4)
		return 64;//4 0
	break;
	case 11125://(2,11) (7, 5)
		return 66;//4 2
	break;
	case 11126://(2,11) (7, 6)
		return 66;//4 2
	break;
	case 11127://(2,11) (7, 7)
		return 66;//4 2
	break;
	case 11128://(2,11) (7, 8)
		return 66;//4 2
	break;
	case 11129://(2,11) (7, 9)
		return 66;//4 2
	break;
	case 11130://(2,11) (7, 10)
		return 66;//4 2
	break;
	case 11131://(2,11) (7, 11)
		return 66;//4 2
	break;
	case 11132://(2,11) (7, 12)
		return 66;//4 2
	break;
	case 11133://(2,11) (7, 13)
		return 66;//4 2
	break;
	case 11134://(2,11) (7, 14)
		return 66;//4 2
	break;
	case 11135://(2,11) (7, 15)
		return 66;//4 2
	break;
	case 11136://(2,11) (8, 0)
		return 0;//0 0
	break;
	case 11137://(2,11) (8, 1)
		return 2;//0 2
	break;
	case 11138://(2,11) (8, 2)
		return 2;//0 2
	break;
	case 11139://(2,11) (8, 3)
		return 2;//0 2
	break;
	case 11140://(2,11) (8, 4)
		return 0;//0 0
	break;
	case 11141://(2,11) (8, 5)
		return 2;//0 2
	break;
	case 11142://(2,11) (8, 6)
		return 2;//0 2
	break;
	case 11143://(2,11) (8, 7)
		return 2;//0 2
	break;
	case 11144://(2,11) (8, 8)
		return 2;//0 2
	break;
	case 11145://(2,11) (8, 9)
		return 2;//0 2
	break;
	case 11146://(2,11) (8, 10)
		return 2;//0 2
	break;
	case 11147://(2,11) (8, 11)
		return 2;//0 2
	break;
	case 11148://(2,11) (8, 12)
		return 2;//0 2
	break;
	case 11149://(2,11) (8, 13)
		return 2;//0 2
	break;
	case 11150://(2,11) (8, 14)
		return 2;//0 2
	break;
	case 11151://(2,11) (8, 15)
		return 2;//0 2
	break;
	case 11152://(2,11) (9, 0)
		return 64;//4 0
	break;
	case 11153://(2,11) (9, 1)
		return 66;//4 2
	break;
	case 11154://(2,11) (9, 2)
		return 66;//4 2
	break;
	case 11155://(2,11) (9, 3)
		return 66;//4 2
	break;
	case 11156://(2,11) (9, 4)
		return 64;//4 0
	break;
	case 11157://(2,11) (9, 5)
		return 66;//4 2
	break;
	case 11158://(2,11) (9, 6)
		return 66;//4 2
	break;
	case 11159://(2,11) (9, 7)
		return 66;//4 2
	break;
	case 11160://(2,11) (9, 8)
		return 66;//4 2
	break;
	case 11161://(2,11) (9, 9)
		return 66;//4 2
	break;
	case 11162://(2,11) (9, 10)
		return 66;//4 2
	break;
	case 11163://(2,11) (9, 11)
		return 66;//4 2
	break;
	case 11164://(2,11) (9, 12)
		return 66;//4 2
	break;
	case 11165://(2,11) (9, 13)
		return 66;//4 2
	break;
	case 11166://(2,11) (9, 14)
		return 66;//4 2
	break;
	case 11167://(2,11) (9, 15)
		return 66;//4 2
	break;
	case 11168://(2,11) (10, 0)
		return 0;//0 0
	break;
	case 11169://(2,11) (10, 1)
		return 2;//0 2
	break;
	case 11170://(2,11) (10, 2)
		return 2;//0 2
	break;
	case 11171://(2,11) (10, 3)
		return 2;//0 2
	break;
	case 11172://(2,11) (10, 4)
		return 0;//0 0
	break;
	case 11173://(2,11) (10, 5)
		return 2;//0 2
	break;
	case 11174://(2,11) (10, 6)
		return 2;//0 2
	break;
	case 11175://(2,11) (10, 7)
		return 2;//0 2
	break;
	case 11176://(2,11) (10, 8)
		return 2;//0 2
	break;
	case 11177://(2,11) (10, 9)
		return 2;//0 2
	break;
	case 11178://(2,11) (10, 10)
		return 2;//0 2
	break;
	case 11179://(2,11) (10, 11)
		return 2;//0 2
	break;
	case 11180://(2,11) (10, 12)
		return 2;//0 2
	break;
	case 11181://(2,11) (10, 13)
		return 2;//0 2
	break;
	case 11182://(2,11) (10, 14)
		return 2;//0 2
	break;
	case 11183://(2,11) (10, 15)
		return 2;//0 2
	break;
	case 11184://(2,11) (11, 0)
		return 64;//4 0
	break;
	case 11185://(2,11) (11, 1)
		return 66;//4 2
	break;
	case 11186://(2,11) (11, 2)
		return 66;//4 2
	break;
	case 11187://(2,11) (11, 3)
		return 66;//4 2
	break;
	case 11188://(2,11) (11, 4)
		return 64;//4 0
	break;
	case 11189://(2,11) (11, 5)
		return 66;//4 2
	break;
	case 11190://(2,11) (11, 6)
		return 66;//4 2
	break;
	case 11191://(2,11) (11, 7)
		return 66;//4 2
	break;
	case 11192://(2,11) (11, 8)
		return 66;//4 2
	break;
	case 11193://(2,11) (11, 9)
		return 66;//4 2
	break;
	case 11194://(2,11) (11, 10)
		return 66;//4 2
	break;
	case 11195://(2,11) (11, 11)
		return 66;//4 2
	break;
	case 11196://(2,11) (11, 12)
		return 66;//4 2
	break;
	case 11197://(2,11) (11, 13)
		return 66;//4 2
	break;
	case 11198://(2,11) (11, 14)
		return 66;//4 2
	break;
	case 11199://(2,11) (11, 15)
		return 66;//4 2
	break;
	case 11200://(2,11) (12, 0)
		return 64;//4 0
	break;
	case 11201://(2,11) (12, 1)
		return 66;//4 2
	break;
	case 11202://(2,11) (12, 2)
		return 66;//4 2
	break;
	case 11203://(2,11) (12, 3)
		return 66;//4 2
	break;
	case 11204://(2,11) (12, 4)
		return 64;//4 0
	break;
	case 11205://(2,11) (12, 5)
		return 66;//4 2
	break;
	case 11206://(2,11) (12, 6)
		return 66;//4 2
	break;
	case 11207://(2,11) (12, 7)
		return 66;//4 2
	break;
	case 11208://(2,11) (12, 8)
		return 66;//4 2
	break;
	case 11209://(2,11) (12, 9)
		return 66;//4 2
	break;
	case 11210://(2,11) (12, 10)
		return 66;//4 2
	break;
	case 11211://(2,11) (12, 11)
		return 66;//4 2
	break;
	case 11212://(2,11) (12, 12)
		return 66;//4 2
	break;
	case 11213://(2,11) (12, 13)
		return 66;//4 2
	break;
	case 11214://(2,11) (12, 14)
		return 66;//4 2
	break;
	case 11215://(2,11) (12, 15)
		return 66;//4 2
	break;
	case 11216://(2,11) (13, 0)
		return 0;//0 0
	break;
	case 11217://(2,11) (13, 1)
		return 2;//0 2
	break;
	case 11218://(2,11) (13, 2)
		return 2;//0 2
	break;
	case 11219://(2,11) (13, 3)
		return 2;//0 2
	break;
	case 11220://(2,11) (13, 4)
		return 0;//0 0
	break;
	case 11221://(2,11) (13, 5)
		return 2;//0 2
	break;
	case 11222://(2,11) (13, 6)
		return 2;//0 2
	break;
	case 11223://(2,11) (13, 7)
		return 2;//0 2
	break;
	case 11224://(2,11) (13, 8)
		return 2;//0 2
	break;
	case 11225://(2,11) (13, 9)
		return 2;//0 2
	break;
	case 11226://(2,11) (13, 10)
		return 2;//0 2
	break;
	case 11227://(2,11) (13, 11)
		return 2;//0 2
	break;
	case 11228://(2,11) (13, 12)
		return 2;//0 2
	break;
	case 11229://(2,11) (13, 13)
		return 2;//0 2
	break;
	case 11230://(2,11) (13, 14)
		return 2;//0 2
	break;
	case 11231://(2,11) (13, 15)
		return 2;//0 2
	break;
	case 11232://(2,11) (14, 0)
		return 64;//4 0
	break;
	case 11233://(2,11) (14, 1)
		return 66;//4 2
	break;
	case 11234://(2,11) (14, 2)
		return 66;//4 2
	break;
	case 11235://(2,11) (14, 3)
		return 66;//4 2
	break;
	case 11236://(2,11) (14, 4)
		return 64;//4 0
	break;
	case 11237://(2,11) (14, 5)
		return 66;//4 2
	break;
	case 11238://(2,11) (14, 6)
		return 66;//4 2
	break;
	case 11239://(2,11) (14, 7)
		return 66;//4 2
	break;
	case 11240://(2,11) (14, 8)
		return 66;//4 2
	break;
	case 11241://(2,11) (14, 9)
		return 66;//4 2
	break;
	case 11242://(2,11) (14, 10)
		return 66;//4 2
	break;
	case 11243://(2,11) (14, 11)
		return 66;//4 2
	break;
	case 11244://(2,11) (14, 12)
		return 66;//4 2
	break;
	case 11245://(2,11) (14, 13)
		return 66;//4 2
	break;
	case 11246://(2,11) (14, 14)
		return 66;//4 2
	break;
	case 11247://(2,11) (14, 15)
		return 66;//4 2
	break;
	case 11248://(2,11) (15, 0)
		return 64;//4 0
	break;
	case 11249://(2,11) (15, 1)
		return 66;//4 2
	break;
	case 11250://(2,11) (15, 2)
		return 66;//4 2
	break;
	case 11251://(2,11) (15, 3)
		return 66;//4 2
	break;
	case 11252://(2,11) (15, 4)
		return 64;//4 0
	break;
	case 11253://(2,11) (15, 5)
		return 66;//4 2
	break;
	case 11254://(2,11) (15, 6)
		return 66;//4 2
	break;
	case 11255://(2,11) (15, 7)
		return 66;//4 2
	break;
	case 11256://(2,11) (15, 8)
		return 66;//4 2
	break;
	case 11257://(2,11) (15, 9)
		return 66;//4 2
	break;
	case 11258://(2,11) (15, 10)
		return 66;//4 2
	break;
	case 11259://(2,11) (15, 11)
		return 66;//4 2
	break;
	case 11260://(2,11) (15, 12)
		return 66;//4 2
	break;
	case 11261://(2,11) (15, 13)
		return 66;//4 2
	break;
	case 11262://(2,11) (15, 14)
		return 66;//4 2
	break;
	case 11263://(2,11) (15, 15)
		return 66;//4 2
	break;
	case 11264://(2,12) (0, 0)
		return 0;//0 0
	break;
	case 11265://(2,12) (0, 1)
		return 0;//0 0
	break;
	case 11266://(2,12) (0, 2)
		return 2;//0 2
	break;
	case 11267://(2,12) (0, 3)
		return 2;//0 2
	break;
	case 11268://(2,12) (0, 4)
		return 2;//0 2
	break;
	case 11269://(2,12) (0, 5)
		return 2;//0 2
	break;
	case 11270://(2,12) (0, 6)
		return 2;//0 2
	break;
	case 11271://(2,12) (0, 7)
		return 2;//0 2
	break;
	case 11272://(2,12) (0, 8)
		return 2;//0 2
	break;
	case 11273://(2,12) (0, 9)
		return 2;//0 2
	break;
	case 11274://(2,12) (0, 10)
		return 2;//0 2
	break;
	case 11275://(2,12) (0, 11)
		return 2;//0 2
	break;
	case 11276://(2,12) (0, 12)
		return 2;//0 2
	break;
	case 11277://(2,12) (0, 13)
		return 2;//0 2
	break;
	case 11278://(2,12) (0, 14)
		return 2;//0 2
	break;
	case 11279://(2,12) (0, 15)
		return 2;//0 2
	break;
	case 11280://(2,12) (1, 0)
		return 0;//0 0
	break;
	case 11281://(2,12) (1, 1)
		return 0;//0 0
	break;
	case 11282://(2,12) (1, 2)
		return 2;//0 2
	break;
	case 11283://(2,12) (1, 3)
		return 2;//0 2
	break;
	case 11284://(2,12) (1, 4)
		return 2;//0 2
	break;
	case 11285://(2,12) (1, 5)
		return 2;//0 2
	break;
	case 11286://(2,12) (1, 6)
		return 2;//0 2
	break;
	case 11287://(2,12) (1, 7)
		return 2;//0 2
	break;
	case 11288://(2,12) (1, 8)
		return 2;//0 2
	break;
	case 11289://(2,12) (1, 9)
		return 2;//0 2
	break;
	case 11290://(2,12) (1, 10)
		return 2;//0 2
	break;
	case 11291://(2,12) (1, 11)
		return 2;//0 2
	break;
	case 11292://(2,12) (1, 12)
		return 2;//0 2
	break;
	case 11293://(2,12) (1, 13)
		return 2;//0 2
	break;
	case 11294://(2,12) (1, 14)
		return 2;//0 2
	break;
	case 11295://(2,12) (1, 15)
		return 2;//0 2
	break;
	case 11296://(2,12) (2, 0)
		return 64;//4 0
	break;
	case 11297://(2,12) (2, 1)
		return 64;//4 0
	break;
	case 11298://(2,12) (2, 2)
		return 66;//4 2
	break;
	case 11299://(2,12) (2, 3)
		return 66;//4 2
	break;
	case 11300://(2,12) (2, 4)
		return 66;//4 2
	break;
	case 11301://(2,12) (2, 5)
		return 66;//4 2
	break;
	case 11302://(2,12) (2, 6)
		return 66;//4 2
	break;
	case 11303://(2,12) (2, 7)
		return 66;//4 2
	break;
	case 11304://(2,12) (2, 8)
		return 66;//4 2
	break;
	case 11305://(2,12) (2, 9)
		return 66;//4 2
	break;
	case 11306://(2,12) (2, 10)
		return 66;//4 2
	break;
	case 11307://(2,12) (2, 11)
		return 66;//4 2
	break;
	case 11308://(2,12) (2, 12)
		return 66;//4 2
	break;
	case 11309://(2,12) (2, 13)
		return 66;//4 2
	break;
	case 11310://(2,12) (2, 14)
		return 66;//4 2
	break;
	case 11311://(2,12) (2, 15)
		return 66;//4 2
	break;
	case 11312://(2,12) (3, 0)
		return 0;//0 0
	break;
	case 11313://(2,12) (3, 1)
		return 0;//0 0
	break;
	case 11314://(2,12) (3, 2)
		return 2;//0 2
	break;
	case 11315://(2,12) (3, 3)
		return 2;//0 2
	break;
	case 11316://(2,12) (3, 4)
		return 2;//0 2
	break;
	case 11317://(2,12) (3, 5)
		return 2;//0 2
	break;
	case 11318://(2,12) (3, 6)
		return 2;//0 2
	break;
	case 11319://(2,12) (3, 7)
		return 2;//0 2
	break;
	case 11320://(2,12) (3, 8)
		return 2;//0 2
	break;
	case 11321://(2,12) (3, 9)
		return 2;//0 2
	break;
	case 11322://(2,12) (3, 10)
		return 2;//0 2
	break;
	case 11323://(2,12) (3, 11)
		return 2;//0 2
	break;
	case 11324://(2,12) (3, 12)
		return 2;//0 2
	break;
	case 11325://(2,12) (3, 13)
		return 2;//0 2
	break;
	case 11326://(2,12) (3, 14)
		return 2;//0 2
	break;
	case 11327://(2,12) (3, 15)
		return 2;//0 2
	break;
	case 11328://(2,12) (4, 0)
		return 0;//0 0
	break;
	case 11329://(2,12) (4, 1)
		return 0;//0 0
	break;
	case 11330://(2,12) (4, 2)
		return 2;//0 2
	break;
	case 11331://(2,12) (4, 3)
		return 2;//0 2
	break;
	case 11332://(2,12) (4, 4)
		return 2;//0 2
	break;
	case 11333://(2,12) (4, 5)
		return 2;//0 2
	break;
	case 11334://(2,12) (4, 6)
		return 2;//0 2
	break;
	case 11335://(2,12) (4, 7)
		return 2;//0 2
	break;
	case 11336://(2,12) (4, 8)
		return 2;//0 2
	break;
	case 11337://(2,12) (4, 9)
		return 2;//0 2
	break;
	case 11338://(2,12) (4, 10)
		return 2;//0 2
	break;
	case 11339://(2,12) (4, 11)
		return 2;//0 2
	break;
	case 11340://(2,12) (4, 12)
		return 2;//0 2
	break;
	case 11341://(2,12) (4, 13)
		return 2;//0 2
	break;
	case 11342://(2,12) (4, 14)
		return 2;//0 2
	break;
	case 11343://(2,12) (4, 15)
		return 2;//0 2
	break;
	case 11344://(2,12) (5, 0)
		return 64;//4 0
	break;
	case 11345://(2,12) (5, 1)
		return 64;//4 0
	break;
	case 11346://(2,12) (5, 2)
		return 66;//4 2
	break;
	case 11347://(2,12) (5, 3)
		return 66;//4 2
	break;
	case 11348://(2,12) (5, 4)
		return 66;//4 2
	break;
	case 11349://(2,12) (5, 5)
		return 66;//4 2
	break;
	case 11350://(2,12) (5, 6)
		return 66;//4 2
	break;
	case 11351://(2,12) (5, 7)
		return 66;//4 2
	break;
	case 11352://(2,12) (5, 8)
		return 66;//4 2
	break;
	case 11353://(2,12) (5, 9)
		return 66;//4 2
	break;
	case 11354://(2,12) (5, 10)
		return 66;//4 2
	break;
	case 11355://(2,12) (5, 11)
		return 66;//4 2
	break;
	case 11356://(2,12) (5, 12)
		return 66;//4 2
	break;
	case 11357://(2,12) (5, 13)
		return 66;//4 2
	break;
	case 11358://(2,12) (5, 14)
		return 66;//4 2
	break;
	case 11359://(2,12) (5, 15)
		return 66;//4 2
	break;
	case 11360://(2,12) (6, 0)
		return 0;//0 0
	break;
	case 11361://(2,12) (6, 1)
		return 0;//0 0
	break;
	case 11362://(2,12) (6, 2)
		return 2;//0 2
	break;
	case 11363://(2,12) (6, 3)
		return 2;//0 2
	break;
	case 11364://(2,12) (6, 4)
		return 2;//0 2
	break;
	case 11365://(2,12) (6, 5)
		return 2;//0 2
	break;
	case 11366://(2,12) (6, 6)
		return 2;//0 2
	break;
	case 11367://(2,12) (6, 7)
		return 2;//0 2
	break;
	case 11368://(2,12) (6, 8)
		return 2;//0 2
	break;
	case 11369://(2,12) (6, 9)
		return 2;//0 2
	break;
	case 11370://(2,12) (6, 10)
		return 2;//0 2
	break;
	case 11371://(2,12) (6, 11)
		return 2;//0 2
	break;
	case 11372://(2,12) (6, 12)
		return 2;//0 2
	break;
	case 11373://(2,12) (6, 13)
		return 2;//0 2
	break;
	case 11374://(2,12) (6, 14)
		return 2;//0 2
	break;
	case 11375://(2,12) (6, 15)
		return 2;//0 2
	break;
	case 11376://(2,12) (7, 0)
		return 64;//4 0
	break;
	case 11377://(2,12) (7, 1)
		return 64;//4 0
	break;
	case 11378://(2,12) (7, 2)
		return 66;//4 2
	break;
	case 11379://(2,12) (7, 3)
		return 66;//4 2
	break;
	case 11380://(2,12) (7, 4)
		return 66;//4 2
	break;
	case 11381://(2,12) (7, 5)
		return 66;//4 2
	break;
	case 11382://(2,12) (7, 6)
		return 66;//4 2
	break;
	case 11383://(2,12) (7, 7)
		return 66;//4 2
	break;
	case 11384://(2,12) (7, 8)
		return 66;//4 2
	break;
	case 11385://(2,12) (7, 9)
		return 66;//4 2
	break;
	case 11386://(2,12) (7, 10)
		return 66;//4 2
	break;
	case 11387://(2,12) (7, 11)
		return 66;//4 2
	break;
	case 11388://(2,12) (7, 12)
		return 66;//4 2
	break;
	case 11389://(2,12) (7, 13)
		return 66;//4 2
	break;
	case 11390://(2,12) (7, 14)
		return 66;//4 2
	break;
	case 11391://(2,12) (7, 15)
		return 66;//4 2
	break;
	case 11392://(2,12) (8, 0)
		return 0;//0 0
	break;
	case 11393://(2,12) (8, 1)
		return 0;//0 0
	break;
	case 11394://(2,12) (8, 2)
		return 2;//0 2
	break;
	case 11395://(2,12) (8, 3)
		return 2;//0 2
	break;
	case 11396://(2,12) (8, 4)
		return 2;//0 2
	break;
	case 11397://(2,12) (8, 5)
		return 2;//0 2
	break;
	case 11398://(2,12) (8, 6)
		return 2;//0 2
	break;
	case 11399://(2,12) (8, 7)
		return 2;//0 2
	break;
	case 11400://(2,12) (8, 8)
		return 2;//0 2
	break;
	case 11401://(2,12) (8, 9)
		return 2;//0 2
	break;
	case 11402://(2,12) (8, 10)
		return 2;//0 2
	break;
	case 11403://(2,12) (8, 11)
		return 2;//0 2
	break;
	case 11404://(2,12) (8, 12)
		return 2;//0 2
	break;
	case 11405://(2,12) (8, 13)
		return 2;//0 2
	break;
	case 11406://(2,12) (8, 14)
		return 2;//0 2
	break;
	case 11407://(2,12) (8, 15)
		return 2;//0 2
	break;
	case 11408://(2,12) (9, 0)
		return 64;//4 0
	break;
	case 11409://(2,12) (9, 1)
		return 64;//4 0
	break;
	case 11410://(2,12) (9, 2)
		return 66;//4 2
	break;
	case 11411://(2,12) (9, 3)
		return 66;//4 2
	break;
	case 11412://(2,12) (9, 4)
		return 66;//4 2
	break;
	case 11413://(2,12) (9, 5)
		return 66;//4 2
	break;
	case 11414://(2,12) (9, 6)
		return 66;//4 2
	break;
	case 11415://(2,12) (9, 7)
		return 66;//4 2
	break;
	case 11416://(2,12) (9, 8)
		return 66;//4 2
	break;
	case 11417://(2,12) (9, 9)
		return 66;//4 2
	break;
	case 11418://(2,12) (9, 10)
		return 66;//4 2
	break;
	case 11419://(2,12) (9, 11)
		return 66;//4 2
	break;
	case 11420://(2,12) (9, 12)
		return 66;//4 2
	break;
	case 11421://(2,12) (9, 13)
		return 66;//4 2
	break;
	case 11422://(2,12) (9, 14)
		return 66;//4 2
	break;
	case 11423://(2,12) (9, 15)
		return 66;//4 2
	break;
	case 11424://(2,12) (10, 0)
		return 0;//0 0
	break;
	case 11425://(2,12) (10, 1)
		return 0;//0 0
	break;
	case 11426://(2,12) (10, 2)
		return 2;//0 2
	break;
	case 11427://(2,12) (10, 3)
		return 2;//0 2
	break;
	case 11428://(2,12) (10, 4)
		return 2;//0 2
	break;
	case 11429://(2,12) (10, 5)
		return 2;//0 2
	break;
	case 11430://(2,12) (10, 6)
		return 2;//0 2
	break;
	case 11431://(2,12) (10, 7)
		return 2;//0 2
	break;
	case 11432://(2,12) (10, 8)
		return 2;//0 2
	break;
	case 11433://(2,12) (10, 9)
		return 2;//0 2
	break;
	case 11434://(2,12) (10, 10)
		return 2;//0 2
	break;
	case 11435://(2,12) (10, 11)
		return 2;//0 2
	break;
	case 11436://(2,12) (10, 12)
		return 2;//0 2
	break;
	case 11437://(2,12) (10, 13)
		return 2;//0 2
	break;
	case 11438://(2,12) (10, 14)
		return 2;//0 2
	break;
	case 11439://(2,12) (10, 15)
		return 2;//0 2
	break;
	case 11440://(2,12) (11, 0)
		return 64;//4 0
	break;
	case 11441://(2,12) (11, 1)
		return 64;//4 0
	break;
	case 11442://(2,12) (11, 2)
		return 66;//4 2
	break;
	case 11443://(2,12) (11, 3)
		return 66;//4 2
	break;
	case 11444://(2,12) (11, 4)
		return 66;//4 2
	break;
	case 11445://(2,12) (11, 5)
		return 66;//4 2
	break;
	case 11446://(2,12) (11, 6)
		return 66;//4 2
	break;
	case 11447://(2,12) (11, 7)
		return 66;//4 2
	break;
	case 11448://(2,12) (11, 8)
		return 66;//4 2
	break;
	case 11449://(2,12) (11, 9)
		return 66;//4 2
	break;
	case 11450://(2,12) (11, 10)
		return 66;//4 2
	break;
	case 11451://(2,12) (11, 11)
		return 66;//4 2
	break;
	case 11452://(2,12) (11, 12)
		return 66;//4 2
	break;
	case 11453://(2,12) (11, 13)
		return 66;//4 2
	break;
	case 11454://(2,12) (11, 14)
		return 66;//4 2
	break;
	case 11455://(2,12) (11, 15)
		return 66;//4 2
	break;
	case 11456://(2,12) (12, 0)
		return 64;//4 0
	break;
	case 11457://(2,12) (12, 1)
		return 64;//4 0
	break;
	case 11458://(2,12) (12, 2)
		return 66;//4 2
	break;
	case 11459://(2,12) (12, 3)
		return 66;//4 2
	break;
	case 11460://(2,12) (12, 4)
		return 66;//4 2
	break;
	case 11461://(2,12) (12, 5)
		return 66;//4 2
	break;
	case 11462://(2,12) (12, 6)
		return 66;//4 2
	break;
	case 11463://(2,12) (12, 7)
		return 66;//4 2
	break;
	case 11464://(2,12) (12, 8)
		return 66;//4 2
	break;
	case 11465://(2,12) (12, 9)
		return 66;//4 2
	break;
	case 11466://(2,12) (12, 10)
		return 66;//4 2
	break;
	case 11467://(2,12) (12, 11)
		return 66;//4 2
	break;
	case 11468://(2,12) (12, 12)
		return 66;//4 2
	break;
	case 11469://(2,12) (12, 13)
		return 66;//4 2
	break;
	case 11470://(2,12) (12, 14)
		return 66;//4 2
	break;
	case 11471://(2,12) (12, 15)
		return 66;//4 2
	break;
	case 11472://(2,12) (13, 0)
		return 0;//0 0
	break;
	case 11473://(2,12) (13, 1)
		return 0;//0 0
	break;
	case 11474://(2,12) (13, 2)
		return 2;//0 2
	break;
	case 11475://(2,12) (13, 3)
		return 2;//0 2
	break;
	case 11476://(2,12) (13, 4)
		return 2;//0 2
	break;
	case 11477://(2,12) (13, 5)
		return 2;//0 2
	break;
	case 11478://(2,12) (13, 6)
		return 2;//0 2
	break;
	case 11479://(2,12) (13, 7)
		return 2;//0 2
	break;
	case 11480://(2,12) (13, 8)
		return 2;//0 2
	break;
	case 11481://(2,12) (13, 9)
		return 2;//0 2
	break;
	case 11482://(2,12) (13, 10)
		return 2;//0 2
	break;
	case 11483://(2,12) (13, 11)
		return 2;//0 2
	break;
	case 11484://(2,12) (13, 12)
		return 2;//0 2
	break;
	case 11485://(2,12) (13, 13)
		return 2;//0 2
	break;
	case 11486://(2,12) (13, 14)
		return 2;//0 2
	break;
	case 11487://(2,12) (13, 15)
		return 2;//0 2
	break;
	case 11488://(2,12) (14, 0)
		return 64;//4 0
	break;
	case 11489://(2,12) (14, 1)
		return 64;//4 0
	break;
	case 11490://(2,12) (14, 2)
		return 66;//4 2
	break;
	case 11491://(2,12) (14, 3)
		return 66;//4 2
	break;
	case 11492://(2,12) (14, 4)
		return 66;//4 2
	break;
	case 11493://(2,12) (14, 5)
		return 66;//4 2
	break;
	case 11494://(2,12) (14, 6)
		return 66;//4 2
	break;
	case 11495://(2,12) (14, 7)
		return 66;//4 2
	break;
	case 11496://(2,12) (14, 8)
		return 66;//4 2
	break;
	case 11497://(2,12) (14, 9)
		return 66;//4 2
	break;
	case 11498://(2,12) (14, 10)
		return 66;//4 2
	break;
	case 11499://(2,12) (14, 11)
		return 66;//4 2
	break;
	case 11500://(2,12) (14, 12)
		return 66;//4 2
	break;
	case 11501://(2,12) (14, 13)
		return 66;//4 2
	break;
	case 11502://(2,12) (14, 14)
		return 66;//4 2
	break;
	case 11503://(2,12) (14, 15)
		return 66;//4 2
	break;
	case 11504://(2,12) (15, 0)
		return 64;//4 0
	break;
	case 11505://(2,12) (15, 1)
		return 64;//4 0
	break;
	case 11506://(2,12) (15, 2)
		return 66;//4 2
	break;
	case 11507://(2,12) (15, 3)
		return 66;//4 2
	break;
	case 11508://(2,12) (15, 4)
		return 66;//4 2
	break;
	case 11509://(2,12) (15, 5)
		return 66;//4 2
	break;
	case 11510://(2,12) (15, 6)
		return 66;//4 2
	break;
	case 11511://(2,12) (15, 7)
		return 66;//4 2
	break;
	case 11512://(2,12) (15, 8)
		return 66;//4 2
	break;
	case 11513://(2,12) (15, 9)
		return 66;//4 2
	break;
	case 11514://(2,12) (15, 10)
		return 66;//4 2
	break;
	case 11515://(2,12) (15, 11)
		return 66;//4 2
	break;
	case 11516://(2,12) (15, 12)
		return 66;//4 2
	break;
	case 11517://(2,12) (15, 13)
		return 66;//4 2
	break;
	case 11518://(2,12) (15, 14)
		return 66;//4 2
	break;
	case 11519://(2,12) (15, 15)
		return 66;//4 2
	break;
	case 11520://(2,13) (0, 0)
		return 0;//0 0
	break;
	case 11521://(2,13) (0, 1)
		return 2;//0 2
	break;
	case 11522://(2,13) (0, 2)
		return 0;//0 0
	break;
	case 11523://(2,13) (0, 3)
		return 2;//0 2
	break;
	case 11524://(2,13) (0, 4)
		return 2;//0 2
	break;
	case 11525://(2,13) (0, 5)
		return 2;//0 2
	break;
	case 11526://(2,13) (0, 6)
		return 2;//0 2
	break;
	case 11527://(2,13) (0, 7)
		return 2;//0 2
	break;
	case 11528://(2,13) (0, 8)
		return 2;//0 2
	break;
	case 11529://(2,13) (0, 9)
		return 2;//0 2
	break;
	case 11530://(2,13) (0, 10)
		return 2;//0 2
	break;
	case 11531://(2,13) (0, 11)
		return 2;//0 2
	break;
	case 11532://(2,13) (0, 12)
		return 2;//0 2
	break;
	case 11533://(2,13) (0, 13)
		return 2;//0 2
	break;
	case 11534://(2,13) (0, 14)
		return 2;//0 2
	break;
	case 11535://(2,13) (0, 15)
		return 2;//0 2
	break;
	case 11536://(2,13) (1, 0)
		return 0;//0 0
	break;
	case 11537://(2,13) (1, 1)
		return 2;//0 2
	break;
	case 11538://(2,13) (1, 2)
		return 0;//0 0
	break;
	case 11539://(2,13) (1, 3)
		return 2;//0 2
	break;
	case 11540://(2,13) (1, 4)
		return 2;//0 2
	break;
	case 11541://(2,13) (1, 5)
		return 2;//0 2
	break;
	case 11542://(2,13) (1, 6)
		return 2;//0 2
	break;
	case 11543://(2,13) (1, 7)
		return 2;//0 2
	break;
	case 11544://(2,13) (1, 8)
		return 2;//0 2
	break;
	case 11545://(2,13) (1, 9)
		return 2;//0 2
	break;
	case 11546://(2,13) (1, 10)
		return 2;//0 2
	break;
	case 11547://(2,13) (1, 11)
		return 2;//0 2
	break;
	case 11548://(2,13) (1, 12)
		return 2;//0 2
	break;
	case 11549://(2,13) (1, 13)
		return 2;//0 2
	break;
	case 11550://(2,13) (1, 14)
		return 2;//0 2
	break;
	case 11551://(2,13) (1, 15)
		return 2;//0 2
	break;
	case 11552://(2,13) (2, 0)
		return 64;//4 0
	break;
	case 11553://(2,13) (2, 1)
		return 66;//4 2
	break;
	case 11554://(2,13) (2, 2)
		return 64;//4 0
	break;
	case 11555://(2,13) (2, 3)
		return 66;//4 2
	break;
	case 11556://(2,13) (2, 4)
		return 66;//4 2
	break;
	case 11557://(2,13) (2, 5)
		return 66;//4 2
	break;
	case 11558://(2,13) (2, 6)
		return 66;//4 2
	break;
	case 11559://(2,13) (2, 7)
		return 66;//4 2
	break;
	case 11560://(2,13) (2, 8)
		return 66;//4 2
	break;
	case 11561://(2,13) (2, 9)
		return 66;//4 2
	break;
	case 11562://(2,13) (2, 10)
		return 66;//4 2
	break;
	case 11563://(2,13) (2, 11)
		return 66;//4 2
	break;
	case 11564://(2,13) (2, 12)
		return 66;//4 2
	break;
	case 11565://(2,13) (2, 13)
		return 66;//4 2
	break;
	case 11566://(2,13) (2, 14)
		return 66;//4 2
	break;
	case 11567://(2,13) (2, 15)
		return 66;//4 2
	break;
	case 11568://(2,13) (3, 0)
		return 0;//0 0
	break;
	case 11569://(2,13) (3, 1)
		return 2;//0 2
	break;
	case 11570://(2,13) (3, 2)
		return 0;//0 0
	break;
	case 11571://(2,13) (3, 3)
		return 2;//0 2
	break;
	case 11572://(2,13) (3, 4)
		return 2;//0 2
	break;
	case 11573://(2,13) (3, 5)
		return 2;//0 2
	break;
	case 11574://(2,13) (3, 6)
		return 2;//0 2
	break;
	case 11575://(2,13) (3, 7)
		return 2;//0 2
	break;
	case 11576://(2,13) (3, 8)
		return 2;//0 2
	break;
	case 11577://(2,13) (3, 9)
		return 2;//0 2
	break;
	case 11578://(2,13) (3, 10)
		return 2;//0 2
	break;
	case 11579://(2,13) (3, 11)
		return 2;//0 2
	break;
	case 11580://(2,13) (3, 12)
		return 2;//0 2
	break;
	case 11581://(2,13) (3, 13)
		return 2;//0 2
	break;
	case 11582://(2,13) (3, 14)
		return 2;//0 2
	break;
	case 11583://(2,13) (3, 15)
		return 2;//0 2
	break;
	case 11584://(2,13) (4, 0)
		return 0;//0 0
	break;
	case 11585://(2,13) (4, 1)
		return 2;//0 2
	break;
	case 11586://(2,13) (4, 2)
		return 0;//0 0
	break;
	case 11587://(2,13) (4, 3)
		return 2;//0 2
	break;
	case 11588://(2,13) (4, 4)
		return 2;//0 2
	break;
	case 11589://(2,13) (4, 5)
		return 2;//0 2
	break;
	case 11590://(2,13) (4, 6)
		return 2;//0 2
	break;
	case 11591://(2,13) (4, 7)
		return 2;//0 2
	break;
	case 11592://(2,13) (4, 8)
		return 2;//0 2
	break;
	case 11593://(2,13) (4, 9)
		return 2;//0 2
	break;
	case 11594://(2,13) (4, 10)
		return 2;//0 2
	break;
	case 11595://(2,13) (4, 11)
		return 2;//0 2
	break;
	case 11596://(2,13) (4, 12)
		return 2;//0 2
	break;
	case 11597://(2,13) (4, 13)
		return 2;//0 2
	break;
	case 11598://(2,13) (4, 14)
		return 2;//0 2
	break;
	case 11599://(2,13) (4, 15)
		return 2;//0 2
	break;
	case 11600://(2,13) (5, 0)
		return 64;//4 0
	break;
	case 11601://(2,13) (5, 1)
		return 66;//4 2
	break;
	case 11602://(2,13) (5, 2)
		return 64;//4 0
	break;
	case 11603://(2,13) (5, 3)
		return 66;//4 2
	break;
	case 11604://(2,13) (5, 4)
		return 66;//4 2
	break;
	case 11605://(2,13) (5, 5)
		return 66;//4 2
	break;
	case 11606://(2,13) (5, 6)
		return 66;//4 2
	break;
	case 11607://(2,13) (5, 7)
		return 66;//4 2
	break;
	case 11608://(2,13) (5, 8)
		return 66;//4 2
	break;
	case 11609://(2,13) (5, 9)
		return 66;//4 2
	break;
	case 11610://(2,13) (5, 10)
		return 66;//4 2
	break;
	case 11611://(2,13) (5, 11)
		return 66;//4 2
	break;
	case 11612://(2,13) (5, 12)
		return 66;//4 2
	break;
	case 11613://(2,13) (5, 13)
		return 66;//4 2
	break;
	case 11614://(2,13) (5, 14)
		return 66;//4 2
	break;
	case 11615://(2,13) (5, 15)
		return 66;//4 2
	break;
	case 11616://(2,13) (6, 0)
		return 0;//0 0
	break;
	case 11617://(2,13) (6, 1)
		return 2;//0 2
	break;
	case 11618://(2,13) (6, 2)
		return 0;//0 0
	break;
	case 11619://(2,13) (6, 3)
		return 2;//0 2
	break;
	case 11620://(2,13) (6, 4)
		return 2;//0 2
	break;
	case 11621://(2,13) (6, 5)
		return 2;//0 2
	break;
	case 11622://(2,13) (6, 6)
		return 2;//0 2
	break;
	case 11623://(2,13) (6, 7)
		return 2;//0 2
	break;
	case 11624://(2,13) (6, 8)
		return 2;//0 2
	break;
	case 11625://(2,13) (6, 9)
		return 2;//0 2
	break;
	case 11626://(2,13) (6, 10)
		return 2;//0 2
	break;
	case 11627://(2,13) (6, 11)
		return 2;//0 2
	break;
	case 11628://(2,13) (6, 12)
		return 2;//0 2
	break;
	case 11629://(2,13) (6, 13)
		return 2;//0 2
	break;
	case 11630://(2,13) (6, 14)
		return 2;//0 2
	break;
	case 11631://(2,13) (6, 15)
		return 2;//0 2
	break;
	case 11632://(2,13) (7, 0)
		return 64;//4 0
	break;
	case 11633://(2,13) (7, 1)
		return 66;//4 2
	break;
	case 11634://(2,13) (7, 2)
		return 64;//4 0
	break;
	case 11635://(2,13) (7, 3)
		return 66;//4 2
	break;
	case 11636://(2,13) (7, 4)
		return 66;//4 2
	break;
	case 11637://(2,13) (7, 5)
		return 66;//4 2
	break;
	case 11638://(2,13) (7, 6)
		return 66;//4 2
	break;
	case 11639://(2,13) (7, 7)
		return 66;//4 2
	break;
	case 11640://(2,13) (7, 8)
		return 66;//4 2
	break;
	case 11641://(2,13) (7, 9)
		return 66;//4 2
	break;
	case 11642://(2,13) (7, 10)
		return 66;//4 2
	break;
	case 11643://(2,13) (7, 11)
		return 66;//4 2
	break;
	case 11644://(2,13) (7, 12)
		return 66;//4 2
	break;
	case 11645://(2,13) (7, 13)
		return 66;//4 2
	break;
	case 11646://(2,13) (7, 14)
		return 66;//4 2
	break;
	case 11647://(2,13) (7, 15)
		return 66;//4 2
	break;
	case 11648://(2,13) (8, 0)
		return 0;//0 0
	break;
	case 11649://(2,13) (8, 1)
		return 2;//0 2
	break;
	case 11650://(2,13) (8, 2)
		return 0;//0 0
	break;
	case 11651://(2,13) (8, 3)
		return 2;//0 2
	break;
	case 11652://(2,13) (8, 4)
		return 2;//0 2
	break;
	case 11653://(2,13) (8, 5)
		return 2;//0 2
	break;
	case 11654://(2,13) (8, 6)
		return 2;//0 2
	break;
	case 11655://(2,13) (8, 7)
		return 2;//0 2
	break;
	case 11656://(2,13) (8, 8)
		return 2;//0 2
	break;
	case 11657://(2,13) (8, 9)
		return 2;//0 2
	break;
	case 11658://(2,13) (8, 10)
		return 2;//0 2
	break;
	case 11659://(2,13) (8, 11)
		return 2;//0 2
	break;
	case 11660://(2,13) (8, 12)
		return 2;//0 2
	break;
	case 11661://(2,13) (8, 13)
		return 2;//0 2
	break;
	case 11662://(2,13) (8, 14)
		return 2;//0 2
	break;
	case 11663://(2,13) (8, 15)
		return 2;//0 2
	break;
	case 11664://(2,13) (9, 0)
		return 64;//4 0
	break;
	case 11665://(2,13) (9, 1)
		return 66;//4 2
	break;
	case 11666://(2,13) (9, 2)
		return 64;//4 0
	break;
	case 11667://(2,13) (9, 3)
		return 66;//4 2
	break;
	case 11668://(2,13) (9, 4)
		return 66;//4 2
	break;
	case 11669://(2,13) (9, 5)
		return 66;//4 2
	break;
	case 11670://(2,13) (9, 6)
		return 66;//4 2
	break;
	case 11671://(2,13) (9, 7)
		return 66;//4 2
	break;
	case 11672://(2,13) (9, 8)
		return 66;//4 2
	break;
	case 11673://(2,13) (9, 9)
		return 66;//4 2
	break;
	case 11674://(2,13) (9, 10)
		return 66;//4 2
	break;
	case 11675://(2,13) (9, 11)
		return 66;//4 2
	break;
	case 11676://(2,13) (9, 12)
		return 66;//4 2
	break;
	case 11677://(2,13) (9, 13)
		return 66;//4 2
	break;
	case 11678://(2,13) (9, 14)
		return 66;//4 2
	break;
	case 11679://(2,13) (9, 15)
		return 66;//4 2
	break;
	case 11680://(2,13) (10, 0)
		return 0;//0 0
	break;
	case 11681://(2,13) (10, 1)
		return 2;//0 2
	break;
	case 11682://(2,13) (10, 2)
		return 0;//0 0
	break;
	case 11683://(2,13) (10, 3)
		return 2;//0 2
	break;
	case 11684://(2,13) (10, 4)
		return 2;//0 2
	break;
	case 11685://(2,13) (10, 5)
		return 2;//0 2
	break;
	case 11686://(2,13) (10, 6)
		return 2;//0 2
	break;
	case 11687://(2,13) (10, 7)
		return 2;//0 2
	break;
	case 11688://(2,13) (10, 8)
		return 2;//0 2
	break;
	case 11689://(2,13) (10, 9)
		return 2;//0 2
	break;
	case 11690://(2,13) (10, 10)
		return 2;//0 2
	break;
	case 11691://(2,13) (10, 11)
		return 2;//0 2
	break;
	case 11692://(2,13) (10, 12)
		return 2;//0 2
	break;
	case 11693://(2,13) (10, 13)
		return 2;//0 2
	break;
	case 11694://(2,13) (10, 14)
		return 2;//0 2
	break;
	case 11695://(2,13) (10, 15)
		return 2;//0 2
	break;
	case 11696://(2,13) (11, 0)
		return 64;//4 0
	break;
	case 11697://(2,13) (11, 1)
		return 66;//4 2
	break;
	case 11698://(2,13) (11, 2)
		return 64;//4 0
	break;
	case 11699://(2,13) (11, 3)
		return 66;//4 2
	break;
	case 11700://(2,13) (11, 4)
		return 66;//4 2
	break;
	case 11701://(2,13) (11, 5)
		return 66;//4 2
	break;
	case 11702://(2,13) (11, 6)
		return 66;//4 2
	break;
	case 11703://(2,13) (11, 7)
		return 66;//4 2
	break;
	case 11704://(2,13) (11, 8)
		return 66;//4 2
	break;
	case 11705://(2,13) (11, 9)
		return 66;//4 2
	break;
	case 11706://(2,13) (11, 10)
		return 66;//4 2
	break;
	case 11707://(2,13) (11, 11)
		return 66;//4 2
	break;
	case 11708://(2,13) (11, 12)
		return 66;//4 2
	break;
	case 11709://(2,13) (11, 13)
		return 66;//4 2
	break;
	case 11710://(2,13) (11, 14)
		return 66;//4 2
	break;
	case 11711://(2,13) (11, 15)
		return 66;//4 2
	break;
	case 11712://(2,13) (12, 0)
		return 64;//4 0
	break;
	case 11713://(2,13) (12, 1)
		return 66;//4 2
	break;
	case 11714://(2,13) (12, 2)
		return 64;//4 0
	break;
	case 11715://(2,13) (12, 3)
		return 66;//4 2
	break;
	case 11716://(2,13) (12, 4)
		return 66;//4 2
	break;
	case 11717://(2,13) (12, 5)
		return 66;//4 2
	break;
	case 11718://(2,13) (12, 6)
		return 66;//4 2
	break;
	case 11719://(2,13) (12, 7)
		return 66;//4 2
	break;
	case 11720://(2,13) (12, 8)
		return 66;//4 2
	break;
	case 11721://(2,13) (12, 9)
		return 66;//4 2
	break;
	case 11722://(2,13) (12, 10)
		return 66;//4 2
	break;
	case 11723://(2,13) (12, 11)
		return 66;//4 2
	break;
	case 11724://(2,13) (12, 12)
		return 66;//4 2
	break;
	case 11725://(2,13) (12, 13)
		return 66;//4 2
	break;
	case 11726://(2,13) (12, 14)
		return 66;//4 2
	break;
	case 11727://(2,13) (12, 15)
		return 66;//4 2
	break;
	case 11728://(2,13) (13, 0)
		return 0;//0 0
	break;
	case 11729://(2,13) (13, 1)
		return 2;//0 2
	break;
	case 11730://(2,13) (13, 2)
		return 0;//0 0
	break;
	case 11731://(2,13) (13, 3)
		return 2;//0 2
	break;
	case 11732://(2,13) (13, 4)
		return 2;//0 2
	break;
	case 11733://(2,13) (13, 5)
		return 2;//0 2
	break;
	case 11734://(2,13) (13, 6)
		return 2;//0 2
	break;
	case 11735://(2,13) (13, 7)
		return 2;//0 2
	break;
	case 11736://(2,13) (13, 8)
		return 2;//0 2
	break;
	case 11737://(2,13) (13, 9)
		return 2;//0 2
	break;
	case 11738://(2,13) (13, 10)
		return 2;//0 2
	break;
	case 11739://(2,13) (13, 11)
		return 2;//0 2
	break;
	case 11740://(2,13) (13, 12)
		return 2;//0 2
	break;
	case 11741://(2,13) (13, 13)
		return 2;//0 2
	break;
	case 11742://(2,13) (13, 14)
		return 2;//0 2
	break;
	case 11743://(2,13) (13, 15)
		return 2;//0 2
	break;
	case 11744://(2,13) (14, 0)
		return 64;//4 0
	break;
	case 11745://(2,13) (14, 1)
		return 66;//4 2
	break;
	case 11746://(2,13) (14, 2)
		return 64;//4 0
	break;
	case 11747://(2,13) (14, 3)
		return 66;//4 2
	break;
	case 11748://(2,13) (14, 4)
		return 66;//4 2
	break;
	case 11749://(2,13) (14, 5)
		return 66;//4 2
	break;
	case 11750://(2,13) (14, 6)
		return 66;//4 2
	break;
	case 11751://(2,13) (14, 7)
		return 66;//4 2
	break;
	case 11752://(2,13) (14, 8)
		return 66;//4 2
	break;
	case 11753://(2,13) (14, 9)
		return 66;//4 2
	break;
	case 11754://(2,13) (14, 10)
		return 66;//4 2
	break;
	case 11755://(2,13) (14, 11)
		return 66;//4 2
	break;
	case 11756://(2,13) (14, 12)
		return 66;//4 2
	break;
	case 11757://(2,13) (14, 13)
		return 66;//4 2
	break;
	case 11758://(2,13) (14, 14)
		return 66;//4 2
	break;
	case 11759://(2,13) (14, 15)
		return 66;//4 2
	break;
	case 11760://(2,13) (15, 0)
		return 64;//4 0
	break;
	case 11761://(2,13) (15, 1)
		return 66;//4 2
	break;
	case 11762://(2,13) (15, 2)
		return 64;//4 0
	break;
	case 11763://(2,13) (15, 3)
		return 66;//4 2
	break;
	case 11764://(2,13) (15, 4)
		return 66;//4 2
	break;
	case 11765://(2,13) (15, 5)
		return 66;//4 2
	break;
	case 11766://(2,13) (15, 6)
		return 66;//4 2
	break;
	case 11767://(2,13) (15, 7)
		return 66;//4 2
	break;
	case 11768://(2,13) (15, 8)
		return 66;//4 2
	break;
	case 11769://(2,13) (15, 9)
		return 66;//4 2
	break;
	case 11770://(2,13) (15, 10)
		return 66;//4 2
	break;
	case 11771://(2,13) (15, 11)
		return 66;//4 2
	break;
	case 11772://(2,13) (15, 12)
		return 66;//4 2
	break;
	case 11773://(2,13) (15, 13)
		return 66;//4 2
	break;
	case 11774://(2,13) (15, 14)
		return 66;//4 2
	break;
	case 11775://(2,13) (15, 15)
		return 66;//4 2
	break;
	case 11776://(2,14) (0, 0)
		return 0;//0 0
	break;
	case 11777://(2,14) (0, 1)
		return 2;//0 2
	break;
	case 11778://(2,14) (0, 2)
		return 2;//0 2
	break;
	case 11779://(2,14) (0, 3)
		return 0;//0 0
	break;
	case 11780://(2,14) (0, 4)
		return 2;//0 2
	break;
	case 11781://(2,14) (0, 5)
		return 2;//0 2
	break;
	case 11782://(2,14) (0, 6)
		return 2;//0 2
	break;
	case 11783://(2,14) (0, 7)
		return 2;//0 2
	break;
	case 11784://(2,14) (0, 8)
		return 2;//0 2
	break;
	case 11785://(2,14) (0, 9)
		return 2;//0 2
	break;
	case 11786://(2,14) (0, 10)
		return 2;//0 2
	break;
	case 11787://(2,14) (0, 11)
		return 2;//0 2
	break;
	case 11788://(2,14) (0, 12)
		return 2;//0 2
	break;
	case 11789://(2,14) (0, 13)
		return 2;//0 2
	break;
	case 11790://(2,14) (0, 14)
		return 2;//0 2
	break;
	case 11791://(2,14) (0, 15)
		return 2;//0 2
	break;
	case 11792://(2,14) (1, 0)
		return 0;//0 0
	break;
	case 11793://(2,14) (1, 1)
		return 2;//0 2
	break;
	case 11794://(2,14) (1, 2)
		return 2;//0 2
	break;
	case 11795://(2,14) (1, 3)
		return 0;//0 0
	break;
	case 11796://(2,14) (1, 4)
		return 2;//0 2
	break;
	case 11797://(2,14) (1, 5)
		return 2;//0 2
	break;
	case 11798://(2,14) (1, 6)
		return 2;//0 2
	break;
	case 11799://(2,14) (1, 7)
		return 2;//0 2
	break;
	case 11800://(2,14) (1, 8)
		return 2;//0 2
	break;
	case 11801://(2,14) (1, 9)
		return 2;//0 2
	break;
	case 11802://(2,14) (1, 10)
		return 2;//0 2
	break;
	case 11803://(2,14) (1, 11)
		return 2;//0 2
	break;
	case 11804://(2,14) (1, 12)
		return 2;//0 2
	break;
	case 11805://(2,14) (1, 13)
		return 2;//0 2
	break;
	case 11806://(2,14) (1, 14)
		return 2;//0 2
	break;
	case 11807://(2,14) (1, 15)
		return 2;//0 2
	break;
	case 11808://(2,14) (2, 0)
		return 64;//4 0
	break;
	case 11809://(2,14) (2, 1)
		return 66;//4 2
	break;
	case 11810://(2,14) (2, 2)
		return 66;//4 2
	break;
	case 11811://(2,14) (2, 3)
		return 64;//4 0
	break;
	case 11812://(2,14) (2, 4)
		return 66;//4 2
	break;
	case 11813://(2,14) (2, 5)
		return 66;//4 2
	break;
	case 11814://(2,14) (2, 6)
		return 66;//4 2
	break;
	case 11815://(2,14) (2, 7)
		return 66;//4 2
	break;
	case 11816://(2,14) (2, 8)
		return 66;//4 2
	break;
	case 11817://(2,14) (2, 9)
		return 66;//4 2
	break;
	case 11818://(2,14) (2, 10)
		return 66;//4 2
	break;
	case 11819://(2,14) (2, 11)
		return 66;//4 2
	break;
	case 11820://(2,14) (2, 12)
		return 66;//4 2
	break;
	case 11821://(2,14) (2, 13)
		return 66;//4 2
	break;
	case 11822://(2,14) (2, 14)
		return 66;//4 2
	break;
	case 11823://(2,14) (2, 15)
		return 66;//4 2
	break;
	case 11824://(2,14) (3, 0)
		return 0;//0 0
	break;
	case 11825://(2,14) (3, 1)
		return 2;//0 2
	break;
	case 11826://(2,14) (3, 2)
		return 2;//0 2
	break;
	case 11827://(2,14) (3, 3)
		return 0;//0 0
	break;
	case 11828://(2,14) (3, 4)
		return 2;//0 2
	break;
	case 11829://(2,14) (3, 5)
		return 2;//0 2
	break;
	case 11830://(2,14) (3, 6)
		return 2;//0 2
	break;
	case 11831://(2,14) (3, 7)
		return 2;//0 2
	break;
	case 11832://(2,14) (3, 8)
		return 2;//0 2
	break;
	case 11833://(2,14) (3, 9)
		return 2;//0 2
	break;
	case 11834://(2,14) (3, 10)
		return 2;//0 2
	break;
	case 11835://(2,14) (3, 11)
		return 2;//0 2
	break;
	case 11836://(2,14) (3, 12)
		return 2;//0 2
	break;
	case 11837://(2,14) (3, 13)
		return 2;//0 2
	break;
	case 11838://(2,14) (3, 14)
		return 2;//0 2
	break;
	case 11839://(2,14) (3, 15)
		return 2;//0 2
	break;
	case 11840://(2,14) (4, 0)
		return 0;//0 0
	break;
	case 11841://(2,14) (4, 1)
		return 2;//0 2
	break;
	case 11842://(2,14) (4, 2)
		return 2;//0 2
	break;
	case 11843://(2,14) (4, 3)
		return 0;//0 0
	break;
	case 11844://(2,14) (4, 4)
		return 2;//0 2
	break;
	case 11845://(2,14) (4, 5)
		return 2;//0 2
	break;
	case 11846://(2,14) (4, 6)
		return 2;//0 2
	break;
	case 11847://(2,14) (4, 7)
		return 2;//0 2
	break;
	case 11848://(2,14) (4, 8)
		return 2;//0 2
	break;
	case 11849://(2,14) (4, 9)
		return 2;//0 2
	break;
	case 11850://(2,14) (4, 10)
		return 2;//0 2
	break;
	case 11851://(2,14) (4, 11)
		return 2;//0 2
	break;
	case 11852://(2,14) (4, 12)
		return 2;//0 2
	break;
	case 11853://(2,14) (4, 13)
		return 2;//0 2
	break;
	case 11854://(2,14) (4, 14)
		return 2;//0 2
	break;
	case 11855://(2,14) (4, 15)
		return 2;//0 2
	break;
	case 11856://(2,14) (5, 0)
		return 64;//4 0
	break;
	case 11857://(2,14) (5, 1)
		return 66;//4 2
	break;
	case 11858://(2,14) (5, 2)
		return 66;//4 2
	break;
	case 11859://(2,14) (5, 3)
		return 64;//4 0
	break;
	case 11860://(2,14) (5, 4)
		return 66;//4 2
	break;
	case 11861://(2,14) (5, 5)
		return 66;//4 2
	break;
	case 11862://(2,14) (5, 6)
		return 66;//4 2
	break;
	case 11863://(2,14) (5, 7)
		return 66;//4 2
	break;
	case 11864://(2,14) (5, 8)
		return 66;//4 2
	break;
	case 11865://(2,14) (5, 9)
		return 66;//4 2
	break;
	case 11866://(2,14) (5, 10)
		return 66;//4 2
	break;
	case 11867://(2,14) (5, 11)
		return 66;//4 2
	break;
	case 11868://(2,14) (5, 12)
		return 66;//4 2
	break;
	case 11869://(2,14) (5, 13)
		return 66;//4 2
	break;
	case 11870://(2,14) (5, 14)
		return 66;//4 2
	break;
	case 11871://(2,14) (5, 15)
		return 66;//4 2
	break;
	case 11872://(2,14) (6, 0)
		return 0;//0 0
	break;
	case 11873://(2,14) (6, 1)
		return 2;//0 2
	break;
	case 11874://(2,14) (6, 2)
		return 2;//0 2
	break;
	case 11875://(2,14) (6, 3)
		return 0;//0 0
	break;
	case 11876://(2,14) (6, 4)
		return 2;//0 2
	break;
	case 11877://(2,14) (6, 5)
		return 2;//0 2
	break;
	case 11878://(2,14) (6, 6)
		return 2;//0 2
	break;
	case 11879://(2,14) (6, 7)
		return 2;//0 2
	break;
	case 11880://(2,14) (6, 8)
		return 2;//0 2
	break;
	case 11881://(2,14) (6, 9)
		return 2;//0 2
	break;
	case 11882://(2,14) (6, 10)
		return 2;//0 2
	break;
	case 11883://(2,14) (6, 11)
		return 2;//0 2
	break;
	case 11884://(2,14) (6, 12)
		return 2;//0 2
	break;
	case 11885://(2,14) (6, 13)
		return 2;//0 2
	break;
	case 11886://(2,14) (6, 14)
		return 2;//0 2
	break;
	case 11887://(2,14) (6, 15)
		return 2;//0 2
	break;
	case 11888://(2,14) (7, 0)
		return 64;//4 0
	break;
	case 11889://(2,14) (7, 1)
		return 66;//4 2
	break;
	case 11890://(2,14) (7, 2)
		return 66;//4 2
	break;
	case 11891://(2,14) (7, 3)
		return 64;//4 0
	break;
	case 11892://(2,14) (7, 4)
		return 66;//4 2
	break;
	case 11893://(2,14) (7, 5)
		return 66;//4 2
	break;
	case 11894://(2,14) (7, 6)
		return 66;//4 2
	break;
	case 11895://(2,14) (7, 7)
		return 66;//4 2
	break;
	case 11896://(2,14) (7, 8)
		return 66;//4 2
	break;
	case 11897://(2,14) (7, 9)
		return 66;//4 2
	break;
	case 11898://(2,14) (7, 10)
		return 66;//4 2
	break;
	case 11899://(2,14) (7, 11)
		return 66;//4 2
	break;
	case 11900://(2,14) (7, 12)
		return 66;//4 2
	break;
	case 11901://(2,14) (7, 13)
		return 66;//4 2
	break;
	case 11902://(2,14) (7, 14)
		return 66;//4 2
	break;
	case 11903://(2,14) (7, 15)
		return 66;//4 2
	break;
	case 11904://(2,14) (8, 0)
		return 0;//0 0
	break;
	case 11905://(2,14) (8, 1)
		return 2;//0 2
	break;
	case 11906://(2,14) (8, 2)
		return 2;//0 2
	break;
	case 11907://(2,14) (8, 3)
		return 0;//0 0
	break;
	case 11908://(2,14) (8, 4)
		return 2;//0 2
	break;
	case 11909://(2,14) (8, 5)
		return 2;//0 2
	break;
	case 11910://(2,14) (8, 6)
		return 2;//0 2
	break;
	case 11911://(2,14) (8, 7)
		return 2;//0 2
	break;
	case 11912://(2,14) (8, 8)
		return 2;//0 2
	break;
	case 11913://(2,14) (8, 9)
		return 2;//0 2
	break;
	case 11914://(2,14) (8, 10)
		return 2;//0 2
	break;
	case 11915://(2,14) (8, 11)
		return 2;//0 2
	break;
	case 11916://(2,14) (8, 12)
		return 2;//0 2
	break;
	case 11917://(2,14) (8, 13)
		return 2;//0 2
	break;
	case 11918://(2,14) (8, 14)
		return 2;//0 2
	break;
	case 11919://(2,14) (8, 15)
		return 2;//0 2
	break;
	case 11920://(2,14) (9, 0)
		return 64;//4 0
	break;
	case 11921://(2,14) (9, 1)
		return 66;//4 2
	break;
	case 11922://(2,14) (9, 2)
		return 66;//4 2
	break;
	case 11923://(2,14) (9, 3)
		return 64;//4 0
	break;
	case 11924://(2,14) (9, 4)
		return 66;//4 2
	break;
	case 11925://(2,14) (9, 5)
		return 66;//4 2
	break;
	case 11926://(2,14) (9, 6)
		return 66;//4 2
	break;
	case 11927://(2,14) (9, 7)
		return 66;//4 2
	break;
	case 11928://(2,14) (9, 8)
		return 66;//4 2
	break;
	case 11929://(2,14) (9, 9)
		return 66;//4 2
	break;
	case 11930://(2,14) (9, 10)
		return 66;//4 2
	break;
	case 11931://(2,14) (9, 11)
		return 66;//4 2
	break;
	case 11932://(2,14) (9, 12)
		return 66;//4 2
	break;
	case 11933://(2,14) (9, 13)
		return 66;//4 2
	break;
	case 11934://(2,14) (9, 14)
		return 66;//4 2
	break;
	case 11935://(2,14) (9, 15)
		return 66;//4 2
	break;
	case 11936://(2,14) (10, 0)
		return 0;//0 0
	break;
	case 11937://(2,14) (10, 1)
		return 2;//0 2
	break;
	case 11938://(2,14) (10, 2)
		return 2;//0 2
	break;
	case 11939://(2,14) (10, 3)
		return 0;//0 0
	break;
	case 11940://(2,14) (10, 4)
		return 2;//0 2
	break;
	case 11941://(2,14) (10, 5)
		return 2;//0 2
	break;
	case 11942://(2,14) (10, 6)
		return 2;//0 2
	break;
	case 11943://(2,14) (10, 7)
		return 2;//0 2
	break;
	case 11944://(2,14) (10, 8)
		return 2;//0 2
	break;
	case 11945://(2,14) (10, 9)
		return 2;//0 2
	break;
	case 11946://(2,14) (10, 10)
		return 2;//0 2
	break;
	case 11947://(2,14) (10, 11)
		return 2;//0 2
	break;
	case 11948://(2,14) (10, 12)
		return 2;//0 2
	break;
	case 11949://(2,14) (10, 13)
		return 2;//0 2
	break;
	case 11950://(2,14) (10, 14)
		return 2;//0 2
	break;
	case 11951://(2,14) (10, 15)
		return 2;//0 2
	break;
	case 11952://(2,14) (11, 0)
		return 64;//4 0
	break;
	case 11953://(2,14) (11, 1)
		return 66;//4 2
	break;
	case 11954://(2,14) (11, 2)
		return 66;//4 2
	break;
	case 11955://(2,14) (11, 3)
		return 64;//4 0
	break;
	case 11956://(2,14) (11, 4)
		return 66;//4 2
	break;
	case 11957://(2,14) (11, 5)
		return 66;//4 2
	break;
	case 11958://(2,14) (11, 6)
		return 66;//4 2
	break;
	case 11959://(2,14) (11, 7)
		return 66;//4 2
	break;
	case 11960://(2,14) (11, 8)
		return 66;//4 2
	break;
	case 11961://(2,14) (11, 9)
		return 66;//4 2
	break;
	case 11962://(2,14) (11, 10)
		return 66;//4 2
	break;
	case 11963://(2,14) (11, 11)
		return 66;//4 2
	break;
	case 11964://(2,14) (11, 12)
		return 66;//4 2
	break;
	case 11965://(2,14) (11, 13)
		return 66;//4 2
	break;
	case 11966://(2,14) (11, 14)
		return 66;//4 2
	break;
	case 11967://(2,14) (11, 15)
		return 66;//4 2
	break;
	case 11968://(2,14) (12, 0)
		return 64;//4 0
	break;
	case 11969://(2,14) (12, 1)
		return 66;//4 2
	break;
	case 11970://(2,14) (12, 2)
		return 66;//4 2
	break;
	case 11971://(2,14) (12, 3)
		return 64;//4 0
	break;
	case 11972://(2,14) (12, 4)
		return 66;//4 2
	break;
	case 11973://(2,14) (12, 5)
		return 66;//4 2
	break;
	case 11974://(2,14) (12, 6)
		return 66;//4 2
	break;
	case 11975://(2,14) (12, 7)
		return 66;//4 2
	break;
	case 11976://(2,14) (12, 8)
		return 66;//4 2
	break;
	case 11977://(2,14) (12, 9)
		return 66;//4 2
	break;
	case 11978://(2,14) (12, 10)
		return 66;//4 2
	break;
	case 11979://(2,14) (12, 11)
		return 66;//4 2
	break;
	case 11980://(2,14) (12, 12)
		return 66;//4 2
	break;
	case 11981://(2,14) (12, 13)
		return 66;//4 2
	break;
	case 11982://(2,14) (12, 14)
		return 66;//4 2
	break;
	case 11983://(2,14) (12, 15)
		return 66;//4 2
	break;
	case 11984://(2,14) (13, 0)
		return 0;//0 0
	break;
	case 11985://(2,14) (13, 1)
		return 2;//0 2
	break;
	case 11986://(2,14) (13, 2)
		return 2;//0 2
	break;
	case 11987://(2,14) (13, 3)
		return 0;//0 0
	break;
	case 11988://(2,14) (13, 4)
		return 2;//0 2
	break;
	case 11989://(2,14) (13, 5)
		return 2;//0 2
	break;
	case 11990://(2,14) (13, 6)
		return 2;//0 2
	break;
	case 11991://(2,14) (13, 7)
		return 2;//0 2
	break;
	case 11992://(2,14) (13, 8)
		return 2;//0 2
	break;
	case 11993://(2,14) (13, 9)
		return 2;//0 2
	break;
	case 11994://(2,14) (13, 10)
		return 2;//0 2
	break;
	case 11995://(2,14) (13, 11)
		return 2;//0 2
	break;
	case 11996://(2,14) (13, 12)
		return 2;//0 2
	break;
	case 11997://(2,14) (13, 13)
		return 2;//0 2
	break;
	case 11998://(2,14) (13, 14)
		return 2;//0 2
	break;
	case 11999://(2,14) (13, 15)
		return 2;//0 2
	break;
	case 12000://(2,14) (14, 0)
		return 64;//4 0
	break;
	case 12001://(2,14) (14, 1)
		return 66;//4 2
	break;
	case 12002://(2,14) (14, 2)
		return 66;//4 2
	break;
	case 12003://(2,14) (14, 3)
		return 64;//4 0
	break;
	case 12004://(2,14) (14, 4)
		return 66;//4 2
	break;
	case 12005://(2,14) (14, 5)
		return 66;//4 2
	break;
	case 12006://(2,14) (14, 6)
		return 66;//4 2
	break;
	case 12007://(2,14) (14, 7)
		return 66;//4 2
	break;
	case 12008://(2,14) (14, 8)
		return 66;//4 2
	break;
	case 12009://(2,14) (14, 9)
		return 66;//4 2
	break;
	case 12010://(2,14) (14, 10)
		return 66;//4 2
	break;
	case 12011://(2,14) (14, 11)
		return 66;//4 2
	break;
	case 12012://(2,14) (14, 12)
		return 66;//4 2
	break;
	case 12013://(2,14) (14, 13)
		return 66;//4 2
	break;
	case 12014://(2,14) (14, 14)
		return 66;//4 2
	break;
	case 12015://(2,14) (14, 15)
		return 66;//4 2
	break;
	case 12016://(2,14) (15, 0)
		return 64;//4 0
	break;
	case 12017://(2,14) (15, 1)
		return 66;//4 2
	break;
	case 12018://(2,14) (15, 2)
		return 66;//4 2
	break;
	case 12019://(2,14) (15, 3)
		return 64;//4 0
	break;
	case 12020://(2,14) (15, 4)
		return 66;//4 2
	break;
	case 12021://(2,14) (15, 5)
		return 66;//4 2
	break;
	case 12022://(2,14) (15, 6)
		return 66;//4 2
	break;
	case 12023://(2,14) (15, 7)
		return 66;//4 2
	break;
	case 12024://(2,14) (15, 8)
		return 66;//4 2
	break;
	case 12025://(2,14) (15, 9)
		return 66;//4 2
	break;
	case 12026://(2,14) (15, 10)
		return 66;//4 2
	break;
	case 12027://(2,14) (15, 11)
		return 66;//4 2
	break;
	case 12028://(2,14) (15, 12)
		return 66;//4 2
	break;
	case 12029://(2,14) (15, 13)
		return 66;//4 2
	break;
	case 12030://(2,14) (15, 14)
		return 66;//4 2
	break;
	case 12031://(2,14) (15, 15)
		return 66;//4 2
	break;
	case 12032://(2,15) (0, 0)
		return 1;//0 1
	break;
	case 12033://(2,15) (0, 1)
		return 1;//0 1
	break;
	case 12034://(2,15) (0, 2)
		return 1;//0 1
	break;
	case 12035://(2,15) (0, 3)
		return 1;//0 1
	break;
	case 12036://(2,15) (0, 4)
		return 1;//0 1
	break;
	case 12037://(2,15) (0, 5)
		return 1;//0 1
	break;
	case 12038://(2,15) (0, 6)
		return 1;//0 1
	break;
	case 12039://(2,15) (0, 7)
		return 1;//0 1
	break;
	case 12040://(2,15) (0, 8)
		return 1;//0 1
	break;
	case 12041://(2,15) (0, 9)
		return 1;//0 1
	break;
	case 12042://(2,15) (0, 10)
		return 1;//0 1
	break;
	case 12043://(2,15) (0, 11)
		return 1;//0 1
	break;
	case 12044://(2,15) (0, 12)
		return 1;//0 1
	break;
	case 12045://(2,15) (0, 13)
		return 1;//0 1
	break;
	case 12046://(2,15) (0, 14)
		return 1;//0 1
	break;
	case 12047://(2,15) (0, 15)
		return 1;//0 1
	break;
	case 12048://(2,15) (1, 0)
		return 1;//0 1
	break;
	case 12049://(2,15) (1, 1)
		return 1;//0 1
	break;
	case 12050://(2,15) (1, 2)
		return 1;//0 1
	break;
	case 12051://(2,15) (1, 3)
		return 1;//0 1
	break;
	case 12052://(2,15) (1, 4)
		return 1;//0 1
	break;
	case 12053://(2,15) (1, 5)
		return 1;//0 1
	break;
	case 12054://(2,15) (1, 6)
		return 1;//0 1
	break;
	case 12055://(2,15) (1, 7)
		return 1;//0 1
	break;
	case 12056://(2,15) (1, 8)
		return 1;//0 1
	break;
	case 12057://(2,15) (1, 9)
		return 1;//0 1
	break;
	case 12058://(2,15) (1, 10)
		return 1;//0 1
	break;
	case 12059://(2,15) (1, 11)
		return 1;//0 1
	break;
	case 12060://(2,15) (1, 12)
		return 1;//0 1
	break;
	case 12061://(2,15) (1, 13)
		return 1;//0 1
	break;
	case 12062://(2,15) (1, 14)
		return 1;//0 1
	break;
	case 12063://(2,15) (1, 15)
		return 1;//0 1
	break;
	case 12064://(2,15) (2, 0)
		return 65;//4 1
	break;
	case 12065://(2,15) (2, 1)
		return 65;//4 1
	break;
	case 12066://(2,15) (2, 2)
		return 65;//4 1
	break;
	case 12067://(2,15) (2, 3)
		return 65;//4 1
	break;
	case 12068://(2,15) (2, 4)
		return 65;//4 1
	break;
	case 12069://(2,15) (2, 5)
		return 65;//4 1
	break;
	case 12070://(2,15) (2, 6)
		return 65;//4 1
	break;
	case 12071://(2,15) (2, 7)
		return 65;//4 1
	break;
	case 12072://(2,15) (2, 8)
		return 65;//4 1
	break;
	case 12073://(2,15) (2, 9)
		return 65;//4 1
	break;
	case 12074://(2,15) (2, 10)
		return 65;//4 1
	break;
	case 12075://(2,15) (2, 11)
		return 65;//4 1
	break;
	case 12076://(2,15) (2, 12)
		return 65;//4 1
	break;
	case 12077://(2,15) (2, 13)
		return 65;//4 1
	break;
	case 12078://(2,15) (2, 14)
		return 65;//4 1
	break;
	case 12079://(2,15) (2, 15)
		return 65;//4 1
	break;
	case 12080://(2,15) (3, 0)
		return 1;//0 1
	break;
	case 12081://(2,15) (3, 1)
		return 1;//0 1
	break;
	case 12082://(2,15) (3, 2)
		return 1;//0 1
	break;
	case 12083://(2,15) (3, 3)
		return 1;//0 1
	break;
	case 12084://(2,15) (3, 4)
		return 1;//0 1
	break;
	case 12085://(2,15) (3, 5)
		return 1;//0 1
	break;
	case 12086://(2,15) (3, 6)
		return 1;//0 1
	break;
	case 12087://(2,15) (3, 7)
		return 1;//0 1
	break;
	case 12088://(2,15) (3, 8)
		return 1;//0 1
	break;
	case 12089://(2,15) (3, 9)
		return 1;//0 1
	break;
	case 12090://(2,15) (3, 10)
		return 1;//0 1
	break;
	case 12091://(2,15) (3, 11)
		return 1;//0 1
	break;
	case 12092://(2,15) (3, 12)
		return 1;//0 1
	break;
	case 12093://(2,15) (3, 13)
		return 1;//0 1
	break;
	case 12094://(2,15) (3, 14)
		return 1;//0 1
	break;
	case 12095://(2,15) (3, 15)
		return 1;//0 1
	break;
	case 12096://(2,15) (4, 0)
		return 1;//0 1
	break;
	case 12097://(2,15) (4, 1)
		return 1;//0 1
	break;
	case 12098://(2,15) (4, 2)
		return 1;//0 1
	break;
	case 12099://(2,15) (4, 3)
		return 1;//0 1
	break;
	case 12100://(2,15) (4, 4)
		return 1;//0 1
	break;
	case 12101://(2,15) (4, 5)
		return 1;//0 1
	break;
	case 12102://(2,15) (4, 6)
		return 1;//0 1
	break;
	case 12103://(2,15) (4, 7)
		return 1;//0 1
	break;
	case 12104://(2,15) (4, 8)
		return 1;//0 1
	break;
	case 12105://(2,15) (4, 9)
		return 1;//0 1
	break;
	case 12106://(2,15) (4, 10)
		return 1;//0 1
	break;
	case 12107://(2,15) (4, 11)
		return 1;//0 1
	break;
	case 12108://(2,15) (4, 12)
		return 1;//0 1
	break;
	case 12109://(2,15) (4, 13)
		return 1;//0 1
	break;
	case 12110://(2,15) (4, 14)
		return 1;//0 1
	break;
	case 12111://(2,15) (4, 15)
		return 1;//0 1
	break;
	case 12112://(2,15) (5, 0)
		return 65;//4 1
	break;
	case 12113://(2,15) (5, 1)
		return 65;//4 1
	break;
	case 12114://(2,15) (5, 2)
		return 65;//4 1
	break;
	case 12115://(2,15) (5, 3)
		return 65;//4 1
	break;
	case 12116://(2,15) (5, 4)
		return 65;//4 1
	break;
	case 12117://(2,15) (5, 5)
		return 65;//4 1
	break;
	case 12118://(2,15) (5, 6)
		return 65;//4 1
	break;
	case 12119://(2,15) (5, 7)
		return 65;//4 1
	break;
	case 12120://(2,15) (5, 8)
		return 65;//4 1
	break;
	case 12121://(2,15) (5, 9)
		return 65;//4 1
	break;
	case 12122://(2,15) (5, 10)
		return 65;//4 1
	break;
	case 12123://(2,15) (5, 11)
		return 65;//4 1
	break;
	case 12124://(2,15) (5, 12)
		return 65;//4 1
	break;
	case 12125://(2,15) (5, 13)
		return 65;//4 1
	break;
	case 12126://(2,15) (5, 14)
		return 65;//4 1
	break;
	case 12127://(2,15) (5, 15)
		return 65;//4 1
	break;
	case 12128://(2,15) (6, 0)
		return 1;//0 1
	break;
	case 12129://(2,15) (6, 1)
		return 1;//0 1
	break;
	case 12130://(2,15) (6, 2)
		return 1;//0 1
	break;
	case 12131://(2,15) (6, 3)
		return 1;//0 1
	break;
	case 12132://(2,15) (6, 4)
		return 1;//0 1
	break;
	case 12133://(2,15) (6, 5)
		return 1;//0 1
	break;
	case 12134://(2,15) (6, 6)
		return 1;//0 1
	break;
	case 12135://(2,15) (6, 7)
		return 1;//0 1
	break;
	case 12136://(2,15) (6, 8)
		return 1;//0 1
	break;
	case 12137://(2,15) (6, 9)
		return 1;//0 1
	break;
	case 12138://(2,15) (6, 10)
		return 1;//0 1
	break;
	case 12139://(2,15) (6, 11)
		return 1;//0 1
	break;
	case 12140://(2,15) (6, 12)
		return 1;//0 1
	break;
	case 12141://(2,15) (6, 13)
		return 1;//0 1
	break;
	case 12142://(2,15) (6, 14)
		return 1;//0 1
	break;
	case 12143://(2,15) (6, 15)
		return 1;//0 1
	break;
	case 12144://(2,15) (7, 0)
		return 65;//4 1
	break;
	case 12145://(2,15) (7, 1)
		return 65;//4 1
	break;
	case 12146://(2,15) (7, 2)
		return 65;//4 1
	break;
	case 12147://(2,15) (7, 3)
		return 65;//4 1
	break;
	case 12148://(2,15) (7, 4)
		return 65;//4 1
	break;
	case 12149://(2,15) (7, 5)
		return 65;//4 1
	break;
	case 12150://(2,15) (7, 6)
		return 65;//4 1
	break;
	case 12151://(2,15) (7, 7)
		return 65;//4 1
	break;
	case 12152://(2,15) (7, 8)
		return 65;//4 1
	break;
	case 12153://(2,15) (7, 9)
		return 65;//4 1
	break;
	case 12154://(2,15) (7, 10)
		return 65;//4 1
	break;
	case 12155://(2,15) (7, 11)
		return 65;//4 1
	break;
	case 12156://(2,15) (7, 12)
		return 65;//4 1
	break;
	case 12157://(2,15) (7, 13)
		return 65;//4 1
	break;
	case 12158://(2,15) (7, 14)
		return 65;//4 1
	break;
	case 12159://(2,15) (7, 15)
		return 65;//4 1
	break;
	case 12160://(2,15) (8, 0)
		return 1;//0 1
	break;
	case 12161://(2,15) (8, 1)
		return 1;//0 1
	break;
	case 12162://(2,15) (8, 2)
		return 1;//0 1
	break;
	case 12163://(2,15) (8, 3)
		return 1;//0 1
	break;
	case 12164://(2,15) (8, 4)
		return 1;//0 1
	break;
	case 12165://(2,15) (8, 5)
		return 1;//0 1
	break;
	case 12166://(2,15) (8, 6)
		return 1;//0 1
	break;
	case 12167://(2,15) (8, 7)
		return 1;//0 1
	break;
	case 12168://(2,15) (8, 8)
		return 1;//0 1
	break;
	case 12169://(2,15) (8, 9)
		return 1;//0 1
	break;
	case 12170://(2,15) (8, 10)
		return 1;//0 1
	break;
	case 12171://(2,15) (8, 11)
		return 1;//0 1
	break;
	case 12172://(2,15) (8, 12)
		return 1;//0 1
	break;
	case 12173://(2,15) (8, 13)
		return 1;//0 1
	break;
	case 12174://(2,15) (8, 14)
		return 1;//0 1
	break;
	case 12175://(2,15) (8, 15)
		return 1;//0 1
	break;
	case 12176://(2,15) (9, 0)
		return 65;//4 1
	break;
	case 12177://(2,15) (9, 1)
		return 65;//4 1
	break;
	case 12178://(2,15) (9, 2)
		return 65;//4 1
	break;
	case 12179://(2,15) (9, 3)
		return 65;//4 1
	break;
	case 12180://(2,15) (9, 4)
		return 65;//4 1
	break;
	case 12181://(2,15) (9, 5)
		return 65;//4 1
	break;
	case 12182://(2,15) (9, 6)
		return 65;//4 1
	break;
	case 12183://(2,15) (9, 7)
		return 65;//4 1
	break;
	case 12184://(2,15) (9, 8)
		return 65;//4 1
	break;
	case 12185://(2,15) (9, 9)
		return 65;//4 1
	break;
	case 12186://(2,15) (9, 10)
		return 65;//4 1
	break;
	case 12187://(2,15) (9, 11)
		return 65;//4 1
	break;
	case 12188://(2,15) (9, 12)
		return 65;//4 1
	break;
	case 12189://(2,15) (9, 13)
		return 65;//4 1
	break;
	case 12190://(2,15) (9, 14)
		return 65;//4 1
	break;
	case 12191://(2,15) (9, 15)
		return 65;//4 1
	break;
	case 12192://(2,15) (10, 0)
		return 1;//0 1
	break;
	case 12193://(2,15) (10, 1)
		return 1;//0 1
	break;
	case 12194://(2,15) (10, 2)
		return 1;//0 1
	break;
	case 12195://(2,15) (10, 3)
		return 1;//0 1
	break;
	case 12196://(2,15) (10, 4)
		return 1;//0 1
	break;
	case 12197://(2,15) (10, 5)
		return 1;//0 1
	break;
	case 12198://(2,15) (10, 6)
		return 1;//0 1
	break;
	case 12199://(2,15) (10, 7)
		return 1;//0 1
	break;
	case 12200://(2,15) (10, 8)
		return 1;//0 1
	break;
	case 12201://(2,15) (10, 9)
		return 1;//0 1
	break;
	case 12202://(2,15) (10, 10)
		return 1;//0 1
	break;
	case 12203://(2,15) (10, 11)
		return 1;//0 1
	break;
	case 12204://(2,15) (10, 12)
		return 1;//0 1
	break;
	case 12205://(2,15) (10, 13)
		return 1;//0 1
	break;
	case 12206://(2,15) (10, 14)
		return 1;//0 1
	break;
	case 12207://(2,15) (10, 15)
		return 1;//0 1
	break;
	case 12208://(2,15) (11, 0)
		return 65;//4 1
	break;
	case 12209://(2,15) (11, 1)
		return 65;//4 1
	break;
	case 12210://(2,15) (11, 2)
		return 65;//4 1
	break;
	case 12211://(2,15) (11, 3)
		return 65;//4 1
	break;
	case 12212://(2,15) (11, 4)
		return 65;//4 1
	break;
	case 12213://(2,15) (11, 5)
		return 65;//4 1
	break;
	case 12214://(2,15) (11, 6)
		return 65;//4 1
	break;
	case 12215://(2,15) (11, 7)
		return 65;//4 1
	break;
	case 12216://(2,15) (11, 8)
		return 65;//4 1
	break;
	case 12217://(2,15) (11, 9)
		return 65;//4 1
	break;
	case 12218://(2,15) (11, 10)
		return 65;//4 1
	break;
	case 12219://(2,15) (11, 11)
		return 65;//4 1
	break;
	case 12220://(2,15) (11, 12)
		return 65;//4 1
	break;
	case 12221://(2,15) (11, 13)
		return 65;//4 1
	break;
	case 12222://(2,15) (11, 14)
		return 65;//4 1
	break;
	case 12223://(2,15) (11, 15)
		return 65;//4 1
	break;
	case 12224://(2,15) (12, 0)
		return 65;//4 1
	break;
	case 12225://(2,15) (12, 1)
		return 65;//4 1
	break;
	case 12226://(2,15) (12, 2)
		return 65;//4 1
	break;
	case 12227://(2,15) (12, 3)
		return 65;//4 1
	break;
	case 12228://(2,15) (12, 4)
		return 65;//4 1
	break;
	case 12229://(2,15) (12, 5)
		return 65;//4 1
	break;
	case 12230://(2,15) (12, 6)
		return 65;//4 1
	break;
	case 12231://(2,15) (12, 7)
		return 65;//4 1
	break;
	case 12232://(2,15) (12, 8)
		return 65;//4 1
	break;
	case 12233://(2,15) (12, 9)
		return 65;//4 1
	break;
	case 12234://(2,15) (12, 10)
		return 65;//4 1
	break;
	case 12235://(2,15) (12, 11)
		return 65;//4 1
	break;
	case 12236://(2,15) (12, 12)
		return 65;//4 1
	break;
	case 12237://(2,15) (12, 13)
		return 65;//4 1
	break;
	case 12238://(2,15) (12, 14)
		return 65;//4 1
	break;
	case 12239://(2,15) (12, 15)
		return 65;//4 1
	break;
	case 12240://(2,15) (13, 0)
		return 1;//0 1
	break;
	case 12241://(2,15) (13, 1)
		return 1;//0 1
	break;
	case 12242://(2,15) (13, 2)
		return 1;//0 1
	break;
	case 12243://(2,15) (13, 3)
		return 1;//0 1
	break;
	case 12244://(2,15) (13, 4)
		return 1;//0 1
	break;
	case 12245://(2,15) (13, 5)
		return 1;//0 1
	break;
	case 12246://(2,15) (13, 6)
		return 1;//0 1
	break;
	case 12247://(2,15) (13, 7)
		return 1;//0 1
	break;
	case 12248://(2,15) (13, 8)
		return 1;//0 1
	break;
	case 12249://(2,15) (13, 9)
		return 1;//0 1
	break;
	case 12250://(2,15) (13, 10)
		return 1;//0 1
	break;
	case 12251://(2,15) (13, 11)
		return 1;//0 1
	break;
	case 12252://(2,15) (13, 12)
		return 1;//0 1
	break;
	case 12253://(2,15) (13, 13)
		return 1;//0 1
	break;
	case 12254://(2,15) (13, 14)
		return 1;//0 1
	break;
	case 12255://(2,15) (13, 15)
		return 1;//0 1
	break;
	case 12256://(2,15) (14, 0)
		return 65;//4 1
	break;
	case 12257://(2,15) (14, 1)
		return 65;//4 1
	break;
	case 12258://(2,15) (14, 2)
		return 65;//4 1
	break;
	case 12259://(2,15) (14, 3)
		return 65;//4 1
	break;
	case 12260://(2,15) (14, 4)
		return 65;//4 1
	break;
	case 12261://(2,15) (14, 5)
		return 65;//4 1
	break;
	case 12262://(2,15) (14, 6)
		return 65;//4 1
	break;
	case 12263://(2,15) (14, 7)
		return 65;//4 1
	break;
	case 12264://(2,15) (14, 8)
		return 65;//4 1
	break;
	case 12265://(2,15) (14, 9)
		return 65;//4 1
	break;
	case 12266://(2,15) (14, 10)
		return 65;//4 1
	break;
	case 12267://(2,15) (14, 11)
		return 65;//4 1
	break;
	case 12268://(2,15) (14, 12)
		return 65;//4 1
	break;
	case 12269://(2,15) (14, 13)
		return 65;//4 1
	break;
	case 12270://(2,15) (14, 14)
		return 65;//4 1
	break;
	case 12271://(2,15) (14, 15)
		return 65;//4 1
	break;
	case 12272://(2,15) (15, 0)
		return 65;//4 1
	break;
	case 12273://(2,15) (15, 1)
		return 65;//4 1
	break;
	case 12274://(2,15) (15, 2)
		return 65;//4 1
	break;
	case 12275://(2,15) (15, 3)
		return 65;//4 1
	break;
	case 12276://(2,15) (15, 4)
		return 65;//4 1
	break;
	case 12277://(2,15) (15, 5)
		return 65;//4 1
	break;
	case 12278://(2,15) (15, 6)
		return 65;//4 1
	break;
	case 12279://(2,15) (15, 7)
		return 65;//4 1
	break;
	case 12280://(2,15) (15, 8)
		return 65;//4 1
	break;
	case 12281://(2,15) (15, 9)
		return 65;//4 1
	break;
	case 12282://(2,15) (15, 10)
		return 65;//4 1
	break;
	case 12283://(2,15) (15, 11)
		return 65;//4 1
	break;
	case 12284://(2,15) (15, 12)
		return 65;//4 1
	break;
	case 12285://(2,15) (15, 13)
		return 65;//4 1
	break;
	case 12286://(2,15) (15, 14)
		return 65;//4 1
	break;
	case 12287://(2,15) (15, 15)
		return 65;//4 1
	break;
	case 12288://(3,0) (0, 0)
		return 0;//0 0
	break;
	case 12289://(3,0) (0, 1)
		return 0;//0 0
	break;
	case 12290://(3,0) (0, 2)
		return 0;//0 0
	break;
	case 12291://(3,0) (0, 3)
		return 0;//0 0
	break;
	case 12292://(3,0) (0, 4)
		return 0;//0 0
	break;
	case 12293://(3,0) (0, 5)
		return 0;//0 0
	break;
	case 12294://(3,0) (0, 6)
		return 0;//0 0
	break;
	case 12295://(3,0) (0, 7)
		return 0;//0 0
	break;
	case 12296://(3,0) (0, 8)
		return 0;//0 0
	break;
	case 12297://(3,0) (0, 9)
		return 0;//0 0
	break;
	case 12298://(3,0) (0, 10)
		return 0;//0 0
	break;
	case 12299://(3,0) (0, 11)
		return 0;//0 0
	break;
	case 12300://(3,0) (0, 12)
		return 0;//0 0
	break;
	case 12301://(3,0) (0, 13)
		return 0;//0 0
	break;
	case 12302://(3,0) (0, 14)
		return 0;//0 0
	break;
	case 12303://(3,0) (0, 15)
		return 0;//0 0
	break;
	case 12304://(3,0) (1, 0)
		return 0;//0 0
	break;
	case 12305://(3,0) (1, 1)
		return 0;//0 0
	break;
	case 12306://(3,0) (1, 2)
		return 0;//0 0
	break;
	case 12307://(3,0) (1, 3)
		return 0;//0 0
	break;
	case 12308://(3,0) (1, 4)
		return 0;//0 0
	break;
	case 12309://(3,0) (1, 5)
		return 0;//0 0
	break;
	case 12310://(3,0) (1, 6)
		return 0;//0 0
	break;
	case 12311://(3,0) (1, 7)
		return 0;//0 0
	break;
	case 12312://(3,0) (1, 8)
		return 0;//0 0
	break;
	case 12313://(3,0) (1, 9)
		return 0;//0 0
	break;
	case 12314://(3,0) (1, 10)
		return 0;//0 0
	break;
	case 12315://(3,0) (1, 11)
		return 0;//0 0
	break;
	case 12316://(3,0) (1, 12)
		return 0;//0 0
	break;
	case 12317://(3,0) (1, 13)
		return 0;//0 0
	break;
	case 12318://(3,0) (1, 14)
		return 0;//0 0
	break;
	case 12319://(3,0) (1, 15)
		return 0;//0 0
	break;
	case 12320://(3,0) (2, 0)
		return 0;//0 0
	break;
	case 12321://(3,0) (2, 1)
		return 0;//0 0
	break;
	case 12322://(3,0) (2, 2)
		return 0;//0 0
	break;
	case 12323://(3,0) (2, 3)
		return 0;//0 0
	break;
	case 12324://(3,0) (2, 4)
		return 0;//0 0
	break;
	case 12325://(3,0) (2, 5)
		return 0;//0 0
	break;
	case 12326://(3,0) (2, 6)
		return 0;//0 0
	break;
	case 12327://(3,0) (2, 7)
		return 0;//0 0
	break;
	case 12328://(3,0) (2, 8)
		return 0;//0 0
	break;
	case 12329://(3,0) (2, 9)
		return 0;//0 0
	break;
	case 12330://(3,0) (2, 10)
		return 0;//0 0
	break;
	case 12331://(3,0) (2, 11)
		return 0;//0 0
	break;
	case 12332://(3,0) (2, 12)
		return 0;//0 0
	break;
	case 12333://(3,0) (2, 13)
		return 0;//0 0
	break;
	case 12334://(3,0) (2, 14)
		return 0;//0 0
	break;
	case 12335://(3,0) (2, 15)
		return 0;//0 0
	break;
	case 12336://(3,0) (3, 0)
		return 64;//4 0
	break;
	case 12337://(3,0) (3, 1)
		return 64;//4 0
	break;
	case 12338://(3,0) (3, 2)
		return 64;//4 0
	break;
	case 12339://(3,0) (3, 3)
		return 64;//4 0
	break;
	case 12340://(3,0) (3, 4)
		return 64;//4 0
	break;
	case 12341://(3,0) (3, 5)
		return 64;//4 0
	break;
	case 12342://(3,0) (3, 6)
		return 64;//4 0
	break;
	case 12343://(3,0) (3, 7)
		return 64;//4 0
	break;
	case 12344://(3,0) (3, 8)
		return 64;//4 0
	break;
	case 12345://(3,0) (3, 9)
		return 64;//4 0
	break;
	case 12346://(3,0) (3, 10)
		return 64;//4 0
	break;
	case 12347://(3,0) (3, 11)
		return 64;//4 0
	break;
	case 12348://(3,0) (3, 12)
		return 64;//4 0
	break;
	case 12349://(3,0) (3, 13)
		return 64;//4 0
	break;
	case 12350://(3,0) (3, 14)
		return 64;//4 0
	break;
	case 12351://(3,0) (3, 15)
		return 64;//4 0
	break;
	case 12352://(3,0) (4, 0)
		return 0;//0 0
	break;
	case 12353://(3,0) (4, 1)
		return 0;//0 0
	break;
	case 12354://(3,0) (4, 2)
		return 0;//0 0
	break;
	case 12355://(3,0) (4, 3)
		return 0;//0 0
	break;
	case 12356://(3,0) (4, 4)
		return 0;//0 0
	break;
	case 12357://(3,0) (4, 5)
		return 0;//0 0
	break;
	case 12358://(3,0) (4, 6)
		return 0;//0 0
	break;
	case 12359://(3,0) (4, 7)
		return 0;//0 0
	break;
	case 12360://(3,0) (4, 8)
		return 0;//0 0
	break;
	case 12361://(3,0) (4, 9)
		return 0;//0 0
	break;
	case 12362://(3,0) (4, 10)
		return 0;//0 0
	break;
	case 12363://(3,0) (4, 11)
		return 0;//0 0
	break;
	case 12364://(3,0) (4, 12)
		return 0;//0 0
	break;
	case 12365://(3,0) (4, 13)
		return 0;//0 0
	break;
	case 12366://(3,0) (4, 14)
		return 0;//0 0
	break;
	case 12367://(3,0) (4, 15)
		return 0;//0 0
	break;
	case 12368://(3,0) (5, 0)
		return 0;//0 0
	break;
	case 12369://(3,0) (5, 1)
		return 0;//0 0
	break;
	case 12370://(3,0) (5, 2)
		return 0;//0 0
	break;
	case 12371://(3,0) (5, 3)
		return 0;//0 0
	break;
	case 12372://(3,0) (5, 4)
		return 0;//0 0
	break;
	case 12373://(3,0) (5, 5)
		return 0;//0 0
	break;
	case 12374://(3,0) (5, 6)
		return 0;//0 0
	break;
	case 12375://(3,0) (5, 7)
		return 0;//0 0
	break;
	case 12376://(3,0) (5, 8)
		return 0;//0 0
	break;
	case 12377://(3,0) (5, 9)
		return 0;//0 0
	break;
	case 12378://(3,0) (5, 10)
		return 0;//0 0
	break;
	case 12379://(3,0) (5, 11)
		return 0;//0 0
	break;
	case 12380://(3,0) (5, 12)
		return 0;//0 0
	break;
	case 12381://(3,0) (5, 13)
		return 0;//0 0
	break;
	case 12382://(3,0) (5, 14)
		return 0;//0 0
	break;
	case 12383://(3,0) (5, 15)
		return 0;//0 0
	break;
	case 12384://(3,0) (6, 0)
		return 64;//4 0
	break;
	case 12385://(3,0) (6, 1)
		return 64;//4 0
	break;
	case 12386://(3,0) (6, 2)
		return 64;//4 0
	break;
	case 12387://(3,0) (6, 3)
		return 64;//4 0
	break;
	case 12388://(3,0) (6, 4)
		return 64;//4 0
	break;
	case 12389://(3,0) (6, 5)
		return 64;//4 0
	break;
	case 12390://(3,0) (6, 6)
		return 64;//4 0
	break;
	case 12391://(3,0) (6, 7)
		return 64;//4 0
	break;
	case 12392://(3,0) (6, 8)
		return 64;//4 0
	break;
	case 12393://(3,0) (6, 9)
		return 64;//4 0
	break;
	case 12394://(3,0) (6, 10)
		return 64;//4 0
	break;
	case 12395://(3,0) (6, 11)
		return 64;//4 0
	break;
	case 12396://(3,0) (6, 12)
		return 64;//4 0
	break;
	case 12397://(3,0) (6, 13)
		return 64;//4 0
	break;
	case 12398://(3,0) (6, 14)
		return 64;//4 0
	break;
	case 12399://(3,0) (6, 15)
		return 64;//4 0
	break;
	case 12400://(3,0) (7, 0)
		return 64;//4 0
	break;
	case 12401://(3,0) (7, 1)
		return 64;//4 0
	break;
	case 12402://(3,0) (7, 2)
		return 64;//4 0
	break;
	case 12403://(3,0) (7, 3)
		return 64;//4 0
	break;
	case 12404://(3,0) (7, 4)
		return 64;//4 0
	break;
	case 12405://(3,0) (7, 5)
		return 64;//4 0
	break;
	case 12406://(3,0) (7, 6)
		return 64;//4 0
	break;
	case 12407://(3,0) (7, 7)
		return 64;//4 0
	break;
	case 12408://(3,0) (7, 8)
		return 64;//4 0
	break;
	case 12409://(3,0) (7, 9)
		return 64;//4 0
	break;
	case 12410://(3,0) (7, 10)
		return 64;//4 0
	break;
	case 12411://(3,0) (7, 11)
		return 64;//4 0
	break;
	case 12412://(3,0) (7, 12)
		return 64;//4 0
	break;
	case 12413://(3,0) (7, 13)
		return 64;//4 0
	break;
	case 12414://(3,0) (7, 14)
		return 64;//4 0
	break;
	case 12415://(3,0) (7, 15)
		return 64;//4 0
	break;
	case 12416://(3,0) (8, 0)
		return 0;//0 0
	break;
	case 12417://(3,0) (8, 1)
		return 0;//0 0
	break;
	case 12418://(3,0) (8, 2)
		return 0;//0 0
	break;
	case 12419://(3,0) (8, 3)
		return 0;//0 0
	break;
	case 12420://(3,0) (8, 4)
		return 0;//0 0
	break;
	case 12421://(3,0) (8, 5)
		return 0;//0 0
	break;
	case 12422://(3,0) (8, 6)
		return 0;//0 0
	break;
	case 12423://(3,0) (8, 7)
		return 0;//0 0
	break;
	case 12424://(3,0) (8, 8)
		return 0;//0 0
	break;
	case 12425://(3,0) (8, 9)
		return 0;//0 0
	break;
	case 12426://(3,0) (8, 10)
		return 0;//0 0
	break;
	case 12427://(3,0) (8, 11)
		return 0;//0 0
	break;
	case 12428://(3,0) (8, 12)
		return 0;//0 0
	break;
	case 12429://(3,0) (8, 13)
		return 0;//0 0
	break;
	case 12430://(3,0) (8, 14)
		return 0;//0 0
	break;
	case 12431://(3,0) (8, 15)
		return 0;//0 0
	break;
	case 12432://(3,0) (9, 0)
		return 0;//0 0
	break;
	case 12433://(3,0) (9, 1)
		return 0;//0 0
	break;
	case 12434://(3,0) (9, 2)
		return 0;//0 0
	break;
	case 12435://(3,0) (9, 3)
		return 0;//0 0
	break;
	case 12436://(3,0) (9, 4)
		return 0;//0 0
	break;
	case 12437://(3,0) (9, 5)
		return 0;//0 0
	break;
	case 12438://(3,0) (9, 6)
		return 0;//0 0
	break;
	case 12439://(3,0) (9, 7)
		return 0;//0 0
	break;
	case 12440://(3,0) (9, 8)
		return 0;//0 0
	break;
	case 12441://(3,0) (9, 9)
		return 0;//0 0
	break;
	case 12442://(3,0) (9, 10)
		return 0;//0 0
	break;
	case 12443://(3,0) (9, 11)
		return 0;//0 0
	break;
	case 12444://(3,0) (9, 12)
		return 0;//0 0
	break;
	case 12445://(3,0) (9, 13)
		return 0;//0 0
	break;
	case 12446://(3,0) (9, 14)
		return 0;//0 0
	break;
	case 12447://(3,0) (9, 15)
		return 0;//0 0
	break;
	case 12448://(3,0) (10, 0)
		return 64;//4 0
	break;
	case 12449://(3,0) (10, 1)
		return 64;//4 0
	break;
	case 12450://(3,0) (10, 2)
		return 64;//4 0
	break;
	case 12451://(3,0) (10, 3)
		return 64;//4 0
	break;
	case 12452://(3,0) (10, 4)
		return 64;//4 0
	break;
	case 12453://(3,0) (10, 5)
		return 64;//4 0
	break;
	case 12454://(3,0) (10, 6)
		return 64;//4 0
	break;
	case 12455://(3,0) (10, 7)
		return 64;//4 0
	break;
	case 12456://(3,0) (10, 8)
		return 64;//4 0
	break;
	case 12457://(3,0) (10, 9)
		return 64;//4 0
	break;
	case 12458://(3,0) (10, 10)
		return 64;//4 0
	break;
	case 12459://(3,0) (10, 11)
		return 64;//4 0
	break;
	case 12460://(3,0) (10, 12)
		return 64;//4 0
	break;
	case 12461://(3,0) (10, 13)
		return 64;//4 0
	break;
	case 12462://(3,0) (10, 14)
		return 64;//4 0
	break;
	case 12463://(3,0) (10, 15)
		return 64;//4 0
	break;
	case 12464://(3,0) (11, 0)
		return 64;//4 0
	break;
	case 12465://(3,0) (11, 1)
		return 64;//4 0
	break;
	case 12466://(3,0) (11, 2)
		return 64;//4 0
	break;
	case 12467://(3,0) (11, 3)
		return 64;//4 0
	break;
	case 12468://(3,0) (11, 4)
		return 64;//4 0
	break;
	case 12469://(3,0) (11, 5)
		return 64;//4 0
	break;
	case 12470://(3,0) (11, 6)
		return 64;//4 0
	break;
	case 12471://(3,0) (11, 7)
		return 64;//4 0
	break;
	case 12472://(3,0) (11, 8)
		return 64;//4 0
	break;
	case 12473://(3,0) (11, 9)
		return 64;//4 0
	break;
	case 12474://(3,0) (11, 10)
		return 64;//4 0
	break;
	case 12475://(3,0) (11, 11)
		return 64;//4 0
	break;
	case 12476://(3,0) (11, 12)
		return 64;//4 0
	break;
	case 12477://(3,0) (11, 13)
		return 64;//4 0
	break;
	case 12478://(3,0) (11, 14)
		return 64;//4 0
	break;
	case 12479://(3,0) (11, 15)
		return 64;//4 0
	break;
	case 12480://(3,0) (12, 0)
		return 64;//4 0
	break;
	case 12481://(3,0) (12, 1)
		return 64;//4 0
	break;
	case 12482://(3,0) (12, 2)
		return 64;//4 0
	break;
	case 12483://(3,0) (12, 3)
		return 64;//4 0
	break;
	case 12484://(3,0) (12, 4)
		return 64;//4 0
	break;
	case 12485://(3,0) (12, 5)
		return 64;//4 0
	break;
	case 12486://(3,0) (12, 6)
		return 64;//4 0
	break;
	case 12487://(3,0) (12, 7)
		return 64;//4 0
	break;
	case 12488://(3,0) (12, 8)
		return 64;//4 0
	break;
	case 12489://(3,0) (12, 9)
		return 64;//4 0
	break;
	case 12490://(3,0) (12, 10)
		return 64;//4 0
	break;
	case 12491://(3,0) (12, 11)
		return 64;//4 0
	break;
	case 12492://(3,0) (12, 12)
		return 64;//4 0
	break;
	case 12493://(3,0) (12, 13)
		return 64;//4 0
	break;
	case 12494://(3,0) (12, 14)
		return 64;//4 0
	break;
	case 12495://(3,0) (12, 15)
		return 64;//4 0
	break;
	case 12496://(3,0) (13, 0)
		return 64;//4 0
	break;
	case 12497://(3,0) (13, 1)
		return 64;//4 0
	break;
	case 12498://(3,0) (13, 2)
		return 64;//4 0
	break;
	case 12499://(3,0) (13, 3)
		return 64;//4 0
	break;
	case 12500://(3,0) (13, 4)
		return 64;//4 0
	break;
	case 12501://(3,0) (13, 5)
		return 64;//4 0
	break;
	case 12502://(3,0) (13, 6)
		return 64;//4 0
	break;
	case 12503://(3,0) (13, 7)
		return 64;//4 0
	break;
	case 12504://(3,0) (13, 8)
		return 64;//4 0
	break;
	case 12505://(3,0) (13, 9)
		return 64;//4 0
	break;
	case 12506://(3,0) (13, 10)
		return 64;//4 0
	break;
	case 12507://(3,0) (13, 11)
		return 64;//4 0
	break;
	case 12508://(3,0) (13, 12)
		return 64;//4 0
	break;
	case 12509://(3,0) (13, 13)
		return 64;//4 0
	break;
	case 12510://(3,0) (13, 14)
		return 64;//4 0
	break;
	case 12511://(3,0) (13, 15)
		return 64;//4 0
	break;
	case 12512://(3,0) (14, 0)
		return 0;//0 0
	break;
	case 12513://(3,0) (14, 1)
		return 0;//0 0
	break;
	case 12514://(3,0) (14, 2)
		return 0;//0 0
	break;
	case 12515://(3,0) (14, 3)
		return 0;//0 0
	break;
	case 12516://(3,0) (14, 4)
		return 0;//0 0
	break;
	case 12517://(3,0) (14, 5)
		return 0;//0 0
	break;
	case 12518://(3,0) (14, 6)
		return 0;//0 0
	break;
	case 12519://(3,0) (14, 7)
		return 0;//0 0
	break;
	case 12520://(3,0) (14, 8)
		return 0;//0 0
	break;
	case 12521://(3,0) (14, 9)
		return 0;//0 0
	break;
	case 12522://(3,0) (14, 10)
		return 0;//0 0
	break;
	case 12523://(3,0) (14, 11)
		return 0;//0 0
	break;
	case 12524://(3,0) (14, 12)
		return 0;//0 0
	break;
	case 12525://(3,0) (14, 13)
		return 0;//0 0
	break;
	case 12526://(3,0) (14, 14)
		return 0;//0 0
	break;
	case 12527://(3,0) (14, 15)
		return 0;//0 0
	break;
	case 12528://(3,0) (15, 0)
		return 64;//4 0
	break;
	case 12529://(3,0) (15, 1)
		return 64;//4 0
	break;
	case 12530://(3,0) (15, 2)
		return 64;//4 0
	break;
	case 12531://(3,0) (15, 3)
		return 64;//4 0
	break;
	case 12532://(3,0) (15, 4)
		return 64;//4 0
	break;
	case 12533://(3,0) (15, 5)
		return 64;//4 0
	break;
	case 12534://(3,0) (15, 6)
		return 64;//4 0
	break;
	case 12535://(3,0) (15, 7)
		return 64;//4 0
	break;
	case 12536://(3,0) (15, 8)
		return 64;//4 0
	break;
	case 12537://(3,0) (15, 9)
		return 64;//4 0
	break;
	case 12538://(3,0) (15, 10)
		return 64;//4 0
	break;
	case 12539://(3,0) (15, 11)
		return 64;//4 0
	break;
	case 12540://(3,0) (15, 12)
		return 64;//4 0
	break;
	case 12541://(3,0) (15, 13)
		return 64;//4 0
	break;
	case 12542://(3,0) (15, 14)
		return 64;//4 0
	break;
	case 12543://(3,0) (15, 15)
		return 64;//4 0
	break;
	case 12544://(3,1) (0, 0)
		return 0;//0 0
	break;
	case 12545://(3,1) (0, 1)
		return 4;//0 4
	break;
	case 12546://(3,1) (0, 2)
		return 0;//0 0
	break;
	case 12547://(3,1) (0, 3)
		return 0;//0 0
	break;
	case 12548://(3,1) (0, 4)
		return 0;//0 0
	break;
	case 12549://(3,1) (0, 5)
		return 0;//0 0
	break;
	case 12550://(3,1) (0, 6)
		return 4;//0 4
	break;
	case 12551://(3,1) (0, 7)
		return 0;//0 0
	break;
	case 12552://(3,1) (0, 8)
		return 4;//0 4
	break;
	case 12553://(3,1) (0, 9)
		return 4;//0 4
	break;
	case 12554://(3,1) (0, 10)
		return 0;//0 0
	break;
	case 12555://(3,1) (0, 11)
		return 4;//0 4
	break;
	case 12556://(3,1) (0, 12)
		return 0;//0 0
	break;
	case 12557://(3,1) (0, 13)
		return 4;//0 4
	break;
	case 12558://(3,1) (0, 14)
		return 4;//0 4
	break;
	case 12559://(3,1) (0, 15)
		return 4;//0 4
	break;
	case 12560://(3,1) (1, 0)
		return 0;//0 0
	break;
	case 12561://(3,1) (1, 1)
		return 4;//0 4
	break;
	case 12562://(3,1) (1, 2)
		return 0;//0 0
	break;
	case 12563://(3,1) (1, 3)
		return 0;//0 0
	break;
	case 12564://(3,1) (1, 4)
		return 0;//0 0
	break;
	case 12565://(3,1) (1, 5)
		return 0;//0 0
	break;
	case 12566://(3,1) (1, 6)
		return 4;//0 4
	break;
	case 12567://(3,1) (1, 7)
		return 0;//0 0
	break;
	case 12568://(3,1) (1, 8)
		return 4;//0 4
	break;
	case 12569://(3,1) (1, 9)
		return 4;//0 4
	break;
	case 12570://(3,1) (1, 10)
		return 0;//0 0
	break;
	case 12571://(3,1) (1, 11)
		return 4;//0 4
	break;
	case 12572://(3,1) (1, 12)
		return 0;//0 0
	break;
	case 12573://(3,1) (1, 13)
		return 4;//0 4
	break;
	case 12574://(3,1) (1, 14)
		return 4;//0 4
	break;
	case 12575://(3,1) (1, 15)
		return 4;//0 4
	break;
	case 12576://(3,1) (2, 0)
		return 0;//0 0
	break;
	case 12577://(3,1) (2, 1)
		return 4;//0 4
	break;
	case 12578://(3,1) (2, 2)
		return 0;//0 0
	break;
	case 12579://(3,1) (2, 3)
		return 0;//0 0
	break;
	case 12580://(3,1) (2, 4)
		return 0;//0 0
	break;
	case 12581://(3,1) (2, 5)
		return 0;//0 0
	break;
	case 12582://(3,1) (2, 6)
		return 4;//0 4
	break;
	case 12583://(3,1) (2, 7)
		return 0;//0 0
	break;
	case 12584://(3,1) (2, 8)
		return 4;//0 4
	break;
	case 12585://(3,1) (2, 9)
		return 4;//0 4
	break;
	case 12586://(3,1) (2, 10)
		return 0;//0 0
	break;
	case 12587://(3,1) (2, 11)
		return 4;//0 4
	break;
	case 12588://(3,1) (2, 12)
		return 0;//0 0
	break;
	case 12589://(3,1) (2, 13)
		return 4;//0 4
	break;
	case 12590://(3,1) (2, 14)
		return 4;//0 4
	break;
	case 12591://(3,1) (2, 15)
		return 4;//0 4
	break;
	case 12592://(3,1) (3, 0)
		return 64;//4 0
	break;
	case 12593://(3,1) (3, 1)
		return 68;//4 4
	break;
	case 12594://(3,1) (3, 2)
		return 64;//4 0
	break;
	case 12595://(3,1) (3, 3)
		return 64;//4 0
	break;
	case 12596://(3,1) (3, 4)
		return 64;//4 0
	break;
	case 12597://(3,1) (3, 5)
		return 64;//4 0
	break;
	case 12598://(3,1) (3, 6)
		return 68;//4 4
	break;
	case 12599://(3,1) (3, 7)
		return 64;//4 0
	break;
	case 12600://(3,1) (3, 8)
		return 68;//4 4
	break;
	case 12601://(3,1) (3, 9)
		return 68;//4 4
	break;
	case 12602://(3,1) (3, 10)
		return 64;//4 0
	break;
	case 12603://(3,1) (3, 11)
		return 68;//4 4
	break;
	case 12604://(3,1) (3, 12)
		return 64;//4 0
	break;
	case 12605://(3,1) (3, 13)
		return 68;//4 4
	break;
	case 12606://(3,1) (3, 14)
		return 68;//4 4
	break;
	case 12607://(3,1) (3, 15)
		return 68;//4 4
	break;
	case 12608://(3,1) (4, 0)
		return 0;//0 0
	break;
	case 12609://(3,1) (4, 1)
		return 4;//0 4
	break;
	case 12610://(3,1) (4, 2)
		return 0;//0 0
	break;
	case 12611://(3,1) (4, 3)
		return 0;//0 0
	break;
	case 12612://(3,1) (4, 4)
		return 0;//0 0
	break;
	case 12613://(3,1) (4, 5)
		return 0;//0 0
	break;
	case 12614://(3,1) (4, 6)
		return 4;//0 4
	break;
	case 12615://(3,1) (4, 7)
		return 0;//0 0
	break;
	case 12616://(3,1) (4, 8)
		return 4;//0 4
	break;
	case 12617://(3,1) (4, 9)
		return 4;//0 4
	break;
	case 12618://(3,1) (4, 10)
		return 0;//0 0
	break;
	case 12619://(3,1) (4, 11)
		return 4;//0 4
	break;
	case 12620://(3,1) (4, 12)
		return 0;//0 0
	break;
	case 12621://(3,1) (4, 13)
		return 4;//0 4
	break;
	case 12622://(3,1) (4, 14)
		return 4;//0 4
	break;
	case 12623://(3,1) (4, 15)
		return 4;//0 4
	break;
	case 12624://(3,1) (5, 0)
		return 0;//0 0
	break;
	case 12625://(3,1) (5, 1)
		return 4;//0 4
	break;
	case 12626://(3,1) (5, 2)
		return 0;//0 0
	break;
	case 12627://(3,1) (5, 3)
		return 0;//0 0
	break;
	case 12628://(3,1) (5, 4)
		return 0;//0 0
	break;
	case 12629://(3,1) (5, 5)
		return 0;//0 0
	break;
	case 12630://(3,1) (5, 6)
		return 4;//0 4
	break;
	case 12631://(3,1) (5, 7)
		return 0;//0 0
	break;
	case 12632://(3,1) (5, 8)
		return 4;//0 4
	break;
	case 12633://(3,1) (5, 9)
		return 4;//0 4
	break;
	case 12634://(3,1) (5, 10)
		return 0;//0 0
	break;
	case 12635://(3,1) (5, 11)
		return 4;//0 4
	break;
	case 12636://(3,1) (5, 12)
		return 0;//0 0
	break;
	case 12637://(3,1) (5, 13)
		return 4;//0 4
	break;
	case 12638://(3,1) (5, 14)
		return 4;//0 4
	break;
	case 12639://(3,1) (5, 15)
		return 4;//0 4
	break;
	case 12640://(3,1) (6, 0)
		return 64;//4 0
	break;
	case 12641://(3,1) (6, 1)
		return 68;//4 4
	break;
	case 12642://(3,1) (6, 2)
		return 64;//4 0
	break;
	case 12643://(3,1) (6, 3)
		return 64;//4 0
	break;
	case 12644://(3,1) (6, 4)
		return 64;//4 0
	break;
	case 12645://(3,1) (6, 5)
		return 64;//4 0
	break;
	case 12646://(3,1) (6, 6)
		return 68;//4 4
	break;
	case 12647://(3,1) (6, 7)
		return 64;//4 0
	break;
	case 12648://(3,1) (6, 8)
		return 68;//4 4
	break;
	case 12649://(3,1) (6, 9)
		return 68;//4 4
	break;
	case 12650://(3,1) (6, 10)
		return 64;//4 0
	break;
	case 12651://(3,1) (6, 11)
		return 68;//4 4
	break;
	case 12652://(3,1) (6, 12)
		return 64;//4 0
	break;
	case 12653://(3,1) (6, 13)
		return 68;//4 4
	break;
	case 12654://(3,1) (6, 14)
		return 68;//4 4
	break;
	case 12655://(3,1) (6, 15)
		return 68;//4 4
	break;
	case 12656://(3,1) (7, 0)
		return 64;//4 0
	break;
	case 12657://(3,1) (7, 1)
		return 68;//4 4
	break;
	case 12658://(3,1) (7, 2)
		return 64;//4 0
	break;
	case 12659://(3,1) (7, 3)
		return 64;//4 0
	break;
	case 12660://(3,1) (7, 4)
		return 64;//4 0
	break;
	case 12661://(3,1) (7, 5)
		return 64;//4 0
	break;
	case 12662://(3,1) (7, 6)
		return 68;//4 4
	break;
	case 12663://(3,1) (7, 7)
		return 64;//4 0
	break;
	case 12664://(3,1) (7, 8)
		return 68;//4 4
	break;
	case 12665://(3,1) (7, 9)
		return 68;//4 4
	break;
	case 12666://(3,1) (7, 10)
		return 64;//4 0
	break;
	case 12667://(3,1) (7, 11)
		return 68;//4 4
	break;
	case 12668://(3,1) (7, 12)
		return 64;//4 0
	break;
	case 12669://(3,1) (7, 13)
		return 68;//4 4
	break;
	case 12670://(3,1) (7, 14)
		return 68;//4 4
	break;
	case 12671://(3,1) (7, 15)
		return 68;//4 4
	break;
	case 12672://(3,1) (8, 0)
		return 0;//0 0
	break;
	case 12673://(3,1) (8, 1)
		return 4;//0 4
	break;
	case 12674://(3,1) (8, 2)
		return 0;//0 0
	break;
	case 12675://(3,1) (8, 3)
		return 0;//0 0
	break;
	case 12676://(3,1) (8, 4)
		return 0;//0 0
	break;
	case 12677://(3,1) (8, 5)
		return 0;//0 0
	break;
	case 12678://(3,1) (8, 6)
		return 4;//0 4
	break;
	case 12679://(3,1) (8, 7)
		return 0;//0 0
	break;
	case 12680://(3,1) (8, 8)
		return 4;//0 4
	break;
	case 12681://(3,1) (8, 9)
		return 4;//0 4
	break;
	case 12682://(3,1) (8, 10)
		return 0;//0 0
	break;
	case 12683://(3,1) (8, 11)
		return 4;//0 4
	break;
	case 12684://(3,1) (8, 12)
		return 0;//0 0
	break;
	case 12685://(3,1) (8, 13)
		return 4;//0 4
	break;
	case 12686://(3,1) (8, 14)
		return 4;//0 4
	break;
	case 12687://(3,1) (8, 15)
		return 4;//0 4
	break;
	case 12688://(3,1) (9, 0)
		return 0;//0 0
	break;
	case 12689://(3,1) (9, 1)
		return 4;//0 4
	break;
	case 12690://(3,1) (9, 2)
		return 0;//0 0
	break;
	case 12691://(3,1) (9, 3)
		return 0;//0 0
	break;
	case 12692://(3,1) (9, 4)
		return 0;//0 0
	break;
	case 12693://(3,1) (9, 5)
		return 0;//0 0
	break;
	case 12694://(3,1) (9, 6)
		return 4;//0 4
	break;
	case 12695://(3,1) (9, 7)
		return 0;//0 0
	break;
	case 12696://(3,1) (9, 8)
		return 4;//0 4
	break;
	case 12697://(3,1) (9, 9)
		return 4;//0 4
	break;
	case 12698://(3,1) (9, 10)
		return 0;//0 0
	break;
	case 12699://(3,1) (9, 11)
		return 4;//0 4
	break;
	case 12700://(3,1) (9, 12)
		return 0;//0 0
	break;
	case 12701://(3,1) (9, 13)
		return 4;//0 4
	break;
	case 12702://(3,1) (9, 14)
		return 4;//0 4
	break;
	case 12703://(3,1) (9, 15)
		return 4;//0 4
	break;
	case 12704://(3,1) (10, 0)
		return 64;//4 0
	break;
	case 12705://(3,1) (10, 1)
		return 68;//4 4
	break;
	case 12706://(3,1) (10, 2)
		return 64;//4 0
	break;
	case 12707://(3,1) (10, 3)
		return 64;//4 0
	break;
	case 12708://(3,1) (10, 4)
		return 64;//4 0
	break;
	case 12709://(3,1) (10, 5)
		return 64;//4 0
	break;
	case 12710://(3,1) (10, 6)
		return 68;//4 4
	break;
	case 12711://(3,1) (10, 7)
		return 64;//4 0
	break;
	case 12712://(3,1) (10, 8)
		return 68;//4 4
	break;
	case 12713://(3,1) (10, 9)
		return 68;//4 4
	break;
	case 12714://(3,1) (10, 10)
		return 64;//4 0
	break;
	case 12715://(3,1) (10, 11)
		return 68;//4 4
	break;
	case 12716://(3,1) (10, 12)
		return 64;//4 0
	break;
	case 12717://(3,1) (10, 13)
		return 68;//4 4
	break;
	case 12718://(3,1) (10, 14)
		return 68;//4 4
	break;
	case 12719://(3,1) (10, 15)
		return 68;//4 4
	break;
	case 12720://(3,1) (11, 0)
		return 64;//4 0
	break;
	case 12721://(3,1) (11, 1)
		return 68;//4 4
	break;
	case 12722://(3,1) (11, 2)
		return 64;//4 0
	break;
	case 12723://(3,1) (11, 3)
		return 64;//4 0
	break;
	case 12724://(3,1) (11, 4)
		return 64;//4 0
	break;
	case 12725://(3,1) (11, 5)
		return 64;//4 0
	break;
	case 12726://(3,1) (11, 6)
		return 68;//4 4
	break;
	case 12727://(3,1) (11, 7)
		return 64;//4 0
	break;
	case 12728://(3,1) (11, 8)
		return 68;//4 4
	break;
	case 12729://(3,1) (11, 9)
		return 68;//4 4
	break;
	case 12730://(3,1) (11, 10)
		return 64;//4 0
	break;
	case 12731://(3,1) (11, 11)
		return 68;//4 4
	break;
	case 12732://(3,1) (11, 12)
		return 64;//4 0
	break;
	case 12733://(3,1) (11, 13)
		return 68;//4 4
	break;
	case 12734://(3,1) (11, 14)
		return 68;//4 4
	break;
	case 12735://(3,1) (11, 15)
		return 68;//4 4
	break;
	case 12736://(3,1) (12, 0)
		return 64;//4 0
	break;
	case 12737://(3,1) (12, 1)
		return 68;//4 4
	break;
	case 12738://(3,1) (12, 2)
		return 64;//4 0
	break;
	case 12739://(3,1) (12, 3)
		return 64;//4 0
	break;
	case 12740://(3,1) (12, 4)
		return 64;//4 0
	break;
	case 12741://(3,1) (12, 5)
		return 64;//4 0
	break;
	case 12742://(3,1) (12, 6)
		return 68;//4 4
	break;
	case 12743://(3,1) (12, 7)
		return 64;//4 0
	break;
	case 12744://(3,1) (12, 8)
		return 68;//4 4
	break;
	case 12745://(3,1) (12, 9)
		return 68;//4 4
	break;
	case 12746://(3,1) (12, 10)
		return 64;//4 0
	break;
	case 12747://(3,1) (12, 11)
		return 68;//4 4
	break;
	case 12748://(3,1) (12, 12)
		return 64;//4 0
	break;
	case 12749://(3,1) (12, 13)
		return 68;//4 4
	break;
	case 12750://(3,1) (12, 14)
		return 68;//4 4
	break;
	case 12751://(3,1) (12, 15)
		return 68;//4 4
	break;
	case 12752://(3,1) (13, 0)
		return 64;//4 0
	break;
	case 12753://(3,1) (13, 1)
		return 68;//4 4
	break;
	case 12754://(3,1) (13, 2)
		return 64;//4 0
	break;
	case 12755://(3,1) (13, 3)
		return 64;//4 0
	break;
	case 12756://(3,1) (13, 4)
		return 64;//4 0
	break;
	case 12757://(3,1) (13, 5)
		return 64;//4 0
	break;
	case 12758://(3,1) (13, 6)
		return 68;//4 4
	break;
	case 12759://(3,1) (13, 7)
		return 64;//4 0
	break;
	case 12760://(3,1) (13, 8)
		return 68;//4 4
	break;
	case 12761://(3,1) (13, 9)
		return 68;//4 4
	break;
	case 12762://(3,1) (13, 10)
		return 64;//4 0
	break;
	case 12763://(3,1) (13, 11)
		return 68;//4 4
	break;
	case 12764://(3,1) (13, 12)
		return 64;//4 0
	break;
	case 12765://(3,1) (13, 13)
		return 68;//4 4
	break;
	case 12766://(3,1) (13, 14)
		return 68;//4 4
	break;
	case 12767://(3,1) (13, 15)
		return 68;//4 4
	break;
	case 12768://(3,1) (14, 0)
		return 0;//0 0
	break;
	case 12769://(3,1) (14, 1)
		return 4;//0 4
	break;
	case 12770://(3,1) (14, 2)
		return 0;//0 0
	break;
	case 12771://(3,1) (14, 3)
		return 0;//0 0
	break;
	case 12772://(3,1) (14, 4)
		return 0;//0 0
	break;
	case 12773://(3,1) (14, 5)
		return 0;//0 0
	break;
	case 12774://(3,1) (14, 6)
		return 4;//0 4
	break;
	case 12775://(3,1) (14, 7)
		return 0;//0 0
	break;
	case 12776://(3,1) (14, 8)
		return 4;//0 4
	break;
	case 12777://(3,1) (14, 9)
		return 4;//0 4
	break;
	case 12778://(3,1) (14, 10)
		return 0;//0 0
	break;
	case 12779://(3,1) (14, 11)
		return 4;//0 4
	break;
	case 12780://(3,1) (14, 12)
		return 0;//0 0
	break;
	case 12781://(3,1) (14, 13)
		return 4;//0 4
	break;
	case 12782://(3,1) (14, 14)
		return 4;//0 4
	break;
	case 12783://(3,1) (14, 15)
		return 4;//0 4
	break;
	case 12784://(3,1) (15, 0)
		return 64;//4 0
	break;
	case 12785://(3,1) (15, 1)
		return 68;//4 4
	break;
	case 12786://(3,1) (15, 2)
		return 64;//4 0
	break;
	case 12787://(3,1) (15, 3)
		return 64;//4 0
	break;
	case 12788://(3,1) (15, 4)
		return 64;//4 0
	break;
	case 12789://(3,1) (15, 5)
		return 64;//4 0
	break;
	case 12790://(3,1) (15, 6)
		return 68;//4 4
	break;
	case 12791://(3,1) (15, 7)
		return 64;//4 0
	break;
	case 12792://(3,1) (15, 8)
		return 68;//4 4
	break;
	case 12793://(3,1) (15, 9)
		return 68;//4 4
	break;
	case 12794://(3,1) (15, 10)
		return 64;//4 0
	break;
	case 12795://(3,1) (15, 11)
		return 68;//4 4
	break;
	case 12796://(3,1) (15, 12)
		return 64;//4 0
	break;
	case 12797://(3,1) (15, 13)
		return 68;//4 4
	break;
	case 12798://(3,1) (15, 14)
		return 68;//4 4
	break;
	case 12799://(3,1) (15, 15)
		return 68;//4 4
	break;
	case 12800://(3,2) (0, 0)
		return 0;//0 0
	break;
	case 12801://(3,2) (0, 1)
		return 0;//0 0
	break;
	case 12802://(3,2) (0, 2)
		return 4;//0 4
	break;
	case 12803://(3,2) (0, 3)
		return 0;//0 0
	break;
	case 12804://(3,2) (0, 4)
		return 0;//0 0
	break;
	case 12805://(3,2) (0, 5)
		return 4;//0 4
	break;
	case 12806://(3,2) (0, 6)
		return 0;//0 0
	break;
	case 12807://(3,2) (0, 7)
		return 4;//0 4
	break;
	case 12808://(3,2) (0, 8)
		return 0;//0 0
	break;
	case 12809://(3,2) (0, 9)
		return 4;//0 4
	break;
	case 12810://(3,2) (0, 10)
		return 0;//0 0
	break;
	case 12811://(3,2) (0, 11)
		return 4;//0 4
	break;
	case 12812://(3,2) (0, 12)
		return 4;//0 4
	break;
	case 12813://(3,2) (0, 13)
		return 0;//0 0
	break;
	case 12814://(3,2) (0, 14)
		return 4;//0 4
	break;
	case 12815://(3,2) (0, 15)
		return 4;//0 4
	break;
	case 12816://(3,2) (1, 0)
		return 0;//0 0
	break;
	case 12817://(3,2) (1, 1)
		return 0;//0 0
	break;
	case 12818://(3,2) (1, 2)
		return 4;//0 4
	break;
	case 12819://(3,2) (1, 3)
		return 0;//0 0
	break;
	case 12820://(3,2) (1, 4)
		return 0;//0 0
	break;
	case 12821://(3,2) (1, 5)
		return 4;//0 4
	break;
	case 12822://(3,2) (1, 6)
		return 0;//0 0
	break;
	case 12823://(3,2) (1, 7)
		return 4;//0 4
	break;
	case 12824://(3,2) (1, 8)
		return 0;//0 0
	break;
	case 12825://(3,2) (1, 9)
		return 4;//0 4
	break;
	case 12826://(3,2) (1, 10)
		return 0;//0 0
	break;
	case 12827://(3,2) (1, 11)
		return 4;//0 4
	break;
	case 12828://(3,2) (1, 12)
		return 4;//0 4
	break;
	case 12829://(3,2) (1, 13)
		return 0;//0 0
	break;
	case 12830://(3,2) (1, 14)
		return 4;//0 4
	break;
	case 12831://(3,2) (1, 15)
		return 4;//0 4
	break;
	case 12832://(3,2) (2, 0)
		return 0;//0 0
	break;
	case 12833://(3,2) (2, 1)
		return 0;//0 0
	break;
	case 12834://(3,2) (2, 2)
		return 4;//0 4
	break;
	case 12835://(3,2) (2, 3)
		return 0;//0 0
	break;
	case 12836://(3,2) (2, 4)
		return 0;//0 0
	break;
	case 12837://(3,2) (2, 5)
		return 4;//0 4
	break;
	case 12838://(3,2) (2, 6)
		return 0;//0 0
	break;
	case 12839://(3,2) (2, 7)
		return 4;//0 4
	break;
	case 12840://(3,2) (2, 8)
		return 0;//0 0
	break;
	case 12841://(3,2) (2, 9)
		return 4;//0 4
	break;
	case 12842://(3,2) (2, 10)
		return 0;//0 0
	break;
	case 12843://(3,2) (2, 11)
		return 4;//0 4
	break;
	case 12844://(3,2) (2, 12)
		return 4;//0 4
	break;
	case 12845://(3,2) (2, 13)
		return 0;//0 0
	break;
	case 12846://(3,2) (2, 14)
		return 4;//0 4
	break;
	case 12847://(3,2) (2, 15)
		return 4;//0 4
	break;
	case 12848://(3,2) (3, 0)
		return 64;//4 0
	break;
	case 12849://(3,2) (3, 1)
		return 64;//4 0
	break;
	case 12850://(3,2) (3, 2)
		return 68;//4 4
	break;
	case 12851://(3,2) (3, 3)
		return 64;//4 0
	break;
	case 12852://(3,2) (3, 4)
		return 64;//4 0
	break;
	case 12853://(3,2) (3, 5)
		return 68;//4 4
	break;
	case 12854://(3,2) (3, 6)
		return 64;//4 0
	break;
	case 12855://(3,2) (3, 7)
		return 68;//4 4
	break;
	case 12856://(3,2) (3, 8)
		return 64;//4 0
	break;
	case 12857://(3,2) (3, 9)
		return 68;//4 4
	break;
	case 12858://(3,2) (3, 10)
		return 64;//4 0
	break;
	case 12859://(3,2) (3, 11)
		return 68;//4 4
	break;
	case 12860://(3,2) (3, 12)
		return 68;//4 4
	break;
	case 12861://(3,2) (3, 13)
		return 64;//4 0
	break;
	case 12862://(3,2) (3, 14)
		return 68;//4 4
	break;
	case 12863://(3,2) (3, 15)
		return 68;//4 4
	break;
	case 12864://(3,2) (4, 0)
		return 0;//0 0
	break;
	case 12865://(3,2) (4, 1)
		return 0;//0 0
	break;
	case 12866://(3,2) (4, 2)
		return 4;//0 4
	break;
	case 12867://(3,2) (4, 3)
		return 0;//0 0
	break;
	case 12868://(3,2) (4, 4)
		return 0;//0 0
	break;
	case 12869://(3,2) (4, 5)
		return 4;//0 4
	break;
	case 12870://(3,2) (4, 6)
		return 0;//0 0
	break;
	case 12871://(3,2) (4, 7)
		return 4;//0 4
	break;
	case 12872://(3,2) (4, 8)
		return 0;//0 0
	break;
	case 12873://(3,2) (4, 9)
		return 4;//0 4
	break;
	case 12874://(3,2) (4, 10)
		return 0;//0 0
	break;
	case 12875://(3,2) (4, 11)
		return 4;//0 4
	break;
	case 12876://(3,2) (4, 12)
		return 4;//0 4
	break;
	case 12877://(3,2) (4, 13)
		return 0;//0 0
	break;
	case 12878://(3,2) (4, 14)
		return 4;//0 4
	break;
	case 12879://(3,2) (4, 15)
		return 4;//0 4
	break;
	case 12880://(3,2) (5, 0)
		return 0;//0 0
	break;
	case 12881://(3,2) (5, 1)
		return 0;//0 0
	break;
	case 12882://(3,2) (5, 2)
		return 4;//0 4
	break;
	case 12883://(3,2) (5, 3)
		return 0;//0 0
	break;
	case 12884://(3,2) (5, 4)
		return 0;//0 0
	break;
	case 12885://(3,2) (5, 5)
		return 4;//0 4
	break;
	case 12886://(3,2) (5, 6)
		return 0;//0 0
	break;
	case 12887://(3,2) (5, 7)
		return 4;//0 4
	break;
	case 12888://(3,2) (5, 8)
		return 0;//0 0
	break;
	case 12889://(3,2) (5, 9)
		return 4;//0 4
	break;
	case 12890://(3,2) (5, 10)
		return 0;//0 0
	break;
	case 12891://(3,2) (5, 11)
		return 4;//0 4
	break;
	case 12892://(3,2) (5, 12)
		return 4;//0 4
	break;
	case 12893://(3,2) (5, 13)
		return 0;//0 0
	break;
	case 12894://(3,2) (5, 14)
		return 4;//0 4
	break;
	case 12895://(3,2) (5, 15)
		return 4;//0 4
	break;
	case 12896://(3,2) (6, 0)
		return 64;//4 0
	break;
	case 12897://(3,2) (6, 1)
		return 64;//4 0
	break;
	case 12898://(3,2) (6, 2)
		return 68;//4 4
	break;
	case 12899://(3,2) (6, 3)
		return 64;//4 0
	break;
	case 12900://(3,2) (6, 4)
		return 64;//4 0
	break;
	case 12901://(3,2) (6, 5)
		return 68;//4 4
	break;
	case 12902://(3,2) (6, 6)
		return 64;//4 0
	break;
	case 12903://(3,2) (6, 7)
		return 68;//4 4
	break;
	case 12904://(3,2) (6, 8)
		return 64;//4 0
	break;
	case 12905://(3,2) (6, 9)
		return 68;//4 4
	break;
	case 12906://(3,2) (6, 10)
		return 64;//4 0
	break;
	case 12907://(3,2) (6, 11)
		return 68;//4 4
	break;
	case 12908://(3,2) (6, 12)
		return 68;//4 4
	break;
	case 12909://(3,2) (6, 13)
		return 64;//4 0
	break;
	case 12910://(3,2) (6, 14)
		return 68;//4 4
	break;
	case 12911://(3,2) (6, 15)
		return 68;//4 4
	break;
	case 12912://(3,2) (7, 0)
		return 64;//4 0
	break;
	case 12913://(3,2) (7, 1)
		return 64;//4 0
	break;
	case 12914://(3,2) (7, 2)
		return 68;//4 4
	break;
	case 12915://(3,2) (7, 3)
		return 64;//4 0
	break;
	case 12916://(3,2) (7, 4)
		return 64;//4 0
	break;
	case 12917://(3,2) (7, 5)
		return 68;//4 4
	break;
	case 12918://(3,2) (7, 6)
		return 64;//4 0
	break;
	case 12919://(3,2) (7, 7)
		return 68;//4 4
	break;
	case 12920://(3,2) (7, 8)
		return 64;//4 0
	break;
	case 12921://(3,2) (7, 9)
		return 68;//4 4
	break;
	case 12922://(3,2) (7, 10)
		return 64;//4 0
	break;
	case 12923://(3,2) (7, 11)
		return 68;//4 4
	break;
	case 12924://(3,2) (7, 12)
		return 68;//4 4
	break;
	case 12925://(3,2) (7, 13)
		return 64;//4 0
	break;
	case 12926://(3,2) (7, 14)
		return 68;//4 4
	break;
	case 12927://(3,2) (7, 15)
		return 68;//4 4
	break;
	case 12928://(3,2) (8, 0)
		return 0;//0 0
	break;
	case 12929://(3,2) (8, 1)
		return 0;//0 0
	break;
	case 12930://(3,2) (8, 2)
		return 4;//0 4
	break;
	case 12931://(3,2) (8, 3)
		return 0;//0 0
	break;
	case 12932://(3,2) (8, 4)
		return 0;//0 0
	break;
	case 12933://(3,2) (8, 5)
		return 4;//0 4
	break;
	case 12934://(3,2) (8, 6)
		return 0;//0 0
	break;
	case 12935://(3,2) (8, 7)
		return 4;//0 4
	break;
	case 12936://(3,2) (8, 8)
		return 0;//0 0
	break;
	case 12937://(3,2) (8, 9)
		return 4;//0 4
	break;
	case 12938://(3,2) (8, 10)
		return 0;//0 0
	break;
	case 12939://(3,2) (8, 11)
		return 4;//0 4
	break;
	case 12940://(3,2) (8, 12)
		return 4;//0 4
	break;
	case 12941://(3,2) (8, 13)
		return 0;//0 0
	break;
	case 12942://(3,2) (8, 14)
		return 4;//0 4
	break;
	case 12943://(3,2) (8, 15)
		return 4;//0 4
	break;
	case 12944://(3,2) (9, 0)
		return 0;//0 0
	break;
	case 12945://(3,2) (9, 1)
		return 0;//0 0
	break;
	case 12946://(3,2) (9, 2)
		return 4;//0 4
	break;
	case 12947://(3,2) (9, 3)
		return 0;//0 0
	break;
	case 12948://(3,2) (9, 4)
		return 0;//0 0
	break;
	case 12949://(3,2) (9, 5)
		return 4;//0 4
	break;
	case 12950://(3,2) (9, 6)
		return 0;//0 0
	break;
	case 12951://(3,2) (9, 7)
		return 4;//0 4
	break;
	case 12952://(3,2) (9, 8)
		return 0;//0 0
	break;
	case 12953://(3,2) (9, 9)
		return 4;//0 4
	break;
	case 12954://(3,2) (9, 10)
		return 0;//0 0
	break;
	case 12955://(3,2) (9, 11)
		return 4;//0 4
	break;
	case 12956://(3,2) (9, 12)
		return 4;//0 4
	break;
	case 12957://(3,2) (9, 13)
		return 0;//0 0
	break;
	case 12958://(3,2) (9, 14)
		return 4;//0 4
	break;
	case 12959://(3,2) (9, 15)
		return 4;//0 4
	break;
	case 12960://(3,2) (10, 0)
		return 64;//4 0
	break;
	case 12961://(3,2) (10, 1)
		return 64;//4 0
	break;
	case 12962://(3,2) (10, 2)
		return 68;//4 4
	break;
	case 12963://(3,2) (10, 3)
		return 64;//4 0
	break;
	case 12964://(3,2) (10, 4)
		return 64;//4 0
	break;
	case 12965://(3,2) (10, 5)
		return 68;//4 4
	break;
	case 12966://(3,2) (10, 6)
		return 64;//4 0
	break;
	case 12967://(3,2) (10, 7)
		return 68;//4 4
	break;
	case 12968://(3,2) (10, 8)
		return 64;//4 0
	break;
	case 12969://(3,2) (10, 9)
		return 68;//4 4
	break;
	case 12970://(3,2) (10, 10)
		return 64;//4 0
	break;
	case 12971://(3,2) (10, 11)
		return 68;//4 4
	break;
	case 12972://(3,2) (10, 12)
		return 68;//4 4
	break;
	case 12973://(3,2) (10, 13)
		return 64;//4 0
	break;
	case 12974://(3,2) (10, 14)
		return 68;//4 4
	break;
	case 12975://(3,2) (10, 15)
		return 68;//4 4
	break;
	case 12976://(3,2) (11, 0)
		return 64;//4 0
	break;
	case 12977://(3,2) (11, 1)
		return 64;//4 0
	break;
	case 12978://(3,2) (11, 2)
		return 68;//4 4
	break;
	case 12979://(3,2) (11, 3)
		return 64;//4 0
	break;
	case 12980://(3,2) (11, 4)
		return 64;//4 0
	break;
	case 12981://(3,2) (11, 5)
		return 68;//4 4
	break;
	case 12982://(3,2) (11, 6)
		return 64;//4 0
	break;
	case 12983://(3,2) (11, 7)
		return 68;//4 4
	break;
	case 12984://(3,2) (11, 8)
		return 64;//4 0
	break;
	case 12985://(3,2) (11, 9)
		return 68;//4 4
	break;
	case 12986://(3,2) (11, 10)
		return 64;//4 0
	break;
	case 12987://(3,2) (11, 11)
		return 68;//4 4
	break;
	case 12988://(3,2) (11, 12)
		return 68;//4 4
	break;
	case 12989://(3,2) (11, 13)
		return 64;//4 0
	break;
	case 12990://(3,2) (11, 14)
		return 68;//4 4
	break;
	case 12991://(3,2) (11, 15)
		return 68;//4 4
	break;
	case 12992://(3,2) (12, 0)
		return 64;//4 0
	break;
	case 12993://(3,2) (12, 1)
		return 64;//4 0
	break;
	case 12994://(3,2) (12, 2)
		return 68;//4 4
	break;
	case 12995://(3,2) (12, 3)
		return 64;//4 0
	break;
	case 12996://(3,2) (12, 4)
		return 64;//4 0
	break;
	case 12997://(3,2) (12, 5)
		return 68;//4 4
	break;
	case 12998://(3,2) (12, 6)
		return 64;//4 0
	break;
	case 12999://(3,2) (12, 7)
		return 68;//4 4
	break;
	case 13000://(3,2) (12, 8)
		return 64;//4 0
	break;
	case 13001://(3,2) (12, 9)
		return 68;//4 4
	break;
	case 13002://(3,2) (12, 10)
		return 64;//4 0
	break;
	case 13003://(3,2) (12, 11)
		return 68;//4 4
	break;
	case 13004://(3,2) (12, 12)
		return 68;//4 4
	break;
	case 13005://(3,2) (12, 13)
		return 64;//4 0
	break;
	case 13006://(3,2) (12, 14)
		return 68;//4 4
	break;
	case 13007://(3,2) (12, 15)
		return 68;//4 4
	break;
	case 13008://(3,2) (13, 0)
		return 64;//4 0
	break;
	case 13009://(3,2) (13, 1)
		return 64;//4 0
	break;
	case 13010://(3,2) (13, 2)
		return 68;//4 4
	break;
	case 13011://(3,2) (13, 3)
		return 64;//4 0
	break;
	case 13012://(3,2) (13, 4)
		return 64;//4 0
	break;
	case 13013://(3,2) (13, 5)
		return 68;//4 4
	break;
	case 13014://(3,2) (13, 6)
		return 64;//4 0
	break;
	case 13015://(3,2) (13, 7)
		return 68;//4 4
	break;
	case 13016://(3,2) (13, 8)
		return 64;//4 0
	break;
	case 13017://(3,2) (13, 9)
		return 68;//4 4
	break;
	case 13018://(3,2) (13, 10)
		return 64;//4 0
	break;
	case 13019://(3,2) (13, 11)
		return 68;//4 4
	break;
	case 13020://(3,2) (13, 12)
		return 68;//4 4
	break;
	case 13021://(3,2) (13, 13)
		return 64;//4 0
	break;
	case 13022://(3,2) (13, 14)
		return 68;//4 4
	break;
	case 13023://(3,2) (13, 15)
		return 68;//4 4
	break;
	case 13024://(3,2) (14, 0)
		return 0;//0 0
	break;
	case 13025://(3,2) (14, 1)
		return 0;//0 0
	break;
	case 13026://(3,2) (14, 2)
		return 4;//0 4
	break;
	case 13027://(3,2) (14, 3)
		return 0;//0 0
	break;
	case 13028://(3,2) (14, 4)
		return 0;//0 0
	break;
	case 13029://(3,2) (14, 5)
		return 4;//0 4
	break;
	case 13030://(3,2) (14, 6)
		return 0;//0 0
	break;
	case 13031://(3,2) (14, 7)
		return 4;//0 4
	break;
	case 13032://(3,2) (14, 8)
		return 0;//0 0
	break;
	case 13033://(3,2) (14, 9)
		return 4;//0 4
	break;
	case 13034://(3,2) (14, 10)
		return 0;//0 0
	break;
	case 13035://(3,2) (14, 11)
		return 4;//0 4
	break;
	case 13036://(3,2) (14, 12)
		return 4;//0 4
	break;
	case 13037://(3,2) (14, 13)
		return 0;//0 0
	break;
	case 13038://(3,2) (14, 14)
		return 4;//0 4
	break;
	case 13039://(3,2) (14, 15)
		return 4;//0 4
	break;
	case 13040://(3,2) (15, 0)
		return 64;//4 0
	break;
	case 13041://(3,2) (15, 1)
		return 64;//4 0
	break;
	case 13042://(3,2) (15, 2)
		return 68;//4 4
	break;
	case 13043://(3,2) (15, 3)
		return 64;//4 0
	break;
	case 13044://(3,2) (15, 4)
		return 64;//4 0
	break;
	case 13045://(3,2) (15, 5)
		return 68;//4 4
	break;
	case 13046://(3,2) (15, 6)
		return 64;//4 0
	break;
	case 13047://(3,2) (15, 7)
		return 68;//4 4
	break;
	case 13048://(3,2) (15, 8)
		return 64;//4 0
	break;
	case 13049://(3,2) (15, 9)
		return 68;//4 4
	break;
	case 13050://(3,2) (15, 10)
		return 64;//4 0
	break;
	case 13051://(3,2) (15, 11)
		return 68;//4 4
	break;
	case 13052://(3,2) (15, 12)
		return 68;//4 4
	break;
	case 13053://(3,2) (15, 13)
		return 64;//4 0
	break;
	case 13054://(3,2) (15, 14)
		return 68;//4 4
	break;
	case 13055://(3,2) (15, 15)
		return 68;//4 4
	break;
	case 13056://(3,3) (0, 0)
		return 0;//0 0
	break;
	case 13057://(3,3) (0, 1)
		return 0;//0 0
	break;
	case 13058://(3,3) (0, 2)
		return 0;//0 0
	break;
	case 13059://(3,3) (0, 3)
		return 4;//0 4
	break;
	case 13060://(3,3) (0, 4)
		return 0;//0 0
	break;
	case 13061://(3,3) (0, 5)
		return 0;//0 0
	break;
	case 13062://(3,3) (0, 6)
		return 4;//0 4
	break;
	case 13063://(3,3) (0, 7)
		return 4;//0 4
	break;
	case 13064://(3,3) (0, 8)
		return 0;//0 0
	break;
	case 13065://(3,3) (0, 9)
		return 0;//0 0
	break;
	case 13066://(3,3) (0, 10)
		return 4;//0 4
	break;
	case 13067://(3,3) (0, 11)
		return 4;//0 4
	break;
	case 13068://(3,3) (0, 12)
		return 4;//0 4
	break;
	case 13069://(3,3) (0, 13)
		return 4;//0 4
	break;
	case 13070://(3,3) (0, 14)
		return 0;//0 0
	break;
	case 13071://(3,3) (0, 15)
		return 4;//0 4
	break;
	case 13072://(3,3) (1, 0)
		return 0;//0 0
	break;
	case 13073://(3,3) (1, 1)
		return 0;//0 0
	break;
	case 13074://(3,3) (1, 2)
		return 0;//0 0
	break;
	case 13075://(3,3) (1, 3)
		return 4;//0 4
	break;
	case 13076://(3,3) (1, 4)
		return 0;//0 0
	break;
	case 13077://(3,3) (1, 5)
		return 0;//0 0
	break;
	case 13078://(3,3) (1, 6)
		return 4;//0 4
	break;
	case 13079://(3,3) (1, 7)
		return 4;//0 4
	break;
	case 13080://(3,3) (1, 8)
		return 0;//0 0
	break;
	case 13081://(3,3) (1, 9)
		return 0;//0 0
	break;
	case 13082://(3,3) (1, 10)
		return 4;//0 4
	break;
	case 13083://(3,3) (1, 11)
		return 4;//0 4
	break;
	case 13084://(3,3) (1, 12)
		return 4;//0 4
	break;
	case 13085://(3,3) (1, 13)
		return 4;//0 4
	break;
	case 13086://(3,3) (1, 14)
		return 0;//0 0
	break;
	case 13087://(3,3) (1, 15)
		return 4;//0 4
	break;
	case 13088://(3,3) (2, 0)
		return 0;//0 0
	break;
	case 13089://(3,3) (2, 1)
		return 0;//0 0
	break;
	case 13090://(3,3) (2, 2)
		return 0;//0 0
	break;
	case 13091://(3,3) (2, 3)
		return 4;//0 4
	break;
	case 13092://(3,3) (2, 4)
		return 0;//0 0
	break;
	case 13093://(3,3) (2, 5)
		return 0;//0 0
	break;
	case 13094://(3,3) (2, 6)
		return 4;//0 4
	break;
	case 13095://(3,3) (2, 7)
		return 4;//0 4
	break;
	case 13096://(3,3) (2, 8)
		return 0;//0 0
	break;
	case 13097://(3,3) (2, 9)
		return 0;//0 0
	break;
	case 13098://(3,3) (2, 10)
		return 4;//0 4
	break;
	case 13099://(3,3) (2, 11)
		return 4;//0 4
	break;
	case 13100://(3,3) (2, 12)
		return 4;//0 4
	break;
	case 13101://(3,3) (2, 13)
		return 4;//0 4
	break;
	case 13102://(3,3) (2, 14)
		return 0;//0 0
	break;
	case 13103://(3,3) (2, 15)
		return 4;//0 4
	break;
	case 13104://(3,3) (3, 0)
		return 64;//4 0
	break;
	case 13105://(3,3) (3, 1)
		return 64;//4 0
	break;
	case 13106://(3,3) (3, 2)
		return 64;//4 0
	break;
	case 13107://(3,3) (3, 3)
		return 68;//4 4
	break;
	case 13108://(3,3) (3, 4)
		return 64;//4 0
	break;
	case 13109://(3,3) (3, 5)
		return 64;//4 0
	break;
	case 13110://(3,3) (3, 6)
		return 68;//4 4
	break;
	case 13111://(3,3) (3, 7)
		return 68;//4 4
	break;
	case 13112://(3,3) (3, 8)
		return 64;//4 0
	break;
	case 13113://(3,3) (3, 9)
		return 64;//4 0
	break;
	case 13114://(3,3) (3, 10)
		return 68;//4 4
	break;
	case 13115://(3,3) (3, 11)
		return 68;//4 4
	break;
	case 13116://(3,3) (3, 12)
		return 68;//4 4
	break;
	case 13117://(3,3) (3, 13)
		return 68;//4 4
	break;
	case 13118://(3,3) (3, 14)
		return 64;//4 0
	break;
	case 13119://(3,3) (3, 15)
		return 68;//4 4
	break;
	case 13120://(3,3) (4, 0)
		return 0;//0 0
	break;
	case 13121://(3,3) (4, 1)
		return 0;//0 0
	break;
	case 13122://(3,3) (4, 2)
		return 0;//0 0
	break;
	case 13123://(3,3) (4, 3)
		return 4;//0 4
	break;
	case 13124://(3,3) (4, 4)
		return 0;//0 0
	break;
	case 13125://(3,3) (4, 5)
		return 0;//0 0
	break;
	case 13126://(3,3) (4, 6)
		return 4;//0 4
	break;
	case 13127://(3,3) (4, 7)
		return 4;//0 4
	break;
	case 13128://(3,3) (4, 8)
		return 0;//0 0
	break;
	case 13129://(3,3) (4, 9)
		return 0;//0 0
	break;
	case 13130://(3,3) (4, 10)
		return 4;//0 4
	break;
	case 13131://(3,3) (4, 11)
		return 4;//0 4
	break;
	case 13132://(3,3) (4, 12)
		return 4;//0 4
	break;
	case 13133://(3,3) (4, 13)
		return 4;//0 4
	break;
	case 13134://(3,3) (4, 14)
		return 0;//0 0
	break;
	case 13135://(3,3) (4, 15)
		return 4;//0 4
	break;
	case 13136://(3,3) (5, 0)
		return 0;//0 0
	break;
	case 13137://(3,3) (5, 1)
		return 0;//0 0
	break;
	case 13138://(3,3) (5, 2)
		return 0;//0 0
	break;
	case 13139://(3,3) (5, 3)
		return 4;//0 4
	break;
	case 13140://(3,3) (5, 4)
		return 0;//0 0
	break;
	case 13141://(3,3) (5, 5)
		return 0;//0 0
	break;
	case 13142://(3,3) (5, 6)
		return 4;//0 4
	break;
	case 13143://(3,3) (5, 7)
		return 4;//0 4
	break;
	case 13144://(3,3) (5, 8)
		return 0;//0 0
	break;
	case 13145://(3,3) (5, 9)
		return 0;//0 0
	break;
	case 13146://(3,3) (5, 10)
		return 4;//0 4
	break;
	case 13147://(3,3) (5, 11)
		return 4;//0 4
	break;
	case 13148://(3,3) (5, 12)
		return 4;//0 4
	break;
	case 13149://(3,3) (5, 13)
		return 4;//0 4
	break;
	case 13150://(3,3) (5, 14)
		return 0;//0 0
	break;
	case 13151://(3,3) (5, 15)
		return 4;//0 4
	break;
	case 13152://(3,3) (6, 0)
		return 64;//4 0
	break;
	case 13153://(3,3) (6, 1)
		return 64;//4 0
	break;
	case 13154://(3,3) (6, 2)
		return 64;//4 0
	break;
	case 13155://(3,3) (6, 3)
		return 68;//4 4
	break;
	case 13156://(3,3) (6, 4)
		return 64;//4 0
	break;
	case 13157://(3,3) (6, 5)
		return 64;//4 0
	break;
	case 13158://(3,3) (6, 6)
		return 68;//4 4
	break;
	case 13159://(3,3) (6, 7)
		return 68;//4 4
	break;
	case 13160://(3,3) (6, 8)
		return 64;//4 0
	break;
	case 13161://(3,3) (6, 9)
		return 64;//4 0
	break;
	case 13162://(3,3) (6, 10)
		return 68;//4 4
	break;
	case 13163://(3,3) (6, 11)
		return 68;//4 4
	break;
	case 13164://(3,3) (6, 12)
		return 68;//4 4
	break;
	case 13165://(3,3) (6, 13)
		return 68;//4 4
	break;
	case 13166://(3,3) (6, 14)
		return 64;//4 0
	break;
	case 13167://(3,3) (6, 15)
		return 68;//4 4
	break;
	case 13168://(3,3) (7, 0)
		return 64;//4 0
	break;
	case 13169://(3,3) (7, 1)
		return 64;//4 0
	break;
	case 13170://(3,3) (7, 2)
		return 64;//4 0
	break;
	case 13171://(3,3) (7, 3)
		return 68;//4 4
	break;
	case 13172://(3,3) (7, 4)
		return 64;//4 0
	break;
	case 13173://(3,3) (7, 5)
		return 64;//4 0
	break;
	case 13174://(3,3) (7, 6)
		return 68;//4 4
	break;
	case 13175://(3,3) (7, 7)
		return 68;//4 4
	break;
	case 13176://(3,3) (7, 8)
		return 64;//4 0
	break;
	case 13177://(3,3) (7, 9)
		return 64;//4 0
	break;
	case 13178://(3,3) (7, 10)
		return 68;//4 4
	break;
	case 13179://(3,3) (7, 11)
		return 68;//4 4
	break;
	case 13180://(3,3) (7, 12)
		return 68;//4 4
	break;
	case 13181://(3,3) (7, 13)
		return 68;//4 4
	break;
	case 13182://(3,3) (7, 14)
		return 64;//4 0
	break;
	case 13183://(3,3) (7, 15)
		return 68;//4 4
	break;
	case 13184://(3,3) (8, 0)
		return 0;//0 0
	break;
	case 13185://(3,3) (8, 1)
		return 0;//0 0
	break;
	case 13186://(3,3) (8, 2)
		return 0;//0 0
	break;
	case 13187://(3,3) (8, 3)
		return 4;//0 4
	break;
	case 13188://(3,3) (8, 4)
		return 0;//0 0
	break;
	case 13189://(3,3) (8, 5)
		return 0;//0 0
	break;
	case 13190://(3,3) (8, 6)
		return 4;//0 4
	break;
	case 13191://(3,3) (8, 7)
		return 4;//0 4
	break;
	case 13192://(3,3) (8, 8)
		return 0;//0 0
	break;
	case 13193://(3,3) (8, 9)
		return 0;//0 0
	break;
	case 13194://(3,3) (8, 10)
		return 4;//0 4
	break;
	case 13195://(3,3) (8, 11)
		return 4;//0 4
	break;
	case 13196://(3,3) (8, 12)
		return 4;//0 4
	break;
	case 13197://(3,3) (8, 13)
		return 4;//0 4
	break;
	case 13198://(3,3) (8, 14)
		return 0;//0 0
	break;
	case 13199://(3,3) (8, 15)
		return 4;//0 4
	break;
	case 13200://(3,3) (9, 0)
		return 0;//0 0
	break;
	case 13201://(3,3) (9, 1)
		return 0;//0 0
	break;
	case 13202://(3,3) (9, 2)
		return 0;//0 0
	break;
	case 13203://(3,3) (9, 3)
		return 4;//0 4
	break;
	case 13204://(3,3) (9, 4)
		return 0;//0 0
	break;
	case 13205://(3,3) (9, 5)
		return 0;//0 0
	break;
	case 13206://(3,3) (9, 6)
		return 4;//0 4
	break;
	case 13207://(3,3) (9, 7)
		return 4;//0 4
	break;
	case 13208://(3,3) (9, 8)
		return 0;//0 0
	break;
	case 13209://(3,3) (9, 9)
		return 0;//0 0
	break;
	case 13210://(3,3) (9, 10)
		return 4;//0 4
	break;
	case 13211://(3,3) (9, 11)
		return 4;//0 4
	break;
	case 13212://(3,3) (9, 12)
		return 4;//0 4
	break;
	case 13213://(3,3) (9, 13)
		return 4;//0 4
	break;
	case 13214://(3,3) (9, 14)
		return 0;//0 0
	break;
	case 13215://(3,3) (9, 15)
		return 4;//0 4
	break;
	case 13216://(3,3) (10, 0)
		return 64;//4 0
	break;
	case 13217://(3,3) (10, 1)
		return 64;//4 0
	break;
	case 13218://(3,3) (10, 2)
		return 64;//4 0
	break;
	case 13219://(3,3) (10, 3)
		return 68;//4 4
	break;
	case 13220://(3,3) (10, 4)
		return 64;//4 0
	break;
	case 13221://(3,3) (10, 5)
		return 64;//4 0
	break;
	case 13222://(3,3) (10, 6)
		return 68;//4 4
	break;
	case 13223://(3,3) (10, 7)
		return 68;//4 4
	break;
	case 13224://(3,3) (10, 8)
		return 64;//4 0
	break;
	case 13225://(3,3) (10, 9)
		return 64;//4 0
	break;
	case 13226://(3,3) (10, 10)
		return 68;//4 4
	break;
	case 13227://(3,3) (10, 11)
		return 68;//4 4
	break;
	case 13228://(3,3) (10, 12)
		return 68;//4 4
	break;
	case 13229://(3,3) (10, 13)
		return 68;//4 4
	break;
	case 13230://(3,3) (10, 14)
		return 64;//4 0
	break;
	case 13231://(3,3) (10, 15)
		return 68;//4 4
	break;
	case 13232://(3,3) (11, 0)
		return 64;//4 0
	break;
	case 13233://(3,3) (11, 1)
		return 64;//4 0
	break;
	case 13234://(3,3) (11, 2)
		return 64;//4 0
	break;
	case 13235://(3,3) (11, 3)
		return 68;//4 4
	break;
	case 13236://(3,3) (11, 4)
		return 64;//4 0
	break;
	case 13237://(3,3) (11, 5)
		return 64;//4 0
	break;
	case 13238://(3,3) (11, 6)
		return 68;//4 4
	break;
	case 13239://(3,3) (11, 7)
		return 68;//4 4
	break;
	case 13240://(3,3) (11, 8)
		return 64;//4 0
	break;
	case 13241://(3,3) (11, 9)
		return 64;//4 0
	break;
	case 13242://(3,3) (11, 10)
		return 68;//4 4
	break;
	case 13243://(3,3) (11, 11)
		return 68;//4 4
	break;
	case 13244://(3,3) (11, 12)
		return 68;//4 4
	break;
	case 13245://(3,3) (11, 13)
		return 68;//4 4
	break;
	case 13246://(3,3) (11, 14)
		return 64;//4 0
	break;
	case 13247://(3,3) (11, 15)
		return 68;//4 4
	break;
	case 13248://(3,3) (12, 0)
		return 64;//4 0
	break;
	case 13249://(3,3) (12, 1)
		return 64;//4 0
	break;
	case 13250://(3,3) (12, 2)
		return 64;//4 0
	break;
	case 13251://(3,3) (12, 3)
		return 68;//4 4
	break;
	case 13252://(3,3) (12, 4)
		return 64;//4 0
	break;
	case 13253://(3,3) (12, 5)
		return 64;//4 0
	break;
	case 13254://(3,3) (12, 6)
		return 68;//4 4
	break;
	case 13255://(3,3) (12, 7)
		return 68;//4 4
	break;
	case 13256://(3,3) (12, 8)
		return 64;//4 0
	break;
	case 13257://(3,3) (12, 9)
		return 64;//4 0
	break;
	case 13258://(3,3) (12, 10)
		return 68;//4 4
	break;
	case 13259://(3,3) (12, 11)
		return 68;//4 4
	break;
	case 13260://(3,3) (12, 12)
		return 68;//4 4
	break;
	case 13261://(3,3) (12, 13)
		return 68;//4 4
	break;
	case 13262://(3,3) (12, 14)
		return 64;//4 0
	break;
	case 13263://(3,3) (12, 15)
		return 68;//4 4
	break;
	case 13264://(3,3) (13, 0)
		return 64;//4 0
	break;
	case 13265://(3,3) (13, 1)
		return 64;//4 0
	break;
	case 13266://(3,3) (13, 2)
		return 64;//4 0
	break;
	case 13267://(3,3) (13, 3)
		return 68;//4 4
	break;
	case 13268://(3,3) (13, 4)
		return 64;//4 0
	break;
	case 13269://(3,3) (13, 5)
		return 64;//4 0
	break;
	case 13270://(3,3) (13, 6)
		return 68;//4 4
	break;
	case 13271://(3,3) (13, 7)
		return 68;//4 4
	break;
	case 13272://(3,3) (13, 8)
		return 64;//4 0
	break;
	case 13273://(3,3) (13, 9)
		return 64;//4 0
	break;
	case 13274://(3,3) (13, 10)
		return 68;//4 4
	break;
	case 13275://(3,3) (13, 11)
		return 68;//4 4
	break;
	case 13276://(3,3) (13, 12)
		return 68;//4 4
	break;
	case 13277://(3,3) (13, 13)
		return 68;//4 4
	break;
	case 13278://(3,3) (13, 14)
		return 64;//4 0
	break;
	case 13279://(3,3) (13, 15)
		return 68;//4 4
	break;
	case 13280://(3,3) (14, 0)
		return 0;//0 0
	break;
	case 13281://(3,3) (14, 1)
		return 0;//0 0
	break;
	case 13282://(3,3) (14, 2)
		return 0;//0 0
	break;
	case 13283://(3,3) (14, 3)
		return 4;//0 4
	break;
	case 13284://(3,3) (14, 4)
		return 0;//0 0
	break;
	case 13285://(3,3) (14, 5)
		return 0;//0 0
	break;
	case 13286://(3,3) (14, 6)
		return 4;//0 4
	break;
	case 13287://(3,3) (14, 7)
		return 4;//0 4
	break;
	case 13288://(3,3) (14, 8)
		return 0;//0 0
	break;
	case 13289://(3,3) (14, 9)
		return 0;//0 0
	break;
	case 13290://(3,3) (14, 10)
		return 4;//0 4
	break;
	case 13291://(3,3) (14, 11)
		return 4;//0 4
	break;
	case 13292://(3,3) (14, 12)
		return 4;//0 4
	break;
	case 13293://(3,3) (14, 13)
		return 4;//0 4
	break;
	case 13294://(3,3) (14, 14)
		return 0;//0 0
	break;
	case 13295://(3,3) (14, 15)
		return 4;//0 4
	break;
	case 13296://(3,3) (15, 0)
		return 64;//4 0
	break;
	case 13297://(3,3) (15, 1)
		return 64;//4 0
	break;
	case 13298://(3,3) (15, 2)
		return 64;//4 0
	break;
	case 13299://(3,3) (15, 3)
		return 68;//4 4
	break;
	case 13300://(3,3) (15, 4)
		return 64;//4 0
	break;
	case 13301://(3,3) (15, 5)
		return 64;//4 0
	break;
	case 13302://(3,3) (15, 6)
		return 68;//4 4
	break;
	case 13303://(3,3) (15, 7)
		return 68;//4 4
	break;
	case 13304://(3,3) (15, 8)
		return 64;//4 0
	break;
	case 13305://(3,3) (15, 9)
		return 64;//4 0
	break;
	case 13306://(3,3) (15, 10)
		return 68;//4 4
	break;
	case 13307://(3,3) (15, 11)
		return 68;//4 4
	break;
	case 13308://(3,3) (15, 12)
		return 68;//4 4
	break;
	case 13309://(3,3) (15, 13)
		return 68;//4 4
	break;
	case 13310://(3,3) (15, 14)
		return 64;//4 0
	break;
	case 13311://(3,3) (15, 15)
		return 68;//4 4
	break;
	case 13312://(3,4) (0, 0)
		return 0;//0 0
	break;
	case 13313://(3,4) (0, 1)
		return 0;//0 0
	break;
	case 13314://(3,4) (0, 2)
		return 0;//0 0
	break;
	case 13315://(3,4) (0, 3)
		return 0;//0 0
	break;
	case 13316://(3,4) (0, 4)
		return 4;//0 4
	break;
	case 13317://(3,4) (0, 5)
		return 4;//0 4
	break;
	case 13318://(3,4) (0, 6)
		return 0;//0 0
	break;
	case 13319://(3,4) (0, 7)
		return 0;//0 0
	break;
	case 13320://(3,4) (0, 8)
		return 4;//0 4
	break;
	case 13321://(3,4) (0, 9)
		return 0;//0 0
	break;
	case 13322://(3,4) (0, 10)
		return 4;//0 4
	break;
	case 13323://(3,4) (0, 11)
		return 0;//0 0
	break;
	case 13324://(3,4) (0, 12)
		return 4;//0 4
	break;
	case 13325://(3,4) (0, 13)
		return 4;//0 4
	break;
	case 13326://(3,4) (0, 14)
		return 4;//0 4
	break;
	case 13327://(3,4) (0, 15)
		return 4;//0 4
	break;
	case 13328://(3,4) (1, 0)
		return 0;//0 0
	break;
	case 13329://(3,4) (1, 1)
		return 0;//0 0
	break;
	case 13330://(3,4) (1, 2)
		return 0;//0 0
	break;
	case 13331://(3,4) (1, 3)
		return 0;//0 0
	break;
	case 13332://(3,4) (1, 4)
		return 4;//0 4
	break;
	case 13333://(3,4) (1, 5)
		return 4;//0 4
	break;
	case 13334://(3,4) (1, 6)
		return 0;//0 0
	break;
	case 13335://(3,4) (1, 7)
		return 0;//0 0
	break;
	case 13336://(3,4) (1, 8)
		return 4;//0 4
	break;
	case 13337://(3,4) (1, 9)
		return 0;//0 0
	break;
	case 13338://(3,4) (1, 10)
		return 4;//0 4
	break;
	case 13339://(3,4) (1, 11)
		return 0;//0 0
	break;
	case 13340://(3,4) (1, 12)
		return 4;//0 4
	break;
	case 13341://(3,4) (1, 13)
		return 4;//0 4
	break;
	case 13342://(3,4) (1, 14)
		return 4;//0 4
	break;
	case 13343://(3,4) (1, 15)
		return 4;//0 4
	break;
	case 13344://(3,4) (2, 0)
		return 0;//0 0
	break;
	case 13345://(3,4) (2, 1)
		return 0;//0 0
	break;
	case 13346://(3,4) (2, 2)
		return 0;//0 0
	break;
	case 13347://(3,4) (2, 3)
		return 0;//0 0
	break;
	case 13348://(3,4) (2, 4)
		return 4;//0 4
	break;
	case 13349://(3,4) (2, 5)
		return 4;//0 4
	break;
	case 13350://(3,4) (2, 6)
		return 0;//0 0
	break;
	case 13351://(3,4) (2, 7)
		return 0;//0 0
	break;
	case 13352://(3,4) (2, 8)
		return 4;//0 4
	break;
	case 13353://(3,4) (2, 9)
		return 0;//0 0
	break;
	case 13354://(3,4) (2, 10)
		return 4;//0 4
	break;
	case 13355://(3,4) (2, 11)
		return 0;//0 0
	break;
	case 13356://(3,4) (2, 12)
		return 4;//0 4
	break;
	case 13357://(3,4) (2, 13)
		return 4;//0 4
	break;
	case 13358://(3,4) (2, 14)
		return 4;//0 4
	break;
	case 13359://(3,4) (2, 15)
		return 4;//0 4
	break;
	case 13360://(3,4) (3, 0)
		return 64;//4 0
	break;
	case 13361://(3,4) (3, 1)
		return 64;//4 0
	break;
	case 13362://(3,4) (3, 2)
		return 64;//4 0
	break;
	case 13363://(3,4) (3, 3)
		return 64;//4 0
	break;
	case 13364://(3,4) (3, 4)
		return 68;//4 4
	break;
	case 13365://(3,4) (3, 5)
		return 68;//4 4
	break;
	case 13366://(3,4) (3, 6)
		return 64;//4 0
	break;
	case 13367://(3,4) (3, 7)
		return 64;//4 0
	break;
	case 13368://(3,4) (3, 8)
		return 68;//4 4
	break;
	case 13369://(3,4) (3, 9)
		return 64;//4 0
	break;
	case 13370://(3,4) (3, 10)
		return 68;//4 4
	break;
	case 13371://(3,4) (3, 11)
		return 64;//4 0
	break;
	case 13372://(3,4) (3, 12)
		return 68;//4 4
	break;
	case 13373://(3,4) (3, 13)
		return 68;//4 4
	break;
	case 13374://(3,4) (3, 14)
		return 68;//4 4
	break;
	case 13375://(3,4) (3, 15)
		return 68;//4 4
	break;
	case 13376://(3,4) (4, 0)
		return 0;//0 0
	break;
	case 13377://(3,4) (4, 1)
		return 0;//0 0
	break;
	case 13378://(3,4) (4, 2)
		return 0;//0 0
	break;
	case 13379://(3,4) (4, 3)
		return 0;//0 0
	break;
	case 13380://(3,4) (4, 4)
		return 4;//0 4
	break;
	case 13381://(3,4) (4, 5)
		return 4;//0 4
	break;
	case 13382://(3,4) (4, 6)
		return 0;//0 0
	break;
	case 13383://(3,4) (4, 7)
		return 0;//0 0
	break;
	case 13384://(3,4) (4, 8)
		return 4;//0 4
	break;
	case 13385://(3,4) (4, 9)
		return 0;//0 0
	break;
	case 13386://(3,4) (4, 10)
		return 4;//0 4
	break;
	case 13387://(3,4) (4, 11)
		return 0;//0 0
	break;
	case 13388://(3,4) (4, 12)
		return 4;//0 4
	break;
	case 13389://(3,4) (4, 13)
		return 4;//0 4
	break;
	case 13390://(3,4) (4, 14)
		return 4;//0 4
	break;
	case 13391://(3,4) (4, 15)
		return 4;//0 4
	break;
	case 13392://(3,4) (5, 0)
		return 0;//0 0
	break;
	case 13393://(3,4) (5, 1)
		return 0;//0 0
	break;
	case 13394://(3,4) (5, 2)
		return 0;//0 0
	break;
	case 13395://(3,4) (5, 3)
		return 0;//0 0
	break;
	case 13396://(3,4) (5, 4)
		return 4;//0 4
	break;
	case 13397://(3,4) (5, 5)
		return 4;//0 4
	break;
	case 13398://(3,4) (5, 6)
		return 0;//0 0
	break;
	case 13399://(3,4) (5, 7)
		return 0;//0 0
	break;
	case 13400://(3,4) (5, 8)
		return 4;//0 4
	break;
	case 13401://(3,4) (5, 9)
		return 0;//0 0
	break;
	case 13402://(3,4) (5, 10)
		return 4;//0 4
	break;
	case 13403://(3,4) (5, 11)
		return 0;//0 0
	break;
	case 13404://(3,4) (5, 12)
		return 4;//0 4
	break;
	case 13405://(3,4) (5, 13)
		return 4;//0 4
	break;
	case 13406://(3,4) (5, 14)
		return 4;//0 4
	break;
	case 13407://(3,4) (5, 15)
		return 4;//0 4
	break;
	case 13408://(3,4) (6, 0)
		return 64;//4 0
	break;
	case 13409://(3,4) (6, 1)
		return 64;//4 0
	break;
	case 13410://(3,4) (6, 2)
		return 64;//4 0
	break;
	case 13411://(3,4) (6, 3)
		return 64;//4 0
	break;
	case 13412://(3,4) (6, 4)
		return 68;//4 4
	break;
	case 13413://(3,4) (6, 5)
		return 68;//4 4
	break;
	case 13414://(3,4) (6, 6)
		return 64;//4 0
	break;
	case 13415://(3,4) (6, 7)
		return 64;//4 0
	break;
	case 13416://(3,4) (6, 8)
		return 68;//4 4
	break;
	case 13417://(3,4) (6, 9)
		return 64;//4 0
	break;
	case 13418://(3,4) (6, 10)
		return 68;//4 4
	break;
	case 13419://(3,4) (6, 11)
		return 64;//4 0
	break;
	case 13420://(3,4) (6, 12)
		return 68;//4 4
	break;
	case 13421://(3,4) (6, 13)
		return 68;//4 4
	break;
	case 13422://(3,4) (6, 14)
		return 68;//4 4
	break;
	case 13423://(3,4) (6, 15)
		return 68;//4 4
	break;
	case 13424://(3,4) (7, 0)
		return 64;//4 0
	break;
	case 13425://(3,4) (7, 1)
		return 64;//4 0
	break;
	case 13426://(3,4) (7, 2)
		return 64;//4 0
	break;
	case 13427://(3,4) (7, 3)
		return 64;//4 0
	break;
	case 13428://(3,4) (7, 4)
		return 68;//4 4
	break;
	case 13429://(3,4) (7, 5)
		return 68;//4 4
	break;
	case 13430://(3,4) (7, 6)
		return 64;//4 0
	break;
	case 13431://(3,4) (7, 7)
		return 64;//4 0
	break;
	case 13432://(3,4) (7, 8)
		return 68;//4 4
	break;
	case 13433://(3,4) (7, 9)
		return 64;//4 0
	break;
	case 13434://(3,4) (7, 10)
		return 68;//4 4
	break;
	case 13435://(3,4) (7, 11)
		return 64;//4 0
	break;
	case 13436://(3,4) (7, 12)
		return 68;//4 4
	break;
	case 13437://(3,4) (7, 13)
		return 68;//4 4
	break;
	case 13438://(3,4) (7, 14)
		return 68;//4 4
	break;
	case 13439://(3,4) (7, 15)
		return 68;//4 4
	break;
	case 13440://(3,4) (8, 0)
		return 0;//0 0
	break;
	case 13441://(3,4) (8, 1)
		return 0;//0 0
	break;
	case 13442://(3,4) (8, 2)
		return 0;//0 0
	break;
	case 13443://(3,4) (8, 3)
		return 0;//0 0
	break;
	case 13444://(3,4) (8, 4)
		return 4;//0 4
	break;
	case 13445://(3,4) (8, 5)
		return 4;//0 4
	break;
	case 13446://(3,4) (8, 6)
		return 0;//0 0
	break;
	case 13447://(3,4) (8, 7)
		return 0;//0 0
	break;
	case 13448://(3,4) (8, 8)
		return 4;//0 4
	break;
	case 13449://(3,4) (8, 9)
		return 0;//0 0
	break;
	case 13450://(3,4) (8, 10)
		return 4;//0 4
	break;
	case 13451://(3,4) (8, 11)
		return 0;//0 0
	break;
	case 13452://(3,4) (8, 12)
		return 4;//0 4
	break;
	case 13453://(3,4) (8, 13)
		return 4;//0 4
	break;
	case 13454://(3,4) (8, 14)
		return 4;//0 4
	break;
	case 13455://(3,4) (8, 15)
		return 4;//0 4
	break;
	case 13456://(3,4) (9, 0)
		return 0;//0 0
	break;
	case 13457://(3,4) (9, 1)
		return 0;//0 0
	break;
	case 13458://(3,4) (9, 2)
		return 0;//0 0
	break;
	case 13459://(3,4) (9, 3)
		return 0;//0 0
	break;
	case 13460://(3,4) (9, 4)
		return 4;//0 4
	break;
	case 13461://(3,4) (9, 5)
		return 4;//0 4
	break;
	case 13462://(3,4) (9, 6)
		return 0;//0 0
	break;
	case 13463://(3,4) (9, 7)
		return 0;//0 0
	break;
	case 13464://(3,4) (9, 8)
		return 4;//0 4
	break;
	case 13465://(3,4) (9, 9)
		return 0;//0 0
	break;
	case 13466://(3,4) (9, 10)
		return 4;//0 4
	break;
	case 13467://(3,4) (9, 11)
		return 0;//0 0
	break;
	case 13468://(3,4) (9, 12)
		return 4;//0 4
	break;
	case 13469://(3,4) (9, 13)
		return 4;//0 4
	break;
	case 13470://(3,4) (9, 14)
		return 4;//0 4
	break;
	case 13471://(3,4) (9, 15)
		return 4;//0 4
	break;
	case 13472://(3,4) (10, 0)
		return 64;//4 0
	break;
	case 13473://(3,4) (10, 1)
		return 64;//4 0
	break;
	case 13474://(3,4) (10, 2)
		return 64;//4 0
	break;
	case 13475://(3,4) (10, 3)
		return 64;//4 0
	break;
	case 13476://(3,4) (10, 4)
		return 68;//4 4
	break;
	case 13477://(3,4) (10, 5)
		return 68;//4 4
	break;
	case 13478://(3,4) (10, 6)
		return 64;//4 0
	break;
	case 13479://(3,4) (10, 7)
		return 64;//4 0
	break;
	case 13480://(3,4) (10, 8)
		return 68;//4 4
	break;
	case 13481://(3,4) (10, 9)
		return 64;//4 0
	break;
	case 13482://(3,4) (10, 10)
		return 68;//4 4
	break;
	case 13483://(3,4) (10, 11)
		return 64;//4 0
	break;
	case 13484://(3,4) (10, 12)
		return 68;//4 4
	break;
	case 13485://(3,4) (10, 13)
		return 68;//4 4
	break;
	case 13486://(3,4) (10, 14)
		return 68;//4 4
	break;
	case 13487://(3,4) (10, 15)
		return 68;//4 4
	break;
	case 13488://(3,4) (11, 0)
		return 64;//4 0
	break;
	case 13489://(3,4) (11, 1)
		return 64;//4 0
	break;
	case 13490://(3,4) (11, 2)
		return 64;//4 0
	break;
	case 13491://(3,4) (11, 3)
		return 64;//4 0
	break;
	case 13492://(3,4) (11, 4)
		return 68;//4 4
	break;
	case 13493://(3,4) (11, 5)
		return 68;//4 4
	break;
	case 13494://(3,4) (11, 6)
		return 64;//4 0
	break;
	case 13495://(3,4) (11, 7)
		return 64;//4 0
	break;
	case 13496://(3,4) (11, 8)
		return 68;//4 4
	break;
	case 13497://(3,4) (11, 9)
		return 64;//4 0
	break;
	case 13498://(3,4) (11, 10)
		return 68;//4 4
	break;
	case 13499://(3,4) (11, 11)
		return 64;//4 0
	break;
	case 13500://(3,4) (11, 12)
		return 68;//4 4
	break;
	case 13501://(3,4) (11, 13)
		return 68;//4 4
	break;
	case 13502://(3,4) (11, 14)
		return 68;//4 4
	break;
	case 13503://(3,4) (11, 15)
		return 68;//4 4
	break;
	case 13504://(3,4) (12, 0)
		return 64;//4 0
	break;
	case 13505://(3,4) (12, 1)
		return 64;//4 0
	break;
	case 13506://(3,4) (12, 2)
		return 64;//4 0
	break;
	case 13507://(3,4) (12, 3)
		return 64;//4 0
	break;
	case 13508://(3,4) (12, 4)
		return 68;//4 4
	break;
	case 13509://(3,4) (12, 5)
		return 68;//4 4
	break;
	case 13510://(3,4) (12, 6)
		return 64;//4 0
	break;
	case 13511://(3,4) (12, 7)
		return 64;//4 0
	break;
	case 13512://(3,4) (12, 8)
		return 68;//4 4
	break;
	case 13513://(3,4) (12, 9)
		return 64;//4 0
	break;
	case 13514://(3,4) (12, 10)
		return 68;//4 4
	break;
	case 13515://(3,4) (12, 11)
		return 64;//4 0
	break;
	case 13516://(3,4) (12, 12)
		return 68;//4 4
	break;
	case 13517://(3,4) (12, 13)
		return 68;//4 4
	break;
	case 13518://(3,4) (12, 14)
		return 68;//4 4
	break;
	case 13519://(3,4) (12, 15)
		return 68;//4 4
	break;
	case 13520://(3,4) (13, 0)
		return 64;//4 0
	break;
	case 13521://(3,4) (13, 1)
		return 64;//4 0
	break;
	case 13522://(3,4) (13, 2)
		return 64;//4 0
	break;
	case 13523://(3,4) (13, 3)
		return 64;//4 0
	break;
	case 13524://(3,4) (13, 4)
		return 68;//4 4
	break;
	case 13525://(3,4) (13, 5)
		return 68;//4 4
	break;
	case 13526://(3,4) (13, 6)
		return 64;//4 0
	break;
	case 13527://(3,4) (13, 7)
		return 64;//4 0
	break;
	case 13528://(3,4) (13, 8)
		return 68;//4 4
	break;
	case 13529://(3,4) (13, 9)
		return 64;//4 0
	break;
	case 13530://(3,4) (13, 10)
		return 68;//4 4
	break;
	case 13531://(3,4) (13, 11)
		return 64;//4 0
	break;
	case 13532://(3,4) (13, 12)
		return 68;//4 4
	break;
	case 13533://(3,4) (13, 13)
		return 68;//4 4
	break;
	case 13534://(3,4) (13, 14)
		return 68;//4 4
	break;
	case 13535://(3,4) (13, 15)
		return 68;//4 4
	break;
	case 13536://(3,4) (14, 0)
		return 0;//0 0
	break;
	case 13537://(3,4) (14, 1)
		return 0;//0 0
	break;
	case 13538://(3,4) (14, 2)
		return 0;//0 0
	break;
	case 13539://(3,4) (14, 3)
		return 0;//0 0
	break;
	case 13540://(3,4) (14, 4)
		return 4;//0 4
	break;
	case 13541://(3,4) (14, 5)
		return 4;//0 4
	break;
	case 13542://(3,4) (14, 6)
		return 0;//0 0
	break;
	case 13543://(3,4) (14, 7)
		return 0;//0 0
	break;
	case 13544://(3,4) (14, 8)
		return 4;//0 4
	break;
	case 13545://(3,4) (14, 9)
		return 0;//0 0
	break;
	case 13546://(3,4) (14, 10)
		return 4;//0 4
	break;
	case 13547://(3,4) (14, 11)
		return 0;//0 0
	break;
	case 13548://(3,4) (14, 12)
		return 4;//0 4
	break;
	case 13549://(3,4) (14, 13)
		return 4;//0 4
	break;
	case 13550://(3,4) (14, 14)
		return 4;//0 4
	break;
	case 13551://(3,4) (14, 15)
		return 4;//0 4
	break;
	case 13552://(3,4) (15, 0)
		return 64;//4 0
	break;
	case 13553://(3,4) (15, 1)
		return 64;//4 0
	break;
	case 13554://(3,4) (15, 2)
		return 64;//4 0
	break;
	case 13555://(3,4) (15, 3)
		return 64;//4 0
	break;
	case 13556://(3,4) (15, 4)
		return 68;//4 4
	break;
	case 13557://(3,4) (15, 5)
		return 68;//4 4
	break;
	case 13558://(3,4) (15, 6)
		return 64;//4 0
	break;
	case 13559://(3,4) (15, 7)
		return 64;//4 0
	break;
	case 13560://(3,4) (15, 8)
		return 68;//4 4
	break;
	case 13561://(3,4) (15, 9)
		return 64;//4 0
	break;
	case 13562://(3,4) (15, 10)
		return 68;//4 4
	break;
	case 13563://(3,4) (15, 11)
		return 64;//4 0
	break;
	case 13564://(3,4) (15, 12)
		return 68;//4 4
	break;
	case 13565://(3,4) (15, 13)
		return 68;//4 4
	break;
	case 13566://(3,4) (15, 14)
		return 68;//4 4
	break;
	case 13567://(3,4) (15, 15)
		return 68;//4 4
	break;
	case 13568://(3,5) (0, 0)
		return 0;//0 0
	break;
	case 13569://(3,5) (0, 1)
		return 0;//0 0
	break;
	case 13570://(3,5) (0, 2)
		return 3;//0 3
	break;
	case 13571://(3,5) (0, 3)
		return 0;//0 0
	break;
	case 13572://(3,5) (0, 4)
		return 3;//0 3
	break;
	case 13573://(3,5) (0, 5)
		return 3;//0 3
	break;
	case 13574://(3,5) (0, 6)
		return 0;//0 0
	break;
	case 13575://(3,5) (0, 7)
		return 3;//0 3
	break;
	case 13576://(3,5) (0, 8)
		return 3;//0 3
	break;
	case 13577://(3,5) (0, 9)
		return 3;//0 3
	break;
	case 13578://(3,5) (0, 10)
		return 3;//0 3
	break;
	case 13579://(3,5) (0, 11)
		return 3;//0 3
	break;
	case 13580://(3,5) (0, 12)
		return 3;//0 3
	break;
	case 13581://(3,5) (0, 13)
		return 3;//0 3
	break;
	case 13582://(3,5) (0, 14)
		return 3;//0 3
	break;
	case 13583://(3,5) (0, 15)
		return 3;//0 3
	break;
	case 13584://(3,5) (1, 0)
		return 0;//0 0
	break;
	case 13585://(3,5) (1, 1)
		return 0;//0 0
	break;
	case 13586://(3,5) (1, 2)
		return 3;//0 3
	break;
	case 13587://(3,5) (1, 3)
		return 0;//0 0
	break;
	case 13588://(3,5) (1, 4)
		return 3;//0 3
	break;
	case 13589://(3,5) (1, 5)
		return 3;//0 3
	break;
	case 13590://(3,5) (1, 6)
		return 0;//0 0
	break;
	case 13591://(3,5) (1, 7)
		return 3;//0 3
	break;
	case 13592://(3,5) (1, 8)
		return 3;//0 3
	break;
	case 13593://(3,5) (1, 9)
		return 3;//0 3
	break;
	case 13594://(3,5) (1, 10)
		return 3;//0 3
	break;
	case 13595://(3,5) (1, 11)
		return 3;//0 3
	break;
	case 13596://(3,5) (1, 12)
		return 3;//0 3
	break;
	case 13597://(3,5) (1, 13)
		return 3;//0 3
	break;
	case 13598://(3,5) (1, 14)
		return 3;//0 3
	break;
	case 13599://(3,5) (1, 15)
		return 3;//0 3
	break;
	case 13600://(3,5) (2, 0)
		return 0;//0 0
	break;
	case 13601://(3,5) (2, 1)
		return 0;//0 0
	break;
	case 13602://(3,5) (2, 2)
		return 3;//0 3
	break;
	case 13603://(3,5) (2, 3)
		return 0;//0 0
	break;
	case 13604://(3,5) (2, 4)
		return 3;//0 3
	break;
	case 13605://(3,5) (2, 5)
		return 3;//0 3
	break;
	case 13606://(3,5) (2, 6)
		return 0;//0 0
	break;
	case 13607://(3,5) (2, 7)
		return 3;//0 3
	break;
	case 13608://(3,5) (2, 8)
		return 3;//0 3
	break;
	case 13609://(3,5) (2, 9)
		return 3;//0 3
	break;
	case 13610://(3,5) (2, 10)
		return 3;//0 3
	break;
	case 13611://(3,5) (2, 11)
		return 3;//0 3
	break;
	case 13612://(3,5) (2, 12)
		return 3;//0 3
	break;
	case 13613://(3,5) (2, 13)
		return 3;//0 3
	break;
	case 13614://(3,5) (2, 14)
		return 3;//0 3
	break;
	case 13615://(3,5) (2, 15)
		return 3;//0 3
	break;
	case 13616://(3,5) (3, 0)
		return 64;//4 0
	break;
	case 13617://(3,5) (3, 1)
		return 64;//4 0
	break;
	case 13618://(3,5) (3, 2)
		return 67;//4 3
	break;
	case 13619://(3,5) (3, 3)
		return 64;//4 0
	break;
	case 13620://(3,5) (3, 4)
		return 67;//4 3
	break;
	case 13621://(3,5) (3, 5)
		return 67;//4 3
	break;
	case 13622://(3,5) (3, 6)
		return 64;//4 0
	break;
	case 13623://(3,5) (3, 7)
		return 67;//4 3
	break;
	case 13624://(3,5) (3, 8)
		return 67;//4 3
	break;
	case 13625://(3,5) (3, 9)
		return 67;//4 3
	break;
	case 13626://(3,5) (3, 10)
		return 67;//4 3
	break;
	case 13627://(3,5) (3, 11)
		return 67;//4 3
	break;
	case 13628://(3,5) (3, 12)
		return 67;//4 3
	break;
	case 13629://(3,5) (3, 13)
		return 67;//4 3
	break;
	case 13630://(3,5) (3, 14)
		return 67;//4 3
	break;
	case 13631://(3,5) (3, 15)
		return 67;//4 3
	break;
	case 13632://(3,5) (4, 0)
		return 0;//0 0
	break;
	case 13633://(3,5) (4, 1)
		return 0;//0 0
	break;
	case 13634://(3,5) (4, 2)
		return 3;//0 3
	break;
	case 13635://(3,5) (4, 3)
		return 0;//0 0
	break;
	case 13636://(3,5) (4, 4)
		return 3;//0 3
	break;
	case 13637://(3,5) (4, 5)
		return 3;//0 3
	break;
	case 13638://(3,5) (4, 6)
		return 0;//0 0
	break;
	case 13639://(3,5) (4, 7)
		return 3;//0 3
	break;
	case 13640://(3,5) (4, 8)
		return 3;//0 3
	break;
	case 13641://(3,5) (4, 9)
		return 3;//0 3
	break;
	case 13642://(3,5) (4, 10)
		return 3;//0 3
	break;
	case 13643://(3,5) (4, 11)
		return 3;//0 3
	break;
	case 13644://(3,5) (4, 12)
		return 3;//0 3
	break;
	case 13645://(3,5) (4, 13)
		return 3;//0 3
	break;
	case 13646://(3,5) (4, 14)
		return 3;//0 3
	break;
	case 13647://(3,5) (4, 15)
		return 3;//0 3
	break;
	case 13648://(3,5) (5, 0)
		return 0;//0 0
	break;
	case 13649://(3,5) (5, 1)
		return 0;//0 0
	break;
	case 13650://(3,5) (5, 2)
		return 3;//0 3
	break;
	case 13651://(3,5) (5, 3)
		return 0;//0 0
	break;
	case 13652://(3,5) (5, 4)
		return 3;//0 3
	break;
	case 13653://(3,5) (5, 5)
		return 3;//0 3
	break;
	case 13654://(3,5) (5, 6)
		return 0;//0 0
	break;
	case 13655://(3,5) (5, 7)
		return 3;//0 3
	break;
	case 13656://(3,5) (5, 8)
		return 3;//0 3
	break;
	case 13657://(3,5) (5, 9)
		return 3;//0 3
	break;
	case 13658://(3,5) (5, 10)
		return 3;//0 3
	break;
	case 13659://(3,5) (5, 11)
		return 3;//0 3
	break;
	case 13660://(3,5) (5, 12)
		return 3;//0 3
	break;
	case 13661://(3,5) (5, 13)
		return 3;//0 3
	break;
	case 13662://(3,5) (5, 14)
		return 3;//0 3
	break;
	case 13663://(3,5) (5, 15)
		return 3;//0 3
	break;
	case 13664://(3,5) (6, 0)
		return 64;//4 0
	break;
	case 13665://(3,5) (6, 1)
		return 64;//4 0
	break;
	case 13666://(3,5) (6, 2)
		return 67;//4 3
	break;
	case 13667://(3,5) (6, 3)
		return 64;//4 0
	break;
	case 13668://(3,5) (6, 4)
		return 67;//4 3
	break;
	case 13669://(3,5) (6, 5)
		return 67;//4 3
	break;
	case 13670://(3,5) (6, 6)
		return 64;//4 0
	break;
	case 13671://(3,5) (6, 7)
		return 67;//4 3
	break;
	case 13672://(3,5) (6, 8)
		return 67;//4 3
	break;
	case 13673://(3,5) (6, 9)
		return 67;//4 3
	break;
	case 13674://(3,5) (6, 10)
		return 67;//4 3
	break;
	case 13675://(3,5) (6, 11)
		return 67;//4 3
	break;
	case 13676://(3,5) (6, 12)
		return 67;//4 3
	break;
	case 13677://(3,5) (6, 13)
		return 67;//4 3
	break;
	case 13678://(3,5) (6, 14)
		return 67;//4 3
	break;
	case 13679://(3,5) (6, 15)
		return 67;//4 3
	break;
	case 13680://(3,5) (7, 0)
		return 64;//4 0
	break;
	case 13681://(3,5) (7, 1)
		return 64;//4 0
	break;
	case 13682://(3,5) (7, 2)
		return 67;//4 3
	break;
	case 13683://(3,5) (7, 3)
		return 64;//4 0
	break;
	case 13684://(3,5) (7, 4)
		return 67;//4 3
	break;
	case 13685://(3,5) (7, 5)
		return 67;//4 3
	break;
	case 13686://(3,5) (7, 6)
		return 64;//4 0
	break;
	case 13687://(3,5) (7, 7)
		return 67;//4 3
	break;
	case 13688://(3,5) (7, 8)
		return 67;//4 3
	break;
	case 13689://(3,5) (7, 9)
		return 67;//4 3
	break;
	case 13690://(3,5) (7, 10)
		return 67;//4 3
	break;
	case 13691://(3,5) (7, 11)
		return 67;//4 3
	break;
	case 13692://(3,5) (7, 12)
		return 67;//4 3
	break;
	case 13693://(3,5) (7, 13)
		return 67;//4 3
	break;
	case 13694://(3,5) (7, 14)
		return 67;//4 3
	break;
	case 13695://(3,5) (7, 15)
		return 67;//4 3
	break;
	case 13696://(3,5) (8, 0)
		return 0;//0 0
	break;
	case 13697://(3,5) (8, 1)
		return 0;//0 0
	break;
	case 13698://(3,5) (8, 2)
		return 3;//0 3
	break;
	case 13699://(3,5) (8, 3)
		return 0;//0 0
	break;
	case 13700://(3,5) (8, 4)
		return 3;//0 3
	break;
	case 13701://(3,5) (8, 5)
		return 3;//0 3
	break;
	case 13702://(3,5) (8, 6)
		return 0;//0 0
	break;
	case 13703://(3,5) (8, 7)
		return 3;//0 3
	break;
	case 13704://(3,5) (8, 8)
		return 3;//0 3
	break;
	case 13705://(3,5) (8, 9)
		return 3;//0 3
	break;
	case 13706://(3,5) (8, 10)
		return 3;//0 3
	break;
	case 13707://(3,5) (8, 11)
		return 3;//0 3
	break;
	case 13708://(3,5) (8, 12)
		return 3;//0 3
	break;
	case 13709://(3,5) (8, 13)
		return 3;//0 3
	break;
	case 13710://(3,5) (8, 14)
		return 3;//0 3
	break;
	case 13711://(3,5) (8, 15)
		return 3;//0 3
	break;
	case 13712://(3,5) (9, 0)
		return 0;//0 0
	break;
	case 13713://(3,5) (9, 1)
		return 0;//0 0
	break;
	case 13714://(3,5) (9, 2)
		return 3;//0 3
	break;
	case 13715://(3,5) (9, 3)
		return 0;//0 0
	break;
	case 13716://(3,5) (9, 4)
		return 3;//0 3
	break;
	case 13717://(3,5) (9, 5)
		return 3;//0 3
	break;
	case 13718://(3,5) (9, 6)
		return 0;//0 0
	break;
	case 13719://(3,5) (9, 7)
		return 3;//0 3
	break;
	case 13720://(3,5) (9, 8)
		return 3;//0 3
	break;
	case 13721://(3,5) (9, 9)
		return 3;//0 3
	break;
	case 13722://(3,5) (9, 10)
		return 3;//0 3
	break;
	case 13723://(3,5) (9, 11)
		return 3;//0 3
	break;
	case 13724://(3,5) (9, 12)
		return 3;//0 3
	break;
	case 13725://(3,5) (9, 13)
		return 3;//0 3
	break;
	case 13726://(3,5) (9, 14)
		return 3;//0 3
	break;
	case 13727://(3,5) (9, 15)
		return 3;//0 3
	break;
	case 13728://(3,5) (10, 0)
		return 64;//4 0
	break;
	case 13729://(3,5) (10, 1)
		return 64;//4 0
	break;
	case 13730://(3,5) (10, 2)
		return 67;//4 3
	break;
	case 13731://(3,5) (10, 3)
		return 64;//4 0
	break;
	case 13732://(3,5) (10, 4)
		return 67;//4 3
	break;
	case 13733://(3,5) (10, 5)
		return 67;//4 3
	break;
	case 13734://(3,5) (10, 6)
		return 64;//4 0
	break;
	case 13735://(3,5) (10, 7)
		return 67;//4 3
	break;
	case 13736://(3,5) (10, 8)
		return 67;//4 3
	break;
	case 13737://(3,5) (10, 9)
		return 67;//4 3
	break;
	case 13738://(3,5) (10, 10)
		return 67;//4 3
	break;
	case 13739://(3,5) (10, 11)
		return 67;//4 3
	break;
	case 13740://(3,5) (10, 12)
		return 67;//4 3
	break;
	case 13741://(3,5) (10, 13)
		return 67;//4 3
	break;
	case 13742://(3,5) (10, 14)
		return 67;//4 3
	break;
	case 13743://(3,5) (10, 15)
		return 67;//4 3
	break;
	case 13744://(3,5) (11, 0)
		return 64;//4 0
	break;
	case 13745://(3,5) (11, 1)
		return 64;//4 0
	break;
	case 13746://(3,5) (11, 2)
		return 67;//4 3
	break;
	case 13747://(3,5) (11, 3)
		return 64;//4 0
	break;
	case 13748://(3,5) (11, 4)
		return 67;//4 3
	break;
	case 13749://(3,5) (11, 5)
		return 67;//4 3
	break;
	case 13750://(3,5) (11, 6)
		return 64;//4 0
	break;
	case 13751://(3,5) (11, 7)
		return 67;//4 3
	break;
	case 13752://(3,5) (11, 8)
		return 67;//4 3
	break;
	case 13753://(3,5) (11, 9)
		return 67;//4 3
	break;
	case 13754://(3,5) (11, 10)
		return 67;//4 3
	break;
	case 13755://(3,5) (11, 11)
		return 67;//4 3
	break;
	case 13756://(3,5) (11, 12)
		return 67;//4 3
	break;
	case 13757://(3,5) (11, 13)
		return 67;//4 3
	break;
	case 13758://(3,5) (11, 14)
		return 67;//4 3
	break;
	case 13759://(3,5) (11, 15)
		return 67;//4 3
	break;
	case 13760://(3,5) (12, 0)
		return 64;//4 0
	break;
	case 13761://(3,5) (12, 1)
		return 64;//4 0
	break;
	case 13762://(3,5) (12, 2)
		return 67;//4 3
	break;
	case 13763://(3,5) (12, 3)
		return 64;//4 0
	break;
	case 13764://(3,5) (12, 4)
		return 67;//4 3
	break;
	case 13765://(3,5) (12, 5)
		return 67;//4 3
	break;
	case 13766://(3,5) (12, 6)
		return 64;//4 0
	break;
	case 13767://(3,5) (12, 7)
		return 67;//4 3
	break;
	case 13768://(3,5) (12, 8)
		return 67;//4 3
	break;
	case 13769://(3,5) (12, 9)
		return 67;//4 3
	break;
	case 13770://(3,5) (12, 10)
		return 67;//4 3
	break;
	case 13771://(3,5) (12, 11)
		return 67;//4 3
	break;
	case 13772://(3,5) (12, 12)
		return 67;//4 3
	break;
	case 13773://(3,5) (12, 13)
		return 67;//4 3
	break;
	case 13774://(3,5) (12, 14)
		return 67;//4 3
	break;
	case 13775://(3,5) (12, 15)
		return 67;//4 3
	break;
	case 13776://(3,5) (13, 0)
		return 64;//4 0
	break;
	case 13777://(3,5) (13, 1)
		return 64;//4 0
	break;
	case 13778://(3,5) (13, 2)
		return 67;//4 3
	break;
	case 13779://(3,5) (13, 3)
		return 64;//4 0
	break;
	case 13780://(3,5) (13, 4)
		return 67;//4 3
	break;
	case 13781://(3,5) (13, 5)
		return 67;//4 3
	break;
	case 13782://(3,5) (13, 6)
		return 64;//4 0
	break;
	case 13783://(3,5) (13, 7)
		return 67;//4 3
	break;
	case 13784://(3,5) (13, 8)
		return 67;//4 3
	break;
	case 13785://(3,5) (13, 9)
		return 67;//4 3
	break;
	case 13786://(3,5) (13, 10)
		return 67;//4 3
	break;
	case 13787://(3,5) (13, 11)
		return 67;//4 3
	break;
	case 13788://(3,5) (13, 12)
		return 67;//4 3
	break;
	case 13789://(3,5) (13, 13)
		return 67;//4 3
	break;
	case 13790://(3,5) (13, 14)
		return 67;//4 3
	break;
	case 13791://(3,5) (13, 15)
		return 67;//4 3
	break;
	case 13792://(3,5) (14, 0)
		return 0;//0 0
	break;
	case 13793://(3,5) (14, 1)
		return 0;//0 0
	break;
	case 13794://(3,5) (14, 2)
		return 3;//0 3
	break;
	case 13795://(3,5) (14, 3)
		return 0;//0 0
	break;
	case 13796://(3,5) (14, 4)
		return 3;//0 3
	break;
	case 13797://(3,5) (14, 5)
		return 3;//0 3
	break;
	case 13798://(3,5) (14, 6)
		return 0;//0 0
	break;
	case 13799://(3,5) (14, 7)
		return 3;//0 3
	break;
	case 13800://(3,5) (14, 8)
		return 3;//0 3
	break;
	case 13801://(3,5) (14, 9)
		return 3;//0 3
	break;
	case 13802://(3,5) (14, 10)
		return 3;//0 3
	break;
	case 13803://(3,5) (14, 11)
		return 3;//0 3
	break;
	case 13804://(3,5) (14, 12)
		return 3;//0 3
	break;
	case 13805://(3,5) (14, 13)
		return 3;//0 3
	break;
	case 13806://(3,5) (14, 14)
		return 3;//0 3
	break;
	case 13807://(3,5) (14, 15)
		return 3;//0 3
	break;
	case 13808://(3,5) (15, 0)
		return 64;//4 0
	break;
	case 13809://(3,5) (15, 1)
		return 64;//4 0
	break;
	case 13810://(3,5) (15, 2)
		return 67;//4 3
	break;
	case 13811://(3,5) (15, 3)
		return 64;//4 0
	break;
	case 13812://(3,5) (15, 4)
		return 67;//4 3
	break;
	case 13813://(3,5) (15, 5)
		return 67;//4 3
	break;
	case 13814://(3,5) (15, 6)
		return 64;//4 0
	break;
	case 13815://(3,5) (15, 7)
		return 67;//4 3
	break;
	case 13816://(3,5) (15, 8)
		return 67;//4 3
	break;
	case 13817://(3,5) (15, 9)
		return 67;//4 3
	break;
	case 13818://(3,5) (15, 10)
		return 67;//4 3
	break;
	case 13819://(3,5) (15, 11)
		return 67;//4 3
	break;
	case 13820://(3,5) (15, 12)
		return 67;//4 3
	break;
	case 13821://(3,5) (15, 13)
		return 67;//4 3
	break;
	case 13822://(3,5) (15, 14)
		return 67;//4 3
	break;
	case 13823://(3,5) (15, 15)
		return 67;//4 3
	break;
	case 13824://(3,6) (0, 0)
		return 0;//0 0
	break;
	case 13825://(3,6) (0, 1)
		return 3;//0 3
	break;
	case 13826://(3,6) (0, 2)
		return 0;//0 0
	break;
	case 13827://(3,6) (0, 3)
		return 3;//0 3
	break;
	case 13828://(3,6) (0, 4)
		return 0;//0 0
	break;
	case 13829://(3,6) (0, 5)
		return 0;//0 0
	break;
	case 13830://(3,6) (0, 6)
		return 3;//0 3
	break;
	case 13831://(3,6) (0, 7)
		return 3;//0 3
	break;
	case 13832://(3,6) (0, 8)
		return 3;//0 3
	break;
	case 13833://(3,6) (0, 9)
		return 3;//0 3
	break;
	case 13834://(3,6) (0, 10)
		return 3;//0 3
	break;
	case 13835://(3,6) (0, 11)
		return 3;//0 3
	break;
	case 13836://(3,6) (0, 12)
		return 3;//0 3
	break;
	case 13837://(3,6) (0, 13)
		return 3;//0 3
	break;
	case 13838://(3,6) (0, 14)
		return 3;//0 3
	break;
	case 13839://(3,6) (0, 15)
		return 3;//0 3
	break;
	case 13840://(3,6) (1, 0)
		return 0;//0 0
	break;
	case 13841://(3,6) (1, 1)
		return 3;//0 3
	break;
	case 13842://(3,6) (1, 2)
		return 0;//0 0
	break;
	case 13843://(3,6) (1, 3)
		return 3;//0 3
	break;
	case 13844://(3,6) (1, 4)
		return 0;//0 0
	break;
	case 13845://(3,6) (1, 5)
		return 0;//0 0
	break;
	case 13846://(3,6) (1, 6)
		return 3;//0 3
	break;
	case 13847://(3,6) (1, 7)
		return 3;//0 3
	break;
	case 13848://(3,6) (1, 8)
		return 3;//0 3
	break;
	case 13849://(3,6) (1, 9)
		return 3;//0 3
	break;
	case 13850://(3,6) (1, 10)
		return 3;//0 3
	break;
	case 13851://(3,6) (1, 11)
		return 3;//0 3
	break;
	case 13852://(3,6) (1, 12)
		return 3;//0 3
	break;
	case 13853://(3,6) (1, 13)
		return 3;//0 3
	break;
	case 13854://(3,6) (1, 14)
		return 3;//0 3
	break;
	case 13855://(3,6) (1, 15)
		return 3;//0 3
	break;
	case 13856://(3,6) (2, 0)
		return 0;//0 0
	break;
	case 13857://(3,6) (2, 1)
		return 3;//0 3
	break;
	case 13858://(3,6) (2, 2)
		return 0;//0 0
	break;
	case 13859://(3,6) (2, 3)
		return 3;//0 3
	break;
	case 13860://(3,6) (2, 4)
		return 0;//0 0
	break;
	case 13861://(3,6) (2, 5)
		return 0;//0 0
	break;
	case 13862://(3,6) (2, 6)
		return 3;//0 3
	break;
	case 13863://(3,6) (2, 7)
		return 3;//0 3
	break;
	case 13864://(3,6) (2, 8)
		return 3;//0 3
	break;
	case 13865://(3,6) (2, 9)
		return 3;//0 3
	break;
	case 13866://(3,6) (2, 10)
		return 3;//0 3
	break;
	case 13867://(3,6) (2, 11)
		return 3;//0 3
	break;
	case 13868://(3,6) (2, 12)
		return 3;//0 3
	break;
	case 13869://(3,6) (2, 13)
		return 3;//0 3
	break;
	case 13870://(3,6) (2, 14)
		return 3;//0 3
	break;
	case 13871://(3,6) (2, 15)
		return 3;//0 3
	break;
	case 13872://(3,6) (3, 0)
		return 64;//4 0
	break;
	case 13873://(3,6) (3, 1)
		return 67;//4 3
	break;
	case 13874://(3,6) (3, 2)
		return 64;//4 0
	break;
	case 13875://(3,6) (3, 3)
		return 67;//4 3
	break;
	case 13876://(3,6) (3, 4)
		return 64;//4 0
	break;
	case 13877://(3,6) (3, 5)
		return 64;//4 0
	break;
	case 13878://(3,6) (3, 6)
		return 67;//4 3
	break;
	case 13879://(3,6) (3, 7)
		return 67;//4 3
	break;
	case 13880://(3,6) (3, 8)
		return 67;//4 3
	break;
	case 13881://(3,6) (3, 9)
		return 67;//4 3
	break;
	case 13882://(3,6) (3, 10)
		return 67;//4 3
	break;
	case 13883://(3,6) (3, 11)
		return 67;//4 3
	break;
	case 13884://(3,6) (3, 12)
		return 67;//4 3
	break;
	case 13885://(3,6) (3, 13)
		return 67;//4 3
	break;
	case 13886://(3,6) (3, 14)
		return 67;//4 3
	break;
	case 13887://(3,6) (3, 15)
		return 67;//4 3
	break;
	case 13888://(3,6) (4, 0)
		return 0;//0 0
	break;
	case 13889://(3,6) (4, 1)
		return 3;//0 3
	break;
	case 13890://(3,6) (4, 2)
		return 0;//0 0
	break;
	case 13891://(3,6) (4, 3)
		return 3;//0 3
	break;
	case 13892://(3,6) (4, 4)
		return 0;//0 0
	break;
	case 13893://(3,6) (4, 5)
		return 0;//0 0
	break;
	case 13894://(3,6) (4, 6)
		return 3;//0 3
	break;
	case 13895://(3,6) (4, 7)
		return 3;//0 3
	break;
	case 13896://(3,6) (4, 8)
		return 3;//0 3
	break;
	case 13897://(3,6) (4, 9)
		return 3;//0 3
	break;
	case 13898://(3,6) (4, 10)
		return 3;//0 3
	break;
	case 13899://(3,6) (4, 11)
		return 3;//0 3
	break;
	case 13900://(3,6) (4, 12)
		return 3;//0 3
	break;
	case 13901://(3,6) (4, 13)
		return 3;//0 3
	break;
	case 13902://(3,6) (4, 14)
		return 3;//0 3
	break;
	case 13903://(3,6) (4, 15)
		return 3;//0 3
	break;
	case 13904://(3,6) (5, 0)
		return 0;//0 0
	break;
	case 13905://(3,6) (5, 1)
		return 3;//0 3
	break;
	case 13906://(3,6) (5, 2)
		return 0;//0 0
	break;
	case 13907://(3,6) (5, 3)
		return 3;//0 3
	break;
	case 13908://(3,6) (5, 4)
		return 0;//0 0
	break;
	case 13909://(3,6) (5, 5)
		return 0;//0 0
	break;
	case 13910://(3,6) (5, 6)
		return 3;//0 3
	break;
	case 13911://(3,6) (5, 7)
		return 3;//0 3
	break;
	case 13912://(3,6) (5, 8)
		return 3;//0 3
	break;
	case 13913://(3,6) (5, 9)
		return 3;//0 3
	break;
	case 13914://(3,6) (5, 10)
		return 3;//0 3
	break;
	case 13915://(3,6) (5, 11)
		return 3;//0 3
	break;
	case 13916://(3,6) (5, 12)
		return 3;//0 3
	break;
	case 13917://(3,6) (5, 13)
		return 3;//0 3
	break;
	case 13918://(3,6) (5, 14)
		return 3;//0 3
	break;
	case 13919://(3,6) (5, 15)
		return 3;//0 3
	break;
	case 13920://(3,6) (6, 0)
		return 64;//4 0
	break;
	case 13921://(3,6) (6, 1)
		return 67;//4 3
	break;
	case 13922://(3,6) (6, 2)
		return 64;//4 0
	break;
	case 13923://(3,6) (6, 3)
		return 67;//4 3
	break;
	case 13924://(3,6) (6, 4)
		return 64;//4 0
	break;
	case 13925://(3,6) (6, 5)
		return 64;//4 0
	break;
	case 13926://(3,6) (6, 6)
		return 67;//4 3
	break;
	case 13927://(3,6) (6, 7)
		return 67;//4 3
	break;
	case 13928://(3,6) (6, 8)
		return 67;//4 3
	break;
	case 13929://(3,6) (6, 9)
		return 67;//4 3
	break;
	case 13930://(3,6) (6, 10)
		return 67;//4 3
	break;
	case 13931://(3,6) (6, 11)
		return 67;//4 3
	break;
	case 13932://(3,6) (6, 12)
		return 67;//4 3
	break;
	case 13933://(3,6) (6, 13)
		return 67;//4 3
	break;
	case 13934://(3,6) (6, 14)
		return 67;//4 3
	break;
	case 13935://(3,6) (6, 15)
		return 67;//4 3
	break;
	case 13936://(3,6) (7, 0)
		return 64;//4 0
	break;
	case 13937://(3,6) (7, 1)
		return 67;//4 3
	break;
	case 13938://(3,6) (7, 2)
		return 64;//4 0
	break;
	case 13939://(3,6) (7, 3)
		return 67;//4 3
	break;
	case 13940://(3,6) (7, 4)
		return 64;//4 0
	break;
	case 13941://(3,6) (7, 5)
		return 64;//4 0
	break;
	case 13942://(3,6) (7, 6)
		return 67;//4 3
	break;
	case 13943://(3,6) (7, 7)
		return 67;//4 3
	break;
	case 13944://(3,6) (7, 8)
		return 67;//4 3
	break;
	case 13945://(3,6) (7, 9)
		return 67;//4 3
	break;
	case 13946://(3,6) (7, 10)
		return 67;//4 3
	break;
	case 13947://(3,6) (7, 11)
		return 67;//4 3
	break;
	case 13948://(3,6) (7, 12)
		return 67;//4 3
	break;
	case 13949://(3,6) (7, 13)
		return 67;//4 3
	break;
	case 13950://(3,6) (7, 14)
		return 67;//4 3
	break;
	case 13951://(3,6) (7, 15)
		return 67;//4 3
	break;
	case 13952://(3,6) (8, 0)
		return 0;//0 0
	break;
	case 13953://(3,6) (8, 1)
		return 3;//0 3
	break;
	case 13954://(3,6) (8, 2)
		return 0;//0 0
	break;
	case 13955://(3,6) (8, 3)
		return 3;//0 3
	break;
	case 13956://(3,6) (8, 4)
		return 0;//0 0
	break;
	case 13957://(3,6) (8, 5)
		return 0;//0 0
	break;
	case 13958://(3,6) (8, 6)
		return 3;//0 3
	break;
	case 13959://(3,6) (8, 7)
		return 3;//0 3
	break;
	case 13960://(3,6) (8, 8)
		return 3;//0 3
	break;
	case 13961://(3,6) (8, 9)
		return 3;//0 3
	break;
	case 13962://(3,6) (8, 10)
		return 3;//0 3
	break;
	case 13963://(3,6) (8, 11)
		return 3;//0 3
	break;
	case 13964://(3,6) (8, 12)
		return 3;//0 3
	break;
	case 13965://(3,6) (8, 13)
		return 3;//0 3
	break;
	case 13966://(3,6) (8, 14)
		return 3;//0 3
	break;
	case 13967://(3,6) (8, 15)
		return 3;//0 3
	break;
	case 13968://(3,6) (9, 0)
		return 0;//0 0
	break;
	case 13969://(3,6) (9, 1)
		return 3;//0 3
	break;
	case 13970://(3,6) (9, 2)
		return 0;//0 0
	break;
	case 13971://(3,6) (9, 3)
		return 3;//0 3
	break;
	case 13972://(3,6) (9, 4)
		return 0;//0 0
	break;
	case 13973://(3,6) (9, 5)
		return 0;//0 0
	break;
	case 13974://(3,6) (9, 6)
		return 3;//0 3
	break;
	case 13975://(3,6) (9, 7)
		return 3;//0 3
	break;
	case 13976://(3,6) (9, 8)
		return 3;//0 3
	break;
	case 13977://(3,6) (9, 9)
		return 3;//0 3
	break;
	case 13978://(3,6) (9, 10)
		return 3;//0 3
	break;
	case 13979://(3,6) (9, 11)
		return 3;//0 3
	break;
	case 13980://(3,6) (9, 12)
		return 3;//0 3
	break;
	case 13981://(3,6) (9, 13)
		return 3;//0 3
	break;
	case 13982://(3,6) (9, 14)
		return 3;//0 3
	break;
	case 13983://(3,6) (9, 15)
		return 3;//0 3
	break;
	case 13984://(3,6) (10, 0)
		return 64;//4 0
	break;
	case 13985://(3,6) (10, 1)
		return 67;//4 3
	break;
	case 13986://(3,6) (10, 2)
		return 64;//4 0
	break;
	case 13987://(3,6) (10, 3)
		return 67;//4 3
	break;
	case 13988://(3,6) (10, 4)
		return 64;//4 0
	break;
	case 13989://(3,6) (10, 5)
		return 64;//4 0
	break;
	case 13990://(3,6) (10, 6)
		return 67;//4 3
	break;
	case 13991://(3,6) (10, 7)
		return 67;//4 3
	break;
	case 13992://(3,6) (10, 8)
		return 67;//4 3
	break;
	case 13993://(3,6) (10, 9)
		return 67;//4 3
	break;
	case 13994://(3,6) (10, 10)
		return 67;//4 3
	break;
	case 13995://(3,6) (10, 11)
		return 67;//4 3
	break;
	case 13996://(3,6) (10, 12)
		return 67;//4 3
	break;
	case 13997://(3,6) (10, 13)
		return 67;//4 3
	break;
	case 13998://(3,6) (10, 14)
		return 67;//4 3
	break;
	case 13999://(3,6) (10, 15)
		return 67;//4 3
	break;
	case 14000://(3,6) (11, 0)
		return 64;//4 0
	break;
	case 14001://(3,6) (11, 1)
		return 67;//4 3
	break;
	case 14002://(3,6) (11, 2)
		return 64;//4 0
	break;
	case 14003://(3,6) (11, 3)
		return 67;//4 3
	break;
	case 14004://(3,6) (11, 4)
		return 64;//4 0
	break;
	case 14005://(3,6) (11, 5)
		return 64;//4 0
	break;
	case 14006://(3,6) (11, 6)
		return 67;//4 3
	break;
	case 14007://(3,6) (11, 7)
		return 67;//4 3
	break;
	case 14008://(3,6) (11, 8)
		return 67;//4 3
	break;
	case 14009://(3,6) (11, 9)
		return 67;//4 3
	break;
	case 14010://(3,6) (11, 10)
		return 67;//4 3
	break;
	case 14011://(3,6) (11, 11)
		return 67;//4 3
	break;
	case 14012://(3,6) (11, 12)
		return 67;//4 3
	break;
	case 14013://(3,6) (11, 13)
		return 67;//4 3
	break;
	case 14014://(3,6) (11, 14)
		return 67;//4 3
	break;
	case 14015://(3,6) (11, 15)
		return 67;//4 3
	break;
	case 14016://(3,6) (12, 0)
		return 64;//4 0
	break;
	case 14017://(3,6) (12, 1)
		return 67;//4 3
	break;
	case 14018://(3,6) (12, 2)
		return 64;//4 0
	break;
	case 14019://(3,6) (12, 3)
		return 67;//4 3
	break;
	case 14020://(3,6) (12, 4)
		return 64;//4 0
	break;
	case 14021://(3,6) (12, 5)
		return 64;//4 0
	break;
	case 14022://(3,6) (12, 6)
		return 67;//4 3
	break;
	case 14023://(3,6) (12, 7)
		return 67;//4 3
	break;
	case 14024://(3,6) (12, 8)
		return 67;//4 3
	break;
	case 14025://(3,6) (12, 9)
		return 67;//4 3
	break;
	case 14026://(3,6) (12, 10)
		return 67;//4 3
	break;
	case 14027://(3,6) (12, 11)
		return 67;//4 3
	break;
	case 14028://(3,6) (12, 12)
		return 67;//4 3
	break;
	case 14029://(3,6) (12, 13)
		return 67;//4 3
	break;
	case 14030://(3,6) (12, 14)
		return 67;//4 3
	break;
	case 14031://(3,6) (12, 15)
		return 67;//4 3
	break;
	case 14032://(3,6) (13, 0)
		return 64;//4 0
	break;
	case 14033://(3,6) (13, 1)
		return 67;//4 3
	break;
	case 14034://(3,6) (13, 2)
		return 64;//4 0
	break;
	case 14035://(3,6) (13, 3)
		return 67;//4 3
	break;
	case 14036://(3,6) (13, 4)
		return 64;//4 0
	break;
	case 14037://(3,6) (13, 5)
		return 64;//4 0
	break;
	case 14038://(3,6) (13, 6)
		return 67;//4 3
	break;
	case 14039://(3,6) (13, 7)
		return 67;//4 3
	break;
	case 14040://(3,6) (13, 8)
		return 67;//4 3
	break;
	case 14041://(3,6) (13, 9)
		return 67;//4 3
	break;
	case 14042://(3,6) (13, 10)
		return 67;//4 3
	break;
	case 14043://(3,6) (13, 11)
		return 67;//4 3
	break;
	case 14044://(3,6) (13, 12)
		return 67;//4 3
	break;
	case 14045://(3,6) (13, 13)
		return 67;//4 3
	break;
	case 14046://(3,6) (13, 14)
		return 67;//4 3
	break;
	case 14047://(3,6) (13, 15)
		return 67;//4 3
	break;
	case 14048://(3,6) (14, 0)
		return 0;//0 0
	break;
	case 14049://(3,6) (14, 1)
		return 3;//0 3
	break;
	case 14050://(3,6) (14, 2)
		return 0;//0 0
	break;
	case 14051://(3,6) (14, 3)
		return 3;//0 3
	break;
	case 14052://(3,6) (14, 4)
		return 0;//0 0
	break;
	case 14053://(3,6) (14, 5)
		return 0;//0 0
	break;
	case 14054://(3,6) (14, 6)
		return 3;//0 3
	break;
	case 14055://(3,6) (14, 7)
		return 3;//0 3
	break;
	case 14056://(3,6) (14, 8)
		return 3;//0 3
	break;
	case 14057://(3,6) (14, 9)
		return 3;//0 3
	break;
	case 14058://(3,6) (14, 10)
		return 3;//0 3
	break;
	case 14059://(3,6) (14, 11)
		return 3;//0 3
	break;
	case 14060://(3,6) (14, 12)
		return 3;//0 3
	break;
	case 14061://(3,6) (14, 13)
		return 3;//0 3
	break;
	case 14062://(3,6) (14, 14)
		return 3;//0 3
	break;
	case 14063://(3,6) (14, 15)
		return 3;//0 3
	break;
	case 14064://(3,6) (15, 0)
		return 64;//4 0
	break;
	case 14065://(3,6) (15, 1)
		return 67;//4 3
	break;
	case 14066://(3,6) (15, 2)
		return 64;//4 0
	break;
	case 14067://(3,6) (15, 3)
		return 67;//4 3
	break;
	case 14068://(3,6) (15, 4)
		return 64;//4 0
	break;
	case 14069://(3,6) (15, 5)
		return 64;//4 0
	break;
	case 14070://(3,6) (15, 6)
		return 67;//4 3
	break;
	case 14071://(3,6) (15, 7)
		return 67;//4 3
	break;
	case 14072://(3,6) (15, 8)
		return 67;//4 3
	break;
	case 14073://(3,6) (15, 9)
		return 67;//4 3
	break;
	case 14074://(3,6) (15, 10)
		return 67;//4 3
	break;
	case 14075://(3,6) (15, 11)
		return 67;//4 3
	break;
	case 14076://(3,6) (15, 12)
		return 67;//4 3
	break;
	case 14077://(3,6) (15, 13)
		return 67;//4 3
	break;
	case 14078://(3,6) (15, 14)
		return 67;//4 3
	break;
	case 14079://(3,6) (15, 15)
		return 67;//4 3
	break;
	case 14080://(3,7) (0, 0)
		return 0;//0 0
	break;
	case 14081://(3,7) (0, 1)
		return 0;//0 0
	break;
	case 14082://(3,7) (0, 2)
		return 3;//0 3
	break;
	case 14083://(3,7) (0, 3)
		return 3;//0 3
	break;
	case 14084://(3,7) (0, 4)
		return 0;//0 0
	break;
	case 14085://(3,7) (0, 5)
		return 3;//0 3
	break;
	case 14086://(3,7) (0, 6)
		return 3;//0 3
	break;
	case 14087://(3,7) (0, 7)
		return 3;//0 3
	break;
	case 14088://(3,7) (0, 8)
		return 0;//0 0
	break;
	case 14089://(3,7) (0, 9)
		return 3;//0 3
	break;
	case 14090://(3,7) (0, 10)
		return 3;//0 3
	break;
	case 14091://(3,7) (0, 11)
		return 3;//0 3
	break;
	case 14092://(3,7) (0, 12)
		return 3;//0 3
	break;
	case 14093://(3,7) (0, 13)
		return 3;//0 3
	break;
	case 14094://(3,7) (0, 14)
		return 3;//0 3
	break;
	case 14095://(3,7) (0, 15)
		return 3;//0 3
	break;
	case 14096://(3,7) (1, 0)
		return 0;//0 0
	break;
	case 14097://(3,7) (1, 1)
		return 0;//0 0
	break;
	case 14098://(3,7) (1, 2)
		return 3;//0 3
	break;
	case 14099://(3,7) (1, 3)
		return 3;//0 3
	break;
	case 14100://(3,7) (1, 4)
		return 0;//0 0
	break;
	case 14101://(3,7) (1, 5)
		return 3;//0 3
	break;
	case 14102://(3,7) (1, 6)
		return 3;//0 3
	break;
	case 14103://(3,7) (1, 7)
		return 3;//0 3
	break;
	case 14104://(3,7) (1, 8)
		return 0;//0 0
	break;
	case 14105://(3,7) (1, 9)
		return 3;//0 3
	break;
	case 14106://(3,7) (1, 10)
		return 3;//0 3
	break;
	case 14107://(3,7) (1, 11)
		return 3;//0 3
	break;
	case 14108://(3,7) (1, 12)
		return 3;//0 3
	break;
	case 14109://(3,7) (1, 13)
		return 3;//0 3
	break;
	case 14110://(3,7) (1, 14)
		return 3;//0 3
	break;
	case 14111://(3,7) (1, 15)
		return 3;//0 3
	break;
	case 14112://(3,7) (2, 0)
		return 0;//0 0
	break;
	case 14113://(3,7) (2, 1)
		return 0;//0 0
	break;
	case 14114://(3,7) (2, 2)
		return 3;//0 3
	break;
	case 14115://(3,7) (2, 3)
		return 3;//0 3
	break;
	case 14116://(3,7) (2, 4)
		return 0;//0 0
	break;
	case 14117://(3,7) (2, 5)
		return 3;//0 3
	break;
	case 14118://(3,7) (2, 6)
		return 3;//0 3
	break;
	case 14119://(3,7) (2, 7)
		return 3;//0 3
	break;
	case 14120://(3,7) (2, 8)
		return 0;//0 0
	break;
	case 14121://(3,7) (2, 9)
		return 3;//0 3
	break;
	case 14122://(3,7) (2, 10)
		return 3;//0 3
	break;
	case 14123://(3,7) (2, 11)
		return 3;//0 3
	break;
	case 14124://(3,7) (2, 12)
		return 3;//0 3
	break;
	case 14125://(3,7) (2, 13)
		return 3;//0 3
	break;
	case 14126://(3,7) (2, 14)
		return 3;//0 3
	break;
	case 14127://(3,7) (2, 15)
		return 3;//0 3
	break;
	case 14128://(3,7) (3, 0)
		return 64;//4 0
	break;
	case 14129://(3,7) (3, 1)
		return 64;//4 0
	break;
	case 14130://(3,7) (3, 2)
		return 67;//4 3
	break;
	case 14131://(3,7) (3, 3)
		return 67;//4 3
	break;
	case 14132://(3,7) (3, 4)
		return 64;//4 0
	break;
	case 14133://(3,7) (3, 5)
		return 67;//4 3
	break;
	case 14134://(3,7) (3, 6)
		return 67;//4 3
	break;
	case 14135://(3,7) (3, 7)
		return 67;//4 3
	break;
	case 14136://(3,7) (3, 8)
		return 64;//4 0
	break;
	case 14137://(3,7) (3, 9)
		return 67;//4 3
	break;
	case 14138://(3,7) (3, 10)
		return 67;//4 3
	break;
	case 14139://(3,7) (3, 11)
		return 67;//4 3
	break;
	case 14140://(3,7) (3, 12)
		return 67;//4 3
	break;
	case 14141://(3,7) (3, 13)
		return 67;//4 3
	break;
	case 14142://(3,7) (3, 14)
		return 67;//4 3
	break;
	case 14143://(3,7) (3, 15)
		return 67;//4 3
	break;
	case 14144://(3,7) (4, 0)
		return 0;//0 0
	break;
	case 14145://(3,7) (4, 1)
		return 0;//0 0
	break;
	case 14146://(3,7) (4, 2)
		return 3;//0 3
	break;
	case 14147://(3,7) (4, 3)
		return 3;//0 3
	break;
	case 14148://(3,7) (4, 4)
		return 0;//0 0
	break;
	case 14149://(3,7) (4, 5)
		return 3;//0 3
	break;
	case 14150://(3,7) (4, 6)
		return 3;//0 3
	break;
	case 14151://(3,7) (4, 7)
		return 3;//0 3
	break;
	case 14152://(3,7) (4, 8)
		return 0;//0 0
	break;
	case 14153://(3,7) (4, 9)
		return 3;//0 3
	break;
	case 14154://(3,7) (4, 10)
		return 3;//0 3
	break;
	case 14155://(3,7) (4, 11)
		return 3;//0 3
	break;
	case 14156://(3,7) (4, 12)
		return 3;//0 3
	break;
	case 14157://(3,7) (4, 13)
		return 3;//0 3
	break;
	case 14158://(3,7) (4, 14)
		return 3;//0 3
	break;
	case 14159://(3,7) (4, 15)
		return 3;//0 3
	break;
	case 14160://(3,7) (5, 0)
		return 0;//0 0
	break;
	case 14161://(3,7) (5, 1)
		return 0;//0 0
	break;
	case 14162://(3,7) (5, 2)
		return 3;//0 3
	break;
	case 14163://(3,7) (5, 3)
		return 3;//0 3
	break;
	case 14164://(3,7) (5, 4)
		return 0;//0 0
	break;
	case 14165://(3,7) (5, 5)
		return 3;//0 3
	break;
	case 14166://(3,7) (5, 6)
		return 3;//0 3
	break;
	case 14167://(3,7) (5, 7)
		return 3;//0 3
	break;
	case 14168://(3,7) (5, 8)
		return 0;//0 0
	break;
	case 14169://(3,7) (5, 9)
		return 3;//0 3
	break;
	case 14170://(3,7) (5, 10)
		return 3;//0 3
	break;
	case 14171://(3,7) (5, 11)
		return 3;//0 3
	break;
	case 14172://(3,7) (5, 12)
		return 3;//0 3
	break;
	case 14173://(3,7) (5, 13)
		return 3;//0 3
	break;
	case 14174://(3,7) (5, 14)
		return 3;//0 3
	break;
	case 14175://(3,7) (5, 15)
		return 3;//0 3
	break;
	case 14176://(3,7) (6, 0)
		return 64;//4 0
	break;
	case 14177://(3,7) (6, 1)
		return 64;//4 0
	break;
	case 14178://(3,7) (6, 2)
		return 67;//4 3
	break;
	case 14179://(3,7) (6, 3)
		return 67;//4 3
	break;
	case 14180://(3,7) (6, 4)
		return 64;//4 0
	break;
	case 14181://(3,7) (6, 5)
		return 67;//4 3
	break;
	case 14182://(3,7) (6, 6)
		return 67;//4 3
	break;
	case 14183://(3,7) (6, 7)
		return 67;//4 3
	break;
	case 14184://(3,7) (6, 8)
		return 64;//4 0
	break;
	case 14185://(3,7) (6, 9)
		return 67;//4 3
	break;
	case 14186://(3,7) (6, 10)
		return 67;//4 3
	break;
	case 14187://(3,7) (6, 11)
		return 67;//4 3
	break;
	case 14188://(3,7) (6, 12)
		return 67;//4 3
	break;
	case 14189://(3,7) (6, 13)
		return 67;//4 3
	break;
	case 14190://(3,7) (6, 14)
		return 67;//4 3
	break;
	case 14191://(3,7) (6, 15)
		return 67;//4 3
	break;
	case 14192://(3,7) (7, 0)
		return 64;//4 0
	break;
	case 14193://(3,7) (7, 1)
		return 64;//4 0
	break;
	case 14194://(3,7) (7, 2)
		return 67;//4 3
	break;
	case 14195://(3,7) (7, 3)
		return 67;//4 3
	break;
	case 14196://(3,7) (7, 4)
		return 64;//4 0
	break;
	case 14197://(3,7) (7, 5)
		return 67;//4 3
	break;
	case 14198://(3,7) (7, 6)
		return 67;//4 3
	break;
	case 14199://(3,7) (7, 7)
		return 67;//4 3
	break;
	case 14200://(3,7) (7, 8)
		return 64;//4 0
	break;
	case 14201://(3,7) (7, 9)
		return 67;//4 3
	break;
	case 14202://(3,7) (7, 10)
		return 67;//4 3
	break;
	case 14203://(3,7) (7, 11)
		return 67;//4 3
	break;
	case 14204://(3,7) (7, 12)
		return 67;//4 3
	break;
	case 14205://(3,7) (7, 13)
		return 67;//4 3
	break;
	case 14206://(3,7) (7, 14)
		return 67;//4 3
	break;
	case 14207://(3,7) (7, 15)
		return 67;//4 3
	break;
	case 14208://(3,7) (8, 0)
		return 0;//0 0
	break;
	case 14209://(3,7) (8, 1)
		return 0;//0 0
	break;
	case 14210://(3,7) (8, 2)
		return 3;//0 3
	break;
	case 14211://(3,7) (8, 3)
		return 3;//0 3
	break;
	case 14212://(3,7) (8, 4)
		return 0;//0 0
	break;
	case 14213://(3,7) (8, 5)
		return 3;//0 3
	break;
	case 14214://(3,7) (8, 6)
		return 3;//0 3
	break;
	case 14215://(3,7) (8, 7)
		return 3;//0 3
	break;
	case 14216://(3,7) (8, 8)
		return 0;//0 0
	break;
	case 14217://(3,7) (8, 9)
		return 3;//0 3
	break;
	case 14218://(3,7) (8, 10)
		return 3;//0 3
	break;
	case 14219://(3,7) (8, 11)
		return 3;//0 3
	break;
	case 14220://(3,7) (8, 12)
		return 3;//0 3
	break;
	case 14221://(3,7) (8, 13)
		return 3;//0 3
	break;
	case 14222://(3,7) (8, 14)
		return 3;//0 3
	break;
	case 14223://(3,7) (8, 15)
		return 3;//0 3
	break;
	case 14224://(3,7) (9, 0)
		return 0;//0 0
	break;
	case 14225://(3,7) (9, 1)
		return 0;//0 0
	break;
	case 14226://(3,7) (9, 2)
		return 3;//0 3
	break;
	case 14227://(3,7) (9, 3)
		return 3;//0 3
	break;
	case 14228://(3,7) (9, 4)
		return 0;//0 0
	break;
	case 14229://(3,7) (9, 5)
		return 3;//0 3
	break;
	case 14230://(3,7) (9, 6)
		return 3;//0 3
	break;
	case 14231://(3,7) (9, 7)
		return 3;//0 3
	break;
	case 14232://(3,7) (9, 8)
		return 0;//0 0
	break;
	case 14233://(3,7) (9, 9)
		return 3;//0 3
	break;
	case 14234://(3,7) (9, 10)
		return 3;//0 3
	break;
	case 14235://(3,7) (9, 11)
		return 3;//0 3
	break;
	case 14236://(3,7) (9, 12)
		return 3;//0 3
	break;
	case 14237://(3,7) (9, 13)
		return 3;//0 3
	break;
	case 14238://(3,7) (9, 14)
		return 3;//0 3
	break;
	case 14239://(3,7) (9, 15)
		return 3;//0 3
	break;
	case 14240://(3,7) (10, 0)
		return 64;//4 0
	break;
	case 14241://(3,7) (10, 1)
		return 64;//4 0
	break;
	case 14242://(3,7) (10, 2)
		return 67;//4 3
	break;
	case 14243://(3,7) (10, 3)
		return 67;//4 3
	break;
	case 14244://(3,7) (10, 4)
		return 64;//4 0
	break;
	case 14245://(3,7) (10, 5)
		return 67;//4 3
	break;
	case 14246://(3,7) (10, 6)
		return 67;//4 3
	break;
	case 14247://(3,7) (10, 7)
		return 67;//4 3
	break;
	case 14248://(3,7) (10, 8)
		return 64;//4 0
	break;
	case 14249://(3,7) (10, 9)
		return 67;//4 3
	break;
	case 14250://(3,7) (10, 10)
		return 67;//4 3
	break;
	case 14251://(3,7) (10, 11)
		return 67;//4 3
	break;
	case 14252://(3,7) (10, 12)
		return 67;//4 3
	break;
	case 14253://(3,7) (10, 13)
		return 67;//4 3
	break;
	case 14254://(3,7) (10, 14)
		return 67;//4 3
	break;
	case 14255://(3,7) (10, 15)
		return 67;//4 3
	break;
	case 14256://(3,7) (11, 0)
		return 64;//4 0
	break;
	case 14257://(3,7) (11, 1)
		return 64;//4 0
	break;
	case 14258://(3,7) (11, 2)
		return 67;//4 3
	break;
	case 14259://(3,7) (11, 3)
		return 67;//4 3
	break;
	case 14260://(3,7) (11, 4)
		return 64;//4 0
	break;
	case 14261://(3,7) (11, 5)
		return 67;//4 3
	break;
	case 14262://(3,7) (11, 6)
		return 67;//4 3
	break;
	case 14263://(3,7) (11, 7)
		return 67;//4 3
	break;
	case 14264://(3,7) (11, 8)
		return 64;//4 0
	break;
	case 14265://(3,7) (11, 9)
		return 67;//4 3
	break;
	case 14266://(3,7) (11, 10)
		return 67;//4 3
	break;
	case 14267://(3,7) (11, 11)
		return 67;//4 3
	break;
	case 14268://(3,7) (11, 12)
		return 67;//4 3
	break;
	case 14269://(3,7) (11, 13)
		return 67;//4 3
	break;
	case 14270://(3,7) (11, 14)
		return 67;//4 3
	break;
	case 14271://(3,7) (11, 15)
		return 67;//4 3
	break;
	case 14272://(3,7) (12, 0)
		return 64;//4 0
	break;
	case 14273://(3,7) (12, 1)
		return 64;//4 0
	break;
	case 14274://(3,7) (12, 2)
		return 67;//4 3
	break;
	case 14275://(3,7) (12, 3)
		return 67;//4 3
	break;
	case 14276://(3,7) (12, 4)
		return 64;//4 0
	break;
	case 14277://(3,7) (12, 5)
		return 67;//4 3
	break;
	case 14278://(3,7) (12, 6)
		return 67;//4 3
	break;
	case 14279://(3,7) (12, 7)
		return 67;//4 3
	break;
	case 14280://(3,7) (12, 8)
		return 64;//4 0
	break;
	case 14281://(3,7) (12, 9)
		return 67;//4 3
	break;
	case 14282://(3,7) (12, 10)
		return 67;//4 3
	break;
	case 14283://(3,7) (12, 11)
		return 67;//4 3
	break;
	case 14284://(3,7) (12, 12)
		return 67;//4 3
	break;
	case 14285://(3,7) (12, 13)
		return 67;//4 3
	break;
	case 14286://(3,7) (12, 14)
		return 67;//4 3
	break;
	case 14287://(3,7) (12, 15)
		return 67;//4 3
	break;
	case 14288://(3,7) (13, 0)
		return 64;//4 0
	break;
	case 14289://(3,7) (13, 1)
		return 64;//4 0
	break;
	case 14290://(3,7) (13, 2)
		return 67;//4 3
	break;
	case 14291://(3,7) (13, 3)
		return 67;//4 3
	break;
	case 14292://(3,7) (13, 4)
		return 64;//4 0
	break;
	case 14293://(3,7) (13, 5)
		return 67;//4 3
	break;
	case 14294://(3,7) (13, 6)
		return 67;//4 3
	break;
	case 14295://(3,7) (13, 7)
		return 67;//4 3
	break;
	case 14296://(3,7) (13, 8)
		return 64;//4 0
	break;
	case 14297://(3,7) (13, 9)
		return 67;//4 3
	break;
	case 14298://(3,7) (13, 10)
		return 67;//4 3
	break;
	case 14299://(3,7) (13, 11)
		return 67;//4 3
	break;
	case 14300://(3,7) (13, 12)
		return 67;//4 3
	break;
	case 14301://(3,7) (13, 13)
		return 67;//4 3
	break;
	case 14302://(3,7) (13, 14)
		return 67;//4 3
	break;
	case 14303://(3,7) (13, 15)
		return 67;//4 3
	break;
	case 14304://(3,7) (14, 0)
		return 0;//0 0
	break;
	case 14305://(3,7) (14, 1)
		return 0;//0 0
	break;
	case 14306://(3,7) (14, 2)
		return 3;//0 3
	break;
	case 14307://(3,7) (14, 3)
		return 3;//0 3
	break;
	case 14308://(3,7) (14, 4)
		return 0;//0 0
	break;
	case 14309://(3,7) (14, 5)
		return 3;//0 3
	break;
	case 14310://(3,7) (14, 6)
		return 3;//0 3
	break;
	case 14311://(3,7) (14, 7)
		return 3;//0 3
	break;
	case 14312://(3,7) (14, 8)
		return 0;//0 0
	break;
	case 14313://(3,7) (14, 9)
		return 3;//0 3
	break;
	case 14314://(3,7) (14, 10)
		return 3;//0 3
	break;
	case 14315://(3,7) (14, 11)
		return 3;//0 3
	break;
	case 14316://(3,7) (14, 12)
		return 3;//0 3
	break;
	case 14317://(3,7) (14, 13)
		return 3;//0 3
	break;
	case 14318://(3,7) (14, 14)
		return 3;//0 3
	break;
	case 14319://(3,7) (14, 15)
		return 3;//0 3
	break;
	case 14320://(3,7) (15, 0)
		return 64;//4 0
	break;
	case 14321://(3,7) (15, 1)
		return 64;//4 0
	break;
	case 14322://(3,7) (15, 2)
		return 67;//4 3
	break;
	case 14323://(3,7) (15, 3)
		return 67;//4 3
	break;
	case 14324://(3,7) (15, 4)
		return 64;//4 0
	break;
	case 14325://(3,7) (15, 5)
		return 67;//4 3
	break;
	case 14326://(3,7) (15, 6)
		return 67;//4 3
	break;
	case 14327://(3,7) (15, 7)
		return 67;//4 3
	break;
	case 14328://(3,7) (15, 8)
		return 64;//4 0
	break;
	case 14329://(3,7) (15, 9)
		return 67;//4 3
	break;
	case 14330://(3,7) (15, 10)
		return 67;//4 3
	break;
	case 14331://(3,7) (15, 11)
		return 67;//4 3
	break;
	case 14332://(3,7) (15, 12)
		return 67;//4 3
	break;
	case 14333://(3,7) (15, 13)
		return 67;//4 3
	break;
	case 14334://(3,7) (15, 14)
		return 67;//4 3
	break;
	case 14335://(3,7) (15, 15)
		return 67;//4 3
	break;
	case 14336://(3,8) (0, 0)
		return 0;//0 0
	break;
	case 14337://(3,8) (0, 1)
		return 3;//0 3
	break;
	case 14338://(3,8) (0, 2)
		return 0;//0 0
	break;
	case 14339://(3,8) (0, 3)
		return 0;//0 0
	break;
	case 14340://(3,8) (0, 4)
		return 3;//0 3
	break;
	case 14341://(3,8) (0, 5)
		return 3;//0 3
	break;
	case 14342://(3,8) (0, 6)
		return 3;//0 3
	break;
	case 14343://(3,8) (0, 7)
		return 0;//0 0
	break;
	case 14344://(3,8) (0, 8)
		return 3;//0 3
	break;
	case 14345://(3,8) (0, 9)
		return 3;//0 3
	break;
	case 14346://(3,8) (0, 10)
		return 3;//0 3
	break;
	case 14347://(3,8) (0, 11)
		return 3;//0 3
	break;
	case 14348://(3,8) (0, 12)
		return 3;//0 3
	break;
	case 14349://(3,8) (0, 13)
		return 3;//0 3
	break;
	case 14350://(3,8) (0, 14)
		return 3;//0 3
	break;
	case 14351://(3,8) (0, 15)
		return 3;//0 3
	break;
	case 14352://(3,8) (1, 0)
		return 0;//0 0
	break;
	case 14353://(3,8) (1, 1)
		return 3;//0 3
	break;
	case 14354://(3,8) (1, 2)
		return 0;//0 0
	break;
	case 14355://(3,8) (1, 3)
		return 0;//0 0
	break;
	case 14356://(3,8) (1, 4)
		return 3;//0 3
	break;
	case 14357://(3,8) (1, 5)
		return 3;//0 3
	break;
	case 14358://(3,8) (1, 6)
		return 3;//0 3
	break;
	case 14359://(3,8) (1, 7)
		return 0;//0 0
	break;
	case 14360://(3,8) (1, 8)
		return 3;//0 3
	break;
	case 14361://(3,8) (1, 9)
		return 3;//0 3
	break;
	case 14362://(3,8) (1, 10)
		return 3;//0 3
	break;
	case 14363://(3,8) (1, 11)
		return 3;//0 3
	break;
	case 14364://(3,8) (1, 12)
		return 3;//0 3
	break;
	case 14365://(3,8) (1, 13)
		return 3;//0 3
	break;
	case 14366://(3,8) (1, 14)
		return 3;//0 3
	break;
	case 14367://(3,8) (1, 15)
		return 3;//0 3
	break;
	case 14368://(3,8) (2, 0)
		return 0;//0 0
	break;
	case 14369://(3,8) (2, 1)
		return 3;//0 3
	break;
	case 14370://(3,8) (2, 2)
		return 0;//0 0
	break;
	case 14371://(3,8) (2, 3)
		return 0;//0 0
	break;
	case 14372://(3,8) (2, 4)
		return 3;//0 3
	break;
	case 14373://(3,8) (2, 5)
		return 3;//0 3
	break;
	case 14374://(3,8) (2, 6)
		return 3;//0 3
	break;
	case 14375://(3,8) (2, 7)
		return 0;//0 0
	break;
	case 14376://(3,8) (2, 8)
		return 3;//0 3
	break;
	case 14377://(3,8) (2, 9)
		return 3;//0 3
	break;
	case 14378://(3,8) (2, 10)
		return 3;//0 3
	break;
	case 14379://(3,8) (2, 11)
		return 3;//0 3
	break;
	case 14380://(3,8) (2, 12)
		return 3;//0 3
	break;
	case 14381://(3,8) (2, 13)
		return 3;//0 3
	break;
	case 14382://(3,8) (2, 14)
		return 3;//0 3
	break;
	case 14383://(3,8) (2, 15)
		return 3;//0 3
	break;
	case 14384://(3,8) (3, 0)
		return 64;//4 0
	break;
	case 14385://(3,8) (3, 1)
		return 67;//4 3
	break;
	case 14386://(3,8) (3, 2)
		return 64;//4 0
	break;
	case 14387://(3,8) (3, 3)
		return 64;//4 0
	break;
	case 14388://(3,8) (3, 4)
		return 67;//4 3
	break;
	case 14389://(3,8) (3, 5)
		return 67;//4 3
	break;
	case 14390://(3,8) (3, 6)
		return 67;//4 3
	break;
	case 14391://(3,8) (3, 7)
		return 64;//4 0
	break;
	case 14392://(3,8) (3, 8)
		return 67;//4 3
	break;
	case 14393://(3,8) (3, 9)
		return 67;//4 3
	break;
	case 14394://(3,8) (3, 10)
		return 67;//4 3
	break;
	case 14395://(3,8) (3, 11)
		return 67;//4 3
	break;
	case 14396://(3,8) (3, 12)
		return 67;//4 3
	break;
	case 14397://(3,8) (3, 13)
		return 67;//4 3
	break;
	case 14398://(3,8) (3, 14)
		return 67;//4 3
	break;
	case 14399://(3,8) (3, 15)
		return 67;//4 3
	break;
	case 14400://(3,8) (4, 0)
		return 0;//0 0
	break;
	case 14401://(3,8) (4, 1)
		return 3;//0 3
	break;
	case 14402://(3,8) (4, 2)
		return 0;//0 0
	break;
	case 14403://(3,8) (4, 3)
		return 0;//0 0
	break;
	case 14404://(3,8) (4, 4)
		return 3;//0 3
	break;
	case 14405://(3,8) (4, 5)
		return 3;//0 3
	break;
	case 14406://(3,8) (4, 6)
		return 3;//0 3
	break;
	case 14407://(3,8) (4, 7)
		return 0;//0 0
	break;
	case 14408://(3,8) (4, 8)
		return 3;//0 3
	break;
	case 14409://(3,8) (4, 9)
		return 3;//0 3
	break;
	case 14410://(3,8) (4, 10)
		return 3;//0 3
	break;
	case 14411://(3,8) (4, 11)
		return 3;//0 3
	break;
	case 14412://(3,8) (4, 12)
		return 3;//0 3
	break;
	case 14413://(3,8) (4, 13)
		return 3;//0 3
	break;
	case 14414://(3,8) (4, 14)
		return 3;//0 3
	break;
	case 14415://(3,8) (4, 15)
		return 3;//0 3
	break;
	case 14416://(3,8) (5, 0)
		return 0;//0 0
	break;
	case 14417://(3,8) (5, 1)
		return 3;//0 3
	break;
	case 14418://(3,8) (5, 2)
		return 0;//0 0
	break;
	case 14419://(3,8) (5, 3)
		return 0;//0 0
	break;
	case 14420://(3,8) (5, 4)
		return 3;//0 3
	break;
	case 14421://(3,8) (5, 5)
		return 3;//0 3
	break;
	case 14422://(3,8) (5, 6)
		return 3;//0 3
	break;
	case 14423://(3,8) (5, 7)
		return 0;//0 0
	break;
	case 14424://(3,8) (5, 8)
		return 3;//0 3
	break;
	case 14425://(3,8) (5, 9)
		return 3;//0 3
	break;
	case 14426://(3,8) (5, 10)
		return 3;//0 3
	break;
	case 14427://(3,8) (5, 11)
		return 3;//0 3
	break;
	case 14428://(3,8) (5, 12)
		return 3;//0 3
	break;
	case 14429://(3,8) (5, 13)
		return 3;//0 3
	break;
	case 14430://(3,8) (5, 14)
		return 3;//0 3
	break;
	case 14431://(3,8) (5, 15)
		return 3;//0 3
	break;
	case 14432://(3,8) (6, 0)
		return 64;//4 0
	break;
	case 14433://(3,8) (6, 1)
		return 67;//4 3
	break;
	case 14434://(3,8) (6, 2)
		return 64;//4 0
	break;
	case 14435://(3,8) (6, 3)
		return 64;//4 0
	break;
	case 14436://(3,8) (6, 4)
		return 67;//4 3
	break;
	case 14437://(3,8) (6, 5)
		return 67;//4 3
	break;
	case 14438://(3,8) (6, 6)
		return 67;//4 3
	break;
	case 14439://(3,8) (6, 7)
		return 64;//4 0
	break;
	case 14440://(3,8) (6, 8)
		return 67;//4 3
	break;
	case 14441://(3,8) (6, 9)
		return 67;//4 3
	break;
	case 14442://(3,8) (6, 10)
		return 67;//4 3
	break;
	case 14443://(3,8) (6, 11)
		return 67;//4 3
	break;
	case 14444://(3,8) (6, 12)
		return 67;//4 3
	break;
	case 14445://(3,8) (6, 13)
		return 67;//4 3
	break;
	case 14446://(3,8) (6, 14)
		return 67;//4 3
	break;
	case 14447://(3,8) (6, 15)
		return 67;//4 3
	break;
	case 14448://(3,8) (7, 0)
		return 64;//4 0
	break;
	case 14449://(3,8) (7, 1)
		return 67;//4 3
	break;
	case 14450://(3,8) (7, 2)
		return 64;//4 0
	break;
	case 14451://(3,8) (7, 3)
		return 64;//4 0
	break;
	case 14452://(3,8) (7, 4)
		return 67;//4 3
	break;
	case 14453://(3,8) (7, 5)
		return 67;//4 3
	break;
	case 14454://(3,8) (7, 6)
		return 67;//4 3
	break;
	case 14455://(3,8) (7, 7)
		return 64;//4 0
	break;
	case 14456://(3,8) (7, 8)
		return 67;//4 3
	break;
	case 14457://(3,8) (7, 9)
		return 67;//4 3
	break;
	case 14458://(3,8) (7, 10)
		return 67;//4 3
	break;
	case 14459://(3,8) (7, 11)
		return 67;//4 3
	break;
	case 14460://(3,8) (7, 12)
		return 67;//4 3
	break;
	case 14461://(3,8) (7, 13)
		return 67;//4 3
	break;
	case 14462://(3,8) (7, 14)
		return 67;//4 3
	break;
	case 14463://(3,8) (7, 15)
		return 67;//4 3
	break;
	case 14464://(3,8) (8, 0)
		return 0;//0 0
	break;
	case 14465://(3,8) (8, 1)
		return 3;//0 3
	break;
	case 14466://(3,8) (8, 2)
		return 0;//0 0
	break;
	case 14467://(3,8) (8, 3)
		return 0;//0 0
	break;
	case 14468://(3,8) (8, 4)
		return 3;//0 3
	break;
	case 14469://(3,8) (8, 5)
		return 3;//0 3
	break;
	case 14470://(3,8) (8, 6)
		return 3;//0 3
	break;
	case 14471://(3,8) (8, 7)
		return 0;//0 0
	break;
	case 14472://(3,8) (8, 8)
		return 3;//0 3
	break;
	case 14473://(3,8) (8, 9)
		return 3;//0 3
	break;
	case 14474://(3,8) (8, 10)
		return 3;//0 3
	break;
	case 14475://(3,8) (8, 11)
		return 3;//0 3
	break;
	case 14476://(3,8) (8, 12)
		return 3;//0 3
	break;
	case 14477://(3,8) (8, 13)
		return 3;//0 3
	break;
	case 14478://(3,8) (8, 14)
		return 3;//0 3
	break;
	case 14479://(3,8) (8, 15)
		return 3;//0 3
	break;
	case 14480://(3,8) (9, 0)
		return 0;//0 0
	break;
	case 14481://(3,8) (9, 1)
		return 3;//0 3
	break;
	case 14482://(3,8) (9, 2)
		return 0;//0 0
	break;
	case 14483://(3,8) (9, 3)
		return 0;//0 0
	break;
	case 14484://(3,8) (9, 4)
		return 3;//0 3
	break;
	case 14485://(3,8) (9, 5)
		return 3;//0 3
	break;
	case 14486://(3,8) (9, 6)
		return 3;//0 3
	break;
	case 14487://(3,8) (9, 7)
		return 0;//0 0
	break;
	case 14488://(3,8) (9, 8)
		return 3;//0 3
	break;
	case 14489://(3,8) (9, 9)
		return 3;//0 3
	break;
	case 14490://(3,8) (9, 10)
		return 3;//0 3
	break;
	case 14491://(3,8) (9, 11)
		return 3;//0 3
	break;
	case 14492://(3,8) (9, 12)
		return 3;//0 3
	break;
	case 14493://(3,8) (9, 13)
		return 3;//0 3
	break;
	case 14494://(3,8) (9, 14)
		return 3;//0 3
	break;
	case 14495://(3,8) (9, 15)
		return 3;//0 3
	break;
	case 14496://(3,8) (10, 0)
		return 64;//4 0
	break;
	case 14497://(3,8) (10, 1)
		return 67;//4 3
	break;
	case 14498://(3,8) (10, 2)
		return 64;//4 0
	break;
	case 14499://(3,8) (10, 3)
		return 64;//4 0
	break;
	case 14500://(3,8) (10, 4)
		return 67;//4 3
	break;
	case 14501://(3,8) (10, 5)
		return 67;//4 3
	break;
	case 14502://(3,8) (10, 6)
		return 67;//4 3
	break;
	case 14503://(3,8) (10, 7)
		return 64;//4 0
	break;
	case 14504://(3,8) (10, 8)
		return 67;//4 3
	break;
	case 14505://(3,8) (10, 9)
		return 67;//4 3
	break;
	case 14506://(3,8) (10, 10)
		return 67;//4 3
	break;
	case 14507://(3,8) (10, 11)
		return 67;//4 3
	break;
	case 14508://(3,8) (10, 12)
		return 67;//4 3
	break;
	case 14509://(3,8) (10, 13)
		return 67;//4 3
	break;
	case 14510://(3,8) (10, 14)
		return 67;//4 3
	break;
	case 14511://(3,8) (10, 15)
		return 67;//4 3
	break;
	case 14512://(3,8) (11, 0)
		return 64;//4 0
	break;
	case 14513://(3,8) (11, 1)
		return 67;//4 3
	break;
	case 14514://(3,8) (11, 2)
		return 64;//4 0
	break;
	case 14515://(3,8) (11, 3)
		return 64;//4 0
	break;
	case 14516://(3,8) (11, 4)
		return 67;//4 3
	break;
	case 14517://(3,8) (11, 5)
		return 67;//4 3
	break;
	case 14518://(3,8) (11, 6)
		return 67;//4 3
	break;
	case 14519://(3,8) (11, 7)
		return 64;//4 0
	break;
	case 14520://(3,8) (11, 8)
		return 67;//4 3
	break;
	case 14521://(3,8) (11, 9)
		return 67;//4 3
	break;
	case 14522://(3,8) (11, 10)
		return 67;//4 3
	break;
	case 14523://(3,8) (11, 11)
		return 67;//4 3
	break;
	case 14524://(3,8) (11, 12)
		return 67;//4 3
	break;
	case 14525://(3,8) (11, 13)
		return 67;//4 3
	break;
	case 14526://(3,8) (11, 14)
		return 67;//4 3
	break;
	case 14527://(3,8) (11, 15)
		return 67;//4 3
	break;
	case 14528://(3,8) (12, 0)
		return 64;//4 0
	break;
	case 14529://(3,8) (12, 1)
		return 67;//4 3
	break;
	case 14530://(3,8) (12, 2)
		return 64;//4 0
	break;
	case 14531://(3,8) (12, 3)
		return 64;//4 0
	break;
	case 14532://(3,8) (12, 4)
		return 67;//4 3
	break;
	case 14533://(3,8) (12, 5)
		return 67;//4 3
	break;
	case 14534://(3,8) (12, 6)
		return 67;//4 3
	break;
	case 14535://(3,8) (12, 7)
		return 64;//4 0
	break;
	case 14536://(3,8) (12, 8)
		return 67;//4 3
	break;
	case 14537://(3,8) (12, 9)
		return 67;//4 3
	break;
	case 14538://(3,8) (12, 10)
		return 67;//4 3
	break;
	case 14539://(3,8) (12, 11)
		return 67;//4 3
	break;
	case 14540://(3,8) (12, 12)
		return 67;//4 3
	break;
	case 14541://(3,8) (12, 13)
		return 67;//4 3
	break;
	case 14542://(3,8) (12, 14)
		return 67;//4 3
	break;
	case 14543://(3,8) (12, 15)
		return 67;//4 3
	break;
	case 14544://(3,8) (13, 0)
		return 64;//4 0
	break;
	case 14545://(3,8) (13, 1)
		return 67;//4 3
	break;
	case 14546://(3,8) (13, 2)
		return 64;//4 0
	break;
	case 14547://(3,8) (13, 3)
		return 64;//4 0
	break;
	case 14548://(3,8) (13, 4)
		return 67;//4 3
	break;
	case 14549://(3,8) (13, 5)
		return 67;//4 3
	break;
	case 14550://(3,8) (13, 6)
		return 67;//4 3
	break;
	case 14551://(3,8) (13, 7)
		return 64;//4 0
	break;
	case 14552://(3,8) (13, 8)
		return 67;//4 3
	break;
	case 14553://(3,8) (13, 9)
		return 67;//4 3
	break;
	case 14554://(3,8) (13, 10)
		return 67;//4 3
	break;
	case 14555://(3,8) (13, 11)
		return 67;//4 3
	break;
	case 14556://(3,8) (13, 12)
		return 67;//4 3
	break;
	case 14557://(3,8) (13, 13)
		return 67;//4 3
	break;
	case 14558://(3,8) (13, 14)
		return 67;//4 3
	break;
	case 14559://(3,8) (13, 15)
		return 67;//4 3
	break;
	case 14560://(3,8) (14, 0)
		return 0;//0 0
	break;
	case 14561://(3,8) (14, 1)
		return 3;//0 3
	break;
	case 14562://(3,8) (14, 2)
		return 0;//0 0
	break;
	case 14563://(3,8) (14, 3)
		return 0;//0 0
	break;
	case 14564://(3,8) (14, 4)
		return 3;//0 3
	break;
	case 14565://(3,8) (14, 5)
		return 3;//0 3
	break;
	case 14566://(3,8) (14, 6)
		return 3;//0 3
	break;
	case 14567://(3,8) (14, 7)
		return 0;//0 0
	break;
	case 14568://(3,8) (14, 8)
		return 3;//0 3
	break;
	case 14569://(3,8) (14, 9)
		return 3;//0 3
	break;
	case 14570://(3,8) (14, 10)
		return 3;//0 3
	break;
	case 14571://(3,8) (14, 11)
		return 3;//0 3
	break;
	case 14572://(3,8) (14, 12)
		return 3;//0 3
	break;
	case 14573://(3,8) (14, 13)
		return 3;//0 3
	break;
	case 14574://(3,8) (14, 14)
		return 3;//0 3
	break;
	case 14575://(3,8) (14, 15)
		return 3;//0 3
	break;
	case 14576://(3,8) (15, 0)
		return 64;//4 0
	break;
	case 14577://(3,8) (15, 1)
		return 67;//4 3
	break;
	case 14578://(3,8) (15, 2)
		return 64;//4 0
	break;
	case 14579://(3,8) (15, 3)
		return 64;//4 0
	break;
	case 14580://(3,8) (15, 4)
		return 67;//4 3
	break;
	case 14581://(3,8) (15, 5)
		return 67;//4 3
	break;
	case 14582://(3,8) (15, 6)
		return 67;//4 3
	break;
	case 14583://(3,8) (15, 7)
		return 64;//4 0
	break;
	case 14584://(3,8) (15, 8)
		return 67;//4 3
	break;
	case 14585://(3,8) (15, 9)
		return 67;//4 3
	break;
	case 14586://(3,8) (15, 10)
		return 67;//4 3
	break;
	case 14587://(3,8) (15, 11)
		return 67;//4 3
	break;
	case 14588://(3,8) (15, 12)
		return 67;//4 3
	break;
	case 14589://(3,8) (15, 13)
		return 67;//4 3
	break;
	case 14590://(3,8) (15, 14)
		return 67;//4 3
	break;
	case 14591://(3,8) (15, 15)
		return 67;//4 3
	break;
	case 14592://(3,9) (0, 0)
		return 0;//0 0
	break;
	case 14593://(3,9) (0, 1)
		return 3;//0 3
	break;
	case 14594://(3,9) (0, 2)
		return 3;//0 3
	break;
	case 14595://(3,9) (0, 3)
		return 0;//0 0
	break;
	case 14596://(3,9) (0, 4)
		return 0;//0 0
	break;
	case 14597://(3,9) (0, 5)
		return 3;//0 3
	break;
	case 14598://(3,9) (0, 6)
		return 3;//0 3
	break;
	case 14599://(3,9) (0, 7)
		return 3;//0 3
	break;
	case 14600://(3,9) (0, 8)
		return 3;//0 3
	break;
	case 14601://(3,9) (0, 9)
		return 3;//0 3
	break;
	case 14602://(3,9) (0, 10)
		return 0;//0 0
	break;
	case 14603://(3,9) (0, 11)
		return 3;//0 3
	break;
	case 14604://(3,9) (0, 12)
		return 3;//0 3
	break;
	case 14605://(3,9) (0, 13)
		return 3;//0 3
	break;
	case 14606://(3,9) (0, 14)
		return 3;//0 3
	break;
	case 14607://(3,9) (0, 15)
		return 3;//0 3
	break;
	case 14608://(3,9) (1, 0)
		return 0;//0 0
	break;
	case 14609://(3,9) (1, 1)
		return 3;//0 3
	break;
	case 14610://(3,9) (1, 2)
		return 3;//0 3
	break;
	case 14611://(3,9) (1, 3)
		return 0;//0 0
	break;
	case 14612://(3,9) (1, 4)
		return 0;//0 0
	break;
	case 14613://(3,9) (1, 5)
		return 3;//0 3
	break;
	case 14614://(3,9) (1, 6)
		return 3;//0 3
	break;
	case 14615://(3,9) (1, 7)
		return 3;//0 3
	break;
	case 14616://(3,9) (1, 8)
		return 3;//0 3
	break;
	case 14617://(3,9) (1, 9)
		return 3;//0 3
	break;
	case 14618://(3,9) (1, 10)
		return 0;//0 0
	break;
	case 14619://(3,9) (1, 11)
		return 3;//0 3
	break;
	case 14620://(3,9) (1, 12)
		return 3;//0 3
	break;
	case 14621://(3,9) (1, 13)
		return 3;//0 3
	break;
	case 14622://(3,9) (1, 14)
		return 3;//0 3
	break;
	case 14623://(3,9) (1, 15)
		return 3;//0 3
	break;
	case 14624://(3,9) (2, 0)
		return 0;//0 0
	break;
	case 14625://(3,9) (2, 1)
		return 3;//0 3
	break;
	case 14626://(3,9) (2, 2)
		return 3;//0 3
	break;
	case 14627://(3,9) (2, 3)
		return 0;//0 0
	break;
	case 14628://(3,9) (2, 4)
		return 0;//0 0
	break;
	case 14629://(3,9) (2, 5)
		return 3;//0 3
	break;
	case 14630://(3,9) (2, 6)
		return 3;//0 3
	break;
	case 14631://(3,9) (2, 7)
		return 3;//0 3
	break;
	case 14632://(3,9) (2, 8)
		return 3;//0 3
	break;
	case 14633://(3,9) (2, 9)
		return 3;//0 3
	break;
	case 14634://(3,9) (2, 10)
		return 0;//0 0
	break;
	case 14635://(3,9) (2, 11)
		return 3;//0 3
	break;
	case 14636://(3,9) (2, 12)
		return 3;//0 3
	break;
	case 14637://(3,9) (2, 13)
		return 3;//0 3
	break;
	case 14638://(3,9) (2, 14)
		return 3;//0 3
	break;
	case 14639://(3,9) (2, 15)
		return 3;//0 3
	break;
	case 14640://(3,9) (3, 0)
		return 64;//4 0
	break;
	case 14641://(3,9) (3, 1)
		return 67;//4 3
	break;
	case 14642://(3,9) (3, 2)
		return 67;//4 3
	break;
	case 14643://(3,9) (3, 3)
		return 64;//4 0
	break;
	case 14644://(3,9) (3, 4)
		return 64;//4 0
	break;
	case 14645://(3,9) (3, 5)
		return 67;//4 3
	break;
	case 14646://(3,9) (3, 6)
		return 67;//4 3
	break;
	case 14647://(3,9) (3, 7)
		return 67;//4 3
	break;
	case 14648://(3,9) (3, 8)
		return 67;//4 3
	break;
	case 14649://(3,9) (3, 9)
		return 67;//4 3
	break;
	case 14650://(3,9) (3, 10)
		return 64;//4 0
	break;
	case 14651://(3,9) (3, 11)
		return 67;//4 3
	break;
	case 14652://(3,9) (3, 12)
		return 67;//4 3
	break;
	case 14653://(3,9) (3, 13)
		return 67;//4 3
	break;
	case 14654://(3,9) (3, 14)
		return 67;//4 3
	break;
	case 14655://(3,9) (3, 15)
		return 67;//4 3
	break;
	case 14656://(3,9) (4, 0)
		return 0;//0 0
	break;
	case 14657://(3,9) (4, 1)
		return 3;//0 3
	break;
	case 14658://(3,9) (4, 2)
		return 3;//0 3
	break;
	case 14659://(3,9) (4, 3)
		return 0;//0 0
	break;
	case 14660://(3,9) (4, 4)
		return 0;//0 0
	break;
	case 14661://(3,9) (4, 5)
		return 3;//0 3
	break;
	case 14662://(3,9) (4, 6)
		return 3;//0 3
	break;
	case 14663://(3,9) (4, 7)
		return 3;//0 3
	break;
	case 14664://(3,9) (4, 8)
		return 3;//0 3
	break;
	case 14665://(3,9) (4, 9)
		return 3;//0 3
	break;
	case 14666://(3,9) (4, 10)
		return 0;//0 0
	break;
	case 14667://(3,9) (4, 11)
		return 3;//0 3
	break;
	case 14668://(3,9) (4, 12)
		return 3;//0 3
	break;
	case 14669://(3,9) (4, 13)
		return 3;//0 3
	break;
	case 14670://(3,9) (4, 14)
		return 3;//0 3
	break;
	case 14671://(3,9) (4, 15)
		return 3;//0 3
	break;
	case 14672://(3,9) (5, 0)
		return 0;//0 0
	break;
	case 14673://(3,9) (5, 1)
		return 3;//0 3
	break;
	case 14674://(3,9) (5, 2)
		return 3;//0 3
	break;
	case 14675://(3,9) (5, 3)
		return 0;//0 0
	break;
	case 14676://(3,9) (5, 4)
		return 0;//0 0
	break;
	case 14677://(3,9) (5, 5)
		return 3;//0 3
	break;
	case 14678://(3,9) (5, 6)
		return 3;//0 3
	break;
	case 14679://(3,9) (5, 7)
		return 3;//0 3
	break;
	case 14680://(3,9) (5, 8)
		return 3;//0 3
	break;
	case 14681://(3,9) (5, 9)
		return 3;//0 3
	break;
	case 14682://(3,9) (5, 10)
		return 0;//0 0
	break;
	case 14683://(3,9) (5, 11)
		return 3;//0 3
	break;
	case 14684://(3,9) (5, 12)
		return 3;//0 3
	break;
	case 14685://(3,9) (5, 13)
		return 3;//0 3
	break;
	case 14686://(3,9) (5, 14)
		return 3;//0 3
	break;
	case 14687://(3,9) (5, 15)
		return 3;//0 3
	break;
	case 14688://(3,9) (6, 0)
		return 64;//4 0
	break;
	case 14689://(3,9) (6, 1)
		return 67;//4 3
	break;
	case 14690://(3,9) (6, 2)
		return 67;//4 3
	break;
	case 14691://(3,9) (6, 3)
		return 64;//4 0
	break;
	case 14692://(3,9) (6, 4)
		return 64;//4 0
	break;
	case 14693://(3,9) (6, 5)
		return 67;//4 3
	break;
	case 14694://(3,9) (6, 6)
		return 67;//4 3
	break;
	case 14695://(3,9) (6, 7)
		return 67;//4 3
	break;
	case 14696://(3,9) (6, 8)
		return 67;//4 3
	break;
	case 14697://(3,9) (6, 9)
		return 67;//4 3
	break;
	case 14698://(3,9) (6, 10)
		return 64;//4 0
	break;
	case 14699://(3,9) (6, 11)
		return 67;//4 3
	break;
	case 14700://(3,9) (6, 12)
		return 67;//4 3
	break;
	case 14701://(3,9) (6, 13)
		return 67;//4 3
	break;
	case 14702://(3,9) (6, 14)
		return 67;//4 3
	break;
	case 14703://(3,9) (6, 15)
		return 67;//4 3
	break;
	case 14704://(3,9) (7, 0)
		return 64;//4 0
	break;
	case 14705://(3,9) (7, 1)
		return 67;//4 3
	break;
	case 14706://(3,9) (7, 2)
		return 67;//4 3
	break;
	case 14707://(3,9) (7, 3)
		return 64;//4 0
	break;
	case 14708://(3,9) (7, 4)
		return 64;//4 0
	break;
	case 14709://(3,9) (7, 5)
		return 67;//4 3
	break;
	case 14710://(3,9) (7, 6)
		return 67;//4 3
	break;
	case 14711://(3,9) (7, 7)
		return 67;//4 3
	break;
	case 14712://(3,9) (7, 8)
		return 67;//4 3
	break;
	case 14713://(3,9) (7, 9)
		return 67;//4 3
	break;
	case 14714://(3,9) (7, 10)
		return 64;//4 0
	break;
	case 14715://(3,9) (7, 11)
		return 67;//4 3
	break;
	case 14716://(3,9) (7, 12)
		return 67;//4 3
	break;
	case 14717://(3,9) (7, 13)
		return 67;//4 3
	break;
	case 14718://(3,9) (7, 14)
		return 67;//4 3
	break;
	case 14719://(3,9) (7, 15)
		return 67;//4 3
	break;
	case 14720://(3,9) (8, 0)
		return 0;//0 0
	break;
	case 14721://(3,9) (8, 1)
		return 3;//0 3
	break;
	case 14722://(3,9) (8, 2)
		return 3;//0 3
	break;
	case 14723://(3,9) (8, 3)
		return 0;//0 0
	break;
	case 14724://(3,9) (8, 4)
		return 0;//0 0
	break;
	case 14725://(3,9) (8, 5)
		return 3;//0 3
	break;
	case 14726://(3,9) (8, 6)
		return 3;//0 3
	break;
	case 14727://(3,9) (8, 7)
		return 3;//0 3
	break;
	case 14728://(3,9) (8, 8)
		return 3;//0 3
	break;
	case 14729://(3,9) (8, 9)
		return 3;//0 3
	break;
	case 14730://(3,9) (8, 10)
		return 0;//0 0
	break;
	case 14731://(3,9) (8, 11)
		return 3;//0 3
	break;
	case 14732://(3,9) (8, 12)
		return 3;//0 3
	break;
	case 14733://(3,9) (8, 13)
		return 3;//0 3
	break;
	case 14734://(3,9) (8, 14)
		return 3;//0 3
	break;
	case 14735://(3,9) (8, 15)
		return 3;//0 3
	break;
	case 14736://(3,9) (9, 0)
		return 0;//0 0
	break;
	case 14737://(3,9) (9, 1)
		return 3;//0 3
	break;
	case 14738://(3,9) (9, 2)
		return 3;//0 3
	break;
	case 14739://(3,9) (9, 3)
		return 0;//0 0
	break;
	case 14740://(3,9) (9, 4)
		return 0;//0 0
	break;
	case 14741://(3,9) (9, 5)
		return 3;//0 3
	break;
	case 14742://(3,9) (9, 6)
		return 3;//0 3
	break;
	case 14743://(3,9) (9, 7)
		return 3;//0 3
	break;
	case 14744://(3,9) (9, 8)
		return 3;//0 3
	break;
	case 14745://(3,9) (9, 9)
		return 3;//0 3
	break;
	case 14746://(3,9) (9, 10)
		return 0;//0 0
	break;
	case 14747://(3,9) (9, 11)
		return 3;//0 3
	break;
	case 14748://(3,9) (9, 12)
		return 3;//0 3
	break;
	case 14749://(3,9) (9, 13)
		return 3;//0 3
	break;
	case 14750://(3,9) (9, 14)
		return 3;//0 3
	break;
	case 14751://(3,9) (9, 15)
		return 3;//0 3
	break;
	case 14752://(3,9) (10, 0)
		return 64;//4 0
	break;
	case 14753://(3,9) (10, 1)
		return 67;//4 3
	break;
	case 14754://(3,9) (10, 2)
		return 67;//4 3
	break;
	case 14755://(3,9) (10, 3)
		return 64;//4 0
	break;
	case 14756://(3,9) (10, 4)
		return 64;//4 0
	break;
	case 14757://(3,9) (10, 5)
		return 67;//4 3
	break;
	case 14758://(3,9) (10, 6)
		return 67;//4 3
	break;
	case 14759://(3,9) (10, 7)
		return 67;//4 3
	break;
	case 14760://(3,9) (10, 8)
		return 67;//4 3
	break;
	case 14761://(3,9) (10, 9)
		return 67;//4 3
	break;
	case 14762://(3,9) (10, 10)
		return 64;//4 0
	break;
	case 14763://(3,9) (10, 11)
		return 67;//4 3
	break;
	case 14764://(3,9) (10, 12)
		return 67;//4 3
	break;
	case 14765://(3,9) (10, 13)
		return 67;//4 3
	break;
	case 14766://(3,9) (10, 14)
		return 67;//4 3
	break;
	case 14767://(3,9) (10, 15)
		return 67;//4 3
	break;
	case 14768://(3,9) (11, 0)
		return 64;//4 0
	break;
	case 14769://(3,9) (11, 1)
		return 67;//4 3
	break;
	case 14770://(3,9) (11, 2)
		return 67;//4 3
	break;
	case 14771://(3,9) (11, 3)
		return 64;//4 0
	break;
	case 14772://(3,9) (11, 4)
		return 64;//4 0
	break;
	case 14773://(3,9) (11, 5)
		return 67;//4 3
	break;
	case 14774://(3,9) (11, 6)
		return 67;//4 3
	break;
	case 14775://(3,9) (11, 7)
		return 67;//4 3
	break;
	case 14776://(3,9) (11, 8)
		return 67;//4 3
	break;
	case 14777://(3,9) (11, 9)
		return 67;//4 3
	break;
	case 14778://(3,9) (11, 10)
		return 64;//4 0
	break;
	case 14779://(3,9) (11, 11)
		return 67;//4 3
	break;
	case 14780://(3,9) (11, 12)
		return 67;//4 3
	break;
	case 14781://(3,9) (11, 13)
		return 67;//4 3
	break;
	case 14782://(3,9) (11, 14)
		return 67;//4 3
	break;
	case 14783://(3,9) (11, 15)
		return 67;//4 3
	break;
	case 14784://(3,9) (12, 0)
		return 64;//4 0
	break;
	case 14785://(3,9) (12, 1)
		return 67;//4 3
	break;
	case 14786://(3,9) (12, 2)
		return 67;//4 3
	break;
	case 14787://(3,9) (12, 3)
		return 64;//4 0
	break;
	case 14788://(3,9) (12, 4)
		return 64;//4 0
	break;
	case 14789://(3,9) (12, 5)
		return 67;//4 3
	break;
	case 14790://(3,9) (12, 6)
		return 67;//4 3
	break;
	case 14791://(3,9) (12, 7)
		return 67;//4 3
	break;
	case 14792://(3,9) (12, 8)
		return 67;//4 3
	break;
	case 14793://(3,9) (12, 9)
		return 67;//4 3
	break;
	case 14794://(3,9) (12, 10)
		return 64;//4 0
	break;
	case 14795://(3,9) (12, 11)
		return 67;//4 3
	break;
	case 14796://(3,9) (12, 12)
		return 67;//4 3
	break;
	case 14797://(3,9) (12, 13)
		return 67;//4 3
	break;
	case 14798://(3,9) (12, 14)
		return 67;//4 3
	break;
	case 14799://(3,9) (12, 15)
		return 67;//4 3
	break;
	case 14800://(3,9) (13, 0)
		return 64;//4 0
	break;
	case 14801://(3,9) (13, 1)
		return 67;//4 3
	break;
	case 14802://(3,9) (13, 2)
		return 67;//4 3
	break;
	case 14803://(3,9) (13, 3)
		return 64;//4 0
	break;
	case 14804://(3,9) (13, 4)
		return 64;//4 0
	break;
	case 14805://(3,9) (13, 5)
		return 67;//4 3
	break;
	case 14806://(3,9) (13, 6)
		return 67;//4 3
	break;
	case 14807://(3,9) (13, 7)
		return 67;//4 3
	break;
	case 14808://(3,9) (13, 8)
		return 67;//4 3
	break;
	case 14809://(3,9) (13, 9)
		return 67;//4 3
	break;
	case 14810://(3,9) (13, 10)
		return 64;//4 0
	break;
	case 14811://(3,9) (13, 11)
		return 67;//4 3
	break;
	case 14812://(3,9) (13, 12)
		return 67;//4 3
	break;
	case 14813://(3,9) (13, 13)
		return 67;//4 3
	break;
	case 14814://(3,9) (13, 14)
		return 67;//4 3
	break;
	case 14815://(3,9) (13, 15)
		return 67;//4 3
	break;
	case 14816://(3,9) (14, 0)
		return 0;//0 0
	break;
	case 14817://(3,9) (14, 1)
		return 3;//0 3
	break;
	case 14818://(3,9) (14, 2)
		return 3;//0 3
	break;
	case 14819://(3,9) (14, 3)
		return 0;//0 0
	break;
	case 14820://(3,9) (14, 4)
		return 0;//0 0
	break;
	case 14821://(3,9) (14, 5)
		return 3;//0 3
	break;
	case 14822://(3,9) (14, 6)
		return 3;//0 3
	break;
	case 14823://(3,9) (14, 7)
		return 3;//0 3
	break;
	case 14824://(3,9) (14, 8)
		return 3;//0 3
	break;
	case 14825://(3,9) (14, 9)
		return 3;//0 3
	break;
	case 14826://(3,9) (14, 10)
		return 0;//0 0
	break;
	case 14827://(3,9) (14, 11)
		return 3;//0 3
	break;
	case 14828://(3,9) (14, 12)
		return 3;//0 3
	break;
	case 14829://(3,9) (14, 13)
		return 3;//0 3
	break;
	case 14830://(3,9) (14, 14)
		return 3;//0 3
	break;
	case 14831://(3,9) (14, 15)
		return 3;//0 3
	break;
	case 14832://(3,9) (15, 0)
		return 64;//4 0
	break;
	case 14833://(3,9) (15, 1)
		return 67;//4 3
	break;
	case 14834://(3,9) (15, 2)
		return 67;//4 3
	break;
	case 14835://(3,9) (15, 3)
		return 64;//4 0
	break;
	case 14836://(3,9) (15, 4)
		return 64;//4 0
	break;
	case 14837://(3,9) (15, 5)
		return 67;//4 3
	break;
	case 14838://(3,9) (15, 6)
		return 67;//4 3
	break;
	case 14839://(3,9) (15, 7)
		return 67;//4 3
	break;
	case 14840://(3,9) (15, 8)
		return 67;//4 3
	break;
	case 14841://(3,9) (15, 9)
		return 67;//4 3
	break;
	case 14842://(3,9) (15, 10)
		return 64;//4 0
	break;
	case 14843://(3,9) (15, 11)
		return 67;//4 3
	break;
	case 14844://(3,9) (15, 12)
		return 67;//4 3
	break;
	case 14845://(3,9) (15, 13)
		return 67;//4 3
	break;
	case 14846://(3,9) (15, 14)
		return 67;//4 3
	break;
	case 14847://(3,9) (15, 15)
		return 67;//4 3
	break;
	case 14848://(3,10) (0, 0)
		return 0;//0 0
	break;
	case 14849://(3,10) (0, 1)
		return 0;//0 0
	break;
	case 14850://(3,10) (0, 2)
		return 0;//0 0
	break;
	case 14851://(3,10) (0, 3)
		return 3;//0 3
	break;
	case 14852://(3,10) (0, 4)
		return 3;//0 3
	break;
	case 14853://(3,10) (0, 5)
		return 3;//0 3
	break;
	case 14854://(3,10) (0, 6)
		return 3;//0 3
	break;
	case 14855://(3,10) (0, 7)
		return 3;//0 3
	break;
	case 14856://(3,10) (0, 8)
		return 3;//0 3
	break;
	case 14857://(3,10) (0, 9)
		return 0;//0 0
	break;
	case 14858://(3,10) (0, 10)
		return 3;//0 3
	break;
	case 14859://(3,10) (0, 11)
		return 3;//0 3
	break;
	case 14860://(3,10) (0, 12)
		return 3;//0 3
	break;
	case 14861://(3,10) (0, 13)
		return 3;//0 3
	break;
	case 14862://(3,10) (0, 14)
		return 3;//0 3
	break;
	case 14863://(3,10) (0, 15)
		return 3;//0 3
	break;
	case 14864://(3,10) (1, 0)
		return 0;//0 0
	break;
	case 14865://(3,10) (1, 1)
		return 0;//0 0
	break;
	case 14866://(3,10) (1, 2)
		return 0;//0 0
	break;
	case 14867://(3,10) (1, 3)
		return 3;//0 3
	break;
	case 14868://(3,10) (1, 4)
		return 3;//0 3
	break;
	case 14869://(3,10) (1, 5)
		return 3;//0 3
	break;
	case 14870://(3,10) (1, 6)
		return 3;//0 3
	break;
	case 14871://(3,10) (1, 7)
		return 3;//0 3
	break;
	case 14872://(3,10) (1, 8)
		return 3;//0 3
	break;
	case 14873://(3,10) (1, 9)
		return 0;//0 0
	break;
	case 14874://(3,10) (1, 10)
		return 3;//0 3
	break;
	case 14875://(3,10) (1, 11)
		return 3;//0 3
	break;
	case 14876://(3,10) (1, 12)
		return 3;//0 3
	break;
	case 14877://(3,10) (1, 13)
		return 3;//0 3
	break;
	case 14878://(3,10) (1, 14)
		return 3;//0 3
	break;
	case 14879://(3,10) (1, 15)
		return 3;//0 3
	break;
	case 14880://(3,10) (2, 0)
		return 0;//0 0
	break;
	case 14881://(3,10) (2, 1)
		return 0;//0 0
	break;
	case 14882://(3,10) (2, 2)
		return 0;//0 0
	break;
	case 14883://(3,10) (2, 3)
		return 3;//0 3
	break;
	case 14884://(3,10) (2, 4)
		return 3;//0 3
	break;
	case 14885://(3,10) (2, 5)
		return 3;//0 3
	break;
	case 14886://(3,10) (2, 6)
		return 3;//0 3
	break;
	case 14887://(3,10) (2, 7)
		return 3;//0 3
	break;
	case 14888://(3,10) (2, 8)
		return 3;//0 3
	break;
	case 14889://(3,10) (2, 9)
		return 0;//0 0
	break;
	case 14890://(3,10) (2, 10)
		return 3;//0 3
	break;
	case 14891://(3,10) (2, 11)
		return 3;//0 3
	break;
	case 14892://(3,10) (2, 12)
		return 3;//0 3
	break;
	case 14893://(3,10) (2, 13)
		return 3;//0 3
	break;
	case 14894://(3,10) (2, 14)
		return 3;//0 3
	break;
	case 14895://(3,10) (2, 15)
		return 3;//0 3
	break;
	case 14896://(3,10) (3, 0)
		return 64;//4 0
	break;
	case 14897://(3,10) (3, 1)
		return 64;//4 0
	break;
	case 14898://(3,10) (3, 2)
		return 64;//4 0
	break;
	case 14899://(3,10) (3, 3)
		return 67;//4 3
	break;
	case 14900://(3,10) (3, 4)
		return 67;//4 3
	break;
	case 14901://(3,10) (3, 5)
		return 67;//4 3
	break;
	case 14902://(3,10) (3, 6)
		return 67;//4 3
	break;
	case 14903://(3,10) (3, 7)
		return 67;//4 3
	break;
	case 14904://(3,10) (3, 8)
		return 67;//4 3
	break;
	case 14905://(3,10) (3, 9)
		return 64;//4 0
	break;
	case 14906://(3,10) (3, 10)
		return 67;//4 3
	break;
	case 14907://(3,10) (3, 11)
		return 67;//4 3
	break;
	case 14908://(3,10) (3, 12)
		return 67;//4 3
	break;
	case 14909://(3,10) (3, 13)
		return 67;//4 3
	break;
	case 14910://(3,10) (3, 14)
		return 67;//4 3
	break;
	case 14911://(3,10) (3, 15)
		return 67;//4 3
	break;
	case 14912://(3,10) (4, 0)
		return 0;//0 0
	break;
	case 14913://(3,10) (4, 1)
		return 0;//0 0
	break;
	case 14914://(3,10) (4, 2)
		return 0;//0 0
	break;
	case 14915://(3,10) (4, 3)
		return 3;//0 3
	break;
	case 14916://(3,10) (4, 4)
		return 3;//0 3
	break;
	case 14917://(3,10) (4, 5)
		return 3;//0 3
	break;
	case 14918://(3,10) (4, 6)
		return 3;//0 3
	break;
	case 14919://(3,10) (4, 7)
		return 3;//0 3
	break;
	case 14920://(3,10) (4, 8)
		return 3;//0 3
	break;
	case 14921://(3,10) (4, 9)
		return 0;//0 0
	break;
	case 14922://(3,10) (4, 10)
		return 3;//0 3
	break;
	case 14923://(3,10) (4, 11)
		return 3;//0 3
	break;
	case 14924://(3,10) (4, 12)
		return 3;//0 3
	break;
	case 14925://(3,10) (4, 13)
		return 3;//0 3
	break;
	case 14926://(3,10) (4, 14)
		return 3;//0 3
	break;
	case 14927://(3,10) (4, 15)
		return 3;//0 3
	break;
	case 14928://(3,10) (5, 0)
		return 0;//0 0
	break;
	case 14929://(3,10) (5, 1)
		return 0;//0 0
	break;
	case 14930://(3,10) (5, 2)
		return 0;//0 0
	break;
	case 14931://(3,10) (5, 3)
		return 3;//0 3
	break;
	case 14932://(3,10) (5, 4)
		return 3;//0 3
	break;
	case 14933://(3,10) (5, 5)
		return 3;//0 3
	break;
	case 14934://(3,10) (5, 6)
		return 3;//0 3
	break;
	case 14935://(3,10) (5, 7)
		return 3;//0 3
	break;
	case 14936://(3,10) (5, 8)
		return 3;//0 3
	break;
	case 14937://(3,10) (5, 9)
		return 0;//0 0
	break;
	case 14938://(3,10) (5, 10)
		return 3;//0 3
	break;
	case 14939://(3,10) (5, 11)
		return 3;//0 3
	break;
	case 14940://(3,10) (5, 12)
		return 3;//0 3
	break;
	case 14941://(3,10) (5, 13)
		return 3;//0 3
	break;
	case 14942://(3,10) (5, 14)
		return 3;//0 3
	break;
	case 14943://(3,10) (5, 15)
		return 3;//0 3
	break;
	case 14944://(3,10) (6, 0)
		return 64;//4 0
	break;
	case 14945://(3,10) (6, 1)
		return 64;//4 0
	break;
	case 14946://(3,10) (6, 2)
		return 64;//4 0
	break;
	case 14947://(3,10) (6, 3)
		return 67;//4 3
	break;
	case 14948://(3,10) (6, 4)
		return 67;//4 3
	break;
	case 14949://(3,10) (6, 5)
		return 67;//4 3
	break;
	case 14950://(3,10) (6, 6)
		return 67;//4 3
	break;
	case 14951://(3,10) (6, 7)
		return 67;//4 3
	break;
	case 14952://(3,10) (6, 8)
		return 67;//4 3
	break;
	case 14953://(3,10) (6, 9)
		return 64;//4 0
	break;
	case 14954://(3,10) (6, 10)
		return 67;//4 3
	break;
	case 14955://(3,10) (6, 11)
		return 67;//4 3
	break;
	case 14956://(3,10) (6, 12)
		return 67;//4 3
	break;
	case 14957://(3,10) (6, 13)
		return 67;//4 3
	break;
	case 14958://(3,10) (6, 14)
		return 67;//4 3
	break;
	case 14959://(3,10) (6, 15)
		return 67;//4 3
	break;
	case 14960://(3,10) (7, 0)
		return 64;//4 0
	break;
	case 14961://(3,10) (7, 1)
		return 64;//4 0
	break;
	case 14962://(3,10) (7, 2)
		return 64;//4 0
	break;
	case 14963://(3,10) (7, 3)
		return 67;//4 3
	break;
	case 14964://(3,10) (7, 4)
		return 67;//4 3
	break;
	case 14965://(3,10) (7, 5)
		return 67;//4 3
	break;
	case 14966://(3,10) (7, 6)
		return 67;//4 3
	break;
	case 14967://(3,10) (7, 7)
		return 67;//4 3
	break;
	case 14968://(3,10) (7, 8)
		return 67;//4 3
	break;
	case 14969://(3,10) (7, 9)
		return 64;//4 0
	break;
	case 14970://(3,10) (7, 10)
		return 67;//4 3
	break;
	case 14971://(3,10) (7, 11)
		return 67;//4 3
	break;
	case 14972://(3,10) (7, 12)
		return 67;//4 3
	break;
	case 14973://(3,10) (7, 13)
		return 67;//4 3
	break;
	case 14974://(3,10) (7, 14)
		return 67;//4 3
	break;
	case 14975://(3,10) (7, 15)
		return 67;//4 3
	break;
	case 14976://(3,10) (8, 0)
		return 0;//0 0
	break;
	case 14977://(3,10) (8, 1)
		return 0;//0 0
	break;
	case 14978://(3,10) (8, 2)
		return 0;//0 0
	break;
	case 14979://(3,10) (8, 3)
		return 3;//0 3
	break;
	case 14980://(3,10) (8, 4)
		return 3;//0 3
	break;
	case 14981://(3,10) (8, 5)
		return 3;//0 3
	break;
	case 14982://(3,10) (8, 6)
		return 3;//0 3
	break;
	case 14983://(3,10) (8, 7)
		return 3;//0 3
	break;
	case 14984://(3,10) (8, 8)
		return 3;//0 3
	break;
	case 14985://(3,10) (8, 9)
		return 0;//0 0
	break;
	case 14986://(3,10) (8, 10)
		return 3;//0 3
	break;
	case 14987://(3,10) (8, 11)
		return 3;//0 3
	break;
	case 14988://(3,10) (8, 12)
		return 3;//0 3
	break;
	case 14989://(3,10) (8, 13)
		return 3;//0 3
	break;
	case 14990://(3,10) (8, 14)
		return 3;//0 3
	break;
	case 14991://(3,10) (8, 15)
		return 3;//0 3
	break;
	case 14992://(3,10) (9, 0)
		return 0;//0 0
	break;
	case 14993://(3,10) (9, 1)
		return 0;//0 0
	break;
	case 14994://(3,10) (9, 2)
		return 0;//0 0
	break;
	case 14995://(3,10) (9, 3)
		return 3;//0 3
	break;
	case 14996://(3,10) (9, 4)
		return 3;//0 3
	break;
	case 14997://(3,10) (9, 5)
		return 3;//0 3
	break;
	case 14998://(3,10) (9, 6)
		return 3;//0 3
	break;
	case 14999://(3,10) (9, 7)
		return 3;//0 3
	break;
	case 15000://(3,10) (9, 8)
		return 3;//0 3
	break;
	case 15001://(3,10) (9, 9)
		return 0;//0 0
	break;
	case 15002://(3,10) (9, 10)
		return 3;//0 3
	break;
	case 15003://(3,10) (9, 11)
		return 3;//0 3
	break;
	case 15004://(3,10) (9, 12)
		return 3;//0 3
	break;
	case 15005://(3,10) (9, 13)
		return 3;//0 3
	break;
	case 15006://(3,10) (9, 14)
		return 3;//0 3
	break;
	case 15007://(3,10) (9, 15)
		return 3;//0 3
	break;
	case 15008://(3,10) (10, 0)
		return 64;//4 0
	break;
	case 15009://(3,10) (10, 1)
		return 64;//4 0
	break;
	case 15010://(3,10) (10, 2)
		return 64;//4 0
	break;
	case 15011://(3,10) (10, 3)
		return 67;//4 3
	break;
	case 15012://(3,10) (10, 4)
		return 67;//4 3
	break;
	case 15013://(3,10) (10, 5)
		return 67;//4 3
	break;
	case 15014://(3,10) (10, 6)
		return 67;//4 3
	break;
	case 15015://(3,10) (10, 7)
		return 67;//4 3
	break;
	case 15016://(3,10) (10, 8)
		return 67;//4 3
	break;
	case 15017://(3,10) (10, 9)
		return 64;//4 0
	break;
	case 15018://(3,10) (10, 10)
		return 67;//4 3
	break;
	case 15019://(3,10) (10, 11)
		return 67;//4 3
	break;
	case 15020://(3,10) (10, 12)
		return 67;//4 3
	break;
	case 15021://(3,10) (10, 13)
		return 67;//4 3
	break;
	case 15022://(3,10) (10, 14)
		return 67;//4 3
	break;
	case 15023://(3,10) (10, 15)
		return 67;//4 3
	break;
	case 15024://(3,10) (11, 0)
		return 64;//4 0
	break;
	case 15025://(3,10) (11, 1)
		return 64;//4 0
	break;
	case 15026://(3,10) (11, 2)
		return 64;//4 0
	break;
	case 15027://(3,10) (11, 3)
		return 67;//4 3
	break;
	case 15028://(3,10) (11, 4)
		return 67;//4 3
	break;
	case 15029://(3,10) (11, 5)
		return 67;//4 3
	break;
	case 15030://(3,10) (11, 6)
		return 67;//4 3
	break;
	case 15031://(3,10) (11, 7)
		return 67;//4 3
	break;
	case 15032://(3,10) (11, 8)
		return 67;//4 3
	break;
	case 15033://(3,10) (11, 9)
		return 64;//4 0
	break;
	case 15034://(3,10) (11, 10)
		return 67;//4 3
	break;
	case 15035://(3,10) (11, 11)
		return 67;//4 3
	break;
	case 15036://(3,10) (11, 12)
		return 67;//4 3
	break;
	case 15037://(3,10) (11, 13)
		return 67;//4 3
	break;
	case 15038://(3,10) (11, 14)
		return 67;//4 3
	break;
	case 15039://(3,10) (11, 15)
		return 67;//4 3
	break;
	case 15040://(3,10) (12, 0)
		return 64;//4 0
	break;
	case 15041://(3,10) (12, 1)
		return 64;//4 0
	break;
	case 15042://(3,10) (12, 2)
		return 64;//4 0
	break;
	case 15043://(3,10) (12, 3)
		return 67;//4 3
	break;
	case 15044://(3,10) (12, 4)
		return 67;//4 3
	break;
	case 15045://(3,10) (12, 5)
		return 67;//4 3
	break;
	case 15046://(3,10) (12, 6)
		return 67;//4 3
	break;
	case 15047://(3,10) (12, 7)
		return 67;//4 3
	break;
	case 15048://(3,10) (12, 8)
		return 67;//4 3
	break;
	case 15049://(3,10) (12, 9)
		return 64;//4 0
	break;
	case 15050://(3,10) (12, 10)
		return 67;//4 3
	break;
	case 15051://(3,10) (12, 11)
		return 67;//4 3
	break;
	case 15052://(3,10) (12, 12)
		return 67;//4 3
	break;
	case 15053://(3,10) (12, 13)
		return 67;//4 3
	break;
	case 15054://(3,10) (12, 14)
		return 67;//4 3
	break;
	case 15055://(3,10) (12, 15)
		return 67;//4 3
	break;
	case 15056://(3,10) (13, 0)
		return 64;//4 0
	break;
	case 15057://(3,10) (13, 1)
		return 64;//4 0
	break;
	case 15058://(3,10) (13, 2)
		return 64;//4 0
	break;
	case 15059://(3,10) (13, 3)
		return 67;//4 3
	break;
	case 15060://(3,10) (13, 4)
		return 67;//4 3
	break;
	case 15061://(3,10) (13, 5)
		return 67;//4 3
	break;
	case 15062://(3,10) (13, 6)
		return 67;//4 3
	break;
	case 15063://(3,10) (13, 7)
		return 67;//4 3
	break;
	case 15064://(3,10) (13, 8)
		return 67;//4 3
	break;
	case 15065://(3,10) (13, 9)
		return 64;//4 0
	break;
	case 15066://(3,10) (13, 10)
		return 67;//4 3
	break;
	case 15067://(3,10) (13, 11)
		return 67;//4 3
	break;
	case 15068://(3,10) (13, 12)
		return 67;//4 3
	break;
	case 15069://(3,10) (13, 13)
		return 67;//4 3
	break;
	case 15070://(3,10) (13, 14)
		return 67;//4 3
	break;
	case 15071://(3,10) (13, 15)
		return 67;//4 3
	break;
	case 15072://(3,10) (14, 0)
		return 0;//0 0
	break;
	case 15073://(3,10) (14, 1)
		return 0;//0 0
	break;
	case 15074://(3,10) (14, 2)
		return 0;//0 0
	break;
	case 15075://(3,10) (14, 3)
		return 3;//0 3
	break;
	case 15076://(3,10) (14, 4)
		return 3;//0 3
	break;
	case 15077://(3,10) (14, 5)
		return 3;//0 3
	break;
	case 15078://(3,10) (14, 6)
		return 3;//0 3
	break;
	case 15079://(3,10) (14, 7)
		return 3;//0 3
	break;
	case 15080://(3,10) (14, 8)
		return 3;//0 3
	break;
	case 15081://(3,10) (14, 9)
		return 0;//0 0
	break;
	case 15082://(3,10) (14, 10)
		return 3;//0 3
	break;
	case 15083://(3,10) (14, 11)
		return 3;//0 3
	break;
	case 15084://(3,10) (14, 12)
		return 3;//0 3
	break;
	case 15085://(3,10) (14, 13)
		return 3;//0 3
	break;
	case 15086://(3,10) (14, 14)
		return 3;//0 3
	break;
	case 15087://(3,10) (14, 15)
		return 3;//0 3
	break;
	case 15088://(3,10) (15, 0)
		return 64;//4 0
	break;
	case 15089://(3,10) (15, 1)
		return 64;//4 0
	break;
	case 15090://(3,10) (15, 2)
		return 64;//4 0
	break;
	case 15091://(3,10) (15, 3)
		return 67;//4 3
	break;
	case 15092://(3,10) (15, 4)
		return 67;//4 3
	break;
	case 15093://(3,10) (15, 5)
		return 67;//4 3
	break;
	case 15094://(3,10) (15, 6)
		return 67;//4 3
	break;
	case 15095://(3,10) (15, 7)
		return 67;//4 3
	break;
	case 15096://(3,10) (15, 8)
		return 67;//4 3
	break;
	case 15097://(3,10) (15, 9)
		return 64;//4 0
	break;
	case 15098://(3,10) (15, 10)
		return 67;//4 3
	break;
	case 15099://(3,10) (15, 11)
		return 67;//4 3
	break;
	case 15100://(3,10) (15, 12)
		return 67;//4 3
	break;
	case 15101://(3,10) (15, 13)
		return 67;//4 3
	break;
	case 15102://(3,10) (15, 14)
		return 67;//4 3
	break;
	case 15103://(3,10) (15, 15)
		return 67;//4 3
	break;
	case 15104://(3,11) (0, 0)
		return 0;//0 0
	break;
	case 15105://(3,11) (0, 1)
		return 2;//0 2
	break;
	case 15106://(3,11) (0, 2)
		return 2;//0 2
	break;
	case 15107://(3,11) (0, 3)
		return 2;//0 2
	break;
	case 15108://(3,11) (0, 4)
		return 0;//0 0
	break;
	case 15109://(3,11) (0, 5)
		return 2;//0 2
	break;
	case 15110://(3,11) (0, 6)
		return 2;//0 2
	break;
	case 15111://(3,11) (0, 7)
		return 2;//0 2
	break;
	case 15112://(3,11) (0, 8)
		return 2;//0 2
	break;
	case 15113://(3,11) (0, 9)
		return 2;//0 2
	break;
	case 15114://(3,11) (0, 10)
		return 2;//0 2
	break;
	case 15115://(3,11) (0, 11)
		return 2;//0 2
	break;
	case 15116://(3,11) (0, 12)
		return 2;//0 2
	break;
	case 15117://(3,11) (0, 13)
		return 2;//0 2
	break;
	case 15118://(3,11) (0, 14)
		return 2;//0 2
	break;
	case 15119://(3,11) (0, 15)
		return 2;//0 2
	break;
	case 15120://(3,11) (1, 0)
		return 0;//0 0
	break;
	case 15121://(3,11) (1, 1)
		return 2;//0 2
	break;
	case 15122://(3,11) (1, 2)
		return 2;//0 2
	break;
	case 15123://(3,11) (1, 3)
		return 2;//0 2
	break;
	case 15124://(3,11) (1, 4)
		return 0;//0 0
	break;
	case 15125://(3,11) (1, 5)
		return 2;//0 2
	break;
	case 15126://(3,11) (1, 6)
		return 2;//0 2
	break;
	case 15127://(3,11) (1, 7)
		return 2;//0 2
	break;
	case 15128://(3,11) (1, 8)
		return 2;//0 2
	break;
	case 15129://(3,11) (1, 9)
		return 2;//0 2
	break;
	case 15130://(3,11) (1, 10)
		return 2;//0 2
	break;
	case 15131://(3,11) (1, 11)
		return 2;//0 2
	break;
	case 15132://(3,11) (1, 12)
		return 2;//0 2
	break;
	case 15133://(3,11) (1, 13)
		return 2;//0 2
	break;
	case 15134://(3,11) (1, 14)
		return 2;//0 2
	break;
	case 15135://(3,11) (1, 15)
		return 2;//0 2
	break;
	case 15136://(3,11) (2, 0)
		return 0;//0 0
	break;
	case 15137://(3,11) (2, 1)
		return 2;//0 2
	break;
	case 15138://(3,11) (2, 2)
		return 2;//0 2
	break;
	case 15139://(3,11) (2, 3)
		return 2;//0 2
	break;
	case 15140://(3,11) (2, 4)
		return 0;//0 0
	break;
	case 15141://(3,11) (2, 5)
		return 2;//0 2
	break;
	case 15142://(3,11) (2, 6)
		return 2;//0 2
	break;
	case 15143://(3,11) (2, 7)
		return 2;//0 2
	break;
	case 15144://(3,11) (2, 8)
		return 2;//0 2
	break;
	case 15145://(3,11) (2, 9)
		return 2;//0 2
	break;
	case 15146://(3,11) (2, 10)
		return 2;//0 2
	break;
	case 15147://(3,11) (2, 11)
		return 2;//0 2
	break;
	case 15148://(3,11) (2, 12)
		return 2;//0 2
	break;
	case 15149://(3,11) (2, 13)
		return 2;//0 2
	break;
	case 15150://(3,11) (2, 14)
		return 2;//0 2
	break;
	case 15151://(3,11) (2, 15)
		return 2;//0 2
	break;
	case 15152://(3,11) (3, 0)
		return 64;//4 0
	break;
	case 15153://(3,11) (3, 1)
		return 66;//4 2
	break;
	case 15154://(3,11) (3, 2)
		return 66;//4 2
	break;
	case 15155://(3,11) (3, 3)
		return 66;//4 2
	break;
	case 15156://(3,11) (3, 4)
		return 64;//4 0
	break;
	case 15157://(3,11) (3, 5)
		return 66;//4 2
	break;
	case 15158://(3,11) (3, 6)
		return 66;//4 2
	break;
	case 15159://(3,11) (3, 7)
		return 66;//4 2
	break;
	case 15160://(3,11) (3, 8)
		return 66;//4 2
	break;
	case 15161://(3,11) (3, 9)
		return 66;//4 2
	break;
	case 15162://(3,11) (3, 10)
		return 66;//4 2
	break;
	case 15163://(3,11) (3, 11)
		return 66;//4 2
	break;
	case 15164://(3,11) (3, 12)
		return 66;//4 2
	break;
	case 15165://(3,11) (3, 13)
		return 66;//4 2
	break;
	case 15166://(3,11) (3, 14)
		return 66;//4 2
	break;
	case 15167://(3,11) (3, 15)
		return 66;//4 2
	break;
	case 15168://(3,11) (4, 0)
		return 0;//0 0
	break;
	case 15169://(3,11) (4, 1)
		return 2;//0 2
	break;
	case 15170://(3,11) (4, 2)
		return 2;//0 2
	break;
	case 15171://(3,11) (4, 3)
		return 2;//0 2
	break;
	case 15172://(3,11) (4, 4)
		return 0;//0 0
	break;
	case 15173://(3,11) (4, 5)
		return 2;//0 2
	break;
	case 15174://(3,11) (4, 6)
		return 2;//0 2
	break;
	case 15175://(3,11) (4, 7)
		return 2;//0 2
	break;
	case 15176://(3,11) (4, 8)
		return 2;//0 2
	break;
	case 15177://(3,11) (4, 9)
		return 2;//0 2
	break;
	case 15178://(3,11) (4, 10)
		return 2;//0 2
	break;
	case 15179://(3,11) (4, 11)
		return 2;//0 2
	break;
	case 15180://(3,11) (4, 12)
		return 2;//0 2
	break;
	case 15181://(3,11) (4, 13)
		return 2;//0 2
	break;
	case 15182://(3,11) (4, 14)
		return 2;//0 2
	break;
	case 15183://(3,11) (4, 15)
		return 2;//0 2
	break;
	case 15184://(3,11) (5, 0)
		return 0;//0 0
	break;
	case 15185://(3,11) (5, 1)
		return 2;//0 2
	break;
	case 15186://(3,11) (5, 2)
		return 2;//0 2
	break;
	case 15187://(3,11) (5, 3)
		return 2;//0 2
	break;
	case 15188://(3,11) (5, 4)
		return 0;//0 0
	break;
	case 15189://(3,11) (5, 5)
		return 2;//0 2
	break;
	case 15190://(3,11) (5, 6)
		return 2;//0 2
	break;
	case 15191://(3,11) (5, 7)
		return 2;//0 2
	break;
	case 15192://(3,11) (5, 8)
		return 2;//0 2
	break;
	case 15193://(3,11) (5, 9)
		return 2;//0 2
	break;
	case 15194://(3,11) (5, 10)
		return 2;//0 2
	break;
	case 15195://(3,11) (5, 11)
		return 2;//0 2
	break;
	case 15196://(3,11) (5, 12)
		return 2;//0 2
	break;
	case 15197://(3,11) (5, 13)
		return 2;//0 2
	break;
	case 15198://(3,11) (5, 14)
		return 2;//0 2
	break;
	case 15199://(3,11) (5, 15)
		return 2;//0 2
	break;
	case 15200://(3,11) (6, 0)
		return 64;//4 0
	break;
	case 15201://(3,11) (6, 1)
		return 66;//4 2
	break;
	case 15202://(3,11) (6, 2)
		return 66;//4 2
	break;
	case 15203://(3,11) (6, 3)
		return 66;//4 2
	break;
	case 15204://(3,11) (6, 4)
		return 64;//4 0
	break;
	case 15205://(3,11) (6, 5)
		return 66;//4 2
	break;
	case 15206://(3,11) (6, 6)
		return 66;//4 2
	break;
	case 15207://(3,11) (6, 7)
		return 66;//4 2
	break;
	case 15208://(3,11) (6, 8)
		return 66;//4 2
	break;
	case 15209://(3,11) (6, 9)
		return 66;//4 2
	break;
	case 15210://(3,11) (6, 10)
		return 66;//4 2
	break;
	case 15211://(3,11) (6, 11)
		return 66;//4 2
	break;
	case 15212://(3,11) (6, 12)
		return 66;//4 2
	break;
	case 15213://(3,11) (6, 13)
		return 66;//4 2
	break;
	case 15214://(3,11) (6, 14)
		return 66;//4 2
	break;
	case 15215://(3,11) (6, 15)
		return 66;//4 2
	break;
	case 15216://(3,11) (7, 0)
		return 64;//4 0
	break;
	case 15217://(3,11) (7, 1)
		return 66;//4 2
	break;
	case 15218://(3,11) (7, 2)
		return 66;//4 2
	break;
	case 15219://(3,11) (7, 3)
		return 66;//4 2
	break;
	case 15220://(3,11) (7, 4)
		return 64;//4 0
	break;
	case 15221://(3,11) (7, 5)
		return 66;//4 2
	break;
	case 15222://(3,11) (7, 6)
		return 66;//4 2
	break;
	case 15223://(3,11) (7, 7)
		return 66;//4 2
	break;
	case 15224://(3,11) (7, 8)
		return 66;//4 2
	break;
	case 15225://(3,11) (7, 9)
		return 66;//4 2
	break;
	case 15226://(3,11) (7, 10)
		return 66;//4 2
	break;
	case 15227://(3,11) (7, 11)
		return 66;//4 2
	break;
	case 15228://(3,11) (7, 12)
		return 66;//4 2
	break;
	case 15229://(3,11) (7, 13)
		return 66;//4 2
	break;
	case 15230://(3,11) (7, 14)
		return 66;//4 2
	break;
	case 15231://(3,11) (7, 15)
		return 66;//4 2
	break;
	case 15232://(3,11) (8, 0)
		return 0;//0 0
	break;
	case 15233://(3,11) (8, 1)
		return 2;//0 2
	break;
	case 15234://(3,11) (8, 2)
		return 2;//0 2
	break;
	case 15235://(3,11) (8, 3)
		return 2;//0 2
	break;
	case 15236://(3,11) (8, 4)
		return 0;//0 0
	break;
	case 15237://(3,11) (8, 5)
		return 2;//0 2
	break;
	case 15238://(3,11) (8, 6)
		return 2;//0 2
	break;
	case 15239://(3,11) (8, 7)
		return 2;//0 2
	break;
	case 15240://(3,11) (8, 8)
		return 2;//0 2
	break;
	case 15241://(3,11) (8, 9)
		return 2;//0 2
	break;
	case 15242://(3,11) (8, 10)
		return 2;//0 2
	break;
	case 15243://(3,11) (8, 11)
		return 2;//0 2
	break;
	case 15244://(3,11) (8, 12)
		return 2;//0 2
	break;
	case 15245://(3,11) (8, 13)
		return 2;//0 2
	break;
	case 15246://(3,11) (8, 14)
		return 2;//0 2
	break;
	case 15247://(3,11) (8, 15)
		return 2;//0 2
	break;
	case 15248://(3,11) (9, 0)
		return 0;//0 0
	break;
	case 15249://(3,11) (9, 1)
		return 2;//0 2
	break;
	case 15250://(3,11) (9, 2)
		return 2;//0 2
	break;
	case 15251://(3,11) (9, 3)
		return 2;//0 2
	break;
	case 15252://(3,11) (9, 4)
		return 0;//0 0
	break;
	case 15253://(3,11) (9, 5)
		return 2;//0 2
	break;
	case 15254://(3,11) (9, 6)
		return 2;//0 2
	break;
	case 15255://(3,11) (9, 7)
		return 2;//0 2
	break;
	case 15256://(3,11) (9, 8)
		return 2;//0 2
	break;
	case 15257://(3,11) (9, 9)
		return 2;//0 2
	break;
	case 15258://(3,11) (9, 10)
		return 2;//0 2
	break;
	case 15259://(3,11) (9, 11)
		return 2;//0 2
	break;
	case 15260://(3,11) (9, 12)
		return 2;//0 2
	break;
	case 15261://(3,11) (9, 13)
		return 2;//0 2
	break;
	case 15262://(3,11) (9, 14)
		return 2;//0 2
	break;
	case 15263://(3,11) (9, 15)
		return 2;//0 2
	break;
	case 15264://(3,11) (10, 0)
		return 64;//4 0
	break;
	case 15265://(3,11) (10, 1)
		return 66;//4 2
	break;
	case 15266://(3,11) (10, 2)
		return 66;//4 2
	break;
	case 15267://(3,11) (10, 3)
		return 66;//4 2
	break;
	case 15268://(3,11) (10, 4)
		return 64;//4 0
	break;
	case 15269://(3,11) (10, 5)
		return 66;//4 2
	break;
	case 15270://(3,11) (10, 6)
		return 66;//4 2
	break;
	case 15271://(3,11) (10, 7)
		return 66;//4 2
	break;
	case 15272://(3,11) (10, 8)
		return 66;//4 2
	break;
	case 15273://(3,11) (10, 9)
		return 66;//4 2
	break;
	case 15274://(3,11) (10, 10)
		return 66;//4 2
	break;
	case 15275://(3,11) (10, 11)
		return 66;//4 2
	break;
	case 15276://(3,11) (10, 12)
		return 66;//4 2
	break;
	case 15277://(3,11) (10, 13)
		return 66;//4 2
	break;
	case 15278://(3,11) (10, 14)
		return 66;//4 2
	break;
	case 15279://(3,11) (10, 15)
		return 66;//4 2
	break;
	case 15280://(3,11) (11, 0)
		return 64;//4 0
	break;
	case 15281://(3,11) (11, 1)
		return 66;//4 2
	break;
	case 15282://(3,11) (11, 2)
		return 66;//4 2
	break;
	case 15283://(3,11) (11, 3)
		return 66;//4 2
	break;
	case 15284://(3,11) (11, 4)
		return 64;//4 0
	break;
	case 15285://(3,11) (11, 5)
		return 66;//4 2
	break;
	case 15286://(3,11) (11, 6)
		return 66;//4 2
	break;
	case 15287://(3,11) (11, 7)
		return 66;//4 2
	break;
	case 15288://(3,11) (11, 8)
		return 66;//4 2
	break;
	case 15289://(3,11) (11, 9)
		return 66;//4 2
	break;
	case 15290://(3,11) (11, 10)
		return 66;//4 2
	break;
	case 15291://(3,11) (11, 11)
		return 66;//4 2
	break;
	case 15292://(3,11) (11, 12)
		return 66;//4 2
	break;
	case 15293://(3,11) (11, 13)
		return 66;//4 2
	break;
	case 15294://(3,11) (11, 14)
		return 66;//4 2
	break;
	case 15295://(3,11) (11, 15)
		return 66;//4 2
	break;
	case 15296://(3,11) (12, 0)
		return 64;//4 0
	break;
	case 15297://(3,11) (12, 1)
		return 66;//4 2
	break;
	case 15298://(3,11) (12, 2)
		return 66;//4 2
	break;
	case 15299://(3,11) (12, 3)
		return 66;//4 2
	break;
	case 15300://(3,11) (12, 4)
		return 64;//4 0
	break;
	case 15301://(3,11) (12, 5)
		return 66;//4 2
	break;
	case 15302://(3,11) (12, 6)
		return 66;//4 2
	break;
	case 15303://(3,11) (12, 7)
		return 66;//4 2
	break;
	case 15304://(3,11) (12, 8)
		return 66;//4 2
	break;
	case 15305://(3,11) (12, 9)
		return 66;//4 2
	break;
	case 15306://(3,11) (12, 10)
		return 66;//4 2
	break;
	case 15307://(3,11) (12, 11)
		return 66;//4 2
	break;
	case 15308://(3,11) (12, 12)
		return 66;//4 2
	break;
	case 15309://(3,11) (12, 13)
		return 66;//4 2
	break;
	case 15310://(3,11) (12, 14)
		return 66;//4 2
	break;
	case 15311://(3,11) (12, 15)
		return 66;//4 2
	break;
	case 15312://(3,11) (13, 0)
		return 64;//4 0
	break;
	case 15313://(3,11) (13, 1)
		return 66;//4 2
	break;
	case 15314://(3,11) (13, 2)
		return 66;//4 2
	break;
	case 15315://(3,11) (13, 3)
		return 66;//4 2
	break;
	case 15316://(3,11) (13, 4)
		return 64;//4 0
	break;
	case 15317://(3,11) (13, 5)
		return 66;//4 2
	break;
	case 15318://(3,11) (13, 6)
		return 66;//4 2
	break;
	case 15319://(3,11) (13, 7)
		return 66;//4 2
	break;
	case 15320://(3,11) (13, 8)
		return 66;//4 2
	break;
	case 15321://(3,11) (13, 9)
		return 66;//4 2
	break;
	case 15322://(3,11) (13, 10)
		return 66;//4 2
	break;
	case 15323://(3,11) (13, 11)
		return 66;//4 2
	break;
	case 15324://(3,11) (13, 12)
		return 66;//4 2
	break;
	case 15325://(3,11) (13, 13)
		return 66;//4 2
	break;
	case 15326://(3,11) (13, 14)
		return 66;//4 2
	break;
	case 15327://(3,11) (13, 15)
		return 66;//4 2
	break;
	case 15328://(3,11) (14, 0)
		return 0;//0 0
	break;
	case 15329://(3,11) (14, 1)
		return 2;//0 2
	break;
	case 15330://(3,11) (14, 2)
		return 2;//0 2
	break;
	case 15331://(3,11) (14, 3)
		return 2;//0 2
	break;
	case 15332://(3,11) (14, 4)
		return 0;//0 0
	break;
	case 15333://(3,11) (14, 5)
		return 2;//0 2
	break;
	case 15334://(3,11) (14, 6)
		return 2;//0 2
	break;
	case 15335://(3,11) (14, 7)
		return 2;//0 2
	break;
	case 15336://(3,11) (14, 8)
		return 2;//0 2
	break;
	case 15337://(3,11) (14, 9)
		return 2;//0 2
	break;
	case 15338://(3,11) (14, 10)
		return 2;//0 2
	break;
	case 15339://(3,11) (14, 11)
		return 2;//0 2
	break;
	case 15340://(3,11) (14, 12)
		return 2;//0 2
	break;
	case 15341://(3,11) (14, 13)
		return 2;//0 2
	break;
	case 15342://(3,11) (14, 14)
		return 2;//0 2
	break;
	case 15343://(3,11) (14, 15)
		return 2;//0 2
	break;
	case 15344://(3,11) (15, 0)
		return 64;//4 0
	break;
	case 15345://(3,11) (15, 1)
		return 66;//4 2
	break;
	case 15346://(3,11) (15, 2)
		return 66;//4 2
	break;
	case 15347://(3,11) (15, 3)
		return 66;//4 2
	break;
	case 15348://(3,11) (15, 4)
		return 64;//4 0
	break;
	case 15349://(3,11) (15, 5)
		return 66;//4 2
	break;
	case 15350://(3,11) (15, 6)
		return 66;//4 2
	break;
	case 15351://(3,11) (15, 7)
		return 66;//4 2
	break;
	case 15352://(3,11) (15, 8)
		return 66;//4 2
	break;
	case 15353://(3,11) (15, 9)
		return 66;//4 2
	break;
	case 15354://(3,11) (15, 10)
		return 66;//4 2
	break;
	case 15355://(3,11) (15, 11)
		return 66;//4 2
	break;
	case 15356://(3,11) (15, 12)
		return 66;//4 2
	break;
	case 15357://(3,11) (15, 13)
		return 66;//4 2
	break;
	case 15358://(3,11) (15, 14)
		return 66;//4 2
	break;
	case 15359://(3,11) (15, 15)
		return 66;//4 2
	break;
	case 15360://(3,12) (0, 0)
		return 0;//0 0
	break;
	case 15361://(3,12) (0, 1)
		return 0;//0 0
	break;
	case 15362://(3,12) (0, 2)
		return 2;//0 2
	break;
	case 15363://(3,12) (0, 3)
		return 2;//0 2
	break;
	case 15364://(3,12) (0, 4)
		return 2;//0 2
	break;
	case 15365://(3,12) (0, 5)
		return 2;//0 2
	break;
	case 15366://(3,12) (0, 6)
		return 2;//0 2
	break;
	case 15367://(3,12) (0, 7)
		return 2;//0 2
	break;
	case 15368://(3,12) (0, 8)
		return 2;//0 2
	break;
	case 15369://(3,12) (0, 9)
		return 2;//0 2
	break;
	case 15370://(3,12) (0, 10)
		return 2;//0 2
	break;
	case 15371://(3,12) (0, 11)
		return 2;//0 2
	break;
	case 15372://(3,12) (0, 12)
		return 2;//0 2
	break;
	case 15373://(3,12) (0, 13)
		return 2;//0 2
	break;
	case 15374://(3,12) (0, 14)
		return 2;//0 2
	break;
	case 15375://(3,12) (0, 15)
		return 2;//0 2
	break;
	case 15376://(3,12) (1, 0)
		return 0;//0 0
	break;
	case 15377://(3,12) (1, 1)
		return 0;//0 0
	break;
	case 15378://(3,12) (1, 2)
		return 2;//0 2
	break;
	case 15379://(3,12) (1, 3)
		return 2;//0 2
	break;
	case 15380://(3,12) (1, 4)
		return 2;//0 2
	break;
	case 15381://(3,12) (1, 5)
		return 2;//0 2
	break;
	case 15382://(3,12) (1, 6)
		return 2;//0 2
	break;
	case 15383://(3,12) (1, 7)
		return 2;//0 2
	break;
	case 15384://(3,12) (1, 8)
		return 2;//0 2
	break;
	case 15385://(3,12) (1, 9)
		return 2;//0 2
	break;
	case 15386://(3,12) (1, 10)
		return 2;//0 2
	break;
	case 15387://(3,12) (1, 11)
		return 2;//0 2
	break;
	case 15388://(3,12) (1, 12)
		return 2;//0 2
	break;
	case 15389://(3,12) (1, 13)
		return 2;//0 2
	break;
	case 15390://(3,12) (1, 14)
		return 2;//0 2
	break;
	case 15391://(3,12) (1, 15)
		return 2;//0 2
	break;
	case 15392://(3,12) (2, 0)
		return 0;//0 0
	break;
	case 15393://(3,12) (2, 1)
		return 0;//0 0
	break;
	case 15394://(3,12) (2, 2)
		return 2;//0 2
	break;
	case 15395://(3,12) (2, 3)
		return 2;//0 2
	break;
	case 15396://(3,12) (2, 4)
		return 2;//0 2
	break;
	case 15397://(3,12) (2, 5)
		return 2;//0 2
	break;
	case 15398://(3,12) (2, 6)
		return 2;//0 2
	break;
	case 15399://(3,12) (2, 7)
		return 2;//0 2
	break;
	case 15400://(3,12) (2, 8)
		return 2;//0 2
	break;
	case 15401://(3,12) (2, 9)
		return 2;//0 2
	break;
	case 15402://(3,12) (2, 10)
		return 2;//0 2
	break;
	case 15403://(3,12) (2, 11)
		return 2;//0 2
	break;
	case 15404://(3,12) (2, 12)
		return 2;//0 2
	break;
	case 15405://(3,12) (2, 13)
		return 2;//0 2
	break;
	case 15406://(3,12) (2, 14)
		return 2;//0 2
	break;
	case 15407://(3,12) (2, 15)
		return 2;//0 2
	break;
	case 15408://(3,12) (3, 0)
		return 64;//4 0
	break;
	case 15409://(3,12) (3, 1)
		return 64;//4 0
	break;
	case 15410://(3,12) (3, 2)
		return 66;//4 2
	break;
	case 15411://(3,12) (3, 3)
		return 66;//4 2
	break;
	case 15412://(3,12) (3, 4)
		return 66;//4 2
	break;
	case 15413://(3,12) (3, 5)
		return 66;//4 2
	break;
	case 15414://(3,12) (3, 6)
		return 66;//4 2
	break;
	case 15415://(3,12) (3, 7)
		return 66;//4 2
	break;
	case 15416://(3,12) (3, 8)
		return 66;//4 2
	break;
	case 15417://(3,12) (3, 9)
		return 66;//4 2
	break;
	case 15418://(3,12) (3, 10)
		return 66;//4 2
	break;
	case 15419://(3,12) (3, 11)
		return 66;//4 2
	break;
	case 15420://(3,12) (3, 12)
		return 66;//4 2
	break;
	case 15421://(3,12) (3, 13)
		return 66;//4 2
	break;
	case 15422://(3,12) (3, 14)
		return 66;//4 2
	break;
	case 15423://(3,12) (3, 15)
		return 66;//4 2
	break;
	case 15424://(3,12) (4, 0)
		return 0;//0 0
	break;
	case 15425://(3,12) (4, 1)
		return 0;//0 0
	break;
	case 15426://(3,12) (4, 2)
		return 2;//0 2
	break;
	case 15427://(3,12) (4, 3)
		return 2;//0 2
	break;
	case 15428://(3,12) (4, 4)
		return 2;//0 2
	break;
	case 15429://(3,12) (4, 5)
		return 2;//0 2
	break;
	case 15430://(3,12) (4, 6)
		return 2;//0 2
	break;
	case 15431://(3,12) (4, 7)
		return 2;//0 2
	break;
	case 15432://(3,12) (4, 8)
		return 2;//0 2
	break;
	case 15433://(3,12) (4, 9)
		return 2;//0 2
	break;
	case 15434://(3,12) (4, 10)
		return 2;//0 2
	break;
	case 15435://(3,12) (4, 11)
		return 2;//0 2
	break;
	case 15436://(3,12) (4, 12)
		return 2;//0 2
	break;
	case 15437://(3,12) (4, 13)
		return 2;//0 2
	break;
	case 15438://(3,12) (4, 14)
		return 2;//0 2
	break;
	case 15439://(3,12) (4, 15)
		return 2;//0 2
	break;
	case 15440://(3,12) (5, 0)
		return 0;//0 0
	break;
	case 15441://(3,12) (5, 1)
		return 0;//0 0
	break;
	case 15442://(3,12) (5, 2)
		return 2;//0 2
	break;
	case 15443://(3,12) (5, 3)
		return 2;//0 2
	break;
	case 15444://(3,12) (5, 4)
		return 2;//0 2
	break;
	case 15445://(3,12) (5, 5)
		return 2;//0 2
	break;
	case 15446://(3,12) (5, 6)
		return 2;//0 2
	break;
	case 15447://(3,12) (5, 7)
		return 2;//0 2
	break;
	case 15448://(3,12) (5, 8)
		return 2;//0 2
	break;
	case 15449://(3,12) (5, 9)
		return 2;//0 2
	break;
	case 15450://(3,12) (5, 10)
		return 2;//0 2
	break;
	case 15451://(3,12) (5, 11)
		return 2;//0 2
	break;
	case 15452://(3,12) (5, 12)
		return 2;//0 2
	break;
	case 15453://(3,12) (5, 13)
		return 2;//0 2
	break;
	case 15454://(3,12) (5, 14)
		return 2;//0 2
	break;
	case 15455://(3,12) (5, 15)
		return 2;//0 2
	break;
	case 15456://(3,12) (6, 0)
		return 64;//4 0
	break;
	case 15457://(3,12) (6, 1)
		return 64;//4 0
	break;
	case 15458://(3,12) (6, 2)
		return 66;//4 2
	break;
	case 15459://(3,12) (6, 3)
		return 66;//4 2
	break;
	case 15460://(3,12) (6, 4)
		return 66;//4 2
	break;
	case 15461://(3,12) (6, 5)
		return 66;//4 2
	break;
	case 15462://(3,12) (6, 6)
		return 66;//4 2
	break;
	case 15463://(3,12) (6, 7)
		return 66;//4 2
	break;
	case 15464://(3,12) (6, 8)
		return 66;//4 2
	break;
	case 15465://(3,12) (6, 9)
		return 66;//4 2
	break;
	case 15466://(3,12) (6, 10)
		return 66;//4 2
	break;
	case 15467://(3,12) (6, 11)
		return 66;//4 2
	break;
	case 15468://(3,12) (6, 12)
		return 66;//4 2
	break;
	case 15469://(3,12) (6, 13)
		return 66;//4 2
	break;
	case 15470://(3,12) (6, 14)
		return 66;//4 2
	break;
	case 15471://(3,12) (6, 15)
		return 66;//4 2
	break;
	case 15472://(3,12) (7, 0)
		return 64;//4 0
	break;
	case 15473://(3,12) (7, 1)
		return 64;//4 0
	break;
	case 15474://(3,12) (7, 2)
		return 66;//4 2
	break;
	case 15475://(3,12) (7, 3)
		return 66;//4 2
	break;
	case 15476://(3,12) (7, 4)
		return 66;//4 2
	break;
	case 15477://(3,12) (7, 5)
		return 66;//4 2
	break;
	case 15478://(3,12) (7, 6)
		return 66;//4 2
	break;
	case 15479://(3,12) (7, 7)
		return 66;//4 2
	break;
	case 15480://(3,12) (7, 8)
		return 66;//4 2
	break;
	case 15481://(3,12) (7, 9)
		return 66;//4 2
	break;
	case 15482://(3,12) (7, 10)
		return 66;//4 2
	break;
	case 15483://(3,12) (7, 11)
		return 66;//4 2
	break;
	case 15484://(3,12) (7, 12)
		return 66;//4 2
	break;
	case 15485://(3,12) (7, 13)
		return 66;//4 2
	break;
	case 15486://(3,12) (7, 14)
		return 66;//4 2
	break;
	case 15487://(3,12) (7, 15)
		return 66;//4 2
	break;
	case 15488://(3,12) (8, 0)
		return 0;//0 0
	break;
	case 15489://(3,12) (8, 1)
		return 0;//0 0
	break;
	case 15490://(3,12) (8, 2)
		return 2;//0 2
	break;
	case 15491://(3,12) (8, 3)
		return 2;//0 2
	break;
	case 15492://(3,12) (8, 4)
		return 2;//0 2
	break;
	case 15493://(3,12) (8, 5)
		return 2;//0 2
	break;
	case 15494://(3,12) (8, 6)
		return 2;//0 2
	break;
	case 15495://(3,12) (8, 7)
		return 2;//0 2
	break;
	case 15496://(3,12) (8, 8)
		return 2;//0 2
	break;
	case 15497://(3,12) (8, 9)
		return 2;//0 2
	break;
	case 15498://(3,12) (8, 10)
		return 2;//0 2
	break;
	case 15499://(3,12) (8, 11)
		return 2;//0 2
	break;
	case 15500://(3,12) (8, 12)
		return 2;//0 2
	break;
	case 15501://(3,12) (8, 13)
		return 2;//0 2
	break;
	case 15502://(3,12) (8, 14)
		return 2;//0 2
	break;
	case 15503://(3,12) (8, 15)
		return 2;//0 2
	break;
	case 15504://(3,12) (9, 0)
		return 0;//0 0
	break;
	case 15505://(3,12) (9, 1)
		return 0;//0 0
	break;
	case 15506://(3,12) (9, 2)
		return 2;//0 2
	break;
	case 15507://(3,12) (9, 3)
		return 2;//0 2
	break;
	case 15508://(3,12) (9, 4)
		return 2;//0 2
	break;
	case 15509://(3,12) (9, 5)
		return 2;//0 2
	break;
	case 15510://(3,12) (9, 6)
		return 2;//0 2
	break;
	case 15511://(3,12) (9, 7)
		return 2;//0 2
	break;
	case 15512://(3,12) (9, 8)
		return 2;//0 2
	break;
	case 15513://(3,12) (9, 9)
		return 2;//0 2
	break;
	case 15514://(3,12) (9, 10)
		return 2;//0 2
	break;
	case 15515://(3,12) (9, 11)
		return 2;//0 2
	break;
	case 15516://(3,12) (9, 12)
		return 2;//0 2
	break;
	case 15517://(3,12) (9, 13)
		return 2;//0 2
	break;
	case 15518://(3,12) (9, 14)
		return 2;//0 2
	break;
	case 15519://(3,12) (9, 15)
		return 2;//0 2
	break;
	case 15520://(3,12) (10, 0)
		return 64;//4 0
	break;
	case 15521://(3,12) (10, 1)
		return 64;//4 0
	break;
	case 15522://(3,12) (10, 2)
		return 66;//4 2
	break;
	case 15523://(3,12) (10, 3)
		return 66;//4 2
	break;
	case 15524://(3,12) (10, 4)
		return 66;//4 2
	break;
	case 15525://(3,12) (10, 5)
		return 66;//4 2
	break;
	case 15526://(3,12) (10, 6)
		return 66;//4 2
	break;
	case 15527://(3,12) (10, 7)
		return 66;//4 2
	break;
	case 15528://(3,12) (10, 8)
		return 66;//4 2
	break;
	case 15529://(3,12) (10, 9)
		return 66;//4 2
	break;
	case 15530://(3,12) (10, 10)
		return 66;//4 2
	break;
	case 15531://(3,12) (10, 11)
		return 66;//4 2
	break;
	case 15532://(3,12) (10, 12)
		return 66;//4 2
	break;
	case 15533://(3,12) (10, 13)
		return 66;//4 2
	break;
	case 15534://(3,12) (10, 14)
		return 66;//4 2
	break;
	case 15535://(3,12) (10, 15)
		return 66;//4 2
	break;
	case 15536://(3,12) (11, 0)
		return 64;//4 0
	break;
	case 15537://(3,12) (11, 1)
		return 64;//4 0
	break;
	case 15538://(3,12) (11, 2)
		return 66;//4 2
	break;
	case 15539://(3,12) (11, 3)
		return 66;//4 2
	break;
	case 15540://(3,12) (11, 4)
		return 66;//4 2
	break;
	case 15541://(3,12) (11, 5)
		return 66;//4 2
	break;
	case 15542://(3,12) (11, 6)
		return 66;//4 2
	break;
	case 15543://(3,12) (11, 7)
		return 66;//4 2
	break;
	case 15544://(3,12) (11, 8)
		return 66;//4 2
	break;
	case 15545://(3,12) (11, 9)
		return 66;//4 2
	break;
	case 15546://(3,12) (11, 10)
		return 66;//4 2
	break;
	case 15547://(3,12) (11, 11)
		return 66;//4 2
	break;
	case 15548://(3,12) (11, 12)
		return 66;//4 2
	break;
	case 15549://(3,12) (11, 13)
		return 66;//4 2
	break;
	case 15550://(3,12) (11, 14)
		return 66;//4 2
	break;
	case 15551://(3,12) (11, 15)
		return 66;//4 2
	break;
	case 15552://(3,12) (12, 0)
		return 64;//4 0
	break;
	case 15553://(3,12) (12, 1)
		return 64;//4 0
	break;
	case 15554://(3,12) (12, 2)
		return 66;//4 2
	break;
	case 15555://(3,12) (12, 3)
		return 66;//4 2
	break;
	case 15556://(3,12) (12, 4)
		return 66;//4 2
	break;
	case 15557://(3,12) (12, 5)
		return 66;//4 2
	break;
	case 15558://(3,12) (12, 6)
		return 66;//4 2
	break;
	case 15559://(3,12) (12, 7)
		return 66;//4 2
	break;
	case 15560://(3,12) (12, 8)
		return 66;//4 2
	break;
	case 15561://(3,12) (12, 9)
		return 66;//4 2
	break;
	case 15562://(3,12) (12, 10)
		return 66;//4 2
	break;
	case 15563://(3,12) (12, 11)
		return 66;//4 2
	break;
	case 15564://(3,12) (12, 12)
		return 66;//4 2
	break;
	case 15565://(3,12) (12, 13)
		return 66;//4 2
	break;
	case 15566://(3,12) (12, 14)
		return 66;//4 2
	break;
	case 15567://(3,12) (12, 15)
		return 66;//4 2
	break;
	case 15568://(3,12) (13, 0)
		return 64;//4 0
	break;
	case 15569://(3,12) (13, 1)
		return 64;//4 0
	break;
	case 15570://(3,12) (13, 2)
		return 66;//4 2
	break;
	case 15571://(3,12) (13, 3)
		return 66;//4 2
	break;
	case 15572://(3,12) (13, 4)
		return 66;//4 2
	break;
	case 15573://(3,12) (13, 5)
		return 66;//4 2
	break;
	case 15574://(3,12) (13, 6)
		return 66;//4 2
	break;
	case 15575://(3,12) (13, 7)
		return 66;//4 2
	break;
	case 15576://(3,12) (13, 8)
		return 66;//4 2
	break;
	case 15577://(3,12) (13, 9)
		return 66;//4 2
	break;
	case 15578://(3,12) (13, 10)
		return 66;//4 2
	break;
	case 15579://(3,12) (13, 11)
		return 66;//4 2
	break;
	case 15580://(3,12) (13, 12)
		return 66;//4 2
	break;
	case 15581://(3,12) (13, 13)
		return 66;//4 2
	break;
	case 15582://(3,12) (13, 14)
		return 66;//4 2
	break;
	case 15583://(3,12) (13, 15)
		return 66;//4 2
	break;
	case 15584://(3,12) (14, 0)
		return 0;//0 0
	break;
	case 15585://(3,12) (14, 1)
		return 0;//0 0
	break;
	case 15586://(3,12) (14, 2)
		return 2;//0 2
	break;
	case 15587://(3,12) (14, 3)
		return 2;//0 2
	break;
	case 15588://(3,12) (14, 4)
		return 2;//0 2
	break;
	case 15589://(3,12) (14, 5)
		return 2;//0 2
	break;
	case 15590://(3,12) (14, 6)
		return 2;//0 2
	break;
	case 15591://(3,12) (14, 7)
		return 2;//0 2
	break;
	case 15592://(3,12) (14, 8)
		return 2;//0 2
	break;
	case 15593://(3,12) (14, 9)
		return 2;//0 2
	break;
	case 15594://(3,12) (14, 10)
		return 2;//0 2
	break;
	case 15595://(3,12) (14, 11)
		return 2;//0 2
	break;
	case 15596://(3,12) (14, 12)
		return 2;//0 2
	break;
	case 15597://(3,12) (14, 13)
		return 2;//0 2
	break;
	case 15598://(3,12) (14, 14)
		return 2;//0 2
	break;
	case 15599://(3,12) (14, 15)
		return 2;//0 2
	break;
	case 15600://(3,12) (15, 0)
		return 64;//4 0
	break;
	case 15601://(3,12) (15, 1)
		return 64;//4 0
	break;
	case 15602://(3,12) (15, 2)
		return 66;//4 2
	break;
	case 15603://(3,12) (15, 3)
		return 66;//4 2
	break;
	case 15604://(3,12) (15, 4)
		return 66;//4 2
	break;
	case 15605://(3,12) (15, 5)
		return 66;//4 2
	break;
	case 15606://(3,12) (15, 6)
		return 66;//4 2
	break;
	case 15607://(3,12) (15, 7)
		return 66;//4 2
	break;
	case 15608://(3,12) (15, 8)
		return 66;//4 2
	break;
	case 15609://(3,12) (15, 9)
		return 66;//4 2
	break;
	case 15610://(3,12) (15, 10)
		return 66;//4 2
	break;
	case 15611://(3,12) (15, 11)
		return 66;//4 2
	break;
	case 15612://(3,12) (15, 12)
		return 66;//4 2
	break;
	case 15613://(3,12) (15, 13)
		return 66;//4 2
	break;
	case 15614://(3,12) (15, 14)
		return 66;//4 2
	break;
	case 15615://(3,12) (15, 15)
		return 66;//4 2
	break;
	case 15616://(3,13) (0, 0)
		return 0;//0 0
	break;
	case 15617://(3,13) (0, 1)
		return 2;//0 2
	break;
	case 15618://(3,13) (0, 2)
		return 0;//0 0
	break;
	case 15619://(3,13) (0, 3)
		return 2;//0 2
	break;
	case 15620://(3,13) (0, 4)
		return 2;//0 2
	break;
	case 15621://(3,13) (0, 5)
		return 2;//0 2
	break;
	case 15622://(3,13) (0, 6)
		return 2;//0 2
	break;
	case 15623://(3,13) (0, 7)
		return 2;//0 2
	break;
	case 15624://(3,13) (0, 8)
		return 2;//0 2
	break;
	case 15625://(3,13) (0, 9)
		return 2;//0 2
	break;
	case 15626://(3,13) (0, 10)
		return 2;//0 2
	break;
	case 15627://(3,13) (0, 11)
		return 2;//0 2
	break;
	case 15628://(3,13) (0, 12)
		return 2;//0 2
	break;
	case 15629://(3,13) (0, 13)
		return 2;//0 2
	break;
	case 15630://(3,13) (0, 14)
		return 2;//0 2
	break;
	case 15631://(3,13) (0, 15)
		return 2;//0 2
	break;
	case 15632://(3,13) (1, 0)
		return 0;//0 0
	break;
	case 15633://(3,13) (1, 1)
		return 2;//0 2
	break;
	case 15634://(3,13) (1, 2)
		return 0;//0 0
	break;
	case 15635://(3,13) (1, 3)
		return 2;//0 2
	break;
	case 15636://(3,13) (1, 4)
		return 2;//0 2
	break;
	case 15637://(3,13) (1, 5)
		return 2;//0 2
	break;
	case 15638://(3,13) (1, 6)
		return 2;//0 2
	break;
	case 15639://(3,13) (1, 7)
		return 2;//0 2
	break;
	case 15640://(3,13) (1, 8)
		return 2;//0 2
	break;
	case 15641://(3,13) (1, 9)
		return 2;//0 2
	break;
	case 15642://(3,13) (1, 10)
		return 2;//0 2
	break;
	case 15643://(3,13) (1, 11)
		return 2;//0 2
	break;
	case 15644://(3,13) (1, 12)
		return 2;//0 2
	break;
	case 15645://(3,13) (1, 13)
		return 2;//0 2
	break;
	case 15646://(3,13) (1, 14)
		return 2;//0 2
	break;
	case 15647://(3,13) (1, 15)
		return 2;//0 2
	break;
	case 15648://(3,13) (2, 0)
		return 0;//0 0
	break;
	case 15649://(3,13) (2, 1)
		return 2;//0 2
	break;
	case 15650://(3,13) (2, 2)
		return 0;//0 0
	break;
	case 15651://(3,13) (2, 3)
		return 2;//0 2
	break;
	case 15652://(3,13) (2, 4)
		return 2;//0 2
	break;
	case 15653://(3,13) (2, 5)
		return 2;//0 2
	break;
	case 15654://(3,13) (2, 6)
		return 2;//0 2
	break;
	case 15655://(3,13) (2, 7)
		return 2;//0 2
	break;
	case 15656://(3,13) (2, 8)
		return 2;//0 2
	break;
	case 15657://(3,13) (2, 9)
		return 2;//0 2
	break;
	case 15658://(3,13) (2, 10)
		return 2;//0 2
	break;
	case 15659://(3,13) (2, 11)
		return 2;//0 2
	break;
	case 15660://(3,13) (2, 12)
		return 2;//0 2
	break;
	case 15661://(3,13) (2, 13)
		return 2;//0 2
	break;
	case 15662://(3,13) (2, 14)
		return 2;//0 2
	break;
	case 15663://(3,13) (2, 15)
		return 2;//0 2
	break;
	case 15664://(3,13) (3, 0)
		return 64;//4 0
	break;
	case 15665://(3,13) (3, 1)
		return 66;//4 2
	break;
	case 15666://(3,13) (3, 2)
		return 64;//4 0
	break;
	case 15667://(3,13) (3, 3)
		return 66;//4 2
	break;
	case 15668://(3,13) (3, 4)
		return 66;//4 2
	break;
	case 15669://(3,13) (3, 5)
		return 66;//4 2
	break;
	case 15670://(3,13) (3, 6)
		return 66;//4 2
	break;
	case 15671://(3,13) (3, 7)
		return 66;//4 2
	break;
	case 15672://(3,13) (3, 8)
		return 66;//4 2
	break;
	case 15673://(3,13) (3, 9)
		return 66;//4 2
	break;
	case 15674://(3,13) (3, 10)
		return 66;//4 2
	break;
	case 15675://(3,13) (3, 11)
		return 66;//4 2
	break;
	case 15676://(3,13) (3, 12)
		return 66;//4 2
	break;
	case 15677://(3,13) (3, 13)
		return 66;//4 2
	break;
	case 15678://(3,13) (3, 14)
		return 66;//4 2
	break;
	case 15679://(3,13) (3, 15)
		return 66;//4 2
	break;
	case 15680://(3,13) (4, 0)
		return 0;//0 0
	break;
	case 15681://(3,13) (4, 1)
		return 2;//0 2
	break;
	case 15682://(3,13) (4, 2)
		return 0;//0 0
	break;
	case 15683://(3,13) (4, 3)
		return 2;//0 2
	break;
	case 15684://(3,13) (4, 4)
		return 2;//0 2
	break;
	case 15685://(3,13) (4, 5)
		return 2;//0 2
	break;
	case 15686://(3,13) (4, 6)
		return 2;//0 2
	break;
	case 15687://(3,13) (4, 7)
		return 2;//0 2
	break;
	case 15688://(3,13) (4, 8)
		return 2;//0 2
	break;
	case 15689://(3,13) (4, 9)
		return 2;//0 2
	break;
	case 15690://(3,13) (4, 10)
		return 2;//0 2
	break;
	case 15691://(3,13) (4, 11)
		return 2;//0 2
	break;
	case 15692://(3,13) (4, 12)
		return 2;//0 2
	break;
	case 15693://(3,13) (4, 13)
		return 2;//0 2
	break;
	case 15694://(3,13) (4, 14)
		return 2;//0 2
	break;
	case 15695://(3,13) (4, 15)
		return 2;//0 2
	break;
	case 15696://(3,13) (5, 0)
		return 0;//0 0
	break;
	case 15697://(3,13) (5, 1)
		return 2;//0 2
	break;
	case 15698://(3,13) (5, 2)
		return 0;//0 0
	break;
	case 15699://(3,13) (5, 3)
		return 2;//0 2
	break;
	case 15700://(3,13) (5, 4)
		return 2;//0 2
	break;
	case 15701://(3,13) (5, 5)
		return 2;//0 2
	break;
	case 15702://(3,13) (5, 6)
		return 2;//0 2
	break;
	case 15703://(3,13) (5, 7)
		return 2;//0 2
	break;
	case 15704://(3,13) (5, 8)
		return 2;//0 2
	break;
	case 15705://(3,13) (5, 9)
		return 2;//0 2
	break;
	case 15706://(3,13) (5, 10)
		return 2;//0 2
	break;
	case 15707://(3,13) (5, 11)
		return 2;//0 2
	break;
	case 15708://(3,13) (5, 12)
		return 2;//0 2
	break;
	case 15709://(3,13) (5, 13)
		return 2;//0 2
	break;
	case 15710://(3,13) (5, 14)
		return 2;//0 2
	break;
	case 15711://(3,13) (5, 15)
		return 2;//0 2
	break;
	case 15712://(3,13) (6, 0)
		return 64;//4 0
	break;
	case 15713://(3,13) (6, 1)
		return 66;//4 2
	break;
	case 15714://(3,13) (6, 2)
		return 64;//4 0
	break;
	case 15715://(3,13) (6, 3)
		return 66;//4 2
	break;
	case 15716://(3,13) (6, 4)
		return 66;//4 2
	break;
	case 15717://(3,13) (6, 5)
		return 66;//4 2
	break;
	case 15718://(3,13) (6, 6)
		return 66;//4 2
	break;
	case 15719://(3,13) (6, 7)
		return 66;//4 2
	break;
	case 15720://(3,13) (6, 8)
		return 66;//4 2
	break;
	case 15721://(3,13) (6, 9)
		return 66;//4 2
	break;
	case 15722://(3,13) (6, 10)
		return 66;//4 2
	break;
	case 15723://(3,13) (6, 11)
		return 66;//4 2
	break;
	case 15724://(3,13) (6, 12)
		return 66;//4 2
	break;
	case 15725://(3,13) (6, 13)
		return 66;//4 2
	break;
	case 15726://(3,13) (6, 14)
		return 66;//4 2
	break;
	case 15727://(3,13) (6, 15)
		return 66;//4 2
	break;
	case 15728://(3,13) (7, 0)
		return 64;//4 0
	break;
	case 15729://(3,13) (7, 1)
		return 66;//4 2
	break;
	case 15730://(3,13) (7, 2)
		return 64;//4 0
	break;
	case 15731://(3,13) (7, 3)
		return 66;//4 2
	break;
	case 15732://(3,13) (7, 4)
		return 66;//4 2
	break;
	case 15733://(3,13) (7, 5)
		return 66;//4 2
	break;
	case 15734://(3,13) (7, 6)
		return 66;//4 2
	break;
	case 15735://(3,13) (7, 7)
		return 66;//4 2
	break;
	case 15736://(3,13) (7, 8)
		return 66;//4 2
	break;
	case 15737://(3,13) (7, 9)
		return 66;//4 2
	break;
	case 15738://(3,13) (7, 10)
		return 66;//4 2
	break;
	case 15739://(3,13) (7, 11)
		return 66;//4 2
	break;
	case 15740://(3,13) (7, 12)
		return 66;//4 2
	break;
	case 15741://(3,13) (7, 13)
		return 66;//4 2
	break;
	case 15742://(3,13) (7, 14)
		return 66;//4 2
	break;
	case 15743://(3,13) (7, 15)
		return 66;//4 2
	break;
	case 15744://(3,13) (8, 0)
		return 0;//0 0
	break;
	case 15745://(3,13) (8, 1)
		return 2;//0 2
	break;
	case 15746://(3,13) (8, 2)
		return 0;//0 0
	break;
	case 15747://(3,13) (8, 3)
		return 2;//0 2
	break;
	case 15748://(3,13) (8, 4)
		return 2;//0 2
	break;
	case 15749://(3,13) (8, 5)
		return 2;//0 2
	break;
	case 15750://(3,13) (8, 6)
		return 2;//0 2
	break;
	case 15751://(3,13) (8, 7)
		return 2;//0 2
	break;
	case 15752://(3,13) (8, 8)
		return 2;//0 2
	break;
	case 15753://(3,13) (8, 9)
		return 2;//0 2
	break;
	case 15754://(3,13) (8, 10)
		return 2;//0 2
	break;
	case 15755://(3,13) (8, 11)
		return 2;//0 2
	break;
	case 15756://(3,13) (8, 12)
		return 2;//0 2
	break;
	case 15757://(3,13) (8, 13)
		return 2;//0 2
	break;
	case 15758://(3,13) (8, 14)
		return 2;//0 2
	break;
	case 15759://(3,13) (8, 15)
		return 2;//0 2
	break;
	case 15760://(3,13) (9, 0)
		return 0;//0 0
	break;
	case 15761://(3,13) (9, 1)
		return 2;//0 2
	break;
	case 15762://(3,13) (9, 2)
		return 0;//0 0
	break;
	case 15763://(3,13) (9, 3)
		return 2;//0 2
	break;
	case 15764://(3,13) (9, 4)
		return 2;//0 2
	break;
	case 15765://(3,13) (9, 5)
		return 2;//0 2
	break;
	case 15766://(3,13) (9, 6)
		return 2;//0 2
	break;
	case 15767://(3,13) (9, 7)
		return 2;//0 2
	break;
	case 15768://(3,13) (9, 8)
		return 2;//0 2
	break;
	case 15769://(3,13) (9, 9)
		return 2;//0 2
	break;
	case 15770://(3,13) (9, 10)
		return 2;//0 2
	break;
	case 15771://(3,13) (9, 11)
		return 2;//0 2
	break;
	case 15772://(3,13) (9, 12)
		return 2;//0 2
	break;
	case 15773://(3,13) (9, 13)
		return 2;//0 2
	break;
	case 15774://(3,13) (9, 14)
		return 2;//0 2
	break;
	case 15775://(3,13) (9, 15)
		return 2;//0 2
	break;
	case 15776://(3,13) (10, 0)
		return 64;//4 0
	break;
	case 15777://(3,13) (10, 1)
		return 66;//4 2
	break;
	case 15778://(3,13) (10, 2)
		return 64;//4 0
	break;
	case 15779://(3,13) (10, 3)
		return 66;//4 2
	break;
	case 15780://(3,13) (10, 4)
		return 66;//4 2
	break;
	case 15781://(3,13) (10, 5)
		return 66;//4 2
	break;
	case 15782://(3,13) (10, 6)
		return 66;//4 2
	break;
	case 15783://(3,13) (10, 7)
		return 66;//4 2
	break;
	case 15784://(3,13) (10, 8)
		return 66;//4 2
	break;
	case 15785://(3,13) (10, 9)
		return 66;//4 2
	break;
	case 15786://(3,13) (10, 10)
		return 66;//4 2
	break;
	case 15787://(3,13) (10, 11)
		return 66;//4 2
	break;
	case 15788://(3,13) (10, 12)
		return 66;//4 2
	break;
	case 15789://(3,13) (10, 13)
		return 66;//4 2
	break;
	case 15790://(3,13) (10, 14)
		return 66;//4 2
	break;
	case 15791://(3,13) (10, 15)
		return 66;//4 2
	break;
	case 15792://(3,13) (11, 0)
		return 64;//4 0
	break;
	case 15793://(3,13) (11, 1)
		return 66;//4 2
	break;
	case 15794://(3,13) (11, 2)
		return 64;//4 0
	break;
	case 15795://(3,13) (11, 3)
		return 66;//4 2
	break;
	case 15796://(3,13) (11, 4)
		return 66;//4 2
	break;
	case 15797://(3,13) (11, 5)
		return 66;//4 2
	break;
	case 15798://(3,13) (11, 6)
		return 66;//4 2
	break;
	case 15799://(3,13) (11, 7)
		return 66;//4 2
	break;
	case 15800://(3,13) (11, 8)
		return 66;//4 2
	break;
	case 15801://(3,13) (11, 9)
		return 66;//4 2
	break;
	case 15802://(3,13) (11, 10)
		return 66;//4 2
	break;
	case 15803://(3,13) (11, 11)
		return 66;//4 2
	break;
	case 15804://(3,13) (11, 12)
		return 66;//4 2
	break;
	case 15805://(3,13) (11, 13)
		return 66;//4 2
	break;
	case 15806://(3,13) (11, 14)
		return 66;//4 2
	break;
	case 15807://(3,13) (11, 15)
		return 66;//4 2
	break;
	case 15808://(3,13) (12, 0)
		return 64;//4 0
	break;
	case 15809://(3,13) (12, 1)
		return 66;//4 2
	break;
	case 15810://(3,13) (12, 2)
		return 64;//4 0
	break;
	case 15811://(3,13) (12, 3)
		return 66;//4 2
	break;
	case 15812://(3,13) (12, 4)
		return 66;//4 2
	break;
	case 15813://(3,13) (12, 5)
		return 66;//4 2
	break;
	case 15814://(3,13) (12, 6)
		return 66;//4 2
	break;
	case 15815://(3,13) (12, 7)
		return 66;//4 2
	break;
	case 15816://(3,13) (12, 8)
		return 66;//4 2
	break;
	case 15817://(3,13) (12, 9)
		return 66;//4 2
	break;
	case 15818://(3,13) (12, 10)
		return 66;//4 2
	break;
	case 15819://(3,13) (12, 11)
		return 66;//4 2
	break;
	case 15820://(3,13) (12, 12)
		return 66;//4 2
	break;
	case 15821://(3,13) (12, 13)
		return 66;//4 2
	break;
	case 15822://(3,13) (12, 14)
		return 66;//4 2
	break;
	case 15823://(3,13) (12, 15)
		return 66;//4 2
	break;
	case 15824://(3,13) (13, 0)
		return 64;//4 0
	break;
	case 15825://(3,13) (13, 1)
		return 66;//4 2
	break;
	case 15826://(3,13) (13, 2)
		return 64;//4 0
	break;
	case 15827://(3,13) (13, 3)
		return 66;//4 2
	break;
	case 15828://(3,13) (13, 4)
		return 66;//4 2
	break;
	case 15829://(3,13) (13, 5)
		return 66;//4 2
	break;
	case 15830://(3,13) (13, 6)
		return 66;//4 2
	break;
	case 15831://(3,13) (13, 7)
		return 66;//4 2
	break;
	case 15832://(3,13) (13, 8)
		return 66;//4 2
	break;
	case 15833://(3,13) (13, 9)
		return 66;//4 2
	break;
	case 15834://(3,13) (13, 10)
		return 66;//4 2
	break;
	case 15835://(3,13) (13, 11)
		return 66;//4 2
	break;
	case 15836://(3,13) (13, 12)
		return 66;//4 2
	break;
	case 15837://(3,13) (13, 13)
		return 66;//4 2
	break;
	case 15838://(3,13) (13, 14)
		return 66;//4 2
	break;
	case 15839://(3,13) (13, 15)
		return 66;//4 2
	break;
	case 15840://(3,13) (14, 0)
		return 0;//0 0
	break;
	case 15841://(3,13) (14, 1)
		return 2;//0 2
	break;
	case 15842://(3,13) (14, 2)
		return 0;//0 0
	break;
	case 15843://(3,13) (14, 3)
		return 2;//0 2
	break;
	case 15844://(3,13) (14, 4)
		return 2;//0 2
	break;
	case 15845://(3,13) (14, 5)
		return 2;//0 2
	break;
	case 15846://(3,13) (14, 6)
		return 2;//0 2
	break;
	case 15847://(3,13) (14, 7)
		return 2;//0 2
	break;
	case 15848://(3,13) (14, 8)
		return 2;//0 2
	break;
	case 15849://(3,13) (14, 9)
		return 2;//0 2
	break;
	case 15850://(3,13) (14, 10)
		return 2;//0 2
	break;
	case 15851://(3,13) (14, 11)
		return 2;//0 2
	break;
	case 15852://(3,13) (14, 12)
		return 2;//0 2
	break;
	case 15853://(3,13) (14, 13)
		return 2;//0 2
	break;
	case 15854://(3,13) (14, 14)
		return 2;//0 2
	break;
	case 15855://(3,13) (14, 15)
		return 2;//0 2
	break;
	case 15856://(3,13) (15, 0)
		return 64;//4 0
	break;
	case 15857://(3,13) (15, 1)
		return 66;//4 2
	break;
	case 15858://(3,13) (15, 2)
		return 64;//4 0
	break;
	case 15859://(3,13) (15, 3)
		return 66;//4 2
	break;
	case 15860://(3,13) (15, 4)
		return 66;//4 2
	break;
	case 15861://(3,13) (15, 5)
		return 66;//4 2
	break;
	case 15862://(3,13) (15, 6)
		return 66;//4 2
	break;
	case 15863://(3,13) (15, 7)
		return 66;//4 2
	break;
	case 15864://(3,13) (15, 8)
		return 66;//4 2
	break;
	case 15865://(3,13) (15, 9)
		return 66;//4 2
	break;
	case 15866://(3,13) (15, 10)
		return 66;//4 2
	break;
	case 15867://(3,13) (15, 11)
		return 66;//4 2
	break;
	case 15868://(3,13) (15, 12)
		return 66;//4 2
	break;
	case 15869://(3,13) (15, 13)
		return 66;//4 2
	break;
	case 15870://(3,13) (15, 14)
		return 66;//4 2
	break;
	case 15871://(3,13) (15, 15)
		return 66;//4 2
	break;
	case 15872://(3,14) (0, 0)
		return 0;//0 0
	break;
	case 15873://(3,14) (0, 1)
		return 2;//0 2
	break;
	case 15874://(3,14) (0, 2)
		return 2;//0 2
	break;
	case 15875://(3,14) (0, 3)
		return 0;//0 0
	break;
	case 15876://(3,14) (0, 4)
		return 2;//0 2
	break;
	case 15877://(3,14) (0, 5)
		return 2;//0 2
	break;
	case 15878://(3,14) (0, 6)
		return 2;//0 2
	break;
	case 15879://(3,14) (0, 7)
		return 2;//0 2
	break;
	case 15880://(3,14) (0, 8)
		return 2;//0 2
	break;
	case 15881://(3,14) (0, 9)
		return 2;//0 2
	break;
	case 15882://(3,14) (0, 10)
		return 2;//0 2
	break;
	case 15883://(3,14) (0, 11)
		return 2;//0 2
	break;
	case 15884://(3,14) (0, 12)
		return 2;//0 2
	break;
	case 15885://(3,14) (0, 13)
		return 2;//0 2
	break;
	case 15886://(3,14) (0, 14)
		return 2;//0 2
	break;
	case 15887://(3,14) (0, 15)
		return 2;//0 2
	break;
	case 15888://(3,14) (1, 0)
		return 0;//0 0
	break;
	case 15889://(3,14) (1, 1)
		return 2;//0 2
	break;
	case 15890://(3,14) (1, 2)
		return 2;//0 2
	break;
	case 15891://(3,14) (1, 3)
		return 0;//0 0
	break;
	case 15892://(3,14) (1, 4)
		return 2;//0 2
	break;
	case 15893://(3,14) (1, 5)
		return 2;//0 2
	break;
	case 15894://(3,14) (1, 6)
		return 2;//0 2
	break;
	case 15895://(3,14) (1, 7)
		return 2;//0 2
	break;
	case 15896://(3,14) (1, 8)
		return 2;//0 2
	break;
	case 15897://(3,14) (1, 9)
		return 2;//0 2
	break;
	case 15898://(3,14) (1, 10)
		return 2;//0 2
	break;
	case 15899://(3,14) (1, 11)
		return 2;//0 2
	break;
	case 15900://(3,14) (1, 12)
		return 2;//0 2
	break;
	case 15901://(3,14) (1, 13)
		return 2;//0 2
	break;
	case 15902://(3,14) (1, 14)
		return 2;//0 2
	break;
	case 15903://(3,14) (1, 15)
		return 2;//0 2
	break;
	case 15904://(3,14) (2, 0)
		return 0;//0 0
	break;
	case 15905://(3,14) (2, 1)
		return 2;//0 2
	break;
	case 15906://(3,14) (2, 2)
		return 2;//0 2
	break;
	case 15907://(3,14) (2, 3)
		return 0;//0 0
	break;
	case 15908://(3,14) (2, 4)
		return 2;//0 2
	break;
	case 15909://(3,14) (2, 5)
		return 2;//0 2
	break;
	case 15910://(3,14) (2, 6)
		return 2;//0 2
	break;
	case 15911://(3,14) (2, 7)
		return 2;//0 2
	break;
	case 15912://(3,14) (2, 8)
		return 2;//0 2
	break;
	case 15913://(3,14) (2, 9)
		return 2;//0 2
	break;
	case 15914://(3,14) (2, 10)
		return 2;//0 2
	break;
	case 15915://(3,14) (2, 11)
		return 2;//0 2
	break;
	case 15916://(3,14) (2, 12)
		return 2;//0 2
	break;
	case 15917://(3,14) (2, 13)
		return 2;//0 2
	break;
	case 15918://(3,14) (2, 14)
		return 2;//0 2
	break;
	case 15919://(3,14) (2, 15)
		return 2;//0 2
	break;
	case 15920://(3,14) (3, 0)
		return 64;//4 0
	break;
	case 15921://(3,14) (3, 1)
		return 66;//4 2
	break;
	case 15922://(3,14) (3, 2)
		return 66;//4 2
	break;
	case 15923://(3,14) (3, 3)
		return 64;//4 0
	break;
	case 15924://(3,14) (3, 4)
		return 66;//4 2
	break;
	case 15925://(3,14) (3, 5)
		return 66;//4 2
	break;
	case 15926://(3,14) (3, 6)
		return 66;//4 2
	break;
	case 15927://(3,14) (3, 7)
		return 66;//4 2
	break;
	case 15928://(3,14) (3, 8)
		return 66;//4 2
	break;
	case 15929://(3,14) (3, 9)
		return 66;//4 2
	break;
	case 15930://(3,14) (3, 10)
		return 66;//4 2
	break;
	case 15931://(3,14) (3, 11)
		return 66;//4 2
	break;
	case 15932://(3,14) (3, 12)
		return 66;//4 2
	break;
	case 15933://(3,14) (3, 13)
		return 66;//4 2
	break;
	case 15934://(3,14) (3, 14)
		return 66;//4 2
	break;
	case 15935://(3,14) (3, 15)
		return 66;//4 2
	break;
	case 15936://(3,14) (4, 0)
		return 0;//0 0
	break;
	case 15937://(3,14) (4, 1)
		return 2;//0 2
	break;
	case 15938://(3,14) (4, 2)
		return 2;//0 2
	break;
	case 15939://(3,14) (4, 3)
		return 0;//0 0
	break;
	case 15940://(3,14) (4, 4)
		return 2;//0 2
	break;
	case 15941://(3,14) (4, 5)
		return 2;//0 2
	break;
	case 15942://(3,14) (4, 6)
		return 2;//0 2
	break;
	case 15943://(3,14) (4, 7)
		return 2;//0 2
	break;
	case 15944://(3,14) (4, 8)
		return 2;//0 2
	break;
	case 15945://(3,14) (4, 9)
		return 2;//0 2
	break;
	case 15946://(3,14) (4, 10)
		return 2;//0 2
	break;
	case 15947://(3,14) (4, 11)
		return 2;//0 2
	break;
	case 15948://(3,14) (4, 12)
		return 2;//0 2
	break;
	case 15949://(3,14) (4, 13)
		return 2;//0 2
	break;
	case 15950://(3,14) (4, 14)
		return 2;//0 2
	break;
	case 15951://(3,14) (4, 15)
		return 2;//0 2
	break;
	case 15952://(3,14) (5, 0)
		return 0;//0 0
	break;
	case 15953://(3,14) (5, 1)
		return 2;//0 2
	break;
	case 15954://(3,14) (5, 2)
		return 2;//0 2
	break;
	case 15955://(3,14) (5, 3)
		return 0;//0 0
	break;
	case 15956://(3,14) (5, 4)
		return 2;//0 2
	break;
	case 15957://(3,14) (5, 5)
		return 2;//0 2
	break;
	case 15958://(3,14) (5, 6)
		return 2;//0 2
	break;
	case 15959://(3,14) (5, 7)
		return 2;//0 2
	break;
	case 15960://(3,14) (5, 8)
		return 2;//0 2
	break;
	case 15961://(3,14) (5, 9)
		return 2;//0 2
	break;
	case 15962://(3,14) (5, 10)
		return 2;//0 2
	break;
	case 15963://(3,14) (5, 11)
		return 2;//0 2
	break;
	case 15964://(3,14) (5, 12)
		return 2;//0 2
	break;
	case 15965://(3,14) (5, 13)
		return 2;//0 2
	break;
	case 15966://(3,14) (5, 14)
		return 2;//0 2
	break;
	case 15967://(3,14) (5, 15)
		return 2;//0 2
	break;
	case 15968://(3,14) (6, 0)
		return 64;//4 0
	break;
	case 15969://(3,14) (6, 1)
		return 66;//4 2
	break;
	case 15970://(3,14) (6, 2)
		return 66;//4 2
	break;
	case 15971://(3,14) (6, 3)
		return 64;//4 0
	break;
	case 15972://(3,14) (6, 4)
		return 66;//4 2
	break;
	case 15973://(3,14) (6, 5)
		return 66;//4 2
	break;
	case 15974://(3,14) (6, 6)
		return 66;//4 2
	break;
	case 15975://(3,14) (6, 7)
		return 66;//4 2
	break;
	case 15976://(3,14) (6, 8)
		return 66;//4 2
	break;
	case 15977://(3,14) (6, 9)
		return 66;//4 2
	break;
	case 15978://(3,14) (6, 10)
		return 66;//4 2
	break;
	case 15979://(3,14) (6, 11)
		return 66;//4 2
	break;
	case 15980://(3,14) (6, 12)
		return 66;//4 2
	break;
	case 15981://(3,14) (6, 13)
		return 66;//4 2
	break;
	case 15982://(3,14) (6, 14)
		return 66;//4 2
	break;
	case 15983://(3,14) (6, 15)
		return 66;//4 2
	break;
	case 15984://(3,14) (7, 0)
		return 64;//4 0
	break;
	case 15985://(3,14) (7, 1)
		return 66;//4 2
	break;
	case 15986://(3,14) (7, 2)
		return 66;//4 2
	break;
	case 15987://(3,14) (7, 3)
		return 64;//4 0
	break;
	case 15988://(3,14) (7, 4)
		return 66;//4 2
	break;
	case 15989://(3,14) (7, 5)
		return 66;//4 2
	break;
	case 15990://(3,14) (7, 6)
		return 66;//4 2
	break;
	case 15991://(3,14) (7, 7)
		return 66;//4 2
	break;
	case 15992://(3,14) (7, 8)
		return 66;//4 2
	break;
	case 15993://(3,14) (7, 9)
		return 66;//4 2
	break;
	case 15994://(3,14) (7, 10)
		return 66;//4 2
	break;
	case 15995://(3,14) (7, 11)
		return 66;//4 2
	break;
	case 15996://(3,14) (7, 12)
		return 66;//4 2
	break;
	case 15997://(3,14) (7, 13)
		return 66;//4 2
	break;
	case 15998://(3,14) (7, 14)
		return 66;//4 2
	break;
	case 15999://(3,14) (7, 15)
		return 66;//4 2
	break;
	case 16000://(3,14) (8, 0)
		return 0;//0 0
	break;
	case 16001://(3,14) (8, 1)
		return 2;//0 2
	break;
	case 16002://(3,14) (8, 2)
		return 2;//0 2
	break;
	case 16003://(3,14) (8, 3)
		return 0;//0 0
	break;
	case 16004://(3,14) (8, 4)
		return 2;//0 2
	break;
	case 16005://(3,14) (8, 5)
		return 2;//0 2
	break;
	case 16006://(3,14) (8, 6)
		return 2;//0 2
	break;
	case 16007://(3,14) (8, 7)
		return 2;//0 2
	break;
	case 16008://(3,14) (8, 8)
		return 2;//0 2
	break;
	case 16009://(3,14) (8, 9)
		return 2;//0 2
	break;
	case 16010://(3,14) (8, 10)
		return 2;//0 2
	break;
	case 16011://(3,14) (8, 11)
		return 2;//0 2
	break;
	case 16012://(3,14) (8, 12)
		return 2;//0 2
	break;
	case 16013://(3,14) (8, 13)
		return 2;//0 2
	break;
	case 16014://(3,14) (8, 14)
		return 2;//0 2
	break;
	case 16015://(3,14) (8, 15)
		return 2;//0 2
	break;
	case 16016://(3,14) (9, 0)
		return 0;//0 0
	break;
	case 16017://(3,14) (9, 1)
		return 2;//0 2
	break;
	case 16018://(3,14) (9, 2)
		return 2;//0 2
	break;
	case 16019://(3,14) (9, 3)
		return 0;//0 0
	break;
	case 16020://(3,14) (9, 4)
		return 2;//0 2
	break;
	case 16021://(3,14) (9, 5)
		return 2;//0 2
	break;
	case 16022://(3,14) (9, 6)
		return 2;//0 2
	break;
	case 16023://(3,14) (9, 7)
		return 2;//0 2
	break;
	case 16024://(3,14) (9, 8)
		return 2;//0 2
	break;
	case 16025://(3,14) (9, 9)
		return 2;//0 2
	break;
	case 16026://(3,14) (9, 10)
		return 2;//0 2
	break;
	case 16027://(3,14) (9, 11)
		return 2;//0 2
	break;
	case 16028://(3,14) (9, 12)
		return 2;//0 2
	break;
	case 16029://(3,14) (9, 13)
		return 2;//0 2
	break;
	case 16030://(3,14) (9, 14)
		return 2;//0 2
	break;
	case 16031://(3,14) (9, 15)
		return 2;//0 2
	break;
	case 16032://(3,14) (10, 0)
		return 64;//4 0
	break;
	case 16033://(3,14) (10, 1)
		return 66;//4 2
	break;
	case 16034://(3,14) (10, 2)
		return 66;//4 2
	break;
	case 16035://(3,14) (10, 3)
		return 64;//4 0
	break;
	case 16036://(3,14) (10, 4)
		return 66;//4 2
	break;
	case 16037://(3,14) (10, 5)
		return 66;//4 2
	break;
	case 16038://(3,14) (10, 6)
		return 66;//4 2
	break;
	case 16039://(3,14) (10, 7)
		return 66;//4 2
	break;
	case 16040://(3,14) (10, 8)
		return 66;//4 2
	break;
	case 16041://(3,14) (10, 9)
		return 66;//4 2
	break;
	case 16042://(3,14) (10, 10)
		return 66;//4 2
	break;
	case 16043://(3,14) (10, 11)
		return 66;//4 2
	break;
	case 16044://(3,14) (10, 12)
		return 66;//4 2
	break;
	case 16045://(3,14) (10, 13)
		return 66;//4 2
	break;
	case 16046://(3,14) (10, 14)
		return 66;//4 2
	break;
	case 16047://(3,14) (10, 15)
		return 66;//4 2
	break;
	case 16048://(3,14) (11, 0)
		return 64;//4 0
	break;
	case 16049://(3,14) (11, 1)
		return 66;//4 2
	break;
	case 16050://(3,14) (11, 2)
		return 66;//4 2
	break;
	case 16051://(3,14) (11, 3)
		return 64;//4 0
	break;
	case 16052://(3,14) (11, 4)
		return 66;//4 2
	break;
	case 16053://(3,14) (11, 5)
		return 66;//4 2
	break;
	case 16054://(3,14) (11, 6)
		return 66;//4 2
	break;
	case 16055://(3,14) (11, 7)
		return 66;//4 2
	break;
	case 16056://(3,14) (11, 8)
		return 66;//4 2
	break;
	case 16057://(3,14) (11, 9)
		return 66;//4 2
	break;
	case 16058://(3,14) (11, 10)
		return 66;//4 2
	break;
	case 16059://(3,14) (11, 11)
		return 66;//4 2
	break;
	case 16060://(3,14) (11, 12)
		return 66;//4 2
	break;
	case 16061://(3,14) (11, 13)
		return 66;//4 2
	break;
	case 16062://(3,14) (11, 14)
		return 66;//4 2
	break;
	case 16063://(3,14) (11, 15)
		return 66;//4 2
	break;
	case 16064://(3,14) (12, 0)
		return 64;//4 0
	break;
	case 16065://(3,14) (12, 1)
		return 66;//4 2
	break;
	case 16066://(3,14) (12, 2)
		return 66;//4 2
	break;
	case 16067://(3,14) (12, 3)
		return 64;//4 0
	break;
	case 16068://(3,14) (12, 4)
		return 66;//4 2
	break;
	case 16069://(3,14) (12, 5)
		return 66;//4 2
	break;
	case 16070://(3,14) (12, 6)
		return 66;//4 2
	break;
	case 16071://(3,14) (12, 7)
		return 66;//4 2
	break;
	case 16072://(3,14) (12, 8)
		return 66;//4 2
	break;
	case 16073://(3,14) (12, 9)
		return 66;//4 2
	break;
	case 16074://(3,14) (12, 10)
		return 66;//4 2
	break;
	case 16075://(3,14) (12, 11)
		return 66;//4 2
	break;
	case 16076://(3,14) (12, 12)
		return 66;//4 2
	break;
	case 16077://(3,14) (12, 13)
		return 66;//4 2
	break;
	case 16078://(3,14) (12, 14)
		return 66;//4 2
	break;
	case 16079://(3,14) (12, 15)
		return 66;//4 2
	break;
	case 16080://(3,14) (13, 0)
		return 64;//4 0
	break;
	case 16081://(3,14) (13, 1)
		return 66;//4 2
	break;
	case 16082://(3,14) (13, 2)
		return 66;//4 2
	break;
	case 16083://(3,14) (13, 3)
		return 64;//4 0
	break;
	case 16084://(3,14) (13, 4)
		return 66;//4 2
	break;
	case 16085://(3,14) (13, 5)
		return 66;//4 2
	break;
	case 16086://(3,14) (13, 6)
		return 66;//4 2
	break;
	case 16087://(3,14) (13, 7)
		return 66;//4 2
	break;
	case 16088://(3,14) (13, 8)
		return 66;//4 2
	break;
	case 16089://(3,14) (13, 9)
		return 66;//4 2
	break;
	case 16090://(3,14) (13, 10)
		return 66;//4 2
	break;
	case 16091://(3,14) (13, 11)
		return 66;//4 2
	break;
	case 16092://(3,14) (13, 12)
		return 66;//4 2
	break;
	case 16093://(3,14) (13, 13)
		return 66;//4 2
	break;
	case 16094://(3,14) (13, 14)
		return 66;//4 2
	break;
	case 16095://(3,14) (13, 15)
		return 66;//4 2
	break;
	case 16096://(3,14) (14, 0)
		return 0;//0 0
	break;
	case 16097://(3,14) (14, 1)
		return 2;//0 2
	break;
	case 16098://(3,14) (14, 2)
		return 2;//0 2
	break;
	case 16099://(3,14) (14, 3)
		return 0;//0 0
	break;
	case 16100://(3,14) (14, 4)
		return 2;//0 2
	break;
	case 16101://(3,14) (14, 5)
		return 2;//0 2
	break;
	case 16102://(3,14) (14, 6)
		return 2;//0 2
	break;
	case 16103://(3,14) (14, 7)
		return 2;//0 2
	break;
	case 16104://(3,14) (14, 8)
		return 2;//0 2
	break;
	case 16105://(3,14) (14, 9)
		return 2;//0 2
	break;
	case 16106://(3,14) (14, 10)
		return 2;//0 2
	break;
	case 16107://(3,14) (14, 11)
		return 2;//0 2
	break;
	case 16108://(3,14) (14, 12)
		return 2;//0 2
	break;
	case 16109://(3,14) (14, 13)
		return 2;//0 2
	break;
	case 16110://(3,14) (14, 14)
		return 2;//0 2
	break;
	case 16111://(3,14) (14, 15)
		return 2;//0 2
	break;
	case 16112://(3,14) (15, 0)
		return 64;//4 0
	break;
	case 16113://(3,14) (15, 1)
		return 66;//4 2
	break;
	case 16114://(3,14) (15, 2)
		return 66;//4 2
	break;
	case 16115://(3,14) (15, 3)
		return 64;//4 0
	break;
	case 16116://(3,14) (15, 4)
		return 66;//4 2
	break;
	case 16117://(3,14) (15, 5)
		return 66;//4 2
	break;
	case 16118://(3,14) (15, 6)
		return 66;//4 2
	break;
	case 16119://(3,14) (15, 7)
		return 66;//4 2
	break;
	case 16120://(3,14) (15, 8)
		return 66;//4 2
	break;
	case 16121://(3,14) (15, 9)
		return 66;//4 2
	break;
	case 16122://(3,14) (15, 10)
		return 66;//4 2
	break;
	case 16123://(3,14) (15, 11)
		return 66;//4 2
	break;
	case 16124://(3,14) (15, 12)
		return 66;//4 2
	break;
	case 16125://(3,14) (15, 13)
		return 66;//4 2
	break;
	case 16126://(3,14) (15, 14)
		return 66;//4 2
	break;
	case 16127://(3,14) (15, 15)
		return 66;//4 2
	break;
	case 16128://(3,15) (0, 0)
		return 1;//0 1
	break;
	case 16129://(3,15) (0, 1)
		return 1;//0 1
	break;
	case 16130://(3,15) (0, 2)
		return 1;//0 1
	break;
	case 16131://(3,15) (0, 3)
		return 1;//0 1
	break;
	case 16132://(3,15) (0, 4)
		return 1;//0 1
	break;
	case 16133://(3,15) (0, 5)
		return 1;//0 1
	break;
	case 16134://(3,15) (0, 6)
		return 1;//0 1
	break;
	case 16135://(3,15) (0, 7)
		return 1;//0 1
	break;
	case 16136://(3,15) (0, 8)
		return 1;//0 1
	break;
	case 16137://(3,15) (0, 9)
		return 1;//0 1
	break;
	case 16138://(3,15) (0, 10)
		return 1;//0 1
	break;
	case 16139://(3,15) (0, 11)
		return 1;//0 1
	break;
	case 16140://(3,15) (0, 12)
		return 1;//0 1
	break;
	case 16141://(3,15) (0, 13)
		return 1;//0 1
	break;
	case 16142://(3,15) (0, 14)
		return 1;//0 1
	break;
	case 16143://(3,15) (0, 15)
		return 1;//0 1
	break;
	case 16144://(3,15) (1, 0)
		return 1;//0 1
	break;
	case 16145://(3,15) (1, 1)
		return 1;//0 1
	break;
	case 16146://(3,15) (1, 2)
		return 1;//0 1
	break;
	case 16147://(3,15) (1, 3)
		return 1;//0 1
	break;
	case 16148://(3,15) (1, 4)
		return 1;//0 1
	break;
	case 16149://(3,15) (1, 5)
		return 1;//0 1
	break;
	case 16150://(3,15) (1, 6)
		return 1;//0 1
	break;
	case 16151://(3,15) (1, 7)
		return 1;//0 1
	break;
	case 16152://(3,15) (1, 8)
		return 1;//0 1
	break;
	case 16153://(3,15) (1, 9)
		return 1;//0 1
	break;
	case 16154://(3,15) (1, 10)
		return 1;//0 1
	break;
	case 16155://(3,15) (1, 11)
		return 1;//0 1
	break;
	case 16156://(3,15) (1, 12)
		return 1;//0 1
	break;
	case 16157://(3,15) (1, 13)
		return 1;//0 1
	break;
	case 16158://(3,15) (1, 14)
		return 1;//0 1
	break;
	case 16159://(3,15) (1, 15)
		return 1;//0 1
	break;
	case 16160://(3,15) (2, 0)
		return 1;//0 1
	break;
	case 16161://(3,15) (2, 1)
		return 1;//0 1
	break;
	case 16162://(3,15) (2, 2)
		return 1;//0 1
	break;
	case 16163://(3,15) (2, 3)
		return 1;//0 1
	break;
	case 16164://(3,15) (2, 4)
		return 1;//0 1
	break;
	case 16165://(3,15) (2, 5)
		return 1;//0 1
	break;
	case 16166://(3,15) (2, 6)
		return 1;//0 1
	break;
	case 16167://(3,15) (2, 7)
		return 1;//0 1
	break;
	case 16168://(3,15) (2, 8)
		return 1;//0 1
	break;
	case 16169://(3,15) (2, 9)
		return 1;//0 1
	break;
	case 16170://(3,15) (2, 10)
		return 1;//0 1
	break;
	case 16171://(3,15) (2, 11)
		return 1;//0 1
	break;
	case 16172://(3,15) (2, 12)
		return 1;//0 1
	break;
	case 16173://(3,15) (2, 13)
		return 1;//0 1
	break;
	case 16174://(3,15) (2, 14)
		return 1;//0 1
	break;
	case 16175://(3,15) (2, 15)
		return 1;//0 1
	break;
	case 16176://(3,15) (3, 0)
		return 65;//4 1
	break;
	case 16177://(3,15) (3, 1)
		return 65;//4 1
	break;
	case 16178://(3,15) (3, 2)
		return 65;//4 1
	break;
	case 16179://(3,15) (3, 3)
		return 65;//4 1
	break;
	case 16180://(3,15) (3, 4)
		return 65;//4 1
	break;
	case 16181://(3,15) (3, 5)
		return 65;//4 1
	break;
	case 16182://(3,15) (3, 6)
		return 65;//4 1
	break;
	case 16183://(3,15) (3, 7)
		return 65;//4 1
	break;
	case 16184://(3,15) (3, 8)
		return 65;//4 1
	break;
	case 16185://(3,15) (3, 9)
		return 65;//4 1
	break;
	case 16186://(3,15) (3, 10)
		return 65;//4 1
	break;
	case 16187://(3,15) (3, 11)
		return 65;//4 1
	break;
	case 16188://(3,15) (3, 12)
		return 65;//4 1
	break;
	case 16189://(3,15) (3, 13)
		return 65;//4 1
	break;
	case 16190://(3,15) (3, 14)
		return 65;//4 1
	break;
	case 16191://(3,15) (3, 15)
		return 65;//4 1
	break;
	case 16192://(3,15) (4, 0)
		return 1;//0 1
	break;
	case 16193://(3,15) (4, 1)
		return 1;//0 1
	break;
	case 16194://(3,15) (4, 2)
		return 1;//0 1
	break;
	case 16195://(3,15) (4, 3)
		return 1;//0 1
	break;
	case 16196://(3,15) (4, 4)
		return 1;//0 1
	break;
	case 16197://(3,15) (4, 5)
		return 1;//0 1
	break;
	case 16198://(3,15) (4, 6)
		return 1;//0 1
	break;
	case 16199://(3,15) (4, 7)
		return 1;//0 1
	break;
	case 16200://(3,15) (4, 8)
		return 1;//0 1
	break;
	case 16201://(3,15) (4, 9)
		return 1;//0 1
	break;
	case 16202://(3,15) (4, 10)
		return 1;//0 1
	break;
	case 16203://(3,15) (4, 11)
		return 1;//0 1
	break;
	case 16204://(3,15) (4, 12)
		return 1;//0 1
	break;
	case 16205://(3,15) (4, 13)
		return 1;//0 1
	break;
	case 16206://(3,15) (4, 14)
		return 1;//0 1
	break;
	case 16207://(3,15) (4, 15)
		return 1;//0 1
	break;
	case 16208://(3,15) (5, 0)
		return 1;//0 1
	break;
	case 16209://(3,15) (5, 1)
		return 1;//0 1
	break;
	case 16210://(3,15) (5, 2)
		return 1;//0 1
	break;
	case 16211://(3,15) (5, 3)
		return 1;//0 1
	break;
	case 16212://(3,15) (5, 4)
		return 1;//0 1
	break;
	case 16213://(3,15) (5, 5)
		return 1;//0 1
	break;
	case 16214://(3,15) (5, 6)
		return 1;//0 1
	break;
	case 16215://(3,15) (5, 7)
		return 1;//0 1
	break;
	case 16216://(3,15) (5, 8)
		return 1;//0 1
	break;
	case 16217://(3,15) (5, 9)
		return 1;//0 1
	break;
	case 16218://(3,15) (5, 10)
		return 1;//0 1
	break;
	case 16219://(3,15) (5, 11)
		return 1;//0 1
	break;
	case 16220://(3,15) (5, 12)
		return 1;//0 1
	break;
	case 16221://(3,15) (5, 13)
		return 1;//0 1
	break;
	case 16222://(3,15) (5, 14)
		return 1;//0 1
	break;
	case 16223://(3,15) (5, 15)
		return 1;//0 1
	break;
	case 16224://(3,15) (6, 0)
		return 65;//4 1
	break;
	case 16225://(3,15) (6, 1)
		return 65;//4 1
	break;
	case 16226://(3,15) (6, 2)
		return 65;//4 1
	break;
	case 16227://(3,15) (6, 3)
		return 65;//4 1
	break;
	case 16228://(3,15) (6, 4)
		return 65;//4 1
	break;
	case 16229://(3,15) (6, 5)
		return 65;//4 1
	break;
	case 16230://(3,15) (6, 6)
		return 65;//4 1
	break;
	case 16231://(3,15) (6, 7)
		return 65;//4 1
	break;
	case 16232://(3,15) (6, 8)
		return 65;//4 1
	break;
	case 16233://(3,15) (6, 9)
		return 65;//4 1
	break;
	case 16234://(3,15) (6, 10)
		return 65;//4 1
	break;
	case 16235://(3,15) (6, 11)
		return 65;//4 1
	break;
	case 16236://(3,15) (6, 12)
		return 65;//4 1
	break;
	case 16237://(3,15) (6, 13)
		return 65;//4 1
	break;
	case 16238://(3,15) (6, 14)
		return 65;//4 1
	break;
	case 16239://(3,15) (6, 15)
		return 65;//4 1
	break;
	case 16240://(3,15) (7, 0)
		return 65;//4 1
	break;
	case 16241://(3,15) (7, 1)
		return 65;//4 1
	break;
	case 16242://(3,15) (7, 2)
		return 65;//4 1
	break;
	case 16243://(3,15) (7, 3)
		return 65;//4 1
	break;
	case 16244://(3,15) (7, 4)
		return 65;//4 1
	break;
	case 16245://(3,15) (7, 5)
		return 65;//4 1
	break;
	case 16246://(3,15) (7, 6)
		return 65;//4 1
	break;
	case 16247://(3,15) (7, 7)
		return 65;//4 1
	break;
	case 16248://(3,15) (7, 8)
		return 65;//4 1
	break;
	case 16249://(3,15) (7, 9)
		return 65;//4 1
	break;
	case 16250://(3,15) (7, 10)
		return 65;//4 1
	break;
	case 16251://(3,15) (7, 11)
		return 65;//4 1
	break;
	case 16252://(3,15) (7, 12)
		return 65;//4 1
	break;
	case 16253://(3,15) (7, 13)
		return 65;//4 1
	break;
	case 16254://(3,15) (7, 14)
		return 65;//4 1
	break;
	case 16255://(3,15) (7, 15)
		return 65;//4 1
	break;
	case 16256://(3,15) (8, 0)
		return 1;//0 1
	break;
	case 16257://(3,15) (8, 1)
		return 1;//0 1
	break;
	case 16258://(3,15) (8, 2)
		return 1;//0 1
	break;
	case 16259://(3,15) (8, 3)
		return 1;//0 1
	break;
	case 16260://(3,15) (8, 4)
		return 1;//0 1
	break;
	case 16261://(3,15) (8, 5)
		return 1;//0 1
	break;
	case 16262://(3,15) (8, 6)
		return 1;//0 1
	break;
	case 16263://(3,15) (8, 7)
		return 1;//0 1
	break;
	case 16264://(3,15) (8, 8)
		return 1;//0 1
	break;
	case 16265://(3,15) (8, 9)
		return 1;//0 1
	break;
	case 16266://(3,15) (8, 10)
		return 1;//0 1
	break;
	case 16267://(3,15) (8, 11)
		return 1;//0 1
	break;
	case 16268://(3,15) (8, 12)
		return 1;//0 1
	break;
	case 16269://(3,15) (8, 13)
		return 1;//0 1
	break;
	case 16270://(3,15) (8, 14)
		return 1;//0 1
	break;
	case 16271://(3,15) (8, 15)
		return 1;//0 1
	break;
	case 16272://(3,15) (9, 0)
		return 1;//0 1
	break;
	case 16273://(3,15) (9, 1)
		return 1;//0 1
	break;
	case 16274://(3,15) (9, 2)
		return 1;//0 1
	break;
	case 16275://(3,15) (9, 3)
		return 1;//0 1
	break;
	case 16276://(3,15) (9, 4)
		return 1;//0 1
	break;
	case 16277://(3,15) (9, 5)
		return 1;//0 1
	break;
	case 16278://(3,15) (9, 6)
		return 1;//0 1
	break;
	case 16279://(3,15) (9, 7)
		return 1;//0 1
	break;
	case 16280://(3,15) (9, 8)
		return 1;//0 1
	break;
	case 16281://(3,15) (9, 9)
		return 1;//0 1
	break;
	case 16282://(3,15) (9, 10)
		return 1;//0 1
	break;
	case 16283://(3,15) (9, 11)
		return 1;//0 1
	break;
	case 16284://(3,15) (9, 12)
		return 1;//0 1
	break;
	case 16285://(3,15) (9, 13)
		return 1;//0 1
	break;
	case 16286://(3,15) (9, 14)
		return 1;//0 1
	break;
	case 16287://(3,15) (9, 15)
		return 1;//0 1
	break;
	case 16288://(3,15) (10, 0)
		return 65;//4 1
	break;
	case 16289://(3,15) (10, 1)
		return 65;//4 1
	break;
	case 16290://(3,15) (10, 2)
		return 65;//4 1
	break;
	case 16291://(3,15) (10, 3)
		return 65;//4 1
	break;
	case 16292://(3,15) (10, 4)
		return 65;//4 1
	break;
	case 16293://(3,15) (10, 5)
		return 65;//4 1
	break;
	case 16294://(3,15) (10, 6)
		return 65;//4 1
	break;
	case 16295://(3,15) (10, 7)
		return 65;//4 1
	break;
	case 16296://(3,15) (10, 8)
		return 65;//4 1
	break;
	case 16297://(3,15) (10, 9)
		return 65;//4 1
	break;
	case 16298://(3,15) (10, 10)
		return 65;//4 1
	break;
	case 16299://(3,15) (10, 11)
		return 65;//4 1
	break;
	case 16300://(3,15) (10, 12)
		return 65;//4 1
	break;
	case 16301://(3,15) (10, 13)
		return 65;//4 1
	break;
	case 16302://(3,15) (10, 14)
		return 65;//4 1
	break;
	case 16303://(3,15) (10, 15)
		return 65;//4 1
	break;
	case 16304://(3,15) (11, 0)
		return 65;//4 1
	break;
	case 16305://(3,15) (11, 1)
		return 65;//4 1
	break;
	case 16306://(3,15) (11, 2)
		return 65;//4 1
	break;
	case 16307://(3,15) (11, 3)
		return 65;//4 1
	break;
	case 16308://(3,15) (11, 4)
		return 65;//4 1
	break;
	case 16309://(3,15) (11, 5)
		return 65;//4 1
	break;
	case 16310://(3,15) (11, 6)
		return 65;//4 1
	break;
	case 16311://(3,15) (11, 7)
		return 65;//4 1
	break;
	case 16312://(3,15) (11, 8)
		return 65;//4 1
	break;
	case 16313://(3,15) (11, 9)
		return 65;//4 1
	break;
	case 16314://(3,15) (11, 10)
		return 65;//4 1
	break;
	case 16315://(3,15) (11, 11)
		return 65;//4 1
	break;
	case 16316://(3,15) (11, 12)
		return 65;//4 1
	break;
	case 16317://(3,15) (11, 13)
		return 65;//4 1
	break;
	case 16318://(3,15) (11, 14)
		return 65;//4 1
	break;
	case 16319://(3,15) (11, 15)
		return 65;//4 1
	break;
	case 16320://(3,15) (12, 0)
		return 65;//4 1
	break;
	case 16321://(3,15) (12, 1)
		return 65;//4 1
	break;
	case 16322://(3,15) (12, 2)
		return 65;//4 1
	break;
	case 16323://(3,15) (12, 3)
		return 65;//4 1
	break;
	case 16324://(3,15) (12, 4)
		return 65;//4 1
	break;
	case 16325://(3,15) (12, 5)
		return 65;//4 1
	break;
	case 16326://(3,15) (12, 6)
		return 65;//4 1
	break;
	case 16327://(3,15) (12, 7)
		return 65;//4 1
	break;
	case 16328://(3,15) (12, 8)
		return 65;//4 1
	break;
	case 16329://(3,15) (12, 9)
		return 65;//4 1
	break;
	case 16330://(3,15) (12, 10)
		return 65;//4 1
	break;
	case 16331://(3,15) (12, 11)
		return 65;//4 1
	break;
	case 16332://(3,15) (12, 12)
		return 65;//4 1
	break;
	case 16333://(3,15) (12, 13)
		return 65;//4 1
	break;
	case 16334://(3,15) (12, 14)
		return 65;//4 1
	break;
	case 16335://(3,15) (12, 15)
		return 65;//4 1
	break;
	case 16336://(3,15) (13, 0)
		return 65;//4 1
	break;
	case 16337://(3,15) (13, 1)
		return 65;//4 1
	break;
	case 16338://(3,15) (13, 2)
		return 65;//4 1
	break;
	case 16339://(3,15) (13, 3)
		return 65;//4 1
	break;
	case 16340://(3,15) (13, 4)
		return 65;//4 1
	break;
	case 16341://(3,15) (13, 5)
		return 65;//4 1
	break;
	case 16342://(3,15) (13, 6)
		return 65;//4 1
	break;
	case 16343://(3,15) (13, 7)
		return 65;//4 1
	break;
	case 16344://(3,15) (13, 8)
		return 65;//4 1
	break;
	case 16345://(3,15) (13, 9)
		return 65;//4 1
	break;
	case 16346://(3,15) (13, 10)
		return 65;//4 1
	break;
	case 16347://(3,15) (13, 11)
		return 65;//4 1
	break;
	case 16348://(3,15) (13, 12)
		return 65;//4 1
	break;
	case 16349://(3,15) (13, 13)
		return 65;//4 1
	break;
	case 16350://(3,15) (13, 14)
		return 65;//4 1
	break;
	case 16351://(3,15) (13, 15)
		return 65;//4 1
	break;
	case 16352://(3,15) (14, 0)
		return 1;//0 1
	break;
	case 16353://(3,15) (14, 1)
		return 1;//0 1
	break;
	case 16354://(3,15) (14, 2)
		return 1;//0 1
	break;
	case 16355://(3,15) (14, 3)
		return 1;//0 1
	break;
	case 16356://(3,15) (14, 4)
		return 1;//0 1
	break;
	case 16357://(3,15) (14, 5)
		return 1;//0 1
	break;
	case 16358://(3,15) (14, 6)
		return 1;//0 1
	break;
	case 16359://(3,15) (14, 7)
		return 1;//0 1
	break;
	case 16360://(3,15) (14, 8)
		return 1;//0 1
	break;
	case 16361://(3,15) (14, 9)
		return 1;//0 1
	break;
	case 16362://(3,15) (14, 10)
		return 1;//0 1
	break;
	case 16363://(3,15) (14, 11)
		return 1;//0 1
	break;
	case 16364://(3,15) (14, 12)
		return 1;//0 1
	break;
	case 16365://(3,15) (14, 13)
		return 1;//0 1
	break;
	case 16366://(3,15) (14, 14)
		return 1;//0 1
	break;
	case 16367://(3,15) (14, 15)
		return 1;//0 1
	break;
	case 16368://(3,15) (15, 0)
		return 65;//4 1
	break;
	case 16369://(3,15) (15, 1)
		return 65;//4 1
	break;
	case 16370://(3,15) (15, 2)
		return 65;//4 1
	break;
	case 16371://(3,15) (15, 3)
		return 65;//4 1
	break;
	case 16372://(3,15) (15, 4)
		return 65;//4 1
	break;
	case 16373://(3,15) (15, 5)
		return 65;//4 1
	break;
	case 16374://(3,15) (15, 6)
		return 65;//4 1
	break;
	case 16375://(3,15) (15, 7)
		return 65;//4 1
	break;
	case 16376://(3,15) (15, 8)
		return 65;//4 1
	break;
	case 16377://(3,15) (15, 9)
		return 65;//4 1
	break;
	case 16378://(3,15) (15, 10)
		return 65;//4 1
	break;
	case 16379://(3,15) (15, 11)
		return 65;//4 1
	break;
	case 16380://(3,15) (15, 12)
		return 65;//4 1
	break;
	case 16381://(3,15) (15, 13)
		return 65;//4 1
	break;
	case 16382://(3,15) (15, 14)
		return 65;//4 1
	break;
	case 16383://(3,15) (15, 15)
		return 65;//4 1
	break;
	case 16384://(4,0) (0, 0)
		return 0;//0 0
	break;
	case 16385://(4,0) (0, 1)
		return 0;//0 0
	break;
	case 16386://(4,0) (0, 2)
		return 0;//0 0
	break;
	case 16387://(4,0) (0, 3)
		return 0;//0 0
	break;
	case 16388://(4,0) (0, 4)
		return 0;//0 0
	break;
	case 16389://(4,0) (0, 5)
		return 0;//0 0
	break;
	case 16390://(4,0) (0, 6)
		return 0;//0 0
	break;
	case 16391://(4,0) (0, 7)
		return 0;//0 0
	break;
	case 16392://(4,0) (0, 8)
		return 0;//0 0
	break;
	case 16393://(4,0) (0, 9)
		return 0;//0 0
	break;
	case 16394://(4,0) (0, 10)
		return 0;//0 0
	break;
	case 16395://(4,0) (0, 11)
		return 0;//0 0
	break;
	case 16396://(4,0) (0, 12)
		return 0;//0 0
	break;
	case 16397://(4,0) (0, 13)
		return 0;//0 0
	break;
	case 16398://(4,0) (0, 14)
		return 0;//0 0
	break;
	case 16399://(4,0) (0, 15)
		return 0;//0 0
	break;
	case 16400://(4,0) (1, 0)
		return 0;//0 0
	break;
	case 16401://(4,0) (1, 1)
		return 0;//0 0
	break;
	case 16402://(4,0) (1, 2)
		return 0;//0 0
	break;
	case 16403://(4,0) (1, 3)
		return 0;//0 0
	break;
	case 16404://(4,0) (1, 4)
		return 0;//0 0
	break;
	case 16405://(4,0) (1, 5)
		return 0;//0 0
	break;
	case 16406://(4,0) (1, 6)
		return 0;//0 0
	break;
	case 16407://(4,0) (1, 7)
		return 0;//0 0
	break;
	case 16408://(4,0) (1, 8)
		return 0;//0 0
	break;
	case 16409://(4,0) (1, 9)
		return 0;//0 0
	break;
	case 16410://(4,0) (1, 10)
		return 0;//0 0
	break;
	case 16411://(4,0) (1, 11)
		return 0;//0 0
	break;
	case 16412://(4,0) (1, 12)
		return 0;//0 0
	break;
	case 16413://(4,0) (1, 13)
		return 0;//0 0
	break;
	case 16414://(4,0) (1, 14)
		return 0;//0 0
	break;
	case 16415://(4,0) (1, 15)
		return 0;//0 0
	break;
	case 16416://(4,0) (2, 0)
		return 0;//0 0
	break;
	case 16417://(4,0) (2, 1)
		return 0;//0 0
	break;
	case 16418://(4,0) (2, 2)
		return 0;//0 0
	break;
	case 16419://(4,0) (2, 3)
		return 0;//0 0
	break;
	case 16420://(4,0) (2, 4)
		return 0;//0 0
	break;
	case 16421://(4,0) (2, 5)
		return 0;//0 0
	break;
	case 16422://(4,0) (2, 6)
		return 0;//0 0
	break;
	case 16423://(4,0) (2, 7)
		return 0;//0 0
	break;
	case 16424://(4,0) (2, 8)
		return 0;//0 0
	break;
	case 16425://(4,0) (2, 9)
		return 0;//0 0
	break;
	case 16426://(4,0) (2, 10)
		return 0;//0 0
	break;
	case 16427://(4,0) (2, 11)
		return 0;//0 0
	break;
	case 16428://(4,0) (2, 12)
		return 0;//0 0
	break;
	case 16429://(4,0) (2, 13)
		return 0;//0 0
	break;
	case 16430://(4,0) (2, 14)
		return 0;//0 0
	break;
	case 16431://(4,0) (2, 15)
		return 0;//0 0
	break;
	case 16432://(4,0) (3, 0)
		return 0;//0 0
	break;
	case 16433://(4,0) (3, 1)
		return 0;//0 0
	break;
	case 16434://(4,0) (3, 2)
		return 0;//0 0
	break;
	case 16435://(4,0) (3, 3)
		return 0;//0 0
	break;
	case 16436://(4,0) (3, 4)
		return 0;//0 0
	break;
	case 16437://(4,0) (3, 5)
		return 0;//0 0
	break;
	case 16438://(4,0) (3, 6)
		return 0;//0 0
	break;
	case 16439://(4,0) (3, 7)
		return 0;//0 0
	break;
	case 16440://(4,0) (3, 8)
		return 0;//0 0
	break;
	case 16441://(4,0) (3, 9)
		return 0;//0 0
	break;
	case 16442://(4,0) (3, 10)
		return 0;//0 0
	break;
	case 16443://(4,0) (3, 11)
		return 0;//0 0
	break;
	case 16444://(4,0) (3, 12)
		return 0;//0 0
	break;
	case 16445://(4,0) (3, 13)
		return 0;//0 0
	break;
	case 16446://(4,0) (3, 14)
		return 0;//0 0
	break;
	case 16447://(4,0) (3, 15)
		return 0;//0 0
	break;
	case 16448://(4,0) (4, 0)
		return 64;//4 0
	break;
	case 16449://(4,0) (4, 1)
		return 64;//4 0
	break;
	case 16450://(4,0) (4, 2)
		return 64;//4 0
	break;
	case 16451://(4,0) (4, 3)
		return 64;//4 0
	break;
	case 16452://(4,0) (4, 4)
		return 64;//4 0
	break;
	case 16453://(4,0) (4, 5)
		return 64;//4 0
	break;
	case 16454://(4,0) (4, 6)
		return 64;//4 0
	break;
	case 16455://(4,0) (4, 7)
		return 64;//4 0
	break;
	case 16456://(4,0) (4, 8)
		return 64;//4 0
	break;
	case 16457://(4,0) (4, 9)
		return 64;//4 0
	break;
	case 16458://(4,0) (4, 10)
		return 64;//4 0
	break;
	case 16459://(4,0) (4, 11)
		return 64;//4 0
	break;
	case 16460://(4,0) (4, 12)
		return 64;//4 0
	break;
	case 16461://(4,0) (4, 13)
		return 64;//4 0
	break;
	case 16462://(4,0) (4, 14)
		return 64;//4 0
	break;
	case 16463://(4,0) (4, 15)
		return 64;//4 0
	break;
	case 16464://(4,0) (5, 0)
		return 64;//4 0
	break;
	case 16465://(4,0) (5, 1)
		return 64;//4 0
	break;
	case 16466://(4,0) (5, 2)
		return 64;//4 0
	break;
	case 16467://(4,0) (5, 3)
		return 64;//4 0
	break;
	case 16468://(4,0) (5, 4)
		return 64;//4 0
	break;
	case 16469://(4,0) (5, 5)
		return 64;//4 0
	break;
	case 16470://(4,0) (5, 6)
		return 64;//4 0
	break;
	case 16471://(4,0) (5, 7)
		return 64;//4 0
	break;
	case 16472://(4,0) (5, 8)
		return 64;//4 0
	break;
	case 16473://(4,0) (5, 9)
		return 64;//4 0
	break;
	case 16474://(4,0) (5, 10)
		return 64;//4 0
	break;
	case 16475://(4,0) (5, 11)
		return 64;//4 0
	break;
	case 16476://(4,0) (5, 12)
		return 64;//4 0
	break;
	case 16477://(4,0) (5, 13)
		return 64;//4 0
	break;
	case 16478://(4,0) (5, 14)
		return 64;//4 0
	break;
	case 16479://(4,0) (5, 15)
		return 64;//4 0
	break;
	case 16480://(4,0) (6, 0)
		return 0;//0 0
	break;
	case 16481://(4,0) (6, 1)
		return 0;//0 0
	break;
	case 16482://(4,0) (6, 2)
		return 0;//0 0
	break;
	case 16483://(4,0) (6, 3)
		return 0;//0 0
	break;
	case 16484://(4,0) (6, 4)
		return 0;//0 0
	break;
	case 16485://(4,0) (6, 5)
		return 0;//0 0
	break;
	case 16486://(4,0) (6, 6)
		return 0;//0 0
	break;
	case 16487://(4,0) (6, 7)
		return 0;//0 0
	break;
	case 16488://(4,0) (6, 8)
		return 0;//0 0
	break;
	case 16489://(4,0) (6, 9)
		return 0;//0 0
	break;
	case 16490://(4,0) (6, 10)
		return 0;//0 0
	break;
	case 16491://(4,0) (6, 11)
		return 0;//0 0
	break;
	case 16492://(4,0) (6, 12)
		return 0;//0 0
	break;
	case 16493://(4,0) (6, 13)
		return 0;//0 0
	break;
	case 16494://(4,0) (6, 14)
		return 0;//0 0
	break;
	case 16495://(4,0) (6, 15)
		return 0;//0 0
	break;
	case 16496://(4,0) (7, 0)
		return 0;//0 0
	break;
	case 16497://(4,0) (7, 1)
		return 0;//0 0
	break;
	case 16498://(4,0) (7, 2)
		return 0;//0 0
	break;
	case 16499://(4,0) (7, 3)
		return 0;//0 0
	break;
	case 16500://(4,0) (7, 4)
		return 0;//0 0
	break;
	case 16501://(4,0) (7, 5)
		return 0;//0 0
	break;
	case 16502://(4,0) (7, 6)
		return 0;//0 0
	break;
	case 16503://(4,0) (7, 7)
		return 0;//0 0
	break;
	case 16504://(4,0) (7, 8)
		return 0;//0 0
	break;
	case 16505://(4,0) (7, 9)
		return 0;//0 0
	break;
	case 16506://(4,0) (7, 10)
		return 0;//0 0
	break;
	case 16507://(4,0) (7, 11)
		return 0;//0 0
	break;
	case 16508://(4,0) (7, 12)
		return 0;//0 0
	break;
	case 16509://(4,0) (7, 13)
		return 0;//0 0
	break;
	case 16510://(4,0) (7, 14)
		return 0;//0 0
	break;
	case 16511://(4,0) (7, 15)
		return 0;//0 0
	break;
	case 16512://(4,0) (8, 0)
		return 64;//4 0
	break;
	case 16513://(4,0) (8, 1)
		return 64;//4 0
	break;
	case 16514://(4,0) (8, 2)
		return 64;//4 0
	break;
	case 16515://(4,0) (8, 3)
		return 64;//4 0
	break;
	case 16516://(4,0) (8, 4)
		return 64;//4 0
	break;
	case 16517://(4,0) (8, 5)
		return 64;//4 0
	break;
	case 16518://(4,0) (8, 6)
		return 64;//4 0
	break;
	case 16519://(4,0) (8, 7)
		return 64;//4 0
	break;
	case 16520://(4,0) (8, 8)
		return 64;//4 0
	break;
	case 16521://(4,0) (8, 9)
		return 64;//4 0
	break;
	case 16522://(4,0) (8, 10)
		return 64;//4 0
	break;
	case 16523://(4,0) (8, 11)
		return 64;//4 0
	break;
	case 16524://(4,0) (8, 12)
		return 64;//4 0
	break;
	case 16525://(4,0) (8, 13)
		return 64;//4 0
	break;
	case 16526://(4,0) (8, 14)
		return 64;//4 0
	break;
	case 16527://(4,0) (8, 15)
		return 64;//4 0
	break;
	case 16528://(4,0) (9, 0)
		return 0;//0 0
	break;
	case 16529://(4,0) (9, 1)
		return 0;//0 0
	break;
	case 16530://(4,0) (9, 2)
		return 0;//0 0
	break;
	case 16531://(4,0) (9, 3)
		return 0;//0 0
	break;
	case 16532://(4,0) (9, 4)
		return 0;//0 0
	break;
	case 16533://(4,0) (9, 5)
		return 0;//0 0
	break;
	case 16534://(4,0) (9, 6)
		return 0;//0 0
	break;
	case 16535://(4,0) (9, 7)
		return 0;//0 0
	break;
	case 16536://(4,0) (9, 8)
		return 0;//0 0
	break;
	case 16537://(4,0) (9, 9)
		return 0;//0 0
	break;
	case 16538://(4,0) (9, 10)
		return 0;//0 0
	break;
	case 16539://(4,0) (9, 11)
		return 0;//0 0
	break;
	case 16540://(4,0) (9, 12)
		return 0;//0 0
	break;
	case 16541://(4,0) (9, 13)
		return 0;//0 0
	break;
	case 16542://(4,0) (9, 14)
		return 0;//0 0
	break;
	case 16543://(4,0) (9, 15)
		return 0;//0 0
	break;
	case 16544://(4,0) (10, 0)
		return 64;//4 0
	break;
	case 16545://(4,0) (10, 1)
		return 64;//4 0
	break;
	case 16546://(4,0) (10, 2)
		return 64;//4 0
	break;
	case 16547://(4,0) (10, 3)
		return 64;//4 0
	break;
	case 16548://(4,0) (10, 4)
		return 64;//4 0
	break;
	case 16549://(4,0) (10, 5)
		return 64;//4 0
	break;
	case 16550://(4,0) (10, 6)
		return 64;//4 0
	break;
	case 16551://(4,0) (10, 7)
		return 64;//4 0
	break;
	case 16552://(4,0) (10, 8)
		return 64;//4 0
	break;
	case 16553://(4,0) (10, 9)
		return 64;//4 0
	break;
	case 16554://(4,0) (10, 10)
		return 64;//4 0
	break;
	case 16555://(4,0) (10, 11)
		return 64;//4 0
	break;
	case 16556://(4,0) (10, 12)
		return 64;//4 0
	break;
	case 16557://(4,0) (10, 13)
		return 64;//4 0
	break;
	case 16558://(4,0) (10, 14)
		return 64;//4 0
	break;
	case 16559://(4,0) (10, 15)
		return 64;//4 0
	break;
	case 16560://(4,0) (11, 0)
		return 0;//0 0
	break;
	case 16561://(4,0) (11, 1)
		return 0;//0 0
	break;
	case 16562://(4,0) (11, 2)
		return 0;//0 0
	break;
	case 16563://(4,0) (11, 3)
		return 0;//0 0
	break;
	case 16564://(4,0) (11, 4)
		return 0;//0 0
	break;
	case 16565://(4,0) (11, 5)
		return 0;//0 0
	break;
	case 16566://(4,0) (11, 6)
		return 0;//0 0
	break;
	case 16567://(4,0) (11, 7)
		return 0;//0 0
	break;
	case 16568://(4,0) (11, 8)
		return 0;//0 0
	break;
	case 16569://(4,0) (11, 9)
		return 0;//0 0
	break;
	case 16570://(4,0) (11, 10)
		return 0;//0 0
	break;
	case 16571://(4,0) (11, 11)
		return 0;//0 0
	break;
	case 16572://(4,0) (11, 12)
		return 0;//0 0
	break;
	case 16573://(4,0) (11, 13)
		return 0;//0 0
	break;
	case 16574://(4,0) (11, 14)
		return 0;//0 0
	break;
	case 16575://(4,0) (11, 15)
		return 0;//0 0
	break;
	case 16576://(4,0) (12, 0)
		return 64;//4 0
	break;
	case 16577://(4,0) (12, 1)
		return 64;//4 0
	break;
	case 16578://(4,0) (12, 2)
		return 64;//4 0
	break;
	case 16579://(4,0) (12, 3)
		return 64;//4 0
	break;
	case 16580://(4,0) (12, 4)
		return 64;//4 0
	break;
	case 16581://(4,0) (12, 5)
		return 64;//4 0
	break;
	case 16582://(4,0) (12, 6)
		return 64;//4 0
	break;
	case 16583://(4,0) (12, 7)
		return 64;//4 0
	break;
	case 16584://(4,0) (12, 8)
		return 64;//4 0
	break;
	case 16585://(4,0) (12, 9)
		return 64;//4 0
	break;
	case 16586://(4,0) (12, 10)
		return 64;//4 0
	break;
	case 16587://(4,0) (12, 11)
		return 64;//4 0
	break;
	case 16588://(4,0) (12, 12)
		return 64;//4 0
	break;
	case 16589://(4,0) (12, 13)
		return 64;//4 0
	break;
	case 16590://(4,0) (12, 14)
		return 64;//4 0
	break;
	case 16591://(4,0) (12, 15)
		return 64;//4 0
	break;
	case 16592://(4,0) (13, 0)
		return 64;//4 0
	break;
	case 16593://(4,0) (13, 1)
		return 64;//4 0
	break;
	case 16594://(4,0) (13, 2)
		return 64;//4 0
	break;
	case 16595://(4,0) (13, 3)
		return 64;//4 0
	break;
	case 16596://(4,0) (13, 4)
		return 64;//4 0
	break;
	case 16597://(4,0) (13, 5)
		return 64;//4 0
	break;
	case 16598://(4,0) (13, 6)
		return 64;//4 0
	break;
	case 16599://(4,0) (13, 7)
		return 64;//4 0
	break;
	case 16600://(4,0) (13, 8)
		return 64;//4 0
	break;
	case 16601://(4,0) (13, 9)
		return 64;//4 0
	break;
	case 16602://(4,0) (13, 10)
		return 64;//4 0
	break;
	case 16603://(4,0) (13, 11)
		return 64;//4 0
	break;
	case 16604://(4,0) (13, 12)
		return 64;//4 0
	break;
	case 16605://(4,0) (13, 13)
		return 64;//4 0
	break;
	case 16606://(4,0) (13, 14)
		return 64;//4 0
	break;
	case 16607://(4,0) (13, 15)
		return 64;//4 0
	break;
	case 16608://(4,0) (14, 0)
		return 64;//4 0
	break;
	case 16609://(4,0) (14, 1)
		return 64;//4 0
	break;
	case 16610://(4,0) (14, 2)
		return 64;//4 0
	break;
	case 16611://(4,0) (14, 3)
		return 64;//4 0
	break;
	case 16612://(4,0) (14, 4)
		return 64;//4 0
	break;
	case 16613://(4,0) (14, 5)
		return 64;//4 0
	break;
	case 16614://(4,0) (14, 6)
		return 64;//4 0
	break;
	case 16615://(4,0) (14, 7)
		return 64;//4 0
	break;
	case 16616://(4,0) (14, 8)
		return 64;//4 0
	break;
	case 16617://(4,0) (14, 9)
		return 64;//4 0
	break;
	case 16618://(4,0) (14, 10)
		return 64;//4 0
	break;
	case 16619://(4,0) (14, 11)
		return 64;//4 0
	break;
	case 16620://(4,0) (14, 12)
		return 64;//4 0
	break;
	case 16621://(4,0) (14, 13)
		return 64;//4 0
	break;
	case 16622://(4,0) (14, 14)
		return 64;//4 0
	break;
	case 16623://(4,0) (14, 15)
		return 64;//4 0
	break;
	case 16624://(4,0) (15, 0)
		return 64;//4 0
	break;
	case 16625://(4,0) (15, 1)
		return 64;//4 0
	break;
	case 16626://(4,0) (15, 2)
		return 64;//4 0
	break;
	case 16627://(4,0) (15, 3)
		return 64;//4 0
	break;
	case 16628://(4,0) (15, 4)
		return 64;//4 0
	break;
	case 16629://(4,0) (15, 5)
		return 64;//4 0
	break;
	case 16630://(4,0) (15, 6)
		return 64;//4 0
	break;
	case 16631://(4,0) (15, 7)
		return 64;//4 0
	break;
	case 16632://(4,0) (15, 8)
		return 64;//4 0
	break;
	case 16633://(4,0) (15, 9)
		return 64;//4 0
	break;
	case 16634://(4,0) (15, 10)
		return 64;//4 0
	break;
	case 16635://(4,0) (15, 11)
		return 64;//4 0
	break;
	case 16636://(4,0) (15, 12)
		return 64;//4 0
	break;
	case 16637://(4,0) (15, 13)
		return 64;//4 0
	break;
	case 16638://(4,0) (15, 14)
		return 64;//4 0
	break;
	case 16639://(4,0) (15, 15)
		return 64;//4 0
	break;
	case 16640://(4,1) (0, 0)
		return 0;//0 0
	break;
	case 16641://(4,1) (0, 1)
		return 4;//0 4
	break;
	case 16642://(4,1) (0, 2)
		return 0;//0 0
	break;
	case 16643://(4,1) (0, 3)
		return 0;//0 0
	break;
	case 16644://(4,1) (0, 4)
		return 0;//0 0
	break;
	case 16645://(4,1) (0, 5)
		return 0;//0 0
	break;
	case 16646://(4,1) (0, 6)
		return 4;//0 4
	break;
	case 16647://(4,1) (0, 7)
		return 0;//0 0
	break;
	case 16648://(4,1) (0, 8)
		return 4;//0 4
	break;
	case 16649://(4,1) (0, 9)
		return 4;//0 4
	break;
	case 16650://(4,1) (0, 10)
		return 0;//0 0
	break;
	case 16651://(4,1) (0, 11)
		return 4;//0 4
	break;
	case 16652://(4,1) (0, 12)
		return 0;//0 0
	break;
	case 16653://(4,1) (0, 13)
		return 4;//0 4
	break;
	case 16654://(4,1) (0, 14)
		return 4;//0 4
	break;
	case 16655://(4,1) (0, 15)
		return 4;//0 4
	break;
	case 16656://(4,1) (1, 0)
		return 0;//0 0
	break;
	case 16657://(4,1) (1, 1)
		return 4;//0 4
	break;
	case 16658://(4,1) (1, 2)
		return 0;//0 0
	break;
	case 16659://(4,1) (1, 3)
		return 0;//0 0
	break;
	case 16660://(4,1) (1, 4)
		return 0;//0 0
	break;
	case 16661://(4,1) (1, 5)
		return 0;//0 0
	break;
	case 16662://(4,1) (1, 6)
		return 4;//0 4
	break;
	case 16663://(4,1) (1, 7)
		return 0;//0 0
	break;
	case 16664://(4,1) (1, 8)
		return 4;//0 4
	break;
	case 16665://(4,1) (1, 9)
		return 4;//0 4
	break;
	case 16666://(4,1) (1, 10)
		return 0;//0 0
	break;
	case 16667://(4,1) (1, 11)
		return 4;//0 4
	break;
	case 16668://(4,1) (1, 12)
		return 0;//0 0
	break;
	case 16669://(4,1) (1, 13)
		return 4;//0 4
	break;
	case 16670://(4,1) (1, 14)
		return 4;//0 4
	break;
	case 16671://(4,1) (1, 15)
		return 4;//0 4
	break;
	case 16672://(4,1) (2, 0)
		return 0;//0 0
	break;
	case 16673://(4,1) (2, 1)
		return 4;//0 4
	break;
	case 16674://(4,1) (2, 2)
		return 0;//0 0
	break;
	case 16675://(4,1) (2, 3)
		return 0;//0 0
	break;
	case 16676://(4,1) (2, 4)
		return 0;//0 0
	break;
	case 16677://(4,1) (2, 5)
		return 0;//0 0
	break;
	case 16678://(4,1) (2, 6)
		return 4;//0 4
	break;
	case 16679://(4,1) (2, 7)
		return 0;//0 0
	break;
	case 16680://(4,1) (2, 8)
		return 4;//0 4
	break;
	case 16681://(4,1) (2, 9)
		return 4;//0 4
	break;
	case 16682://(4,1) (2, 10)
		return 0;//0 0
	break;
	case 16683://(4,1) (2, 11)
		return 4;//0 4
	break;
	case 16684://(4,1) (2, 12)
		return 0;//0 0
	break;
	case 16685://(4,1) (2, 13)
		return 4;//0 4
	break;
	case 16686://(4,1) (2, 14)
		return 4;//0 4
	break;
	case 16687://(4,1) (2, 15)
		return 4;//0 4
	break;
	case 16688://(4,1) (3, 0)
		return 0;//0 0
	break;
	case 16689://(4,1) (3, 1)
		return 4;//0 4
	break;
	case 16690://(4,1) (3, 2)
		return 0;//0 0
	break;
	case 16691://(4,1) (3, 3)
		return 0;//0 0
	break;
	case 16692://(4,1) (3, 4)
		return 0;//0 0
	break;
	case 16693://(4,1) (3, 5)
		return 0;//0 0
	break;
	case 16694://(4,1) (3, 6)
		return 4;//0 4
	break;
	case 16695://(4,1) (3, 7)
		return 0;//0 0
	break;
	case 16696://(4,1) (3, 8)
		return 4;//0 4
	break;
	case 16697://(4,1) (3, 9)
		return 4;//0 4
	break;
	case 16698://(4,1) (3, 10)
		return 0;//0 0
	break;
	case 16699://(4,1) (3, 11)
		return 4;//0 4
	break;
	case 16700://(4,1) (3, 12)
		return 0;//0 0
	break;
	case 16701://(4,1) (3, 13)
		return 4;//0 4
	break;
	case 16702://(4,1) (3, 14)
		return 4;//0 4
	break;
	case 16703://(4,1) (3, 15)
		return 4;//0 4
	break;
	case 16704://(4,1) (4, 0)
		return 64;//4 0
	break;
	case 16705://(4,1) (4, 1)
		return 68;//4 4
	break;
	case 16706://(4,1) (4, 2)
		return 64;//4 0
	break;
	case 16707://(4,1) (4, 3)
		return 64;//4 0
	break;
	case 16708://(4,1) (4, 4)
		return 64;//4 0
	break;
	case 16709://(4,1) (4, 5)
		return 64;//4 0
	break;
	case 16710://(4,1) (4, 6)
		return 68;//4 4
	break;
	case 16711://(4,1) (4, 7)
		return 64;//4 0
	break;
	case 16712://(4,1) (4, 8)
		return 68;//4 4
	break;
	case 16713://(4,1) (4, 9)
		return 68;//4 4
	break;
	case 16714://(4,1) (4, 10)
		return 64;//4 0
	break;
	case 16715://(4,1) (4, 11)
		return 68;//4 4
	break;
	case 16716://(4,1) (4, 12)
		return 64;//4 0
	break;
	case 16717://(4,1) (4, 13)
		return 68;//4 4
	break;
	case 16718://(4,1) (4, 14)
		return 68;//4 4
	break;
	case 16719://(4,1) (4, 15)
		return 68;//4 4
	break;
	case 16720://(4,1) (5, 0)
		return 64;//4 0
	break;
	case 16721://(4,1) (5, 1)
		return 68;//4 4
	break;
	case 16722://(4,1) (5, 2)
		return 64;//4 0
	break;
	case 16723://(4,1) (5, 3)
		return 64;//4 0
	break;
	case 16724://(4,1) (5, 4)
		return 64;//4 0
	break;
	case 16725://(4,1) (5, 5)
		return 64;//4 0
	break;
	case 16726://(4,1) (5, 6)
		return 68;//4 4
	break;
	case 16727://(4,1) (5, 7)
		return 64;//4 0
	break;
	case 16728://(4,1) (5, 8)
		return 68;//4 4
	break;
	case 16729://(4,1) (5, 9)
		return 68;//4 4
	break;
	case 16730://(4,1) (5, 10)
		return 64;//4 0
	break;
	case 16731://(4,1) (5, 11)
		return 68;//4 4
	break;
	case 16732://(4,1) (5, 12)
		return 64;//4 0
	break;
	case 16733://(4,1) (5, 13)
		return 68;//4 4
	break;
	case 16734://(4,1) (5, 14)
		return 68;//4 4
	break;
	case 16735://(4,1) (5, 15)
		return 68;//4 4
	break;
	case 16736://(4,1) (6, 0)
		return 0;//0 0
	break;
	case 16737://(4,1) (6, 1)
		return 4;//0 4
	break;
	case 16738://(4,1) (6, 2)
		return 0;//0 0
	break;
	case 16739://(4,1) (6, 3)
		return 0;//0 0
	break;
	case 16740://(4,1) (6, 4)
		return 0;//0 0
	break;
	case 16741://(4,1) (6, 5)
		return 0;//0 0
	break;
	case 16742://(4,1) (6, 6)
		return 4;//0 4
	break;
	case 16743://(4,1) (6, 7)
		return 0;//0 0
	break;
	case 16744://(4,1) (6, 8)
		return 4;//0 4
	break;
	case 16745://(4,1) (6, 9)
		return 4;//0 4
	break;
	case 16746://(4,1) (6, 10)
		return 0;//0 0
	break;
	case 16747://(4,1) (6, 11)
		return 4;//0 4
	break;
	case 16748://(4,1) (6, 12)
		return 0;//0 0
	break;
	case 16749://(4,1) (6, 13)
		return 4;//0 4
	break;
	case 16750://(4,1) (6, 14)
		return 4;//0 4
	break;
	case 16751://(4,1) (6, 15)
		return 4;//0 4
	break;
	case 16752://(4,1) (7, 0)
		return 0;//0 0
	break;
	case 16753://(4,1) (7, 1)
		return 4;//0 4
	break;
	case 16754://(4,1) (7, 2)
		return 0;//0 0
	break;
	case 16755://(4,1) (7, 3)
		return 0;//0 0
	break;
	case 16756://(4,1) (7, 4)
		return 0;//0 0
	break;
	case 16757://(4,1) (7, 5)
		return 0;//0 0
	break;
	case 16758://(4,1) (7, 6)
		return 4;//0 4
	break;
	case 16759://(4,1) (7, 7)
		return 0;//0 0
	break;
	case 16760://(4,1) (7, 8)
		return 4;//0 4
	break;
	case 16761://(4,1) (7, 9)
		return 4;//0 4
	break;
	case 16762://(4,1) (7, 10)
		return 0;//0 0
	break;
	case 16763://(4,1) (7, 11)
		return 4;//0 4
	break;
	case 16764://(4,1) (7, 12)
		return 0;//0 0
	break;
	case 16765://(4,1) (7, 13)
		return 4;//0 4
	break;
	case 16766://(4,1) (7, 14)
		return 4;//0 4
	break;
	case 16767://(4,1) (7, 15)
		return 4;//0 4
	break;
	case 16768://(4,1) (8, 0)
		return 64;//4 0
	break;
	case 16769://(4,1) (8, 1)
		return 68;//4 4
	break;
	case 16770://(4,1) (8, 2)
		return 64;//4 0
	break;
	case 16771://(4,1) (8, 3)
		return 64;//4 0
	break;
	case 16772://(4,1) (8, 4)
		return 64;//4 0
	break;
	case 16773://(4,1) (8, 5)
		return 64;//4 0
	break;
	case 16774://(4,1) (8, 6)
		return 68;//4 4
	break;
	case 16775://(4,1) (8, 7)
		return 64;//4 0
	break;
	case 16776://(4,1) (8, 8)
		return 68;//4 4
	break;
	case 16777://(4,1) (8, 9)
		return 68;//4 4
	break;
	case 16778://(4,1) (8, 10)
		return 64;//4 0
	break;
	case 16779://(4,1) (8, 11)
		return 68;//4 4
	break;
	case 16780://(4,1) (8, 12)
		return 64;//4 0
	break;
	case 16781://(4,1) (8, 13)
		return 68;//4 4
	break;
	case 16782://(4,1) (8, 14)
		return 68;//4 4
	break;
	case 16783://(4,1) (8, 15)
		return 68;//4 4
	break;
	case 16784://(4,1) (9, 0)
		return 0;//0 0
	break;
	case 16785://(4,1) (9, 1)
		return 4;//0 4
	break;
	case 16786://(4,1) (9, 2)
		return 0;//0 0
	break;
	case 16787://(4,1) (9, 3)
		return 0;//0 0
	break;
	case 16788://(4,1) (9, 4)
		return 0;//0 0
	break;
	case 16789://(4,1) (9, 5)
		return 0;//0 0
	break;
	case 16790://(4,1) (9, 6)
		return 4;//0 4
	break;
	case 16791://(4,1) (9, 7)
		return 0;//0 0
	break;
	case 16792://(4,1) (9, 8)
		return 4;//0 4
	break;
	case 16793://(4,1) (9, 9)
		return 4;//0 4
	break;
	case 16794://(4,1) (9, 10)
		return 0;//0 0
	break;
	case 16795://(4,1) (9, 11)
		return 4;//0 4
	break;
	case 16796://(4,1) (9, 12)
		return 0;//0 0
	break;
	case 16797://(4,1) (9, 13)
		return 4;//0 4
	break;
	case 16798://(4,1) (9, 14)
		return 4;//0 4
	break;
	case 16799://(4,1) (9, 15)
		return 4;//0 4
	break;
	case 16800://(4,1) (10, 0)
		return 64;//4 0
	break;
	case 16801://(4,1) (10, 1)
		return 68;//4 4
	break;
	case 16802://(4,1) (10, 2)
		return 64;//4 0
	break;
	case 16803://(4,1) (10, 3)
		return 64;//4 0
	break;
	case 16804://(4,1) (10, 4)
		return 64;//4 0
	break;
	case 16805://(4,1) (10, 5)
		return 64;//4 0
	break;
	case 16806://(4,1) (10, 6)
		return 68;//4 4
	break;
	case 16807://(4,1) (10, 7)
		return 64;//4 0
	break;
	case 16808://(4,1) (10, 8)
		return 68;//4 4
	break;
	case 16809://(4,1) (10, 9)
		return 68;//4 4
	break;
	case 16810://(4,1) (10, 10)
		return 64;//4 0
	break;
	case 16811://(4,1) (10, 11)
		return 68;//4 4
	break;
	case 16812://(4,1) (10, 12)
		return 64;//4 0
	break;
	case 16813://(4,1) (10, 13)
		return 68;//4 4
	break;
	case 16814://(4,1) (10, 14)
		return 68;//4 4
	break;
	case 16815://(4,1) (10, 15)
		return 68;//4 4
	break;
	case 16816://(4,1) (11, 0)
		return 0;//0 0
	break;
	case 16817://(4,1) (11, 1)
		return 4;//0 4
	break;
	case 16818://(4,1) (11, 2)
		return 0;//0 0
	break;
	case 16819://(4,1) (11, 3)
		return 0;//0 0
	break;
	case 16820://(4,1) (11, 4)
		return 0;//0 0
	break;
	case 16821://(4,1) (11, 5)
		return 0;//0 0
	break;
	case 16822://(4,1) (11, 6)
		return 4;//0 4
	break;
	case 16823://(4,1) (11, 7)
		return 0;//0 0
	break;
	case 16824://(4,1) (11, 8)
		return 4;//0 4
	break;
	case 16825://(4,1) (11, 9)
		return 4;//0 4
	break;
	case 16826://(4,1) (11, 10)
		return 0;//0 0
	break;
	case 16827://(4,1) (11, 11)
		return 4;//0 4
	break;
	case 16828://(4,1) (11, 12)
		return 0;//0 0
	break;
	case 16829://(4,1) (11, 13)
		return 4;//0 4
	break;
	case 16830://(4,1) (11, 14)
		return 4;//0 4
	break;
	case 16831://(4,1) (11, 15)
		return 4;//0 4
	break;
	case 16832://(4,1) (12, 0)
		return 64;//4 0
	break;
	case 16833://(4,1) (12, 1)
		return 68;//4 4
	break;
	case 16834://(4,1) (12, 2)
		return 64;//4 0
	break;
	case 16835://(4,1) (12, 3)
		return 64;//4 0
	break;
	case 16836://(4,1) (12, 4)
		return 64;//4 0
	break;
	case 16837://(4,1) (12, 5)
		return 64;//4 0
	break;
	case 16838://(4,1) (12, 6)
		return 68;//4 4
	break;
	case 16839://(4,1) (12, 7)
		return 64;//4 0
	break;
	case 16840://(4,1) (12, 8)
		return 68;//4 4
	break;
	case 16841://(4,1) (12, 9)
		return 68;//4 4
	break;
	case 16842://(4,1) (12, 10)
		return 64;//4 0
	break;
	case 16843://(4,1) (12, 11)
		return 68;//4 4
	break;
	case 16844://(4,1) (12, 12)
		return 64;//4 0
	break;
	case 16845://(4,1) (12, 13)
		return 68;//4 4
	break;
	case 16846://(4,1) (12, 14)
		return 68;//4 4
	break;
	case 16847://(4,1) (12, 15)
		return 68;//4 4
	break;
	case 16848://(4,1) (13, 0)
		return 64;//4 0
	break;
	case 16849://(4,1) (13, 1)
		return 68;//4 4
	break;
	case 16850://(4,1) (13, 2)
		return 64;//4 0
	break;
	case 16851://(4,1) (13, 3)
		return 64;//4 0
	break;
	case 16852://(4,1) (13, 4)
		return 64;//4 0
	break;
	case 16853://(4,1) (13, 5)
		return 64;//4 0
	break;
	case 16854://(4,1) (13, 6)
		return 68;//4 4
	break;
	case 16855://(4,1) (13, 7)
		return 64;//4 0
	break;
	case 16856://(4,1) (13, 8)
		return 68;//4 4
	break;
	case 16857://(4,1) (13, 9)
		return 68;//4 4
	break;
	case 16858://(4,1) (13, 10)
		return 64;//4 0
	break;
	case 16859://(4,1) (13, 11)
		return 68;//4 4
	break;
	case 16860://(4,1) (13, 12)
		return 64;//4 0
	break;
	case 16861://(4,1) (13, 13)
		return 68;//4 4
	break;
	case 16862://(4,1) (13, 14)
		return 68;//4 4
	break;
	case 16863://(4,1) (13, 15)
		return 68;//4 4
	break;
	case 16864://(4,1) (14, 0)
		return 64;//4 0
	break;
	case 16865://(4,1) (14, 1)
		return 68;//4 4
	break;
	case 16866://(4,1) (14, 2)
		return 64;//4 0
	break;
	case 16867://(4,1) (14, 3)
		return 64;//4 0
	break;
	case 16868://(4,1) (14, 4)
		return 64;//4 0
	break;
	case 16869://(4,1) (14, 5)
		return 64;//4 0
	break;
	case 16870://(4,1) (14, 6)
		return 68;//4 4
	break;
	case 16871://(4,1) (14, 7)
		return 64;//4 0
	break;
	case 16872://(4,1) (14, 8)
		return 68;//4 4
	break;
	case 16873://(4,1) (14, 9)
		return 68;//4 4
	break;
	case 16874://(4,1) (14, 10)
		return 64;//4 0
	break;
	case 16875://(4,1) (14, 11)
		return 68;//4 4
	break;
	case 16876://(4,1) (14, 12)
		return 64;//4 0
	break;
	case 16877://(4,1) (14, 13)
		return 68;//4 4
	break;
	case 16878://(4,1) (14, 14)
		return 68;//4 4
	break;
	case 16879://(4,1) (14, 15)
		return 68;//4 4
	break;
	case 16880://(4,1) (15, 0)
		return 64;//4 0
	break;
	case 16881://(4,1) (15, 1)
		return 68;//4 4
	break;
	case 16882://(4,1) (15, 2)
		return 64;//4 0
	break;
	case 16883://(4,1) (15, 3)
		return 64;//4 0
	break;
	case 16884://(4,1) (15, 4)
		return 64;//4 0
	break;
	case 16885://(4,1) (15, 5)
		return 64;//4 0
	break;
	case 16886://(4,1) (15, 6)
		return 68;//4 4
	break;
	case 16887://(4,1) (15, 7)
		return 64;//4 0
	break;
	case 16888://(4,1) (15, 8)
		return 68;//4 4
	break;
	case 16889://(4,1) (15, 9)
		return 68;//4 4
	break;
	case 16890://(4,1) (15, 10)
		return 64;//4 0
	break;
	case 16891://(4,1) (15, 11)
		return 68;//4 4
	break;
	case 16892://(4,1) (15, 12)
		return 64;//4 0
	break;
	case 16893://(4,1) (15, 13)
		return 68;//4 4
	break;
	case 16894://(4,1) (15, 14)
		return 68;//4 4
	break;
	case 16895://(4,1) (15, 15)
		return 68;//4 4
	break;
	case 16896://(4,2) (0, 0)
		return 0;//0 0
	break;
	case 16897://(4,2) (0, 1)
		return 0;//0 0
	break;
	case 16898://(4,2) (0, 2)
		return 4;//0 4
	break;
	case 16899://(4,2) (0, 3)
		return 0;//0 0
	break;
	case 16900://(4,2) (0, 4)
		return 0;//0 0
	break;
	case 16901://(4,2) (0, 5)
		return 4;//0 4
	break;
	case 16902://(4,2) (0, 6)
		return 0;//0 0
	break;
	case 16903://(4,2) (0, 7)
		return 4;//0 4
	break;
	case 16904://(4,2) (0, 8)
		return 0;//0 0
	break;
	case 16905://(4,2) (0, 9)
		return 4;//0 4
	break;
	case 16906://(4,2) (0, 10)
		return 0;//0 0
	break;
	case 16907://(4,2) (0, 11)
		return 4;//0 4
	break;
	case 16908://(4,2) (0, 12)
		return 4;//0 4
	break;
	case 16909://(4,2) (0, 13)
		return 0;//0 0
	break;
	case 16910://(4,2) (0, 14)
		return 4;//0 4
	break;
	case 16911://(4,2) (0, 15)
		return 4;//0 4
	break;
	case 16912://(4,2) (1, 0)
		return 0;//0 0
	break;
	case 16913://(4,2) (1, 1)
		return 0;//0 0
	break;
	case 16914://(4,2) (1, 2)
		return 4;//0 4
	break;
	case 16915://(4,2) (1, 3)
		return 0;//0 0
	break;
	case 16916://(4,2) (1, 4)
		return 0;//0 0
	break;
	case 16917://(4,2) (1, 5)
		return 4;//0 4
	break;
	case 16918://(4,2) (1, 6)
		return 0;//0 0
	break;
	case 16919://(4,2) (1, 7)
		return 4;//0 4
	break;
	case 16920://(4,2) (1, 8)
		return 0;//0 0
	break;
	case 16921://(4,2) (1, 9)
		return 4;//0 4
	break;
	case 16922://(4,2) (1, 10)
		return 0;//0 0
	break;
	case 16923://(4,2) (1, 11)
		return 4;//0 4
	break;
	case 16924://(4,2) (1, 12)
		return 4;//0 4
	break;
	case 16925://(4,2) (1, 13)
		return 0;//0 0
	break;
	case 16926://(4,2) (1, 14)
		return 4;//0 4
	break;
	case 16927://(4,2) (1, 15)
		return 4;//0 4
	break;
	case 16928://(4,2) (2, 0)
		return 0;//0 0
	break;
	case 16929://(4,2) (2, 1)
		return 0;//0 0
	break;
	case 16930://(4,2) (2, 2)
		return 4;//0 4
	break;
	case 16931://(4,2) (2, 3)
		return 0;//0 0
	break;
	case 16932://(4,2) (2, 4)
		return 0;//0 0
	break;
	case 16933://(4,2) (2, 5)
		return 4;//0 4
	break;
	case 16934://(4,2) (2, 6)
		return 0;//0 0
	break;
	case 16935://(4,2) (2, 7)
		return 4;//0 4
	break;
	case 16936://(4,2) (2, 8)
		return 0;//0 0
	break;
	case 16937://(4,2) (2, 9)
		return 4;//0 4
	break;
	case 16938://(4,2) (2, 10)
		return 0;//0 0
	break;
	case 16939://(4,2) (2, 11)
		return 4;//0 4
	break;
	case 16940://(4,2) (2, 12)
		return 4;//0 4
	break;
	case 16941://(4,2) (2, 13)
		return 0;//0 0
	break;
	case 16942://(4,2) (2, 14)
		return 4;//0 4
	break;
	case 16943://(4,2) (2, 15)
		return 4;//0 4
	break;
	case 16944://(4,2) (3, 0)
		return 0;//0 0
	break;
	case 16945://(4,2) (3, 1)
		return 0;//0 0
	break;
	case 16946://(4,2) (3, 2)
		return 4;//0 4
	break;
	case 16947://(4,2) (3, 3)
		return 0;//0 0
	break;
	case 16948://(4,2) (3, 4)
		return 0;//0 0
	break;
	case 16949://(4,2) (3, 5)
		return 4;//0 4
	break;
	case 16950://(4,2) (3, 6)
		return 0;//0 0
	break;
	case 16951://(4,2) (3, 7)
		return 4;//0 4
	break;
	case 16952://(4,2) (3, 8)
		return 0;//0 0
	break;
	case 16953://(4,2) (3, 9)
		return 4;//0 4
	break;
	case 16954://(4,2) (3, 10)
		return 0;//0 0
	break;
	case 16955://(4,2) (3, 11)
		return 4;//0 4
	break;
	case 16956://(4,2) (3, 12)
		return 4;//0 4
	break;
	case 16957://(4,2) (3, 13)
		return 0;//0 0
	break;
	case 16958://(4,2) (3, 14)
		return 4;//0 4
	break;
	case 16959://(4,2) (3, 15)
		return 4;//0 4
	break;
	case 16960://(4,2) (4, 0)
		return 64;//4 0
	break;
	case 16961://(4,2) (4, 1)
		return 64;//4 0
	break;
	case 16962://(4,2) (4, 2)
		return 68;//4 4
	break;
	case 16963://(4,2) (4, 3)
		return 64;//4 0
	break;
	case 16964://(4,2) (4, 4)
		return 64;//4 0
	break;
	case 16965://(4,2) (4, 5)
		return 68;//4 4
	break;
	case 16966://(4,2) (4, 6)
		return 64;//4 0
	break;
	case 16967://(4,2) (4, 7)
		return 68;//4 4
	break;
	case 16968://(4,2) (4, 8)
		return 64;//4 0
	break;
	case 16969://(4,2) (4, 9)
		return 68;//4 4
	break;
	case 16970://(4,2) (4, 10)
		return 64;//4 0
	break;
	case 16971://(4,2) (4, 11)
		return 68;//4 4
	break;
	case 16972://(4,2) (4, 12)
		return 68;//4 4
	break;
	case 16973://(4,2) (4, 13)
		return 64;//4 0
	break;
	case 16974://(4,2) (4, 14)
		return 68;//4 4
	break;
	case 16975://(4,2) (4, 15)
		return 68;//4 4
	break;
	case 16976://(4,2) (5, 0)
		return 64;//4 0
	break;
	case 16977://(4,2) (5, 1)
		return 64;//4 0
	break;
	case 16978://(4,2) (5, 2)
		return 68;//4 4
	break;
	case 16979://(4,2) (5, 3)
		return 64;//4 0
	break;
	case 16980://(4,2) (5, 4)
		return 64;//4 0
	break;
	case 16981://(4,2) (5, 5)
		return 68;//4 4
	break;
	case 16982://(4,2) (5, 6)
		return 64;//4 0
	break;
	case 16983://(4,2) (5, 7)
		return 68;//4 4
	break;
	case 16984://(4,2) (5, 8)
		return 64;//4 0
	break;
	case 16985://(4,2) (5, 9)
		return 68;//4 4
	break;
	case 16986://(4,2) (5, 10)
		return 64;//4 0
	break;
	case 16987://(4,2) (5, 11)
		return 68;//4 4
	break;
	case 16988://(4,2) (5, 12)
		return 68;//4 4
	break;
	case 16989://(4,2) (5, 13)
		return 64;//4 0
	break;
	case 16990://(4,2) (5, 14)
		return 68;//4 4
	break;
	case 16991://(4,2) (5, 15)
		return 68;//4 4
	break;
	case 16992://(4,2) (6, 0)
		return 0;//0 0
	break;
	case 16993://(4,2) (6, 1)
		return 0;//0 0
	break;
	case 16994://(4,2) (6, 2)
		return 4;//0 4
	break;
	case 16995://(4,2) (6, 3)
		return 0;//0 0
	break;
	case 16996://(4,2) (6, 4)
		return 0;//0 0
	break;
	case 16997://(4,2) (6, 5)
		return 4;//0 4
	break;
	case 16998://(4,2) (6, 6)
		return 0;//0 0
	break;
	case 16999://(4,2) (6, 7)
		return 4;//0 4
	break;
	case 17000://(4,2) (6, 8)
		return 0;//0 0
	break;
	case 17001://(4,2) (6, 9)
		return 4;//0 4
	break;
	case 17002://(4,2) (6, 10)
		return 0;//0 0
	break;
	case 17003://(4,2) (6, 11)
		return 4;//0 4
	break;
	case 17004://(4,2) (6, 12)
		return 4;//0 4
	break;
	case 17005://(4,2) (6, 13)
		return 0;//0 0
	break;
	case 17006://(4,2) (6, 14)
		return 4;//0 4
	break;
	case 17007://(4,2) (6, 15)
		return 4;//0 4
	break;
	case 17008://(4,2) (7, 0)
		return 0;//0 0
	break;
	case 17009://(4,2) (7, 1)
		return 0;//0 0
	break;
	case 17010://(4,2) (7, 2)
		return 4;//0 4
	break;
	case 17011://(4,2) (7, 3)
		return 0;//0 0
	break;
	case 17012://(4,2) (7, 4)
		return 0;//0 0
	break;
	case 17013://(4,2) (7, 5)
		return 4;//0 4
	break;
	case 17014://(4,2) (7, 6)
		return 0;//0 0
	break;
	case 17015://(4,2) (7, 7)
		return 4;//0 4
	break;
	case 17016://(4,2) (7, 8)
		return 0;//0 0
	break;
	case 17017://(4,2) (7, 9)
		return 4;//0 4
	break;
	case 17018://(4,2) (7, 10)
		return 0;//0 0
	break;
	case 17019://(4,2) (7, 11)
		return 4;//0 4
	break;
	case 17020://(4,2) (7, 12)
		return 4;//0 4
	break;
	case 17021://(4,2) (7, 13)
		return 0;//0 0
	break;
	case 17022://(4,2) (7, 14)
		return 4;//0 4
	break;
	case 17023://(4,2) (7, 15)
		return 4;//0 4
	break;
	case 17024://(4,2) (8, 0)
		return 64;//4 0
	break;
	case 17025://(4,2) (8, 1)
		return 64;//4 0
	break;
	case 17026://(4,2) (8, 2)
		return 68;//4 4
	break;
	case 17027://(4,2) (8, 3)
		return 64;//4 0
	break;
	case 17028://(4,2) (8, 4)
		return 64;//4 0
	break;
	case 17029://(4,2) (8, 5)
		return 68;//4 4
	break;
	case 17030://(4,2) (8, 6)
		return 64;//4 0
	break;
	case 17031://(4,2) (8, 7)
		return 68;//4 4
	break;
	case 17032://(4,2) (8, 8)
		return 64;//4 0
	break;
	case 17033://(4,2) (8, 9)
		return 68;//4 4
	break;
	case 17034://(4,2) (8, 10)
		return 64;//4 0
	break;
	case 17035://(4,2) (8, 11)
		return 68;//4 4
	break;
	case 17036://(4,2) (8, 12)
		return 68;//4 4
	break;
	case 17037://(4,2) (8, 13)
		return 64;//4 0
	break;
	case 17038://(4,2) (8, 14)
		return 68;//4 4
	break;
	case 17039://(4,2) (8, 15)
		return 68;//4 4
	break;
	case 17040://(4,2) (9, 0)
		return 0;//0 0
	break;
	case 17041://(4,2) (9, 1)
		return 0;//0 0
	break;
	case 17042://(4,2) (9, 2)
		return 4;//0 4
	break;
	case 17043://(4,2) (9, 3)
		return 0;//0 0
	break;
	case 17044://(4,2) (9, 4)
		return 0;//0 0
	break;
	case 17045://(4,2) (9, 5)
		return 4;//0 4
	break;
	case 17046://(4,2) (9, 6)
		return 0;//0 0
	break;
	case 17047://(4,2) (9, 7)
		return 4;//0 4
	break;
	case 17048://(4,2) (9, 8)
		return 0;//0 0
	break;
	case 17049://(4,2) (9, 9)
		return 4;//0 4
	break;
	case 17050://(4,2) (9, 10)
		return 0;//0 0
	break;
	case 17051://(4,2) (9, 11)
		return 4;//0 4
	break;
	case 17052://(4,2) (9, 12)
		return 4;//0 4
	break;
	case 17053://(4,2) (9, 13)
		return 0;//0 0
	break;
	case 17054://(4,2) (9, 14)
		return 4;//0 4
	break;
	case 17055://(4,2) (9, 15)
		return 4;//0 4
	break;
	case 17056://(4,2) (10, 0)
		return 64;//4 0
	break;
	case 17057://(4,2) (10, 1)
		return 64;//4 0
	break;
	case 17058://(4,2) (10, 2)
		return 68;//4 4
	break;
	case 17059://(4,2) (10, 3)
		return 64;//4 0
	break;
	case 17060://(4,2) (10, 4)
		return 64;//4 0
	break;
	case 17061://(4,2) (10, 5)
		return 68;//4 4
	break;
	case 17062://(4,2) (10, 6)
		return 64;//4 0
	break;
	case 17063://(4,2) (10, 7)
		return 68;//4 4
	break;
	case 17064://(4,2) (10, 8)
		return 64;//4 0
	break;
	case 17065://(4,2) (10, 9)
		return 68;//4 4
	break;
	case 17066://(4,2) (10, 10)
		return 64;//4 0
	break;
	case 17067://(4,2) (10, 11)
		return 68;//4 4
	break;
	case 17068://(4,2) (10, 12)
		return 68;//4 4
	break;
	case 17069://(4,2) (10, 13)
		return 64;//4 0
	break;
	case 17070://(4,2) (10, 14)
		return 68;//4 4
	break;
	case 17071://(4,2) (10, 15)
		return 68;//4 4
	break;
	case 17072://(4,2) (11, 0)
		return 0;//0 0
	break;
	case 17073://(4,2) (11, 1)
		return 0;//0 0
	break;
	case 17074://(4,2) (11, 2)
		return 4;//0 4
	break;
	case 17075://(4,2) (11, 3)
		return 0;//0 0
	break;
	case 17076://(4,2) (11, 4)
		return 0;//0 0
	break;
	case 17077://(4,2) (11, 5)
		return 4;//0 4
	break;
	case 17078://(4,2) (11, 6)
		return 0;//0 0
	break;
	case 17079://(4,2) (11, 7)
		return 4;//0 4
	break;
	case 17080://(4,2) (11, 8)
		return 0;//0 0
	break;
	case 17081://(4,2) (11, 9)
		return 4;//0 4
	break;
	case 17082://(4,2) (11, 10)
		return 0;//0 0
	break;
	case 17083://(4,2) (11, 11)
		return 4;//0 4
	break;
	case 17084://(4,2) (11, 12)
		return 4;//0 4
	break;
	case 17085://(4,2) (11, 13)
		return 0;//0 0
	break;
	case 17086://(4,2) (11, 14)
		return 4;//0 4
	break;
	case 17087://(4,2) (11, 15)
		return 4;//0 4
	break;
	case 17088://(4,2) (12, 0)
		return 64;//4 0
	break;
	case 17089://(4,2) (12, 1)
		return 64;//4 0
	break;
	case 17090://(4,2) (12, 2)
		return 68;//4 4
	break;
	case 17091://(4,2) (12, 3)
		return 64;//4 0
	break;
	case 17092://(4,2) (12, 4)
		return 64;//4 0
	break;
	case 17093://(4,2) (12, 5)
		return 68;//4 4
	break;
	case 17094://(4,2) (12, 6)
		return 64;//4 0
	break;
	case 17095://(4,2) (12, 7)
		return 68;//4 4
	break;
	case 17096://(4,2) (12, 8)
		return 64;//4 0
	break;
	case 17097://(4,2) (12, 9)
		return 68;//4 4
	break;
	case 17098://(4,2) (12, 10)
		return 64;//4 0
	break;
	case 17099://(4,2) (12, 11)
		return 68;//4 4
	break;
	case 17100://(4,2) (12, 12)
		return 68;//4 4
	break;
	case 17101://(4,2) (12, 13)
		return 64;//4 0
	break;
	case 17102://(4,2) (12, 14)
		return 68;//4 4
	break;
	case 17103://(4,2) (12, 15)
		return 68;//4 4
	break;
	case 17104://(4,2) (13, 0)
		return 64;//4 0
	break;
	case 17105://(4,2) (13, 1)
		return 64;//4 0
	break;
	case 17106://(4,2) (13, 2)
		return 68;//4 4
	break;
	case 17107://(4,2) (13, 3)
		return 64;//4 0
	break;
	case 17108://(4,2) (13, 4)
		return 64;//4 0
	break;
	case 17109://(4,2) (13, 5)
		return 68;//4 4
	break;
	case 17110://(4,2) (13, 6)
		return 64;//4 0
	break;
	case 17111://(4,2) (13, 7)
		return 68;//4 4
	break;
	case 17112://(4,2) (13, 8)
		return 64;//4 0
	break;
	case 17113://(4,2) (13, 9)
		return 68;//4 4
	break;
	case 17114://(4,2) (13, 10)
		return 64;//4 0
	break;
	case 17115://(4,2) (13, 11)
		return 68;//4 4
	break;
	case 17116://(4,2) (13, 12)
		return 68;//4 4
	break;
	case 17117://(4,2) (13, 13)
		return 64;//4 0
	break;
	case 17118://(4,2) (13, 14)
		return 68;//4 4
	break;
	case 17119://(4,2) (13, 15)
		return 68;//4 4
	break;
	case 17120://(4,2) (14, 0)
		return 64;//4 0
	break;
	case 17121://(4,2) (14, 1)
		return 64;//4 0
	break;
	case 17122://(4,2) (14, 2)
		return 68;//4 4
	break;
	case 17123://(4,2) (14, 3)
		return 64;//4 0
	break;
	case 17124://(4,2) (14, 4)
		return 64;//4 0
	break;
	case 17125://(4,2) (14, 5)
		return 68;//4 4
	break;
	case 17126://(4,2) (14, 6)
		return 64;//4 0
	break;
	case 17127://(4,2) (14, 7)
		return 68;//4 4
	break;
	case 17128://(4,2) (14, 8)
		return 64;//4 0
	break;
	case 17129://(4,2) (14, 9)
		return 68;//4 4
	break;
	case 17130://(4,2) (14, 10)
		return 64;//4 0
	break;
	case 17131://(4,2) (14, 11)
		return 68;//4 4
	break;
	case 17132://(4,2) (14, 12)
		return 68;//4 4
	break;
	case 17133://(4,2) (14, 13)
		return 64;//4 0
	break;
	case 17134://(4,2) (14, 14)
		return 68;//4 4
	break;
	case 17135://(4,2) (14, 15)
		return 68;//4 4
	break;
	case 17136://(4,2) (15, 0)
		return 64;//4 0
	break;
	case 17137://(4,2) (15, 1)
		return 64;//4 0
	break;
	case 17138://(4,2) (15, 2)
		return 68;//4 4
	break;
	case 17139://(4,2) (15, 3)
		return 64;//4 0
	break;
	case 17140://(4,2) (15, 4)
		return 64;//4 0
	break;
	case 17141://(4,2) (15, 5)
		return 68;//4 4
	break;
	case 17142://(4,2) (15, 6)
		return 64;//4 0
	break;
	case 17143://(4,2) (15, 7)
		return 68;//4 4
	break;
	case 17144://(4,2) (15, 8)
		return 64;//4 0
	break;
	case 17145://(4,2) (15, 9)
		return 68;//4 4
	break;
	case 17146://(4,2) (15, 10)
		return 64;//4 0
	break;
	case 17147://(4,2) (15, 11)
		return 68;//4 4
	break;
	case 17148://(4,2) (15, 12)
		return 68;//4 4
	break;
	case 17149://(4,2) (15, 13)
		return 64;//4 0
	break;
	case 17150://(4,2) (15, 14)
		return 68;//4 4
	break;
	case 17151://(4,2) (15, 15)
		return 68;//4 4
	break;
	case 17152://(4,3) (0, 0)
		return 0;//0 0
	break;
	case 17153://(4,3) (0, 1)
		return 0;//0 0
	break;
	case 17154://(4,3) (0, 2)
		return 0;//0 0
	break;
	case 17155://(4,3) (0, 3)
		return 4;//0 4
	break;
	case 17156://(4,3) (0, 4)
		return 0;//0 0
	break;
	case 17157://(4,3) (0, 5)
		return 0;//0 0
	break;
	case 17158://(4,3) (0, 6)
		return 4;//0 4
	break;
	case 17159://(4,3) (0, 7)
		return 4;//0 4
	break;
	case 17160://(4,3) (0, 8)
		return 0;//0 0
	break;
	case 17161://(4,3) (0, 9)
		return 0;//0 0
	break;
	case 17162://(4,3) (0, 10)
		return 4;//0 4
	break;
	case 17163://(4,3) (0, 11)
		return 4;//0 4
	break;
	case 17164://(4,3) (0, 12)
		return 4;//0 4
	break;
	case 17165://(4,3) (0, 13)
		return 4;//0 4
	break;
	case 17166://(4,3) (0, 14)
		return 0;//0 0
	break;
	case 17167://(4,3) (0, 15)
		return 4;//0 4
	break;
	case 17168://(4,3) (1, 0)
		return 0;//0 0
	break;
	case 17169://(4,3) (1, 1)
		return 0;//0 0
	break;
	case 17170://(4,3) (1, 2)
		return 0;//0 0
	break;
	case 17171://(4,3) (1, 3)
		return 4;//0 4
	break;
	case 17172://(4,3) (1, 4)
		return 0;//0 0
	break;
	case 17173://(4,3) (1, 5)
		return 0;//0 0
	break;
	case 17174://(4,3) (1, 6)
		return 4;//0 4
	break;
	case 17175://(4,3) (1, 7)
		return 4;//0 4
	break;
	case 17176://(4,3) (1, 8)
		return 0;//0 0
	break;
	case 17177://(4,3) (1, 9)
		return 0;//0 0
	break;
	case 17178://(4,3) (1, 10)
		return 4;//0 4
	break;
	case 17179://(4,3) (1, 11)
		return 4;//0 4
	break;
	case 17180://(4,3) (1, 12)
		return 4;//0 4
	break;
	case 17181://(4,3) (1, 13)
		return 4;//0 4
	break;
	case 17182://(4,3) (1, 14)
		return 0;//0 0
	break;
	case 17183://(4,3) (1, 15)
		return 4;//0 4
	break;
	case 17184://(4,3) (2, 0)
		return 0;//0 0
	break;
	case 17185://(4,3) (2, 1)
		return 0;//0 0
	break;
	case 17186://(4,3) (2, 2)
		return 0;//0 0
	break;
	case 17187://(4,3) (2, 3)
		return 4;//0 4
	break;
	case 17188://(4,3) (2, 4)
		return 0;//0 0
	break;
	case 17189://(4,3) (2, 5)
		return 0;//0 0
	break;
	case 17190://(4,3) (2, 6)
		return 4;//0 4
	break;
	case 17191://(4,3) (2, 7)
		return 4;//0 4
	break;
	case 17192://(4,3) (2, 8)
		return 0;//0 0
	break;
	case 17193://(4,3) (2, 9)
		return 0;//0 0
	break;
	case 17194://(4,3) (2, 10)
		return 4;//0 4
	break;
	case 17195://(4,3) (2, 11)
		return 4;//0 4
	break;
	case 17196://(4,3) (2, 12)
		return 4;//0 4
	break;
	case 17197://(4,3) (2, 13)
		return 4;//0 4
	break;
	case 17198://(4,3) (2, 14)
		return 0;//0 0
	break;
	case 17199://(4,3) (2, 15)
		return 4;//0 4
	break;
	case 17200://(4,3) (3, 0)
		return 0;//0 0
	break;
	case 17201://(4,3) (3, 1)
		return 0;//0 0
	break;
	case 17202://(4,3) (3, 2)
		return 0;//0 0
	break;
	case 17203://(4,3) (3, 3)
		return 4;//0 4
	break;
	case 17204://(4,3) (3, 4)
		return 0;//0 0
	break;
	case 17205://(4,3) (3, 5)
		return 0;//0 0
	break;
	case 17206://(4,3) (3, 6)
		return 4;//0 4
	break;
	case 17207://(4,3) (3, 7)
		return 4;//0 4
	break;
	case 17208://(4,3) (3, 8)
		return 0;//0 0
	break;
	case 17209://(4,3) (3, 9)
		return 0;//0 0
	break;
	case 17210://(4,3) (3, 10)
		return 4;//0 4
	break;
	case 17211://(4,3) (3, 11)
		return 4;//0 4
	break;
	case 17212://(4,3) (3, 12)
		return 4;//0 4
	break;
	case 17213://(4,3) (3, 13)
		return 4;//0 4
	break;
	case 17214://(4,3) (3, 14)
		return 0;//0 0
	break;
	case 17215://(4,3) (3, 15)
		return 4;//0 4
	break;
	case 17216://(4,3) (4, 0)
		return 64;//4 0
	break;
	case 17217://(4,3) (4, 1)
		return 64;//4 0
	break;
	case 17218://(4,3) (4, 2)
		return 64;//4 0
	break;
	case 17219://(4,3) (4, 3)
		return 68;//4 4
	break;
	case 17220://(4,3) (4, 4)
		return 64;//4 0
	break;
	case 17221://(4,3) (4, 5)
		return 64;//4 0
	break;
	case 17222://(4,3) (4, 6)
		return 68;//4 4
	break;
	case 17223://(4,3) (4, 7)
		return 68;//4 4
	break;
	case 17224://(4,3) (4, 8)
		return 64;//4 0
	break;
	case 17225://(4,3) (4, 9)
		return 64;//4 0
	break;
	case 17226://(4,3) (4, 10)
		return 68;//4 4
	break;
	case 17227://(4,3) (4, 11)
		return 68;//4 4
	break;
	case 17228://(4,3) (4, 12)
		return 68;//4 4
	break;
	case 17229://(4,3) (4, 13)
		return 68;//4 4
	break;
	case 17230://(4,3) (4, 14)
		return 64;//4 0
	break;
	case 17231://(4,3) (4, 15)
		return 68;//4 4
	break;
	case 17232://(4,3) (5, 0)
		return 64;//4 0
	break;
	case 17233://(4,3) (5, 1)
		return 64;//4 0
	break;
	case 17234://(4,3) (5, 2)
		return 64;//4 0
	break;
	case 17235://(4,3) (5, 3)
		return 68;//4 4
	break;
	case 17236://(4,3) (5, 4)
		return 64;//4 0
	break;
	case 17237://(4,3) (5, 5)
		return 64;//4 0
	break;
	case 17238://(4,3) (5, 6)
		return 68;//4 4
	break;
	case 17239://(4,3) (5, 7)
		return 68;//4 4
	break;
	case 17240://(4,3) (5, 8)
		return 64;//4 0
	break;
	case 17241://(4,3) (5, 9)
		return 64;//4 0
	break;
	case 17242://(4,3) (5, 10)
		return 68;//4 4
	break;
	case 17243://(4,3) (5, 11)
		return 68;//4 4
	break;
	case 17244://(4,3) (5, 12)
		return 68;//4 4
	break;
	case 17245://(4,3) (5, 13)
		return 68;//4 4
	break;
	case 17246://(4,3) (5, 14)
		return 64;//4 0
	break;
	case 17247://(4,3) (5, 15)
		return 68;//4 4
	break;
	case 17248://(4,3) (6, 0)
		return 0;//0 0
	break;
	case 17249://(4,3) (6, 1)
		return 0;//0 0
	break;
	case 17250://(4,3) (6, 2)
		return 0;//0 0
	break;
	case 17251://(4,3) (6, 3)
		return 4;//0 4
	break;
	case 17252://(4,3) (6, 4)
		return 0;//0 0
	break;
	case 17253://(4,3) (6, 5)
		return 0;//0 0
	break;
	case 17254://(4,3) (6, 6)
		return 4;//0 4
	break;
	case 17255://(4,3) (6, 7)
		return 4;//0 4
	break;
	case 17256://(4,3) (6, 8)
		return 0;//0 0
	break;
	case 17257://(4,3) (6, 9)
		return 0;//0 0
	break;
	case 17258://(4,3) (6, 10)
		return 4;//0 4
	break;
	case 17259://(4,3) (6, 11)
		return 4;//0 4
	break;
	case 17260://(4,3) (6, 12)
		return 4;//0 4
	break;
	case 17261://(4,3) (6, 13)
		return 4;//0 4
	break;
	case 17262://(4,3) (6, 14)
		return 0;//0 0
	break;
	case 17263://(4,3) (6, 15)
		return 4;//0 4
	break;
	case 17264://(4,3) (7, 0)
		return 0;//0 0
	break;
	case 17265://(4,3) (7, 1)
		return 0;//0 0
	break;
	case 17266://(4,3) (7, 2)
		return 0;//0 0
	break;
	case 17267://(4,3) (7, 3)
		return 4;//0 4
	break;
	case 17268://(4,3) (7, 4)
		return 0;//0 0
	break;
	case 17269://(4,3) (7, 5)
		return 0;//0 0
	break;
	case 17270://(4,3) (7, 6)
		return 4;//0 4
	break;
	case 17271://(4,3) (7, 7)
		return 4;//0 4
	break;
	case 17272://(4,3) (7, 8)
		return 0;//0 0
	break;
	case 17273://(4,3) (7, 9)
		return 0;//0 0
	break;
	case 17274://(4,3) (7, 10)
		return 4;//0 4
	break;
	case 17275://(4,3) (7, 11)
		return 4;//0 4
	break;
	case 17276://(4,3) (7, 12)
		return 4;//0 4
	break;
	case 17277://(4,3) (7, 13)
		return 4;//0 4
	break;
	case 17278://(4,3) (7, 14)
		return 0;//0 0
	break;
	case 17279://(4,3) (7, 15)
		return 4;//0 4
	break;
	case 17280://(4,3) (8, 0)
		return 64;//4 0
	break;
	case 17281://(4,3) (8, 1)
		return 64;//4 0
	break;
	case 17282://(4,3) (8, 2)
		return 64;//4 0
	break;
	case 17283://(4,3) (8, 3)
		return 68;//4 4
	break;
	case 17284://(4,3) (8, 4)
		return 64;//4 0
	break;
	case 17285://(4,3) (8, 5)
		return 64;//4 0
	break;
	case 17286://(4,3) (8, 6)
		return 68;//4 4
	break;
	case 17287://(4,3) (8, 7)
		return 68;//4 4
	break;
	case 17288://(4,3) (8, 8)
		return 64;//4 0
	break;
	case 17289://(4,3) (8, 9)
		return 64;//4 0
	break;
	case 17290://(4,3) (8, 10)
		return 68;//4 4
	break;
	case 17291://(4,3) (8, 11)
		return 68;//4 4
	break;
	case 17292://(4,3) (8, 12)
		return 68;//4 4
	break;
	case 17293://(4,3) (8, 13)
		return 68;//4 4
	break;
	case 17294://(4,3) (8, 14)
		return 64;//4 0
	break;
	case 17295://(4,3) (8, 15)
		return 68;//4 4
	break;
	case 17296://(4,3) (9, 0)
		return 0;//0 0
	break;
	case 17297://(4,3) (9, 1)
		return 0;//0 0
	break;
	case 17298://(4,3) (9, 2)
		return 0;//0 0
	break;
	case 17299://(4,3) (9, 3)
		return 4;//0 4
	break;
	case 17300://(4,3) (9, 4)
		return 0;//0 0
	break;
	case 17301://(4,3) (9, 5)
		return 0;//0 0
	break;
	case 17302://(4,3) (9, 6)
		return 4;//0 4
	break;
	case 17303://(4,3) (9, 7)
		return 4;//0 4
	break;
	case 17304://(4,3) (9, 8)
		return 0;//0 0
	break;
	case 17305://(4,3) (9, 9)
		return 0;//0 0
	break;
	case 17306://(4,3) (9, 10)
		return 4;//0 4
	break;
	case 17307://(4,3) (9, 11)
		return 4;//0 4
	break;
	case 17308://(4,3) (9, 12)
		return 4;//0 4
	break;
	case 17309://(4,3) (9, 13)
		return 4;//0 4
	break;
	case 17310://(4,3) (9, 14)
		return 0;//0 0
	break;
	case 17311://(4,3) (9, 15)
		return 4;//0 4
	break;
	case 17312://(4,3) (10, 0)
		return 64;//4 0
	break;
	case 17313://(4,3) (10, 1)
		return 64;//4 0
	break;
	case 17314://(4,3) (10, 2)
		return 64;//4 0
	break;
	case 17315://(4,3) (10, 3)
		return 68;//4 4
	break;
	case 17316://(4,3) (10, 4)
		return 64;//4 0
	break;
	case 17317://(4,3) (10, 5)
		return 64;//4 0
	break;
	case 17318://(4,3) (10, 6)
		return 68;//4 4
	break;
	case 17319://(4,3) (10, 7)
		return 68;//4 4
	break;
	case 17320://(4,3) (10, 8)
		return 64;//4 0
	break;
	case 17321://(4,3) (10, 9)
		return 64;//4 0
	break;
	case 17322://(4,3) (10, 10)
		return 68;//4 4
	break;
	case 17323://(4,3) (10, 11)
		return 68;//4 4
	break;
	case 17324://(4,3) (10, 12)
		return 68;//4 4
	break;
	case 17325://(4,3) (10, 13)
		return 68;//4 4
	break;
	case 17326://(4,3) (10, 14)
		return 64;//4 0
	break;
	case 17327://(4,3) (10, 15)
		return 68;//4 4
	break;
	case 17328://(4,3) (11, 0)
		return 0;//0 0
	break;
	case 17329://(4,3) (11, 1)
		return 0;//0 0
	break;
	case 17330://(4,3) (11, 2)
		return 0;//0 0
	break;
	case 17331://(4,3) (11, 3)
		return 4;//0 4
	break;
	case 17332://(4,3) (11, 4)
		return 0;//0 0
	break;
	case 17333://(4,3) (11, 5)
		return 0;//0 0
	break;
	case 17334://(4,3) (11, 6)
		return 4;//0 4
	break;
	case 17335://(4,3) (11, 7)
		return 4;//0 4
	break;
	case 17336://(4,3) (11, 8)
		return 0;//0 0
	break;
	case 17337://(4,3) (11, 9)
		return 0;//0 0
	break;
	case 17338://(4,3) (11, 10)
		return 4;//0 4
	break;
	case 17339://(4,3) (11, 11)
		return 4;//0 4
	break;
	case 17340://(4,3) (11, 12)
		return 4;//0 4
	break;
	case 17341://(4,3) (11, 13)
		return 4;//0 4
	break;
	case 17342://(4,3) (11, 14)
		return 0;//0 0
	break;
	case 17343://(4,3) (11, 15)
		return 4;//0 4
	break;
	case 17344://(4,3) (12, 0)
		return 64;//4 0
	break;
	case 17345://(4,3) (12, 1)
		return 64;//4 0
	break;
	case 17346://(4,3) (12, 2)
		return 64;//4 0
	break;
	case 17347://(4,3) (12, 3)
		return 68;//4 4
	break;
	case 17348://(4,3) (12, 4)
		return 64;//4 0
	break;
	case 17349://(4,3) (12, 5)
		return 64;//4 0
	break;
	case 17350://(4,3) (12, 6)
		return 68;//4 4
	break;
	case 17351://(4,3) (12, 7)
		return 68;//4 4
	break;
	case 17352://(4,3) (12, 8)
		return 64;//4 0
	break;
	case 17353://(4,3) (12, 9)
		return 64;//4 0
	break;
	case 17354://(4,3) (12, 10)
		return 68;//4 4
	break;
	case 17355://(4,3) (12, 11)
		return 68;//4 4
	break;
	case 17356://(4,3) (12, 12)
		return 68;//4 4
	break;
	case 17357://(4,3) (12, 13)
		return 68;//4 4
	break;
	case 17358://(4,3) (12, 14)
		return 64;//4 0
	break;
	case 17359://(4,3) (12, 15)
		return 68;//4 4
	break;
	case 17360://(4,3) (13, 0)
		return 64;//4 0
	break;
	case 17361://(4,3) (13, 1)
		return 64;//4 0
	break;
	case 17362://(4,3) (13, 2)
		return 64;//4 0
	break;
	case 17363://(4,3) (13, 3)
		return 68;//4 4
	break;
	case 17364://(4,3) (13, 4)
		return 64;//4 0
	break;
	case 17365://(4,3) (13, 5)
		return 64;//4 0
	break;
	case 17366://(4,3) (13, 6)
		return 68;//4 4
	break;
	case 17367://(4,3) (13, 7)
		return 68;//4 4
	break;
	case 17368://(4,3) (13, 8)
		return 64;//4 0
	break;
	case 17369://(4,3) (13, 9)
		return 64;//4 0
	break;
	case 17370://(4,3) (13, 10)
		return 68;//4 4
	break;
	case 17371://(4,3) (13, 11)
		return 68;//4 4
	break;
	case 17372://(4,3) (13, 12)
		return 68;//4 4
	break;
	case 17373://(4,3) (13, 13)
		return 68;//4 4
	break;
	case 17374://(4,3) (13, 14)
		return 64;//4 0
	break;
	case 17375://(4,3) (13, 15)
		return 68;//4 4
	break;
	case 17376://(4,3) (14, 0)
		return 64;//4 0
	break;
	case 17377://(4,3) (14, 1)
		return 64;//4 0
	break;
	case 17378://(4,3) (14, 2)
		return 64;//4 0
	break;
	case 17379://(4,3) (14, 3)
		return 68;//4 4
	break;
	case 17380://(4,3) (14, 4)
		return 64;//4 0
	break;
	case 17381://(4,3) (14, 5)
		return 64;//4 0
	break;
	case 17382://(4,3) (14, 6)
		return 68;//4 4
	break;
	case 17383://(4,3) (14, 7)
		return 68;//4 4
	break;
	case 17384://(4,3) (14, 8)
		return 64;//4 0
	break;
	case 17385://(4,3) (14, 9)
		return 64;//4 0
	break;
	case 17386://(4,3) (14, 10)
		return 68;//4 4
	break;
	case 17387://(4,3) (14, 11)
		return 68;//4 4
	break;
	case 17388://(4,3) (14, 12)
		return 68;//4 4
	break;
	case 17389://(4,3) (14, 13)
		return 68;//4 4
	break;
	case 17390://(4,3) (14, 14)
		return 64;//4 0
	break;
	case 17391://(4,3) (14, 15)
		return 68;//4 4
	break;
	case 17392://(4,3) (15, 0)
		return 64;//4 0
	break;
	case 17393://(4,3) (15, 1)
		return 64;//4 0
	break;
	case 17394://(4,3) (15, 2)
		return 64;//4 0
	break;
	case 17395://(4,3) (15, 3)
		return 68;//4 4
	break;
	case 17396://(4,3) (15, 4)
		return 64;//4 0
	break;
	case 17397://(4,3) (15, 5)
		return 64;//4 0
	break;
	case 17398://(4,3) (15, 6)
		return 68;//4 4
	break;
	case 17399://(4,3) (15, 7)
		return 68;//4 4
	break;
	case 17400://(4,3) (15, 8)
		return 64;//4 0
	break;
	case 17401://(4,3) (15, 9)
		return 64;//4 0
	break;
	case 17402://(4,3) (15, 10)
		return 68;//4 4
	break;
	case 17403://(4,3) (15, 11)
		return 68;//4 4
	break;
	case 17404://(4,3) (15, 12)
		return 68;//4 4
	break;
	case 17405://(4,3) (15, 13)
		return 68;//4 4
	break;
	case 17406://(4,3) (15, 14)
		return 64;//4 0
	break;
	case 17407://(4,3) (15, 15)
		return 68;//4 4
	break;
	case 17408://(4,4) (0, 0)
		return 0;//0 0
	break;
	case 17409://(4,4) (0, 1)
		return 0;//0 0
	break;
	case 17410://(4,4) (0, 2)
		return 0;//0 0
	break;
	case 17411://(4,4) (0, 3)
		return 0;//0 0
	break;
	case 17412://(4,4) (0, 4)
		return 4;//0 4
	break;
	case 17413://(4,4) (0, 5)
		return 4;//0 4
	break;
	case 17414://(4,4) (0, 6)
		return 0;//0 0
	break;
	case 17415://(4,4) (0, 7)
		return 0;//0 0
	break;
	case 17416://(4,4) (0, 8)
		return 4;//0 4
	break;
	case 17417://(4,4) (0, 9)
		return 0;//0 0
	break;
	case 17418://(4,4) (0, 10)
		return 4;//0 4
	break;
	case 17419://(4,4) (0, 11)
		return 0;//0 0
	break;
	case 17420://(4,4) (0, 12)
		return 4;//0 4
	break;
	case 17421://(4,4) (0, 13)
		return 4;//0 4
	break;
	case 17422://(4,4) (0, 14)
		return 4;//0 4
	break;
	case 17423://(4,4) (0, 15)
		return 4;//0 4
	break;
	case 17424://(4,4) (1, 0)
		return 0;//0 0
	break;
	case 17425://(4,4) (1, 1)
		return 0;//0 0
	break;
	case 17426://(4,4) (1, 2)
		return 0;//0 0
	break;
	case 17427://(4,4) (1, 3)
		return 0;//0 0
	break;
	case 17428://(4,4) (1, 4)
		return 4;//0 4
	break;
	case 17429://(4,4) (1, 5)
		return 4;//0 4
	break;
	case 17430://(4,4) (1, 6)
		return 0;//0 0
	break;
	case 17431://(4,4) (1, 7)
		return 0;//0 0
	break;
	case 17432://(4,4) (1, 8)
		return 4;//0 4
	break;
	case 17433://(4,4) (1, 9)
		return 0;//0 0
	break;
	case 17434://(4,4) (1, 10)
		return 4;//0 4
	break;
	case 17435://(4,4) (1, 11)
		return 0;//0 0
	break;
	case 17436://(4,4) (1, 12)
		return 4;//0 4
	break;
	case 17437://(4,4) (1, 13)
		return 4;//0 4
	break;
	case 17438://(4,4) (1, 14)
		return 4;//0 4
	break;
	case 17439://(4,4) (1, 15)
		return 4;//0 4
	break;
	case 17440://(4,4) (2, 0)
		return 0;//0 0
	break;
	case 17441://(4,4) (2, 1)
		return 0;//0 0
	break;
	case 17442://(4,4) (2, 2)
		return 0;//0 0
	break;
	case 17443://(4,4) (2, 3)
		return 0;//0 0
	break;
	case 17444://(4,4) (2, 4)
		return 4;//0 4
	break;
	case 17445://(4,4) (2, 5)
		return 4;//0 4
	break;
	case 17446://(4,4) (2, 6)
		return 0;//0 0
	break;
	case 17447://(4,4) (2, 7)
		return 0;//0 0
	break;
	case 17448://(4,4) (2, 8)
		return 4;//0 4
	break;
	case 17449://(4,4) (2, 9)
		return 0;//0 0
	break;
	case 17450://(4,4) (2, 10)
		return 4;//0 4
	break;
	case 17451://(4,4) (2, 11)
		return 0;//0 0
	break;
	case 17452://(4,4) (2, 12)
		return 4;//0 4
	break;
	case 17453://(4,4) (2, 13)
		return 4;//0 4
	break;
	case 17454://(4,4) (2, 14)
		return 4;//0 4
	break;
	case 17455://(4,4) (2, 15)
		return 4;//0 4
	break;
	case 17456://(4,4) (3, 0)
		return 0;//0 0
	break;
	case 17457://(4,4) (3, 1)
		return 0;//0 0
	break;
	case 17458://(4,4) (3, 2)
		return 0;//0 0
	break;
	case 17459://(4,4) (3, 3)
		return 0;//0 0
	break;
	case 17460://(4,4) (3, 4)
		return 4;//0 4
	break;
	case 17461://(4,4) (3, 5)
		return 4;//0 4
	break;
	case 17462://(4,4) (3, 6)
		return 0;//0 0
	break;
	case 17463://(4,4) (3, 7)
		return 0;//0 0
	break;
	case 17464://(4,4) (3, 8)
		return 4;//0 4
	break;
	case 17465://(4,4) (3, 9)
		return 0;//0 0
	break;
	case 17466://(4,4) (3, 10)
		return 4;//0 4
	break;
	case 17467://(4,4) (3, 11)
		return 0;//0 0
	break;
	case 17468://(4,4) (3, 12)
		return 4;//0 4
	break;
	case 17469://(4,4) (3, 13)
		return 4;//0 4
	break;
	case 17470://(4,4) (3, 14)
		return 4;//0 4
	break;
	case 17471://(4,4) (3, 15)
		return 4;//0 4
	break;
	case 17472://(4,4) (4, 0)
		return 64;//4 0
	break;
	case 17473://(4,4) (4, 1)
		return 64;//4 0
	break;
	case 17474://(4,4) (4, 2)
		return 64;//4 0
	break;
	case 17475://(4,4) (4, 3)
		return 64;//4 0
	break;
	case 17476://(4,4) (4, 4)
		return 68;//4 4
	break;
	case 17477://(4,4) (4, 5)
		return 68;//4 4
	break;
	case 17478://(4,4) (4, 6)
		return 64;//4 0
	break;
	case 17479://(4,4) (4, 7)
		return 64;//4 0
	break;
	case 17480://(4,4) (4, 8)
		return 68;//4 4
	break;
	case 17481://(4,4) (4, 9)
		return 64;//4 0
	break;
	case 17482://(4,4) (4, 10)
		return 68;//4 4
	break;
	case 17483://(4,4) (4, 11)
		return 64;//4 0
	break;
	case 17484://(4,4) (4, 12)
		return 68;//4 4
	break;
	case 17485://(4,4) (4, 13)
		return 68;//4 4
	break;
	case 17486://(4,4) (4, 14)
		return 68;//4 4
	break;
	case 17487://(4,4) (4, 15)
		return 68;//4 4
	break;
	case 17488://(4,4) (5, 0)
		return 64;//4 0
	break;
	case 17489://(4,4) (5, 1)
		return 64;//4 0
	break;
	case 17490://(4,4) (5, 2)
		return 64;//4 0
	break;
	case 17491://(4,4) (5, 3)
		return 64;//4 0
	break;
	case 17492://(4,4) (5, 4)
		return 68;//4 4
	break;
	case 17493://(4,4) (5, 5)
		return 68;//4 4
	break;
	case 17494://(4,4) (5, 6)
		return 64;//4 0
	break;
	case 17495://(4,4) (5, 7)
		return 64;//4 0
	break;
	case 17496://(4,4) (5, 8)
		return 68;//4 4
	break;
	case 17497://(4,4) (5, 9)
		return 64;//4 0
	break;
	case 17498://(4,4) (5, 10)
		return 68;//4 4
	break;
	case 17499://(4,4) (5, 11)
		return 64;//4 0
	break;
	case 17500://(4,4) (5, 12)
		return 68;//4 4
	break;
	case 17501://(4,4) (5, 13)
		return 68;//4 4
	break;
	case 17502://(4,4) (5, 14)
		return 68;//4 4
	break;
	case 17503://(4,4) (5, 15)
		return 68;//4 4
	break;
	case 17504://(4,4) (6, 0)
		return 0;//0 0
	break;
	case 17505://(4,4) (6, 1)
		return 0;//0 0
	break;
	case 17506://(4,4) (6, 2)
		return 0;//0 0
	break;
	case 17507://(4,4) (6, 3)
		return 0;//0 0
	break;
	case 17508://(4,4) (6, 4)
		return 4;//0 4
	break;
	case 17509://(4,4) (6, 5)
		return 4;//0 4
	break;
	case 17510://(4,4) (6, 6)
		return 0;//0 0
	break;
	case 17511://(4,4) (6, 7)
		return 0;//0 0
	break;
	case 17512://(4,4) (6, 8)
		return 4;//0 4
	break;
	case 17513://(4,4) (6, 9)
		return 0;//0 0
	break;
	case 17514://(4,4) (6, 10)
		return 4;//0 4
	break;
	case 17515://(4,4) (6, 11)
		return 0;//0 0
	break;
	case 17516://(4,4) (6, 12)
		return 4;//0 4
	break;
	case 17517://(4,4) (6, 13)
		return 4;//0 4
	break;
	case 17518://(4,4) (6, 14)
		return 4;//0 4
	break;
	case 17519://(4,4) (6, 15)
		return 4;//0 4
	break;
	case 17520://(4,4) (7, 0)
		return 0;//0 0
	break;
	case 17521://(4,4) (7, 1)
		return 0;//0 0
	break;
	case 17522://(4,4) (7, 2)
		return 0;//0 0
	break;
	case 17523://(4,4) (7, 3)
		return 0;//0 0
	break;
	case 17524://(4,4) (7, 4)
		return 4;//0 4
	break;
	case 17525://(4,4) (7, 5)
		return 4;//0 4
	break;
	case 17526://(4,4) (7, 6)
		return 0;//0 0
	break;
	case 17527://(4,4) (7, 7)
		return 0;//0 0
	break;
	case 17528://(4,4) (7, 8)
		return 4;//0 4
	break;
	case 17529://(4,4) (7, 9)
		return 0;//0 0
	break;
	case 17530://(4,4) (7, 10)
		return 4;//0 4
	break;
	case 17531://(4,4) (7, 11)
		return 0;//0 0
	break;
	case 17532://(4,4) (7, 12)
		return 4;//0 4
	break;
	case 17533://(4,4) (7, 13)
		return 4;//0 4
	break;
	case 17534://(4,4) (7, 14)
		return 4;//0 4
	break;
	case 17535://(4,4) (7, 15)
		return 4;//0 4
	break;
	case 17536://(4,4) (8, 0)
		return 64;//4 0
	break;
	case 17537://(4,4) (8, 1)
		return 64;//4 0
	break;
	case 17538://(4,4) (8, 2)
		return 64;//4 0
	break;
	case 17539://(4,4) (8, 3)
		return 64;//4 0
	break;
	case 17540://(4,4) (8, 4)
		return 68;//4 4
	break;
	case 17541://(4,4) (8, 5)
		return 68;//4 4
	break;
	case 17542://(4,4) (8, 6)
		return 64;//4 0
	break;
	case 17543://(4,4) (8, 7)
		return 64;//4 0
	break;
	case 17544://(4,4) (8, 8)
		return 68;//4 4
	break;
	case 17545://(4,4) (8, 9)
		return 64;//4 0
	break;
	case 17546://(4,4) (8, 10)
		return 68;//4 4
	break;
	case 17547://(4,4) (8, 11)
		return 64;//4 0
	break;
	case 17548://(4,4) (8, 12)
		return 68;//4 4
	break;
	case 17549://(4,4) (8, 13)
		return 68;//4 4
	break;
	case 17550://(4,4) (8, 14)
		return 68;//4 4
	break;
	case 17551://(4,4) (8, 15)
		return 68;//4 4
	break;
	case 17552://(4,4) (9, 0)
		return 0;//0 0
	break;
	case 17553://(4,4) (9, 1)
		return 0;//0 0
	break;
	case 17554://(4,4) (9, 2)
		return 0;//0 0
	break;
	case 17555://(4,4) (9, 3)
		return 0;//0 0
	break;
	case 17556://(4,4) (9, 4)
		return 4;//0 4
	break;
	case 17557://(4,4) (9, 5)
		return 4;//0 4
	break;
	case 17558://(4,4) (9, 6)
		return 0;//0 0
	break;
	case 17559://(4,4) (9, 7)
		return 0;//0 0
	break;
	case 17560://(4,4) (9, 8)
		return 4;//0 4
	break;
	case 17561://(4,4) (9, 9)
		return 0;//0 0
	break;
	case 17562://(4,4) (9, 10)
		return 4;//0 4
	break;
	case 17563://(4,4) (9, 11)
		return 0;//0 0
	break;
	case 17564://(4,4) (9, 12)
		return 4;//0 4
	break;
	case 17565://(4,4) (9, 13)
		return 4;//0 4
	break;
	case 17566://(4,4) (9, 14)
		return 4;//0 4
	break;
	case 17567://(4,4) (9, 15)
		return 4;//0 4
	break;
	case 17568://(4,4) (10, 0)
		return 64;//4 0
	break;
	case 17569://(4,4) (10, 1)
		return 64;//4 0
	break;
	case 17570://(4,4) (10, 2)
		return 64;//4 0
	break;
	case 17571://(4,4) (10, 3)
		return 64;//4 0
	break;
	case 17572://(4,4) (10, 4)
		return 68;//4 4
	break;
	case 17573://(4,4) (10, 5)
		return 68;//4 4
	break;
	case 17574://(4,4) (10, 6)
		return 64;//4 0
	break;
	case 17575://(4,4) (10, 7)
		return 64;//4 0
	break;
	case 17576://(4,4) (10, 8)
		return 68;//4 4
	break;
	case 17577://(4,4) (10, 9)
		return 64;//4 0
	break;
	case 17578://(4,4) (10, 10)
		return 68;//4 4
	break;
	case 17579://(4,4) (10, 11)
		return 64;//4 0
	break;
	case 17580://(4,4) (10, 12)
		return 68;//4 4
	break;
	case 17581://(4,4) (10, 13)
		return 68;//4 4
	break;
	case 17582://(4,4) (10, 14)
		return 68;//4 4
	break;
	case 17583://(4,4) (10, 15)
		return 68;//4 4
	break;
	case 17584://(4,4) (11, 0)
		return 0;//0 0
	break;
	case 17585://(4,4) (11, 1)
		return 0;//0 0
	break;
	case 17586://(4,4) (11, 2)
		return 0;//0 0
	break;
	case 17587://(4,4) (11, 3)
		return 0;//0 0
	break;
	case 17588://(4,4) (11, 4)
		return 4;//0 4
	break;
	case 17589://(4,4) (11, 5)
		return 4;//0 4
	break;
	case 17590://(4,4) (11, 6)
		return 0;//0 0
	break;
	case 17591://(4,4) (11, 7)
		return 0;//0 0
	break;
	case 17592://(4,4) (11, 8)
		return 4;//0 4
	break;
	case 17593://(4,4) (11, 9)
		return 0;//0 0
	break;
	case 17594://(4,4) (11, 10)
		return 4;//0 4
	break;
	case 17595://(4,4) (11, 11)
		return 0;//0 0
	break;
	case 17596://(4,4) (11, 12)
		return 4;//0 4
	break;
	case 17597://(4,4) (11, 13)
		return 4;//0 4
	break;
	case 17598://(4,4) (11, 14)
		return 4;//0 4
	break;
	case 17599://(4,4) (11, 15)
		return 4;//0 4
	break;
	case 17600://(4,4) (12, 0)
		return 64;//4 0
	break;
	case 17601://(4,4) (12, 1)
		return 64;//4 0
	break;
	case 17602://(4,4) (12, 2)
		return 64;//4 0
	break;
	case 17603://(4,4) (12, 3)
		return 64;//4 0
	break;
	case 17604://(4,4) (12, 4)
		return 68;//4 4
	break;
	case 17605://(4,4) (12, 5)
		return 68;//4 4
	break;
	case 17606://(4,4) (12, 6)
		return 64;//4 0
	break;
	case 17607://(4,4) (12, 7)
		return 64;//4 0
	break;
	case 17608://(4,4) (12, 8)
		return 68;//4 4
	break;
	case 17609://(4,4) (12, 9)
		return 64;//4 0
	break;
	case 17610://(4,4) (12, 10)
		return 68;//4 4
	break;
	case 17611://(4,4) (12, 11)
		return 64;//4 0
	break;
	case 17612://(4,4) (12, 12)
		return 68;//4 4
	break;
	case 17613://(4,4) (12, 13)
		return 68;//4 4
	break;
	case 17614://(4,4) (12, 14)
		return 68;//4 4
	break;
	case 17615://(4,4) (12, 15)
		return 68;//4 4
	break;
	case 17616://(4,4) (13, 0)
		return 64;//4 0
	break;
	case 17617://(4,4) (13, 1)
		return 64;//4 0
	break;
	case 17618://(4,4) (13, 2)
		return 64;//4 0
	break;
	case 17619://(4,4) (13, 3)
		return 64;//4 0
	break;
	case 17620://(4,4) (13, 4)
		return 68;//4 4
	break;
	case 17621://(4,4) (13, 5)
		return 68;//4 4
	break;
	case 17622://(4,4) (13, 6)
		return 64;//4 0
	break;
	case 17623://(4,4) (13, 7)
		return 64;//4 0
	break;
	case 17624://(4,4) (13, 8)
		return 68;//4 4
	break;
	case 17625://(4,4) (13, 9)
		return 64;//4 0
	break;
	case 17626://(4,4) (13, 10)
		return 68;//4 4
	break;
	case 17627://(4,4) (13, 11)
		return 64;//4 0
	break;
	case 17628://(4,4) (13, 12)
		return 68;//4 4
	break;
	case 17629://(4,4) (13, 13)
		return 68;//4 4
	break;
	case 17630://(4,4) (13, 14)
		return 68;//4 4
	break;
	case 17631://(4,4) (13, 15)
		return 68;//4 4
	break;
	case 17632://(4,4) (14, 0)
		return 64;//4 0
	break;
	case 17633://(4,4) (14, 1)
		return 64;//4 0
	break;
	case 17634://(4,4) (14, 2)
		return 64;//4 0
	break;
	case 17635://(4,4) (14, 3)
		return 64;//4 0
	break;
	case 17636://(4,4) (14, 4)
		return 68;//4 4
	break;
	case 17637://(4,4) (14, 5)
		return 68;//4 4
	break;
	case 17638://(4,4) (14, 6)
		return 64;//4 0
	break;
	case 17639://(4,4) (14, 7)
		return 64;//4 0
	break;
	case 17640://(4,4) (14, 8)
		return 68;//4 4
	break;
	case 17641://(4,4) (14, 9)
		return 64;//4 0
	break;
	case 17642://(4,4) (14, 10)
		return 68;//4 4
	break;
	case 17643://(4,4) (14, 11)
		return 64;//4 0
	break;
	case 17644://(4,4) (14, 12)
		return 68;//4 4
	break;
	case 17645://(4,4) (14, 13)
		return 68;//4 4
	break;
	case 17646://(4,4) (14, 14)
		return 68;//4 4
	break;
	case 17647://(4,4) (14, 15)
		return 68;//4 4
	break;
	case 17648://(4,4) (15, 0)
		return 64;//4 0
	break;
	case 17649://(4,4) (15, 1)
		return 64;//4 0
	break;
	case 17650://(4,4) (15, 2)
		return 64;//4 0
	break;
	case 17651://(4,4) (15, 3)
		return 64;//4 0
	break;
	case 17652://(4,4) (15, 4)
		return 68;//4 4
	break;
	case 17653://(4,4) (15, 5)
		return 68;//4 4
	break;
	case 17654://(4,4) (15, 6)
		return 64;//4 0
	break;
	case 17655://(4,4) (15, 7)
		return 64;//4 0
	break;
	case 17656://(4,4) (15, 8)
		return 68;//4 4
	break;
	case 17657://(4,4) (15, 9)
		return 64;//4 0
	break;
	case 17658://(4,4) (15, 10)
		return 68;//4 4
	break;
	case 17659://(4,4) (15, 11)
		return 64;//4 0
	break;
	case 17660://(4,4) (15, 12)
		return 68;//4 4
	break;
	case 17661://(4,4) (15, 13)
		return 68;//4 4
	break;
	case 17662://(4,4) (15, 14)
		return 68;//4 4
	break;
	case 17663://(4,4) (15, 15)
		return 68;//4 4
	break;
	case 17664://(4,5) (0, 0)
		return 0;//0 0
	break;
	case 17665://(4,5) (0, 1)
		return 0;//0 0
	break;
	case 17666://(4,5) (0, 2)
		return 3;//0 3
	break;
	case 17667://(4,5) (0, 3)
		return 0;//0 0
	break;
	case 17668://(4,5) (0, 4)
		return 3;//0 3
	break;
	case 17669://(4,5) (0, 5)
		return 3;//0 3
	break;
	case 17670://(4,5) (0, 6)
		return 0;//0 0
	break;
	case 17671://(4,5) (0, 7)
		return 3;//0 3
	break;
	case 17672://(4,5) (0, 8)
		return 3;//0 3
	break;
	case 17673://(4,5) (0, 9)
		return 3;//0 3
	break;
	case 17674://(4,5) (0, 10)
		return 3;//0 3
	break;
	case 17675://(4,5) (0, 11)
		return 3;//0 3
	break;
	case 17676://(4,5) (0, 12)
		return 3;//0 3
	break;
	case 17677://(4,5) (0, 13)
		return 3;//0 3
	break;
	case 17678://(4,5) (0, 14)
		return 3;//0 3
	break;
	case 17679://(4,5) (0, 15)
		return 3;//0 3
	break;
	case 17680://(4,5) (1, 0)
		return 0;//0 0
	break;
	case 17681://(4,5) (1, 1)
		return 0;//0 0
	break;
	case 17682://(4,5) (1, 2)
		return 3;//0 3
	break;
	case 17683://(4,5) (1, 3)
		return 0;//0 0
	break;
	case 17684://(4,5) (1, 4)
		return 3;//0 3
	break;
	case 17685://(4,5) (1, 5)
		return 3;//0 3
	break;
	case 17686://(4,5) (1, 6)
		return 0;//0 0
	break;
	case 17687://(4,5) (1, 7)
		return 3;//0 3
	break;
	case 17688://(4,5) (1, 8)
		return 3;//0 3
	break;
	case 17689://(4,5) (1, 9)
		return 3;//0 3
	break;
	case 17690://(4,5) (1, 10)
		return 3;//0 3
	break;
	case 17691://(4,5) (1, 11)
		return 3;//0 3
	break;
	case 17692://(4,5) (1, 12)
		return 3;//0 3
	break;
	case 17693://(4,5) (1, 13)
		return 3;//0 3
	break;
	case 17694://(4,5) (1, 14)
		return 3;//0 3
	break;
	case 17695://(4,5) (1, 15)
		return 3;//0 3
	break;
	case 17696://(4,5) (2, 0)
		return 0;//0 0
	break;
	case 17697://(4,5) (2, 1)
		return 0;//0 0
	break;
	case 17698://(4,5) (2, 2)
		return 3;//0 3
	break;
	case 17699://(4,5) (2, 3)
		return 0;//0 0
	break;
	case 17700://(4,5) (2, 4)
		return 3;//0 3
	break;
	case 17701://(4,5) (2, 5)
		return 3;//0 3
	break;
	case 17702://(4,5) (2, 6)
		return 0;//0 0
	break;
	case 17703://(4,5) (2, 7)
		return 3;//0 3
	break;
	case 17704://(4,5) (2, 8)
		return 3;//0 3
	break;
	case 17705://(4,5) (2, 9)
		return 3;//0 3
	break;
	case 17706://(4,5) (2, 10)
		return 3;//0 3
	break;
	case 17707://(4,5) (2, 11)
		return 3;//0 3
	break;
	case 17708://(4,5) (2, 12)
		return 3;//0 3
	break;
	case 17709://(4,5) (2, 13)
		return 3;//0 3
	break;
	case 17710://(4,5) (2, 14)
		return 3;//0 3
	break;
	case 17711://(4,5) (2, 15)
		return 3;//0 3
	break;
	case 17712://(4,5) (3, 0)
		return 0;//0 0
	break;
	case 17713://(4,5) (3, 1)
		return 0;//0 0
	break;
	case 17714://(4,5) (3, 2)
		return 3;//0 3
	break;
	case 17715://(4,5) (3, 3)
		return 0;//0 0
	break;
	case 17716://(4,5) (3, 4)
		return 3;//0 3
	break;
	case 17717://(4,5) (3, 5)
		return 3;//0 3
	break;
	case 17718://(4,5) (3, 6)
		return 0;//0 0
	break;
	case 17719://(4,5) (3, 7)
		return 3;//0 3
	break;
	case 17720://(4,5) (3, 8)
		return 3;//0 3
	break;
	case 17721://(4,5) (3, 9)
		return 3;//0 3
	break;
	case 17722://(4,5) (3, 10)
		return 3;//0 3
	break;
	case 17723://(4,5) (3, 11)
		return 3;//0 3
	break;
	case 17724://(4,5) (3, 12)
		return 3;//0 3
	break;
	case 17725://(4,5) (3, 13)
		return 3;//0 3
	break;
	case 17726://(4,5) (3, 14)
		return 3;//0 3
	break;
	case 17727://(4,5) (3, 15)
		return 3;//0 3
	break;
	case 17728://(4,5) (4, 0)
		return 64;//4 0
	break;
	case 17729://(4,5) (4, 1)
		return 64;//4 0
	break;
	case 17730://(4,5) (4, 2)
		return 67;//4 3
	break;
	case 17731://(4,5) (4, 3)
		return 64;//4 0
	break;
	case 17732://(4,5) (4, 4)
		return 67;//4 3
	break;
	case 17733://(4,5) (4, 5)
		return 67;//4 3
	break;
	case 17734://(4,5) (4, 6)
		return 64;//4 0
	break;
	case 17735://(4,5) (4, 7)
		return 67;//4 3
	break;
	case 17736://(4,5) (4, 8)
		return 67;//4 3
	break;
	case 17737://(4,5) (4, 9)
		return 67;//4 3
	break;
	case 17738://(4,5) (4, 10)
		return 67;//4 3
	break;
	case 17739://(4,5) (4, 11)
		return 67;//4 3
	break;
	case 17740://(4,5) (4, 12)
		return 67;//4 3
	break;
	case 17741://(4,5) (4, 13)
		return 67;//4 3
	break;
	case 17742://(4,5) (4, 14)
		return 67;//4 3
	break;
	case 17743://(4,5) (4, 15)
		return 67;//4 3
	break;
	case 17744://(4,5) (5, 0)
		return 64;//4 0
	break;
	case 17745://(4,5) (5, 1)
		return 64;//4 0
	break;
	case 17746://(4,5) (5, 2)
		return 67;//4 3
	break;
	case 17747://(4,5) (5, 3)
		return 64;//4 0
	break;
	case 17748://(4,5) (5, 4)
		return 67;//4 3
	break;
	case 17749://(4,5) (5, 5)
		return 67;//4 3
	break;
	case 17750://(4,5) (5, 6)
		return 64;//4 0
	break;
	case 17751://(4,5) (5, 7)
		return 67;//4 3
	break;
	case 17752://(4,5) (5, 8)
		return 67;//4 3
	break;
	case 17753://(4,5) (5, 9)
		return 67;//4 3
	break;
	case 17754://(4,5) (5, 10)
		return 67;//4 3
	break;
	case 17755://(4,5) (5, 11)
		return 67;//4 3
	break;
	case 17756://(4,5) (5, 12)
		return 67;//4 3
	break;
	case 17757://(4,5) (5, 13)
		return 67;//4 3
	break;
	case 17758://(4,5) (5, 14)
		return 67;//4 3
	break;
	case 17759://(4,5) (5, 15)
		return 67;//4 3
	break;
	case 17760://(4,5) (6, 0)
		return 0;//0 0
	break;
	case 17761://(4,5) (6, 1)
		return 0;//0 0
	break;
	case 17762://(4,5) (6, 2)
		return 3;//0 3
	break;
	case 17763://(4,5) (6, 3)
		return 0;//0 0
	break;
	case 17764://(4,5) (6, 4)
		return 3;//0 3
	break;
	case 17765://(4,5) (6, 5)
		return 3;//0 3
	break;
	case 17766://(4,5) (6, 6)
		return 0;//0 0
	break;
	case 17767://(4,5) (6, 7)
		return 3;//0 3
	break;
	case 17768://(4,5) (6, 8)
		return 3;//0 3
	break;
	case 17769://(4,5) (6, 9)
		return 3;//0 3
	break;
	case 17770://(4,5) (6, 10)
		return 3;//0 3
	break;
	case 17771://(4,5) (6, 11)
		return 3;//0 3
	break;
	case 17772://(4,5) (6, 12)
		return 3;//0 3
	break;
	case 17773://(4,5) (6, 13)
		return 3;//0 3
	break;
	case 17774://(4,5) (6, 14)
		return 3;//0 3
	break;
	case 17775://(4,5) (6, 15)
		return 3;//0 3
	break;
	case 17776://(4,5) (7, 0)
		return 0;//0 0
	break;
	case 17777://(4,5) (7, 1)
		return 0;//0 0
	break;
	case 17778://(4,5) (7, 2)
		return 3;//0 3
	break;
	case 17779://(4,5) (7, 3)
		return 0;//0 0
	break;
	case 17780://(4,5) (7, 4)
		return 3;//0 3
	break;
	case 17781://(4,5) (7, 5)
		return 3;//0 3
	break;
	case 17782://(4,5) (7, 6)
		return 0;//0 0
	break;
	case 17783://(4,5) (7, 7)
		return 3;//0 3
	break;
	case 17784://(4,5) (7, 8)
		return 3;//0 3
	break;
	case 17785://(4,5) (7, 9)
		return 3;//0 3
	break;
	case 17786://(4,5) (7, 10)
		return 3;//0 3
	break;
	case 17787://(4,5) (7, 11)
		return 3;//0 3
	break;
	case 17788://(4,5) (7, 12)
		return 3;//0 3
	break;
	case 17789://(4,5) (7, 13)
		return 3;//0 3
	break;
	case 17790://(4,5) (7, 14)
		return 3;//0 3
	break;
	case 17791://(4,5) (7, 15)
		return 3;//0 3
	break;
	case 17792://(4,5) (8, 0)
		return 64;//4 0
	break;
	case 17793://(4,5) (8, 1)
		return 64;//4 0
	break;
	case 17794://(4,5) (8, 2)
		return 67;//4 3
	break;
	case 17795://(4,5) (8, 3)
		return 64;//4 0
	break;
	case 17796://(4,5) (8, 4)
		return 67;//4 3
	break;
	case 17797://(4,5) (8, 5)
		return 67;//4 3
	break;
	case 17798://(4,5) (8, 6)
		return 64;//4 0
	break;
	case 17799://(4,5) (8, 7)
		return 67;//4 3
	break;
	case 17800://(4,5) (8, 8)
		return 67;//4 3
	break;
	case 17801://(4,5) (8, 9)
		return 67;//4 3
	break;
	case 17802://(4,5) (8, 10)
		return 67;//4 3
	break;
	case 17803://(4,5) (8, 11)
		return 67;//4 3
	break;
	case 17804://(4,5) (8, 12)
		return 67;//4 3
	break;
	case 17805://(4,5) (8, 13)
		return 67;//4 3
	break;
	case 17806://(4,5) (8, 14)
		return 67;//4 3
	break;
	case 17807://(4,5) (8, 15)
		return 67;//4 3
	break;
	case 17808://(4,5) (9, 0)
		return 0;//0 0
	break;
	case 17809://(4,5) (9, 1)
		return 0;//0 0
	break;
	case 17810://(4,5) (9, 2)
		return 3;//0 3
	break;
	case 17811://(4,5) (9, 3)
		return 0;//0 0
	break;
	case 17812://(4,5) (9, 4)
		return 3;//0 3
	break;
	case 17813://(4,5) (9, 5)
		return 3;//0 3
	break;
	case 17814://(4,5) (9, 6)
		return 0;//0 0
	break;
	case 17815://(4,5) (9, 7)
		return 3;//0 3
	break;
	case 17816://(4,5) (9, 8)
		return 3;//0 3
	break;
	case 17817://(4,5) (9, 9)
		return 3;//0 3
	break;
	case 17818://(4,5) (9, 10)
		return 3;//0 3
	break;
	case 17819://(4,5) (9, 11)
		return 3;//0 3
	break;
	case 17820://(4,5) (9, 12)
		return 3;//0 3
	break;
	case 17821://(4,5) (9, 13)
		return 3;//0 3
	break;
	case 17822://(4,5) (9, 14)
		return 3;//0 3
	break;
	case 17823://(4,5) (9, 15)
		return 3;//0 3
	break;
	case 17824://(4,5) (10, 0)
		return 64;//4 0
	break;
	case 17825://(4,5) (10, 1)
		return 64;//4 0
	break;
	case 17826://(4,5) (10, 2)
		return 67;//4 3
	break;
	case 17827://(4,5) (10, 3)
		return 64;//4 0
	break;
	case 17828://(4,5) (10, 4)
		return 67;//4 3
	break;
	case 17829://(4,5) (10, 5)
		return 67;//4 3
	break;
	case 17830://(4,5) (10, 6)
		return 64;//4 0
	break;
	case 17831://(4,5) (10, 7)
		return 67;//4 3
	break;
	case 17832://(4,5) (10, 8)
		return 67;//4 3
	break;
	case 17833://(4,5) (10, 9)
		return 67;//4 3
	break;
	case 17834://(4,5) (10, 10)
		return 67;//4 3
	break;
	case 17835://(4,5) (10, 11)
		return 67;//4 3
	break;
	case 17836://(4,5) (10, 12)
		return 67;//4 3
	break;
	case 17837://(4,5) (10, 13)
		return 67;//4 3
	break;
	case 17838://(4,5) (10, 14)
		return 67;//4 3
	break;
	case 17839://(4,5) (10, 15)
		return 67;//4 3
	break;
	case 17840://(4,5) (11, 0)
		return 0;//0 0
	break;
	case 17841://(4,5) (11, 1)
		return 0;//0 0
	break;
	case 17842://(4,5) (11, 2)
		return 3;//0 3
	break;
	case 17843://(4,5) (11, 3)
		return 0;//0 0
	break;
	case 17844://(4,5) (11, 4)
		return 3;//0 3
	break;
	case 17845://(4,5) (11, 5)
		return 3;//0 3
	break;
	case 17846://(4,5) (11, 6)
		return 0;//0 0
	break;
	case 17847://(4,5) (11, 7)
		return 3;//0 3
	break;
	case 17848://(4,5) (11, 8)
		return 3;//0 3
	break;
	case 17849://(4,5) (11, 9)
		return 3;//0 3
	break;
	case 17850://(4,5) (11, 10)
		return 3;//0 3
	break;
	case 17851://(4,5) (11, 11)
		return 3;//0 3
	break;
	case 17852://(4,5) (11, 12)
		return 3;//0 3
	break;
	case 17853://(4,5) (11, 13)
		return 3;//0 3
	break;
	case 17854://(4,5) (11, 14)
		return 3;//0 3
	break;
	case 17855://(4,5) (11, 15)
		return 3;//0 3
	break;
	case 17856://(4,5) (12, 0)
		return 64;//4 0
	break;
	case 17857://(4,5) (12, 1)
		return 64;//4 0
	break;
	case 17858://(4,5) (12, 2)
		return 67;//4 3
	break;
	case 17859://(4,5) (12, 3)
		return 64;//4 0
	break;
	case 17860://(4,5) (12, 4)
		return 67;//4 3
	break;
	case 17861://(4,5) (12, 5)
		return 67;//4 3
	break;
	case 17862://(4,5) (12, 6)
		return 64;//4 0
	break;
	case 17863://(4,5) (12, 7)
		return 67;//4 3
	break;
	case 17864://(4,5) (12, 8)
		return 67;//4 3
	break;
	case 17865://(4,5) (12, 9)
		return 67;//4 3
	break;
	case 17866://(4,5) (12, 10)
		return 67;//4 3
	break;
	case 17867://(4,5) (12, 11)
		return 67;//4 3
	break;
	case 17868://(4,5) (12, 12)
		return 67;//4 3
	break;
	case 17869://(4,5) (12, 13)
		return 67;//4 3
	break;
	case 17870://(4,5) (12, 14)
		return 67;//4 3
	break;
	case 17871://(4,5) (12, 15)
		return 67;//4 3
	break;
	case 17872://(4,5) (13, 0)
		return 64;//4 0
	break;
	case 17873://(4,5) (13, 1)
		return 64;//4 0
	break;
	case 17874://(4,5) (13, 2)
		return 67;//4 3
	break;
	case 17875://(4,5) (13, 3)
		return 64;//4 0
	break;
	case 17876://(4,5) (13, 4)
		return 67;//4 3
	break;
	case 17877://(4,5) (13, 5)
		return 67;//4 3
	break;
	case 17878://(4,5) (13, 6)
		return 64;//4 0
	break;
	case 17879://(4,5) (13, 7)
		return 67;//4 3
	break;
	case 17880://(4,5) (13, 8)
		return 67;//4 3
	break;
	case 17881://(4,5) (13, 9)
		return 67;//4 3
	break;
	case 17882://(4,5) (13, 10)
		return 67;//4 3
	break;
	case 17883://(4,5) (13, 11)
		return 67;//4 3
	break;
	case 17884://(4,5) (13, 12)
		return 67;//4 3
	break;
	case 17885://(4,5) (13, 13)
		return 67;//4 3
	break;
	case 17886://(4,5) (13, 14)
		return 67;//4 3
	break;
	case 17887://(4,5) (13, 15)
		return 67;//4 3
	break;
	case 17888://(4,5) (14, 0)
		return 64;//4 0
	break;
	case 17889://(4,5) (14, 1)
		return 64;//4 0
	break;
	case 17890://(4,5) (14, 2)
		return 67;//4 3
	break;
	case 17891://(4,5) (14, 3)
		return 64;//4 0
	break;
	case 17892://(4,5) (14, 4)
		return 67;//4 3
	break;
	case 17893://(4,5) (14, 5)
		return 67;//4 3
	break;
	case 17894://(4,5) (14, 6)
		return 64;//4 0
	break;
	case 17895://(4,5) (14, 7)
		return 67;//4 3
	break;
	case 17896://(4,5) (14, 8)
		return 67;//4 3
	break;
	case 17897://(4,5) (14, 9)
		return 67;//4 3
	break;
	case 17898://(4,5) (14, 10)
		return 67;//4 3
	break;
	case 17899://(4,5) (14, 11)
		return 67;//4 3
	break;
	case 17900://(4,5) (14, 12)
		return 67;//4 3
	break;
	case 17901://(4,5) (14, 13)
		return 67;//4 3
	break;
	case 17902://(4,5) (14, 14)
		return 67;//4 3
	break;
	case 17903://(4,5) (14, 15)
		return 67;//4 3
	break;
	case 17904://(4,5) (15, 0)
		return 64;//4 0
	break;
	case 17905://(4,5) (15, 1)
		return 64;//4 0
	break;
	case 17906://(4,5) (15, 2)
		return 67;//4 3
	break;
	case 17907://(4,5) (15, 3)
		return 64;//4 0
	break;
	case 17908://(4,5) (15, 4)
		return 67;//4 3
	break;
	case 17909://(4,5) (15, 5)
		return 67;//4 3
	break;
	case 17910://(4,5) (15, 6)
		return 64;//4 0
	break;
	case 17911://(4,5) (15, 7)
		return 67;//4 3
	break;
	case 17912://(4,5) (15, 8)
		return 67;//4 3
	break;
	case 17913://(4,5) (15, 9)
		return 67;//4 3
	break;
	case 17914://(4,5) (15, 10)
		return 67;//4 3
	break;
	case 17915://(4,5) (15, 11)
		return 67;//4 3
	break;
	case 17916://(4,5) (15, 12)
		return 67;//4 3
	break;
	case 17917://(4,5) (15, 13)
		return 67;//4 3
	break;
	case 17918://(4,5) (15, 14)
		return 67;//4 3
	break;
	case 17919://(4,5) (15, 15)
		return 67;//4 3
	break;
	case 17920://(4,6) (0, 0)
		return 0;//0 0
	break;
	case 17921://(4,6) (0, 1)
		return 3;//0 3
	break;
	case 17922://(4,6) (0, 2)
		return 0;//0 0
	break;
	case 17923://(4,6) (0, 3)
		return 3;//0 3
	break;
	case 17924://(4,6) (0, 4)
		return 0;//0 0
	break;
	case 17925://(4,6) (0, 5)
		return 0;//0 0
	break;
	case 17926://(4,6) (0, 6)
		return 3;//0 3
	break;
	case 17927://(4,6) (0, 7)
		return 3;//0 3
	break;
	case 17928://(4,6) (0, 8)
		return 3;//0 3
	break;
	case 17929://(4,6) (0, 9)
		return 3;//0 3
	break;
	case 17930://(4,6) (0, 10)
		return 3;//0 3
	break;
	case 17931://(4,6) (0, 11)
		return 3;//0 3
	break;
	case 17932://(4,6) (0, 12)
		return 3;//0 3
	break;
	case 17933://(4,6) (0, 13)
		return 3;//0 3
	break;
	case 17934://(4,6) (0, 14)
		return 3;//0 3
	break;
	case 17935://(4,6) (0, 15)
		return 3;//0 3
	break;
	case 17936://(4,6) (1, 0)
		return 0;//0 0
	break;
	case 17937://(4,6) (1, 1)
		return 3;//0 3
	break;
	case 17938://(4,6) (1, 2)
		return 0;//0 0
	break;
	case 17939://(4,6) (1, 3)
		return 3;//0 3
	break;
	case 17940://(4,6) (1, 4)
		return 0;//0 0
	break;
	case 17941://(4,6) (1, 5)
		return 0;//0 0
	break;
	case 17942://(4,6) (1, 6)
		return 3;//0 3
	break;
	case 17943://(4,6) (1, 7)
		return 3;//0 3
	break;
	case 17944://(4,6) (1, 8)
		return 3;//0 3
	break;
	case 17945://(4,6) (1, 9)
		return 3;//0 3
	break;
	case 17946://(4,6) (1, 10)
		return 3;//0 3
	break;
	case 17947://(4,6) (1, 11)
		return 3;//0 3
	break;
	case 17948://(4,6) (1, 12)
		return 3;//0 3
	break;
	case 17949://(4,6) (1, 13)
		return 3;//0 3
	break;
	case 17950://(4,6) (1, 14)
		return 3;//0 3
	break;
	case 17951://(4,6) (1, 15)
		return 3;//0 3
	break;
	case 17952://(4,6) (2, 0)
		return 0;//0 0
	break;
	case 17953://(4,6) (2, 1)
		return 3;//0 3
	break;
	case 17954://(4,6) (2, 2)
		return 0;//0 0
	break;
	case 17955://(4,6) (2, 3)
		return 3;//0 3
	break;
	case 17956://(4,6) (2, 4)
		return 0;//0 0
	break;
	case 17957://(4,6) (2, 5)
		return 0;//0 0
	break;
	case 17958://(4,6) (2, 6)
		return 3;//0 3
	break;
	case 17959://(4,6) (2, 7)
		return 3;//0 3
	break;
	case 17960://(4,6) (2, 8)
		return 3;//0 3
	break;
	case 17961://(4,6) (2, 9)
		return 3;//0 3
	break;
	case 17962://(4,6) (2, 10)
		return 3;//0 3
	break;
	case 17963://(4,6) (2, 11)
		return 3;//0 3
	break;
	case 17964://(4,6) (2, 12)
		return 3;//0 3
	break;
	case 17965://(4,6) (2, 13)
		return 3;//0 3
	break;
	case 17966://(4,6) (2, 14)
		return 3;//0 3
	break;
	case 17967://(4,6) (2, 15)
		return 3;//0 3
	break;
	case 17968://(4,6) (3, 0)
		return 0;//0 0
	break;
	case 17969://(4,6) (3, 1)
		return 3;//0 3
	break;
	case 17970://(4,6) (3, 2)
		return 0;//0 0
	break;
	case 17971://(4,6) (3, 3)
		return 3;//0 3
	break;
	case 17972://(4,6) (3, 4)
		return 0;//0 0
	break;
	case 17973://(4,6) (3, 5)
		return 0;//0 0
	break;
	case 17974://(4,6) (3, 6)
		return 3;//0 3
	break;
	case 17975://(4,6) (3, 7)
		return 3;//0 3
	break;
	case 17976://(4,6) (3, 8)
		return 3;//0 3
	break;
	case 17977://(4,6) (3, 9)
		return 3;//0 3
	break;
	case 17978://(4,6) (3, 10)
		return 3;//0 3
	break;
	case 17979://(4,6) (3, 11)
		return 3;//0 3
	break;
	case 17980://(4,6) (3, 12)
		return 3;//0 3
	break;
	case 17981://(4,6) (3, 13)
		return 3;//0 3
	break;
	case 17982://(4,6) (3, 14)
		return 3;//0 3
	break;
	case 17983://(4,6) (3, 15)
		return 3;//0 3
	break;
	case 17984://(4,6) (4, 0)
		return 64;//4 0
	break;
	case 17985://(4,6) (4, 1)
		return 67;//4 3
	break;
	case 17986://(4,6) (4, 2)
		return 64;//4 0
	break;
	case 17987://(4,6) (4, 3)
		return 67;//4 3
	break;
	case 17988://(4,6) (4, 4)
		return 64;//4 0
	break;
	case 17989://(4,6) (4, 5)
		return 64;//4 0
	break;
	case 17990://(4,6) (4, 6)
		return 67;//4 3
	break;
	case 17991://(4,6) (4, 7)
		return 67;//4 3
	break;
	case 17992://(4,6) (4, 8)
		return 67;//4 3
	break;
	case 17993://(4,6) (4, 9)
		return 67;//4 3
	break;
	case 17994://(4,6) (4, 10)
		return 67;//4 3
	break;
	case 17995://(4,6) (4, 11)
		return 67;//4 3
	break;
	case 17996://(4,6) (4, 12)
		return 67;//4 3
	break;
	case 17997://(4,6) (4, 13)
		return 67;//4 3
	break;
	case 17998://(4,6) (4, 14)
		return 67;//4 3
	break;
	case 17999://(4,6) (4, 15)
		return 67;//4 3
	break;
	case 18000://(4,6) (5, 0)
		return 64;//4 0
	break;
	case 18001://(4,6) (5, 1)
		return 67;//4 3
	break;
	case 18002://(4,6) (5, 2)
		return 64;//4 0
	break;
	case 18003://(4,6) (5, 3)
		return 67;//4 3
	break;
	case 18004://(4,6) (5, 4)
		return 64;//4 0
	break;
	case 18005://(4,6) (5, 5)
		return 64;//4 0
	break;
	case 18006://(4,6) (5, 6)
		return 67;//4 3
	break;
	case 18007://(4,6) (5, 7)
		return 67;//4 3
	break;
	case 18008://(4,6) (5, 8)
		return 67;//4 3
	break;
	case 18009://(4,6) (5, 9)
		return 67;//4 3
	break;
	case 18010://(4,6) (5, 10)
		return 67;//4 3
	break;
	case 18011://(4,6) (5, 11)
		return 67;//4 3
	break;
	case 18012://(4,6) (5, 12)
		return 67;//4 3
	break;
	case 18013://(4,6) (5, 13)
		return 67;//4 3
	break;
	case 18014://(4,6) (5, 14)
		return 67;//4 3
	break;
	case 18015://(4,6) (5, 15)
		return 67;//4 3
	break;
	case 18016://(4,6) (6, 0)
		return 0;//0 0
	break;
	case 18017://(4,6) (6, 1)
		return 3;//0 3
	break;
	case 18018://(4,6) (6, 2)
		return 0;//0 0
	break;
	case 18019://(4,6) (6, 3)
		return 3;//0 3
	break;
	case 18020://(4,6) (6, 4)
		return 0;//0 0
	break;
	case 18021://(4,6) (6, 5)
		return 0;//0 0
	break;
	case 18022://(4,6) (6, 6)
		return 3;//0 3
	break;
	case 18023://(4,6) (6, 7)
		return 3;//0 3
	break;
	case 18024://(4,6) (6, 8)
		return 3;//0 3
	break;
	case 18025://(4,6) (6, 9)
		return 3;//0 3
	break;
	case 18026://(4,6) (6, 10)
		return 3;//0 3
	break;
	case 18027://(4,6) (6, 11)
		return 3;//0 3
	break;
	case 18028://(4,6) (6, 12)
		return 3;//0 3
	break;
	case 18029://(4,6) (6, 13)
		return 3;//0 3
	break;
	case 18030://(4,6) (6, 14)
		return 3;//0 3
	break;
	case 18031://(4,6) (6, 15)
		return 3;//0 3
	break;
	case 18032://(4,6) (7, 0)
		return 0;//0 0
	break;
	case 18033://(4,6) (7, 1)
		return 3;//0 3
	break;
	case 18034://(4,6) (7, 2)
		return 0;//0 0
	break;
	case 18035://(4,6) (7, 3)
		return 3;//0 3
	break;
	case 18036://(4,6) (7, 4)
		return 0;//0 0
	break;
	case 18037://(4,6) (7, 5)
		return 0;//0 0
	break;
	case 18038://(4,6) (7, 6)
		return 3;//0 3
	break;
	case 18039://(4,6) (7, 7)
		return 3;//0 3
	break;
	case 18040://(4,6) (7, 8)
		return 3;//0 3
	break;
	case 18041://(4,6) (7, 9)
		return 3;//0 3
	break;
	case 18042://(4,6) (7, 10)
		return 3;//0 3
	break;
	case 18043://(4,6) (7, 11)
		return 3;//0 3
	break;
	case 18044://(4,6) (7, 12)
		return 3;//0 3
	break;
	case 18045://(4,6) (7, 13)
		return 3;//0 3
	break;
	case 18046://(4,6) (7, 14)
		return 3;//0 3
	break;
	case 18047://(4,6) (7, 15)
		return 3;//0 3
	break;
	case 18048://(4,6) (8, 0)
		return 64;//4 0
	break;
	case 18049://(4,6) (8, 1)
		return 67;//4 3
	break;
	case 18050://(4,6) (8, 2)
		return 64;//4 0
	break;
	case 18051://(4,6) (8, 3)
		return 67;//4 3
	break;
	case 18052://(4,6) (8, 4)
		return 64;//4 0
	break;
	case 18053://(4,6) (8, 5)
		return 64;//4 0
	break;
	case 18054://(4,6) (8, 6)
		return 67;//4 3
	break;
	case 18055://(4,6) (8, 7)
		return 67;//4 3
	break;
	case 18056://(4,6) (8, 8)
		return 67;//4 3
	break;
	case 18057://(4,6) (8, 9)
		return 67;//4 3
	break;
	case 18058://(4,6) (8, 10)
		return 67;//4 3
	break;
	case 18059://(4,6) (8, 11)
		return 67;//4 3
	break;
	case 18060://(4,6) (8, 12)
		return 67;//4 3
	break;
	case 18061://(4,6) (8, 13)
		return 67;//4 3
	break;
	case 18062://(4,6) (8, 14)
		return 67;//4 3
	break;
	case 18063://(4,6) (8, 15)
		return 67;//4 3
	break;
	case 18064://(4,6) (9, 0)
		return 0;//0 0
	break;
	case 18065://(4,6) (9, 1)
		return 3;//0 3
	break;
	case 18066://(4,6) (9, 2)
		return 0;//0 0
	break;
	case 18067://(4,6) (9, 3)
		return 3;//0 3
	break;
	case 18068://(4,6) (9, 4)
		return 0;//0 0
	break;
	case 18069://(4,6) (9, 5)
		return 0;//0 0
	break;
	case 18070://(4,6) (9, 6)
		return 3;//0 3
	break;
	case 18071://(4,6) (9, 7)
		return 3;//0 3
	break;
	case 18072://(4,6) (9, 8)
		return 3;//0 3
	break;
	case 18073://(4,6) (9, 9)
		return 3;//0 3
	break;
	case 18074://(4,6) (9, 10)
		return 3;//0 3
	break;
	case 18075://(4,6) (9, 11)
		return 3;//0 3
	break;
	case 18076://(4,6) (9, 12)
		return 3;//0 3
	break;
	case 18077://(4,6) (9, 13)
		return 3;//0 3
	break;
	case 18078://(4,6) (9, 14)
		return 3;//0 3
	break;
	case 18079://(4,6) (9, 15)
		return 3;//0 3
	break;
	case 18080://(4,6) (10, 0)
		return 64;//4 0
	break;
	case 18081://(4,6) (10, 1)
		return 67;//4 3
	break;
	case 18082://(4,6) (10, 2)
		return 64;//4 0
	break;
	case 18083://(4,6) (10, 3)
		return 67;//4 3
	break;
	case 18084://(4,6) (10, 4)
		return 64;//4 0
	break;
	case 18085://(4,6) (10, 5)
		return 64;//4 0
	break;
	case 18086://(4,6) (10, 6)
		return 67;//4 3
	break;
	case 18087://(4,6) (10, 7)
		return 67;//4 3
	break;
	case 18088://(4,6) (10, 8)
		return 67;//4 3
	break;
	case 18089://(4,6) (10, 9)
		return 67;//4 3
	break;
	case 18090://(4,6) (10, 10)
		return 67;//4 3
	break;
	case 18091://(4,6) (10, 11)
		return 67;//4 3
	break;
	case 18092://(4,6) (10, 12)
		return 67;//4 3
	break;
	case 18093://(4,6) (10, 13)
		return 67;//4 3
	break;
	case 18094://(4,6) (10, 14)
		return 67;//4 3
	break;
	case 18095://(4,6) (10, 15)
		return 67;//4 3
	break;
	case 18096://(4,6) (11, 0)
		return 0;//0 0
	break;
	case 18097://(4,6) (11, 1)
		return 3;//0 3
	break;
	case 18098://(4,6) (11, 2)
		return 0;//0 0
	break;
	case 18099://(4,6) (11, 3)
		return 3;//0 3
	break;
	case 18100://(4,6) (11, 4)
		return 0;//0 0
	break;
	case 18101://(4,6) (11, 5)
		return 0;//0 0
	break;
	case 18102://(4,6) (11, 6)
		return 3;//0 3
	break;
	case 18103://(4,6) (11, 7)
		return 3;//0 3
	break;
	case 18104://(4,6) (11, 8)
		return 3;//0 3
	break;
	case 18105://(4,6) (11, 9)
		return 3;//0 3
	break;
	case 18106://(4,6) (11, 10)
		return 3;//0 3
	break;
	case 18107://(4,6) (11, 11)
		return 3;//0 3
	break;
	case 18108://(4,6) (11, 12)
		return 3;//0 3
	break;
	case 18109://(4,6) (11, 13)
		return 3;//0 3
	break;
	case 18110://(4,6) (11, 14)
		return 3;//0 3
	break;
	case 18111://(4,6) (11, 15)
		return 3;//0 3
	break;
	case 18112://(4,6) (12, 0)
		return 64;//4 0
	break;
	case 18113://(4,6) (12, 1)
		return 67;//4 3
	break;
	case 18114://(4,6) (12, 2)
		return 64;//4 0
	break;
	case 18115://(4,6) (12, 3)
		return 67;//4 3
	break;
	case 18116://(4,6) (12, 4)
		return 64;//4 0
	break;
	case 18117://(4,6) (12, 5)
		return 64;//4 0
	break;
	case 18118://(4,6) (12, 6)
		return 67;//4 3
	break;
	case 18119://(4,6) (12, 7)
		return 67;//4 3
	break;
	case 18120://(4,6) (12, 8)
		return 67;//4 3
	break;
	case 18121://(4,6) (12, 9)
		return 67;//4 3
	break;
	case 18122://(4,6) (12, 10)
		return 67;//4 3
	break;
	case 18123://(4,6) (12, 11)
		return 67;//4 3
	break;
	case 18124://(4,6) (12, 12)
		return 67;//4 3
	break;
	case 18125://(4,6) (12, 13)
		return 67;//4 3
	break;
	case 18126://(4,6) (12, 14)
		return 67;//4 3
	break;
	case 18127://(4,6) (12, 15)
		return 67;//4 3
	break;
	case 18128://(4,6) (13, 0)
		return 64;//4 0
	break;
	case 18129://(4,6) (13, 1)
		return 67;//4 3
	break;
	case 18130://(4,6) (13, 2)
		return 64;//4 0
	break;
	case 18131://(4,6) (13, 3)
		return 67;//4 3
	break;
	case 18132://(4,6) (13, 4)
		return 64;//4 0
	break;
	case 18133://(4,6) (13, 5)
		return 64;//4 0
	break;
	case 18134://(4,6) (13, 6)
		return 67;//4 3
	break;
	case 18135://(4,6) (13, 7)
		return 67;//4 3
	break;
	case 18136://(4,6) (13, 8)
		return 67;//4 3
	break;
	case 18137://(4,6) (13, 9)
		return 67;//4 3
	break;
	case 18138://(4,6) (13, 10)
		return 67;//4 3
	break;
	case 18139://(4,6) (13, 11)
		return 67;//4 3
	break;
	case 18140://(4,6) (13, 12)
		return 67;//4 3
	break;
	case 18141://(4,6) (13, 13)
		return 67;//4 3
	break;
	case 18142://(4,6) (13, 14)
		return 67;//4 3
	break;
	case 18143://(4,6) (13, 15)
		return 67;//4 3
	break;
	case 18144://(4,6) (14, 0)
		return 64;//4 0
	break;
	case 18145://(4,6) (14, 1)
		return 67;//4 3
	break;
	case 18146://(4,6) (14, 2)
		return 64;//4 0
	break;
	case 18147://(4,6) (14, 3)
		return 67;//4 3
	break;
	case 18148://(4,6) (14, 4)
		return 64;//4 0
	break;
	case 18149://(4,6) (14, 5)
		return 64;//4 0
	break;
	case 18150://(4,6) (14, 6)
		return 67;//4 3
	break;
	case 18151://(4,6) (14, 7)
		return 67;//4 3
	break;
	case 18152://(4,6) (14, 8)
		return 67;//4 3
	break;
	case 18153://(4,6) (14, 9)
		return 67;//4 3
	break;
	case 18154://(4,6) (14, 10)
		return 67;//4 3
	break;
	case 18155://(4,6) (14, 11)
		return 67;//4 3
	break;
	case 18156://(4,6) (14, 12)
		return 67;//4 3
	break;
	case 18157://(4,6) (14, 13)
		return 67;//4 3
	break;
	case 18158://(4,6) (14, 14)
		return 67;//4 3
	break;
	case 18159://(4,6) (14, 15)
		return 67;//4 3
	break;
	case 18160://(4,6) (15, 0)
		return 64;//4 0
	break;
	case 18161://(4,6) (15, 1)
		return 67;//4 3
	break;
	case 18162://(4,6) (15, 2)
		return 64;//4 0
	break;
	case 18163://(4,6) (15, 3)
		return 67;//4 3
	break;
	case 18164://(4,6) (15, 4)
		return 64;//4 0
	break;
	case 18165://(4,6) (15, 5)
		return 64;//4 0
	break;
	case 18166://(4,6) (15, 6)
		return 67;//4 3
	break;
	case 18167://(4,6) (15, 7)
		return 67;//4 3
	break;
	case 18168://(4,6) (15, 8)
		return 67;//4 3
	break;
	case 18169://(4,6) (15, 9)
		return 67;//4 3
	break;
	case 18170://(4,6) (15, 10)
		return 67;//4 3
	break;
	case 18171://(4,6) (15, 11)
		return 67;//4 3
	break;
	case 18172://(4,6) (15, 12)
		return 67;//4 3
	break;
	case 18173://(4,6) (15, 13)
		return 67;//4 3
	break;
	case 18174://(4,6) (15, 14)
		return 67;//4 3
	break;
	case 18175://(4,6) (15, 15)
		return 67;//4 3
	break;
	case 18176://(4,7) (0, 0)
		return 0;//0 0
	break;
	case 18177://(4,7) (0, 1)
		return 0;//0 0
	break;
	case 18178://(4,7) (0, 2)
		return 3;//0 3
	break;
	case 18179://(4,7) (0, 3)
		return 3;//0 3
	break;
	case 18180://(4,7) (0, 4)
		return 0;//0 0
	break;
	case 18181://(4,7) (0, 5)
		return 3;//0 3
	break;
	case 18182://(4,7) (0, 6)
		return 3;//0 3
	break;
	case 18183://(4,7) (0, 7)
		return 3;//0 3
	break;
	case 18184://(4,7) (0, 8)
		return 0;//0 0
	break;
	case 18185://(4,7) (0, 9)
		return 3;//0 3
	break;
	case 18186://(4,7) (0, 10)
		return 3;//0 3
	break;
	case 18187://(4,7) (0, 11)
		return 3;//0 3
	break;
	case 18188://(4,7) (0, 12)
		return 3;//0 3
	break;
	case 18189://(4,7) (0, 13)
		return 3;//0 3
	break;
	case 18190://(4,7) (0, 14)
		return 3;//0 3
	break;
	case 18191://(4,7) (0, 15)
		return 3;//0 3
	break;
	case 18192://(4,7) (1, 0)
		return 0;//0 0
	break;
	case 18193://(4,7) (1, 1)
		return 0;//0 0
	break;
	case 18194://(4,7) (1, 2)
		return 3;//0 3
	break;
	case 18195://(4,7) (1, 3)
		return 3;//0 3
	break;
	case 18196://(4,7) (1, 4)
		return 0;//0 0
	break;
	case 18197://(4,7) (1, 5)
		return 3;//0 3
	break;
	case 18198://(4,7) (1, 6)
		return 3;//0 3
	break;
	case 18199://(4,7) (1, 7)
		return 3;//0 3
	break;
	case 18200://(4,7) (1, 8)
		return 0;//0 0
	break;
	case 18201://(4,7) (1, 9)
		return 3;//0 3
	break;
	case 18202://(4,7) (1, 10)
		return 3;//0 3
	break;
	case 18203://(4,7) (1, 11)
		return 3;//0 3
	break;
	case 18204://(4,7) (1, 12)
		return 3;//0 3
	break;
	case 18205://(4,7) (1, 13)
		return 3;//0 3
	break;
	case 18206://(4,7) (1, 14)
		return 3;//0 3
	break;
	case 18207://(4,7) (1, 15)
		return 3;//0 3
	break;
	case 18208://(4,7) (2, 0)
		return 0;//0 0
	break;
	case 18209://(4,7) (2, 1)
		return 0;//0 0
	break;
	case 18210://(4,7) (2, 2)
		return 3;//0 3
	break;
	case 18211://(4,7) (2, 3)
		return 3;//0 3
	break;
	case 18212://(4,7) (2, 4)
		return 0;//0 0
	break;
	case 18213://(4,7) (2, 5)
		return 3;//0 3
	break;
	case 18214://(4,7) (2, 6)
		return 3;//0 3
	break;
	case 18215://(4,7) (2, 7)
		return 3;//0 3
	break;
	case 18216://(4,7) (2, 8)
		return 0;//0 0
	break;
	case 18217://(4,7) (2, 9)
		return 3;//0 3
	break;
	case 18218://(4,7) (2, 10)
		return 3;//0 3
	break;
	case 18219://(4,7) (2, 11)
		return 3;//0 3
	break;
	case 18220://(4,7) (2, 12)
		return 3;//0 3
	break;
	case 18221://(4,7) (2, 13)
		return 3;//0 3
	break;
	case 18222://(4,7) (2, 14)
		return 3;//0 3
	break;
	case 18223://(4,7) (2, 15)
		return 3;//0 3
	break;
	case 18224://(4,7) (3, 0)
		return 0;//0 0
	break;
	case 18225://(4,7) (3, 1)
		return 0;//0 0
	break;
	case 18226://(4,7) (3, 2)
		return 3;//0 3
	break;
	case 18227://(4,7) (3, 3)
		return 3;//0 3
	break;
	case 18228://(4,7) (3, 4)
		return 0;//0 0
	break;
	case 18229://(4,7) (3, 5)
		return 3;//0 3
	break;
	case 18230://(4,7) (3, 6)
		return 3;//0 3
	break;
	case 18231://(4,7) (3, 7)
		return 3;//0 3
	break;
	case 18232://(4,7) (3, 8)
		return 0;//0 0
	break;
	case 18233://(4,7) (3, 9)
		return 3;//0 3
	break;
	case 18234://(4,7) (3, 10)
		return 3;//0 3
	break;
	case 18235://(4,7) (3, 11)
		return 3;//0 3
	break;
	case 18236://(4,7) (3, 12)
		return 3;//0 3
	break;
	case 18237://(4,7) (3, 13)
		return 3;//0 3
	break;
	case 18238://(4,7) (3, 14)
		return 3;//0 3
	break;
	case 18239://(4,7) (3, 15)
		return 3;//0 3
	break;
	case 18240://(4,7) (4, 0)
		return 64;//4 0
	break;
	case 18241://(4,7) (4, 1)
		return 64;//4 0
	break;
	case 18242://(4,7) (4, 2)
		return 67;//4 3
	break;
	case 18243://(4,7) (4, 3)
		return 67;//4 3
	break;
	case 18244://(4,7) (4, 4)
		return 64;//4 0
	break;
	case 18245://(4,7) (4, 5)
		return 67;//4 3
	break;
	case 18246://(4,7) (4, 6)
		return 67;//4 3
	break;
	case 18247://(4,7) (4, 7)
		return 67;//4 3
	break;
	case 18248://(4,7) (4, 8)
		return 64;//4 0
	break;
	case 18249://(4,7) (4, 9)
		return 67;//4 3
	break;
	case 18250://(4,7) (4, 10)
		return 67;//4 3
	break;
	case 18251://(4,7) (4, 11)
		return 67;//4 3
	break;
	case 18252://(4,7) (4, 12)
		return 67;//4 3
	break;
	case 18253://(4,7) (4, 13)
		return 67;//4 3
	break;
	case 18254://(4,7) (4, 14)
		return 67;//4 3
	break;
	case 18255://(4,7) (4, 15)
		return 67;//4 3
	break;
	case 18256://(4,7) (5, 0)
		return 64;//4 0
	break;
	case 18257://(4,7) (5, 1)
		return 64;//4 0
	break;
	case 18258://(4,7) (5, 2)
		return 67;//4 3
	break;
	case 18259://(4,7) (5, 3)
		return 67;//4 3
	break;
	case 18260://(4,7) (5, 4)
		return 64;//4 0
	break;
	case 18261://(4,7) (5, 5)
		return 67;//4 3
	break;
	case 18262://(4,7) (5, 6)
		return 67;//4 3
	break;
	case 18263://(4,7) (5, 7)
		return 67;//4 3
	break;
	case 18264://(4,7) (5, 8)
		return 64;//4 0
	break;
	case 18265://(4,7) (5, 9)
		return 67;//4 3
	break;
	case 18266://(4,7) (5, 10)
		return 67;//4 3
	break;
	case 18267://(4,7) (5, 11)
		return 67;//4 3
	break;
	case 18268://(4,7) (5, 12)
		return 67;//4 3
	break;
	case 18269://(4,7) (5, 13)
		return 67;//4 3
	break;
	case 18270://(4,7) (5, 14)
		return 67;//4 3
	break;
	case 18271://(4,7) (5, 15)
		return 67;//4 3
	break;
	case 18272://(4,7) (6, 0)
		return 0;//0 0
	break;
	case 18273://(4,7) (6, 1)
		return 0;//0 0
	break;
	case 18274://(4,7) (6, 2)
		return 3;//0 3
	break;
	case 18275://(4,7) (6, 3)
		return 3;//0 3
	break;
	case 18276://(4,7) (6, 4)
		return 0;//0 0
	break;
	case 18277://(4,7) (6, 5)
		return 3;//0 3
	break;
	case 18278://(4,7) (6, 6)
		return 3;//0 3
	break;
	case 18279://(4,7) (6, 7)
		return 3;//0 3
	break;
	case 18280://(4,7) (6, 8)
		return 0;//0 0
	break;
	case 18281://(4,7) (6, 9)
		return 3;//0 3
	break;
	case 18282://(4,7) (6, 10)
		return 3;//0 3
	break;
	case 18283://(4,7) (6, 11)
		return 3;//0 3
	break;
	case 18284://(4,7) (6, 12)
		return 3;//0 3
	break;
	case 18285://(4,7) (6, 13)
		return 3;//0 3
	break;
	case 18286://(4,7) (6, 14)
		return 3;//0 3
	break;
	case 18287://(4,7) (6, 15)
		return 3;//0 3
	break;
	case 18288://(4,7) (7, 0)
		return 0;//0 0
	break;
	case 18289://(4,7) (7, 1)
		return 0;//0 0
	break;
	case 18290://(4,7) (7, 2)
		return 3;//0 3
	break;
	case 18291://(4,7) (7, 3)
		return 3;//0 3
	break;
	case 18292://(4,7) (7, 4)
		return 0;//0 0
	break;
	case 18293://(4,7) (7, 5)
		return 3;//0 3
	break;
	case 18294://(4,7) (7, 6)
		return 3;//0 3
	break;
	case 18295://(4,7) (7, 7)
		return 3;//0 3
	break;
	case 18296://(4,7) (7, 8)
		return 0;//0 0
	break;
	case 18297://(4,7) (7, 9)
		return 3;//0 3
	break;
	case 18298://(4,7) (7, 10)
		return 3;//0 3
	break;
	case 18299://(4,7) (7, 11)
		return 3;//0 3
	break;
	case 18300://(4,7) (7, 12)
		return 3;//0 3
	break;
	case 18301://(4,7) (7, 13)
		return 3;//0 3
	break;
	case 18302://(4,7) (7, 14)
		return 3;//0 3
	break;
	case 18303://(4,7) (7, 15)
		return 3;//0 3
	break;
	case 18304://(4,7) (8, 0)
		return 64;//4 0
	break;
	case 18305://(4,7) (8, 1)
		return 64;//4 0
	break;
	case 18306://(4,7) (8, 2)
		return 67;//4 3
	break;
	case 18307://(4,7) (8, 3)
		return 67;//4 3
	break;
	case 18308://(4,7) (8, 4)
		return 64;//4 0
	break;
	case 18309://(4,7) (8, 5)
		return 67;//4 3
	break;
	case 18310://(4,7) (8, 6)
		return 67;//4 3
	break;
	case 18311://(4,7) (8, 7)
		return 67;//4 3
	break;
	case 18312://(4,7) (8, 8)
		return 64;//4 0
	break;
	case 18313://(4,7) (8, 9)
		return 67;//4 3
	break;
	case 18314://(4,7) (8, 10)
		return 67;//4 3
	break;
	case 18315://(4,7) (8, 11)
		return 67;//4 3
	break;
	case 18316://(4,7) (8, 12)
		return 67;//4 3
	break;
	case 18317://(4,7) (8, 13)
		return 67;//4 3
	break;
	case 18318://(4,7) (8, 14)
		return 67;//4 3
	break;
	case 18319://(4,7) (8, 15)
		return 67;//4 3
	break;
	case 18320://(4,7) (9, 0)
		return 0;//0 0
	break;
	case 18321://(4,7) (9, 1)
		return 0;//0 0
	break;
	case 18322://(4,7) (9, 2)
		return 3;//0 3
	break;
	case 18323://(4,7) (9, 3)
		return 3;//0 3
	break;
	case 18324://(4,7) (9, 4)
		return 0;//0 0
	break;
	case 18325://(4,7) (9, 5)
		return 3;//0 3
	break;
	case 18326://(4,7) (9, 6)
		return 3;//0 3
	break;
	case 18327://(4,7) (9, 7)
		return 3;//0 3
	break;
	case 18328://(4,7) (9, 8)
		return 0;//0 0
	break;
	case 18329://(4,7) (9, 9)
		return 3;//0 3
	break;
	case 18330://(4,7) (9, 10)
		return 3;//0 3
	break;
	case 18331://(4,7) (9, 11)
		return 3;//0 3
	break;
	case 18332://(4,7) (9, 12)
		return 3;//0 3
	break;
	case 18333://(4,7) (9, 13)
		return 3;//0 3
	break;
	case 18334://(4,7) (9, 14)
		return 3;//0 3
	break;
	case 18335://(4,7) (9, 15)
		return 3;//0 3
	break;
	case 18336://(4,7) (10, 0)
		return 64;//4 0
	break;
	case 18337://(4,7) (10, 1)
		return 64;//4 0
	break;
	case 18338://(4,7) (10, 2)
		return 67;//4 3
	break;
	case 18339://(4,7) (10, 3)
		return 67;//4 3
	break;
	case 18340://(4,7) (10, 4)
		return 64;//4 0
	break;
	case 18341://(4,7) (10, 5)
		return 67;//4 3
	break;
	case 18342://(4,7) (10, 6)
		return 67;//4 3
	break;
	case 18343://(4,7) (10, 7)
		return 67;//4 3
	break;
	case 18344://(4,7) (10, 8)
		return 64;//4 0
	break;
	case 18345://(4,7) (10, 9)
		return 67;//4 3
	break;
	case 18346://(4,7) (10, 10)
		return 67;//4 3
	break;
	case 18347://(4,7) (10, 11)
		return 67;//4 3
	break;
	case 18348://(4,7) (10, 12)
		return 67;//4 3
	break;
	case 18349://(4,7) (10, 13)
		return 67;//4 3
	break;
	case 18350://(4,7) (10, 14)
		return 67;//4 3
	break;
	case 18351://(4,7) (10, 15)
		return 67;//4 3
	break;
	case 18352://(4,7) (11, 0)
		return 0;//0 0
	break;
	case 18353://(4,7) (11, 1)
		return 0;//0 0
	break;
	case 18354://(4,7) (11, 2)
		return 3;//0 3
	break;
	case 18355://(4,7) (11, 3)
		return 3;//0 3
	break;
	case 18356://(4,7) (11, 4)
		return 0;//0 0
	break;
	case 18357://(4,7) (11, 5)
		return 3;//0 3
	break;
	case 18358://(4,7) (11, 6)
		return 3;//0 3
	break;
	case 18359://(4,7) (11, 7)
		return 3;//0 3
	break;
	case 18360://(4,7) (11, 8)
		return 0;//0 0
	break;
	case 18361://(4,7) (11, 9)
		return 3;//0 3
	break;
	case 18362://(4,7) (11, 10)
		return 3;//0 3
	break;
	case 18363://(4,7) (11, 11)
		return 3;//0 3
	break;
	case 18364://(4,7) (11, 12)
		return 3;//0 3
	break;
	case 18365://(4,7) (11, 13)
		return 3;//0 3
	break;
	case 18366://(4,7) (11, 14)
		return 3;//0 3
	break;
	case 18367://(4,7) (11, 15)
		return 3;//0 3
	break;
	case 18368://(4,7) (12, 0)
		return 64;//4 0
	break;
	case 18369://(4,7) (12, 1)
		return 64;//4 0
	break;
	case 18370://(4,7) (12, 2)
		return 67;//4 3
	break;
	case 18371://(4,7) (12, 3)
		return 67;//4 3
	break;
	case 18372://(4,7) (12, 4)
		return 64;//4 0
	break;
	case 18373://(4,7) (12, 5)
		return 67;//4 3
	break;
	case 18374://(4,7) (12, 6)
		return 67;//4 3
	break;
	case 18375://(4,7) (12, 7)
		return 67;//4 3
	break;
	case 18376://(4,7) (12, 8)
		return 64;//4 0
	break;
	case 18377://(4,7) (12, 9)
		return 67;//4 3
	break;
	case 18378://(4,7) (12, 10)
		return 67;//4 3
	break;
	case 18379://(4,7) (12, 11)
		return 67;//4 3
	break;
	case 18380://(4,7) (12, 12)
		return 67;//4 3
	break;
	case 18381://(4,7) (12, 13)
		return 67;//4 3
	break;
	case 18382://(4,7) (12, 14)
		return 67;//4 3
	break;
	case 18383://(4,7) (12, 15)
		return 67;//4 3
	break;
	case 18384://(4,7) (13, 0)
		return 64;//4 0
	break;
	case 18385://(4,7) (13, 1)
		return 64;//4 0
	break;
	case 18386://(4,7) (13, 2)
		return 67;//4 3
	break;
	case 18387://(4,7) (13, 3)
		return 67;//4 3
	break;
	case 18388://(4,7) (13, 4)
		return 64;//4 0
	break;
	case 18389://(4,7) (13, 5)
		return 67;//4 3
	break;
	case 18390://(4,7) (13, 6)
		return 67;//4 3
	break;
	case 18391://(4,7) (13, 7)
		return 67;//4 3
	break;
	case 18392://(4,7) (13, 8)
		return 64;//4 0
	break;
	case 18393://(4,7) (13, 9)
		return 67;//4 3
	break;
	case 18394://(4,7) (13, 10)
		return 67;//4 3
	break;
	case 18395://(4,7) (13, 11)
		return 67;//4 3
	break;
	case 18396://(4,7) (13, 12)
		return 67;//4 3
	break;
	case 18397://(4,7) (13, 13)
		return 67;//4 3
	break;
	case 18398://(4,7) (13, 14)
		return 67;//4 3
	break;
	case 18399://(4,7) (13, 15)
		return 67;//4 3
	break;
	case 18400://(4,7) (14, 0)
		return 64;//4 0
	break;
	case 18401://(4,7) (14, 1)
		return 64;//4 0
	break;
	case 18402://(4,7) (14, 2)
		return 67;//4 3
	break;
	case 18403://(4,7) (14, 3)
		return 67;//4 3
	break;
	case 18404://(4,7) (14, 4)
		return 64;//4 0
	break;
	case 18405://(4,7) (14, 5)
		return 67;//4 3
	break;
	case 18406://(4,7) (14, 6)
		return 67;//4 3
	break;
	case 18407://(4,7) (14, 7)
		return 67;//4 3
	break;
	case 18408://(4,7) (14, 8)
		return 64;//4 0
	break;
	case 18409://(4,7) (14, 9)
		return 67;//4 3
	break;
	case 18410://(4,7) (14, 10)
		return 67;//4 3
	break;
	case 18411://(4,7) (14, 11)
		return 67;//4 3
	break;
	case 18412://(4,7) (14, 12)
		return 67;//4 3
	break;
	case 18413://(4,7) (14, 13)
		return 67;//4 3
	break;
	case 18414://(4,7) (14, 14)
		return 67;//4 3
	break;
	case 18415://(4,7) (14, 15)
		return 67;//4 3
	break;
	case 18416://(4,7) (15, 0)
		return 64;//4 0
	break;
	case 18417://(4,7) (15, 1)
		return 64;//4 0
	break;
	case 18418://(4,7) (15, 2)
		return 67;//4 3
	break;
	case 18419://(4,7) (15, 3)
		return 67;//4 3
	break;
	case 18420://(4,7) (15, 4)
		return 64;//4 0
	break;
	case 18421://(4,7) (15, 5)
		return 67;//4 3
	break;
	case 18422://(4,7) (15, 6)
		return 67;//4 3
	break;
	case 18423://(4,7) (15, 7)
		return 67;//4 3
	break;
	case 18424://(4,7) (15, 8)
		return 64;//4 0
	break;
	case 18425://(4,7) (15, 9)
		return 67;//4 3
	break;
	case 18426://(4,7) (15, 10)
		return 67;//4 3
	break;
	case 18427://(4,7) (15, 11)
		return 67;//4 3
	break;
	case 18428://(4,7) (15, 12)
		return 67;//4 3
	break;
	case 18429://(4,7) (15, 13)
		return 67;//4 3
	break;
	case 18430://(4,7) (15, 14)
		return 67;//4 3
	break;
	case 18431://(4,7) (15, 15)
		return 67;//4 3
	break;
	case 18432://(4,8) (0, 0)
		return 0;//0 0
	break;
	case 18433://(4,8) (0, 1)
		return 3;//0 3
	break;
	case 18434://(4,8) (0, 2)
		return 0;//0 0
	break;
	case 18435://(4,8) (0, 3)
		return 0;//0 0
	break;
	case 18436://(4,8) (0, 4)
		return 3;//0 3
	break;
	case 18437://(4,8) (0, 5)
		return 3;//0 3
	break;
	case 18438://(4,8) (0, 6)
		return 3;//0 3
	break;
	case 18439://(4,8) (0, 7)
		return 0;//0 0
	break;
	case 18440://(4,8) (0, 8)
		return 3;//0 3
	break;
	case 18441://(4,8) (0, 9)
		return 3;//0 3
	break;
	case 18442://(4,8) (0, 10)
		return 3;//0 3
	break;
	case 18443://(4,8) (0, 11)
		return 3;//0 3
	break;
	case 18444://(4,8) (0, 12)
		return 3;//0 3
	break;
	case 18445://(4,8) (0, 13)
		return 3;//0 3
	break;
	case 18446://(4,8) (0, 14)
		return 3;//0 3
	break;
	case 18447://(4,8) (0, 15)
		return 3;//0 3
	break;
	case 18448://(4,8) (1, 0)
		return 0;//0 0
	break;
	case 18449://(4,8) (1, 1)
		return 3;//0 3
	break;
	case 18450://(4,8) (1, 2)
		return 0;//0 0
	break;
	case 18451://(4,8) (1, 3)
		return 0;//0 0
	break;
	case 18452://(4,8) (1, 4)
		return 3;//0 3
	break;
	case 18453://(4,8) (1, 5)
		return 3;//0 3
	break;
	case 18454://(4,8) (1, 6)
		return 3;//0 3
	break;
	case 18455://(4,8) (1, 7)
		return 0;//0 0
	break;
	case 18456://(4,8) (1, 8)
		return 3;//0 3
	break;
	case 18457://(4,8) (1, 9)
		return 3;//0 3
	break;
	case 18458://(4,8) (1, 10)
		return 3;//0 3
	break;
	case 18459://(4,8) (1, 11)
		return 3;//0 3
	break;
	case 18460://(4,8) (1, 12)
		return 3;//0 3
	break;
	case 18461://(4,8) (1, 13)
		return 3;//0 3
	break;
	case 18462://(4,8) (1, 14)
		return 3;//0 3
	break;
	case 18463://(4,8) (1, 15)
		return 3;//0 3
	break;
	case 18464://(4,8) (2, 0)
		return 0;//0 0
	break;
	case 18465://(4,8) (2, 1)
		return 3;//0 3
	break;
	case 18466://(4,8) (2, 2)
		return 0;//0 0
	break;
	case 18467://(4,8) (2, 3)
		return 0;//0 0
	break;
	case 18468://(4,8) (2, 4)
		return 3;//0 3
	break;
	case 18469://(4,8) (2, 5)
		return 3;//0 3
	break;
	case 18470://(4,8) (2, 6)
		return 3;//0 3
	break;
	case 18471://(4,8) (2, 7)
		return 0;//0 0
	break;
	case 18472://(4,8) (2, 8)
		return 3;//0 3
	break;
	case 18473://(4,8) (2, 9)
		return 3;//0 3
	break;
	case 18474://(4,8) (2, 10)
		return 3;//0 3
	break;
	case 18475://(4,8) (2, 11)
		return 3;//0 3
	break;
	case 18476://(4,8) (2, 12)
		return 3;//0 3
	break;
	case 18477://(4,8) (2, 13)
		return 3;//0 3
	break;
	case 18478://(4,8) (2, 14)
		return 3;//0 3
	break;
	case 18479://(4,8) (2, 15)
		return 3;//0 3
	break;
	case 18480://(4,8) (3, 0)
		return 0;//0 0
	break;
	case 18481://(4,8) (3, 1)
		return 3;//0 3
	break;
	case 18482://(4,8) (3, 2)
		return 0;//0 0
	break;
	case 18483://(4,8) (3, 3)
		return 0;//0 0
	break;
	case 18484://(4,8) (3, 4)
		return 3;//0 3
	break;
	case 18485://(4,8) (3, 5)
		return 3;//0 3
	break;
	case 18486://(4,8) (3, 6)
		return 3;//0 3
	break;
	case 18487://(4,8) (3, 7)
		return 0;//0 0
	break;
	case 18488://(4,8) (3, 8)
		return 3;//0 3
	break;
	case 18489://(4,8) (3, 9)
		return 3;//0 3
	break;
	case 18490://(4,8) (3, 10)
		return 3;//0 3
	break;
	case 18491://(4,8) (3, 11)
		return 3;//0 3
	break;
	case 18492://(4,8) (3, 12)
		return 3;//0 3
	break;
	case 18493://(4,8) (3, 13)
		return 3;//0 3
	break;
	case 18494://(4,8) (3, 14)
		return 3;//0 3
	break;
	case 18495://(4,8) (3, 15)
		return 3;//0 3
	break;
	case 18496://(4,8) (4, 0)
		return 64;//4 0
	break;
	case 18497://(4,8) (4, 1)
		return 67;//4 3
	break;
	case 18498://(4,8) (4, 2)
		return 64;//4 0
	break;
	case 18499://(4,8) (4, 3)
		return 64;//4 0
	break;
	case 18500://(4,8) (4, 4)
		return 67;//4 3
	break;
	case 18501://(4,8) (4, 5)
		return 67;//4 3
	break;
	case 18502://(4,8) (4, 6)
		return 67;//4 3
	break;
	case 18503://(4,8) (4, 7)
		return 64;//4 0
	break;
	case 18504://(4,8) (4, 8)
		return 67;//4 3
	break;
	case 18505://(4,8) (4, 9)
		return 67;//4 3
	break;
	case 18506://(4,8) (4, 10)
		return 67;//4 3
	break;
	case 18507://(4,8) (4, 11)
		return 67;//4 3
	break;
	case 18508://(4,8) (4, 12)
		return 67;//4 3
	break;
	case 18509://(4,8) (4, 13)
		return 67;//4 3
	break;
	case 18510://(4,8) (4, 14)
		return 67;//4 3
	break;
	case 18511://(4,8) (4, 15)
		return 67;//4 3
	break;
	case 18512://(4,8) (5, 0)
		return 64;//4 0
	break;
	case 18513://(4,8) (5, 1)
		return 67;//4 3
	break;
	case 18514://(4,8) (5, 2)
		return 64;//4 0
	break;
	case 18515://(4,8) (5, 3)
		return 64;//4 0
	break;
	case 18516://(4,8) (5, 4)
		return 67;//4 3
	break;
	case 18517://(4,8) (5, 5)
		return 67;//4 3
	break;
	case 18518://(4,8) (5, 6)
		return 67;//4 3
	break;
	case 18519://(4,8) (5, 7)
		return 64;//4 0
	break;
	case 18520://(4,8) (5, 8)
		return 67;//4 3
	break;
	case 18521://(4,8) (5, 9)
		return 67;//4 3
	break;
	case 18522://(4,8) (5, 10)
		return 67;//4 3
	break;
	case 18523://(4,8) (5, 11)
		return 67;//4 3
	break;
	case 18524://(4,8) (5, 12)
		return 67;//4 3
	break;
	case 18525://(4,8) (5, 13)
		return 67;//4 3
	break;
	case 18526://(4,8) (5, 14)
		return 67;//4 3
	break;
	case 18527://(4,8) (5, 15)
		return 67;//4 3
	break;
	case 18528://(4,8) (6, 0)
		return 0;//0 0
	break;
	case 18529://(4,8) (6, 1)
		return 3;//0 3
	break;
	case 18530://(4,8) (6, 2)
		return 0;//0 0
	break;
	case 18531://(4,8) (6, 3)
		return 0;//0 0
	break;
	case 18532://(4,8) (6, 4)
		return 3;//0 3
	break;
	case 18533://(4,8) (6, 5)
		return 3;//0 3
	break;
	case 18534://(4,8) (6, 6)
		return 3;//0 3
	break;
	case 18535://(4,8) (6, 7)
		return 0;//0 0
	break;
	case 18536://(4,8) (6, 8)
		return 3;//0 3
	break;
	case 18537://(4,8) (6, 9)
		return 3;//0 3
	break;
	case 18538://(4,8) (6, 10)
		return 3;//0 3
	break;
	case 18539://(4,8) (6, 11)
		return 3;//0 3
	break;
	case 18540://(4,8) (6, 12)
		return 3;//0 3
	break;
	case 18541://(4,8) (6, 13)
		return 3;//0 3
	break;
	case 18542://(4,8) (6, 14)
		return 3;//0 3
	break;
	case 18543://(4,8) (6, 15)
		return 3;//0 3
	break;
	case 18544://(4,8) (7, 0)
		return 0;//0 0
	break;
	case 18545://(4,8) (7, 1)
		return 3;//0 3
	break;
	case 18546://(4,8) (7, 2)
		return 0;//0 0
	break;
	case 18547://(4,8) (7, 3)
		return 0;//0 0
	break;
	case 18548://(4,8) (7, 4)
		return 3;//0 3
	break;
	case 18549://(4,8) (7, 5)
		return 3;//0 3
	break;
	case 18550://(4,8) (7, 6)
		return 3;//0 3
	break;
	case 18551://(4,8) (7, 7)
		return 0;//0 0
	break;
	case 18552://(4,8) (7, 8)
		return 3;//0 3
	break;
	case 18553://(4,8) (7, 9)
		return 3;//0 3
	break;
	case 18554://(4,8) (7, 10)
		return 3;//0 3
	break;
	case 18555://(4,8) (7, 11)
		return 3;//0 3
	break;
	case 18556://(4,8) (7, 12)
		return 3;//0 3
	break;
	case 18557://(4,8) (7, 13)
		return 3;//0 3
	break;
	case 18558://(4,8) (7, 14)
		return 3;//0 3
	break;
	case 18559://(4,8) (7, 15)
		return 3;//0 3
	break;
	case 18560://(4,8) (8, 0)
		return 64;//4 0
	break;
	case 18561://(4,8) (8, 1)
		return 67;//4 3
	break;
	case 18562://(4,8) (8, 2)
		return 64;//4 0
	break;
	case 18563://(4,8) (8, 3)
		return 64;//4 0
	break;
	case 18564://(4,8) (8, 4)
		return 67;//4 3
	break;
	case 18565://(4,8) (8, 5)
		return 67;//4 3
	break;
	case 18566://(4,8) (8, 6)
		return 67;//4 3
	break;
	case 18567://(4,8) (8, 7)
		return 64;//4 0
	break;
	case 18568://(4,8) (8, 8)
		return 67;//4 3
	break;
	case 18569://(4,8) (8, 9)
		return 67;//4 3
	break;
	case 18570://(4,8) (8, 10)
		return 67;//4 3
	break;
	case 18571://(4,8) (8, 11)
		return 67;//4 3
	break;
	case 18572://(4,8) (8, 12)
		return 67;//4 3
	break;
	case 18573://(4,8) (8, 13)
		return 67;//4 3
	break;
	case 18574://(4,8) (8, 14)
		return 67;//4 3
	break;
	case 18575://(4,8) (8, 15)
		return 67;//4 3
	break;
	case 18576://(4,8) (9, 0)
		return 0;//0 0
	break;
	case 18577://(4,8) (9, 1)
		return 3;//0 3
	break;
	case 18578://(4,8) (9, 2)
		return 0;//0 0
	break;
	case 18579://(4,8) (9, 3)
		return 0;//0 0
	break;
	case 18580://(4,8) (9, 4)
		return 3;//0 3
	break;
	case 18581://(4,8) (9, 5)
		return 3;//0 3
	break;
	case 18582://(4,8) (9, 6)
		return 3;//0 3
	break;
	case 18583://(4,8) (9, 7)
		return 0;//0 0
	break;
	case 18584://(4,8) (9, 8)
		return 3;//0 3
	break;
	case 18585://(4,8) (9, 9)
		return 3;//0 3
	break;
	case 18586://(4,8) (9, 10)
		return 3;//0 3
	break;
	case 18587://(4,8) (9, 11)
		return 3;//0 3
	break;
	case 18588://(4,8) (9, 12)
		return 3;//0 3
	break;
	case 18589://(4,8) (9, 13)
		return 3;//0 3
	break;
	case 18590://(4,8) (9, 14)
		return 3;//0 3
	break;
	case 18591://(4,8) (9, 15)
		return 3;//0 3
	break;
	case 18592://(4,8) (10, 0)
		return 64;//4 0
	break;
	case 18593://(4,8) (10, 1)
		return 67;//4 3
	break;
	case 18594://(4,8) (10, 2)
		return 64;//4 0
	break;
	case 18595://(4,8) (10, 3)
		return 64;//4 0
	break;
	case 18596://(4,8) (10, 4)
		return 67;//4 3
	break;
	case 18597://(4,8) (10, 5)
		return 67;//4 3
	break;
	case 18598://(4,8) (10, 6)
		return 67;//4 3
	break;
	case 18599://(4,8) (10, 7)
		return 64;//4 0
	break;
	case 18600://(4,8) (10, 8)
		return 67;//4 3
	break;
	case 18601://(4,8) (10, 9)
		return 67;//4 3
	break;
	case 18602://(4,8) (10, 10)
		return 67;//4 3
	break;
	case 18603://(4,8) (10, 11)
		return 67;//4 3
	break;
	case 18604://(4,8) (10, 12)
		return 67;//4 3
	break;
	case 18605://(4,8) (10, 13)
		return 67;//4 3
	break;
	case 18606://(4,8) (10, 14)
		return 67;//4 3
	break;
	case 18607://(4,8) (10, 15)
		return 67;//4 3
	break;
	case 18608://(4,8) (11, 0)
		return 0;//0 0
	break;
	case 18609://(4,8) (11, 1)
		return 3;//0 3
	break;
	case 18610://(4,8) (11, 2)
		return 0;//0 0
	break;
	case 18611://(4,8) (11, 3)
		return 0;//0 0
	break;
	case 18612://(4,8) (11, 4)
		return 3;//0 3
	break;
	case 18613://(4,8) (11, 5)
		return 3;//0 3
	break;
	case 18614://(4,8) (11, 6)
		return 3;//0 3
	break;
	case 18615://(4,8) (11, 7)
		return 0;//0 0
	break;
	case 18616://(4,8) (11, 8)
		return 3;//0 3
	break;
	case 18617://(4,8) (11, 9)
		return 3;//0 3
	break;
	case 18618://(4,8) (11, 10)
		return 3;//0 3
	break;
	case 18619://(4,8) (11, 11)
		return 3;//0 3
	break;
	case 18620://(4,8) (11, 12)
		return 3;//0 3
	break;
	case 18621://(4,8) (11, 13)
		return 3;//0 3
	break;
	case 18622://(4,8) (11, 14)
		return 3;//0 3
	break;
	case 18623://(4,8) (11, 15)
		return 3;//0 3
	break;
	case 18624://(4,8) (12, 0)
		return 64;//4 0
	break;
	case 18625://(4,8) (12, 1)
		return 67;//4 3
	break;
	case 18626://(4,8) (12, 2)
		return 64;//4 0
	break;
	case 18627://(4,8) (12, 3)
		return 64;//4 0
	break;
	case 18628://(4,8) (12, 4)
		return 67;//4 3
	break;
	case 18629://(4,8) (12, 5)
		return 67;//4 3
	break;
	case 18630://(4,8) (12, 6)
		return 67;//4 3
	break;
	case 18631://(4,8) (12, 7)
		return 64;//4 0
	break;
	case 18632://(4,8) (12, 8)
		return 67;//4 3
	break;
	case 18633://(4,8) (12, 9)
		return 67;//4 3
	break;
	case 18634://(4,8) (12, 10)
		return 67;//4 3
	break;
	case 18635://(4,8) (12, 11)
		return 67;//4 3
	break;
	case 18636://(4,8) (12, 12)
		return 67;//4 3
	break;
	case 18637://(4,8) (12, 13)
		return 67;//4 3
	break;
	case 18638://(4,8) (12, 14)
		return 67;//4 3
	break;
	case 18639://(4,8) (12, 15)
		return 67;//4 3
	break;
	case 18640://(4,8) (13, 0)
		return 64;//4 0
	break;
	case 18641://(4,8) (13, 1)
		return 67;//4 3
	break;
	case 18642://(4,8) (13, 2)
		return 64;//4 0
	break;
	case 18643://(4,8) (13, 3)
		return 64;//4 0
	break;
	case 18644://(4,8) (13, 4)
		return 67;//4 3
	break;
	case 18645://(4,8) (13, 5)
		return 67;//4 3
	break;
	case 18646://(4,8) (13, 6)
		return 67;//4 3
	break;
	case 18647://(4,8) (13, 7)
		return 64;//4 0
	break;
	case 18648://(4,8) (13, 8)
		return 67;//4 3
	break;
	case 18649://(4,8) (13, 9)
		return 67;//4 3
	break;
	case 18650://(4,8) (13, 10)
		return 67;//4 3
	break;
	case 18651://(4,8) (13, 11)
		return 67;//4 3
	break;
	case 18652://(4,8) (13, 12)
		return 67;//4 3
	break;
	case 18653://(4,8) (13, 13)
		return 67;//4 3
	break;
	case 18654://(4,8) (13, 14)
		return 67;//4 3
	break;
	case 18655://(4,8) (13, 15)
		return 67;//4 3
	break;
	case 18656://(4,8) (14, 0)
		return 64;//4 0
	break;
	case 18657://(4,8) (14, 1)
		return 67;//4 3
	break;
	case 18658://(4,8) (14, 2)
		return 64;//4 0
	break;
	case 18659://(4,8) (14, 3)
		return 64;//4 0
	break;
	case 18660://(4,8) (14, 4)
		return 67;//4 3
	break;
	case 18661://(4,8) (14, 5)
		return 67;//4 3
	break;
	case 18662://(4,8) (14, 6)
		return 67;//4 3
	break;
	case 18663://(4,8) (14, 7)
		return 64;//4 0
	break;
	case 18664://(4,8) (14, 8)
		return 67;//4 3
	break;
	case 18665://(4,8) (14, 9)
		return 67;//4 3
	break;
	case 18666://(4,8) (14, 10)
		return 67;//4 3
	break;
	case 18667://(4,8) (14, 11)
		return 67;//4 3
	break;
	case 18668://(4,8) (14, 12)
		return 67;//4 3
	break;
	case 18669://(4,8) (14, 13)
		return 67;//4 3
	break;
	case 18670://(4,8) (14, 14)
		return 67;//4 3
	break;
	case 18671://(4,8) (14, 15)
		return 67;//4 3
	break;
	case 18672://(4,8) (15, 0)
		return 64;//4 0
	break;
	case 18673://(4,8) (15, 1)
		return 67;//4 3
	break;
	case 18674://(4,8) (15, 2)
		return 64;//4 0
	break;
	case 18675://(4,8) (15, 3)
		return 64;//4 0
	break;
	case 18676://(4,8) (15, 4)
		return 67;//4 3
	break;
	case 18677://(4,8) (15, 5)
		return 67;//4 3
	break;
	case 18678://(4,8) (15, 6)
		return 67;//4 3
	break;
	case 18679://(4,8) (15, 7)
		return 64;//4 0
	break;
	case 18680://(4,8) (15, 8)
		return 67;//4 3
	break;
	case 18681://(4,8) (15, 9)
		return 67;//4 3
	break;
	case 18682://(4,8) (15, 10)
		return 67;//4 3
	break;
	case 18683://(4,8) (15, 11)
		return 67;//4 3
	break;
	case 18684://(4,8) (15, 12)
		return 67;//4 3
	break;
	case 18685://(4,8) (15, 13)
		return 67;//4 3
	break;
	case 18686://(4,8) (15, 14)
		return 67;//4 3
	break;
	case 18687://(4,8) (15, 15)
		return 67;//4 3
	break;
	case 18688://(4,9) (0, 0)
		return 0;//0 0
	break;
	case 18689://(4,9) (0, 1)
		return 3;//0 3
	break;
	case 18690://(4,9) (0, 2)
		return 3;//0 3
	break;
	case 18691://(4,9) (0, 3)
		return 0;//0 0
	break;
	case 18692://(4,9) (0, 4)
		return 0;//0 0
	break;
	case 18693://(4,9) (0, 5)
		return 3;//0 3
	break;
	case 18694://(4,9) (0, 6)
		return 3;//0 3
	break;
	case 18695://(4,9) (0, 7)
		return 3;//0 3
	break;
	case 18696://(4,9) (0, 8)
		return 3;//0 3
	break;
	case 18697://(4,9) (0, 9)
		return 3;//0 3
	break;
	case 18698://(4,9) (0, 10)
		return 0;//0 0
	break;
	case 18699://(4,9) (0, 11)
		return 3;//0 3
	break;
	case 18700://(4,9) (0, 12)
		return 3;//0 3
	break;
	case 18701://(4,9) (0, 13)
		return 3;//0 3
	break;
	case 18702://(4,9) (0, 14)
		return 3;//0 3
	break;
	case 18703://(4,9) (0, 15)
		return 3;//0 3
	break;
	case 18704://(4,9) (1, 0)
		return 0;//0 0
	break;
	case 18705://(4,9) (1, 1)
		return 3;//0 3
	break;
	case 18706://(4,9) (1, 2)
		return 3;//0 3
	break;
	case 18707://(4,9) (1, 3)
		return 0;//0 0
	break;
	case 18708://(4,9) (1, 4)
		return 0;//0 0
	break;
	case 18709://(4,9) (1, 5)
		return 3;//0 3
	break;
	case 18710://(4,9) (1, 6)
		return 3;//0 3
	break;
	case 18711://(4,9) (1, 7)
		return 3;//0 3
	break;
	case 18712://(4,9) (1, 8)
		return 3;//0 3
	break;
	case 18713://(4,9) (1, 9)
		return 3;//0 3
	break;
	case 18714://(4,9) (1, 10)
		return 0;//0 0
	break;
	case 18715://(4,9) (1, 11)
		return 3;//0 3
	break;
	case 18716://(4,9) (1, 12)
		return 3;//0 3
	break;
	case 18717://(4,9) (1, 13)
		return 3;//0 3
	break;
	case 18718://(4,9) (1, 14)
		return 3;//0 3
	break;
	case 18719://(4,9) (1, 15)
		return 3;//0 3
	break;
	case 18720://(4,9) (2, 0)
		return 0;//0 0
	break;
	case 18721://(4,9) (2, 1)
		return 3;//0 3
	break;
	case 18722://(4,9) (2, 2)
		return 3;//0 3
	break;
	case 18723://(4,9) (2, 3)
		return 0;//0 0
	break;
	case 18724://(4,9) (2, 4)
		return 0;//0 0
	break;
	case 18725://(4,9) (2, 5)
		return 3;//0 3
	break;
	case 18726://(4,9) (2, 6)
		return 3;//0 3
	break;
	case 18727://(4,9) (2, 7)
		return 3;//0 3
	break;
	case 18728://(4,9) (2, 8)
		return 3;//0 3
	break;
	case 18729://(4,9) (2, 9)
		return 3;//0 3
	break;
	case 18730://(4,9) (2, 10)
		return 0;//0 0
	break;
	case 18731://(4,9) (2, 11)
		return 3;//0 3
	break;
	case 18732://(4,9) (2, 12)
		return 3;//0 3
	break;
	case 18733://(4,9) (2, 13)
		return 3;//0 3
	break;
	case 18734://(4,9) (2, 14)
		return 3;//0 3
	break;
	case 18735://(4,9) (2, 15)
		return 3;//0 3
	break;
	case 18736://(4,9) (3, 0)
		return 0;//0 0
	break;
	case 18737://(4,9) (3, 1)
		return 3;//0 3
	break;
	case 18738://(4,9) (3, 2)
		return 3;//0 3
	break;
	case 18739://(4,9) (3, 3)
		return 0;//0 0
	break;
	case 18740://(4,9) (3, 4)
		return 0;//0 0
	break;
	case 18741://(4,9) (3, 5)
		return 3;//0 3
	break;
	case 18742://(4,9) (3, 6)
		return 3;//0 3
	break;
	case 18743://(4,9) (3, 7)
		return 3;//0 3
	break;
	case 18744://(4,9) (3, 8)
		return 3;//0 3
	break;
	case 18745://(4,9) (3, 9)
		return 3;//0 3
	break;
		return 0;//0 0
	break;