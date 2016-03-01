```
Identify Organisms from a Stream of DNA Sequences
Copyright (C) 2016 Tony E. Nazzal

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software Foundation,
Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA

How to contact the author by electronic mail: tony.e.nazzal@gmail.com

```

![alt text](https://github.com/TonyNazzal/Open-DNA-Search/wiki/adenine.gif) ![alt text](https://github.com/TonyNazzal/Open-DNA-Search/wiki/cytosine.gif) ![alt text](https://github.com/TonyNazzal/Open-DNA-Search/wiki/guanine.gif) ![alt text](https://github.com/TonyNazzal/Open-DNA-Search/wiki/thymine.gif)

![alt text](https://github.com/TonyNazzal/Open-DNA-Search/wiki/uridine.gif)![alt text](https://github.com/TonyNazzal/Open-DNA-Search/wiki/ketone.gif)![alt text](https://github.com/TonyNazzal/Open-DNA-Search/wiki/purine.gif)![alt text](https://github.com/TonyNazzal/Open-DNA-Search/wiki/pyrimidine.gif)

###Example:

```

$ time ./main GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA&
$ tail -f log.txt 
Mon Feb 18 14:58:54 2013 : Opened index database indexdb
Mon Feb 18 14:59:25 2013 : Index database line count is 16767112
Mon Feb 18 14:59:29 2013 : arguments 1: GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA
Mon Feb 18 14:59:29 2013 : Opened main database outputdb for thread 0
Mon Feb 18 14:59:29 2013 : Opened main database outputdb for thread 1
Mon Feb 18 14:59:29 2013 : Opened main database outputdb for thread 2
Mon Feb 18 14:59:29 2013 : Opened main database outputdb for thread 3
Mon Feb 18 14:59:29 2013 : Opened main database outputdb for thread 4
Mon Feb 18 14:59:29 2013 : Opened main database outputdb for thread 5
Mon Feb 18 14:59:29 2013 : Opened main database outputdb for thread 6
Mon Feb 18 14:59:29 2013 : Opened main database outputdb for thread 7
Mon Feb 18 14:59:33 2013 : 16767 completion = 0.01  thread count = 7	list size = 0

...
```
```
Mon Feb 18 14:59:58 2013 : MATCH 0.9375:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:527239145:283:>gi|18073263|emb|AJ252744.1| Cistopus indicus mitochondrial 16S rRNA gene (partial)
Mon Feb 18 14:59:58 2013 : MATCH 0.9162:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:527239429:255:>gi|18073264|emb|AJ252745.1| Hapalochlaena lunulata mitochondrial 16S rRNA gene (partial)
Mon Feb 18 14:59:58 2013 : MATCH 0.9375:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:527644778:255:>gi|18076176|emb|AJ252746.1| Octopus aegina mitochondrial 16S rRNA gene (partial)
Mon Feb 18 14:59:58 2013 : MATCH 0.9000:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:527645034:256:>gi|18076177|emb|AJ252747.1| Octopus areolatus mitochondrial 16S rRNA gene (partial)
Mon Feb 18 14:59:58 2013 : MATCH 0.9625:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:527645291:256:>gi|18076178|emb|AJ252748.1| Octopus bimaculoides mitochondrial 16S rRNA gene (partial)
Mon Feb 18 14:59:58 2013 : MATCH 0.9250:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:527646338:256:>gi|18076182|emb|AJ252752.1| Octopus mototi mitochondrial 16S rRNA gene (partial)
Mon Feb 18 14:59:58 2013 : MATCH 0.9250:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:527647411:253:>gi|18076186|emb|AJ252756.1| Octopus sp. 1 mitochondrial 16S rRNA gene (partial)
Mon Feb 18 14:59:58 2013 : MATCH 0.9350:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:527648208:272:>gi|18076189|emb|AJ252759.1| Octopus sp. 4 mitochondrial 16S rRNA gene (partial)
Mon Feb 18 14:59:58 2013 : MATCH 0.9500:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:527649803:261:>gi|18076195|emb|AJ252770.1| Octopus vulgaris Venezuela mitochondrial 16S rRNA gene (partial)
Mon Feb 18 14:59:58 2013 : MATCH 0.9500:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:527650065:263:>gi|18076196|emb|AJ252771.1| Octopus vulgaris Taiwan mitochondrial 16S rRNA gene (partial)
Mon Feb 18 14:59:58 2013 : MATCH 0.9500:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:527650329:262:>gi|18076197|emb|AJ252772.1| Octopus vulgaris South Africa mitochondrial 16S rRNA gene (partial)
Mon Feb 18 14:59:58 2013 : MATCH 0.9500:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:527650592:262:>gi|18076198|emb|AJ252773.1| Octopus vulgaris Tenerife mitochondrial 16S rRNA gene (partial)
Mon Feb 18 14:59:58 2013 : MATCH 0.9500:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:527651639:264:>gi|18076203|emb|AJ252778.1| Octopus vulgaris Banyuls5 mitochondrial 16S rRNA gene (partial)
Mon Feb 18 14:59:58 2013 : MATCH 0.9450:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:527766936:254:>gi|18076682|emb|AJ311108.1| Octopus kagoshimensis partial mitochondrial partial 16S rRNA gene
Mon Feb 18 14:59:58 2013 : MATCH 1.0000:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:527767744:266:>gi|18076685|emb|AJ311111.1| Octopus wolfi partial mitochondrial partial 16S rRNA gene
Mon Feb 18 14:59:58 2013 : MATCH 0.9375:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:527768528:254:>gi|18076688|emb|AJ311114.1| Octopus sp. HBH-7 partial mitochondrial partial 16S rRNA gene
Mon Feb 18 14:59:58 2013 : MATCH 0.9125:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:527768783:270:>gi|18076689|emb|AJ311115.1| Octopus sp. HBH-B partial mitochondrial partial 16S rRNA gene
Mon Feb 18 15:00:42 2013 : MATCH 0.9500:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:1624374096:265:>gi|83306178|emb|AJ616308.1| Octopus vulgaris mitochondrial partial 16S rRNA gene, from Brazil
Mon Feb 18 15:01:12 2013 : MATCH 0.9500:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:2151731701:255:>gi|14161380|gb|AF369111.1| Octopus ocellatus 16S ribosomal RNA gene, partial sequence; mitochondrial gene for mitochondrial productgi|328963253|gb|HQ846023.1| Amphioctopus fangsiao isolate L13 16S ribosomal RNA gene, partial sequence; mitochondrialgi|328963255|gb|HQ846025.1| Amphioctopus fangsiao isolate M9 16S ribosomal RNA gene, partial sequence; mitochondrialgi|328963264|gb|HQ846034.1| Amphioctopus fangsiao isolate P1 16S ribosomal RNA gene, partial sequence; mitochondrialgi|328963292|gb|HQ846062.1| Amphioctopus fangsiao isolate L21 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:01:12 2013 : MATCH 0.9375:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:2151731957:255:>gi|14161381|gb|AF369112.1|AF369112 Octopus variabilis 16S ribosomal RNA gene, partial sequence; mitochondrial gene for mitochondrial product
Mon Feb 18 15:03:28 2013 : MATCH 0.9500:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:4929505488:275:>gi|62005859|dbj|AB191104.1| Octopus vulgaris gene for 16S rRNA, partial sequence
Mon Feb 18 15:03:28 2013 : MATCH 0.6125:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:4929505764:258:>gi|62005860|dbj|AB191105.1| Amphioctopus fangsiao gene for 16S rRNA, partial sequence
Mon Feb 18 15:03:28 2013 : MATCH 0.9625:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:4929506023:254:>gi|62005861|dbj|AB191106.1| Octopus parvus gene for 16S rRNA, partial sequence
Mon Feb 18 15:03:28 2013 : MATCH 0.7625:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:4929506804:254:>gi|62005864|dbj|AB191109.1| Octopus areolatus gene for 16S rRNA, partial sequence
Mon Feb 18 15:03:28 2013 : MATCH 0.9500:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:4929507341:256:>gi|62005866|dbj|AB191111.1| Amphioctopus aegina gene for 16S rRNA, partial sequencegi|328963277|gb|HQ846047.1| Amphioctopus marginatus isolate TS1 16S ribosomal RNA gene, partial sequence; mitochondrialgi|328963279|gb|HQ846049.1| Amphioctopus marginatus isolate TS3 16S ribosomal RNA gene, partial sequence; mitochondrialgi|328963280|gb|HQ846050.1| Amphioctopus marginatus isolate TS4 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:03:28 2013 : MATCH 0.9625:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:4929507871:253:>gi|62005868|dbj|AB191113.1| Hapalochlaena lunulata gene for 16S rRNA, partial sequence
Mon Feb 18 15:03:32 2013 : MATCH 0.9375:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:5008960391:258:>gi|66947435|emb|AJ616306.1| Octopus vulgaris mitochondrial partial 16S rRNA gene, from South Africa
Mon Feb 18 15:04:52 2013 : MATCH 0.9250:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:6673050519:254:>gi|45510938|gb|AY545107.1| Hapalochlaena maculosa 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:06:12 2013 : MATCH 0.9500:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:8261281288:264:>gi|116829852|gb|EF016336.1| Octopus vulgaris 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:11:21 2013 : MATCH 0.9375:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:14350999006:253:>gi|268308309|gb|FJ800371.1| Octopus aegina 16S ribosomal RNA gene, partial sequence; mitochondrialgi|328963276|gb|HQ846046.1| Amphioctopus aegina isolate T8 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:12:15 2013 : MATCH 0.6000:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:15486482358:267:>gi|283777468|gb|GQ900704.1| Octopus mercatoris isolate OctMerc40 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:12:15 2013 : MATCH 0.9500:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:15486483442:258:>gi|283777472|gb|GQ900708.1| Amphioctopus arenicola isolate AmphAren74 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:12:15 2013 : MATCH 0.9625:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:15486483701:256:>gi|283777473|gb|GQ900709.1| Amphioctopus marginatus isolate AmphMarg29 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:12:15 2013 : MATCH 0.9250:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:15486483958:255:>gi|283777474|gb|GQ900710.1| Hapalochlaena lunulata isolate HapLunu32 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:12:15 2013 : MATCH 0.9500:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:15486484214:257:>gi|283777475|gb|GQ900711.1| Hapalochlaena fasciata isolate HapFasc36 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:12:15 2013 : MATCH 0.9625:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:15486484910:257:>gi|283777478|gb|GQ900714.1| Octopus bimaculoides isolate OctBima07 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:12:15 2013 : MATCH 0.9125:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:15486485427:274:>gi|283777480|gb|GQ900716.1| Abdopus sp. 1 CLH-2009 isolate BigSuck87 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:12:15 2013 : MATCH 0.9125:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:15486485702:262:>gi|283777481|gb|GQ900717.1| Abdopus aculeatus isolate AbdAcul52 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:12:15 2013 : MATCH 0.9250:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:15486485965:261:>gi|283777482|gb|GQ900718.1| Abdopus sp. 'ward' isolate AbdBrac22 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:15:39 2013 : MATCH 0.9500:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:19619547301:264:>gi|328963251|gb|HQ846021.1| Octopus vulgaris isolate K1 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:15:39 2013 : MATCH 0.9375:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:19619547566:257:>gi|328963252|gb|HQ846022.1| Cistopus sp. LD-2011 isolate L6 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:15:39 2013 : MATCH 0.9500:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:19619549182:259:>gi|328963260|gb|HQ846030.1| Amphioctopus kagoshimensis isolate OK1 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:15:39 2013 : MATCH 0.9500:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:19619549442:258:>gi|328963262|gb|HQ846032.1| Amphioctopus kagoshimensis isolate OK3 16S ribosomal RNA gene, partial sequence; mitochondrialgi|328963263|gb|HQ846033.1| Amphioctopus kagoshimensis isolate OK4 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:15:39 2013 : MATCH 0.9500:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:19619549701:258:>gi|328963261|gb|HQ846031.1| Amphioctopus kagoshimensis isolate OK2 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:15:39 2013 : MATCH 0.9375:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:19619549960:255:>gi|328963265|gb|HQ846035.1| Amphioctopus fangsiao isolate P2 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:15:39 2013 : MATCH 0.9375:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:19619550216:257:>gi|328963267|gb|HQ846037.1| Cistopus sp. LD-2011 isolate P4 16S ribosomal RNA gene, partial sequence; mitochondrialgi|328963268|gb|HQ846038.1| Cistopus sp. LD-2011 isolate P5 16S ribosomal RNA gene, partial sequence; mitochondrialgi|328963269|gb|HQ846039.1| Cistopus sp. LD-2011 isolate P7 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:15:39 2013 : MATCH 0.9375:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:19619550474:257:>gi|328963266|gb|HQ846036.1| Cistopus sp. LD-2011 isolate P3 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:15:39 2013 : MATCH 0.9375:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:19619550988:253:>gi|328963272|gb|HQ846042.1| Amphioctopus aegina isolate T3 16S ribosomal RNA gene, partial sequence; mitochondrialgi|328963273|gb|HQ846043.1| Amphioctopus aegina isolate T5 16S ribosomal RNA gene, partial sequence; mitochondrialgi|328963275|gb|HQ846045.1| Amphioctopus aegina isolate T7 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:15:39 2013 : MATCH 0.9375:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:19619551242:253:>gi|328963271|gb|HQ846041.1| Amphioctopus aegina isolate T1 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:15:39 2013 : MATCH 0.9500:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:19619551744:236:>gi|328963278|gb|HQ846048.1| Amphioctopus marginatus isolate TS2 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:15:39 2013 : MATCH 0.9500:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:19619554029:265:>gi|328963291|gb|HQ846061.1| Octopus vulgaris isolate K3 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:15:39 2013 : MATCH 0.9625:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:19619554295:253:>gi|328963294|gb|HQ846064.1| Amphioctopus ovulum isolate SP4-5 16S ribosomal RNA gene, partial sequence; mitochondrialgi|328963295|gb|HQ846065.1| Amphioctopus ovulum isolate SP4-3 16S ribosomal RNA gene, partial sequence; mitochondrialgi|328963296|gb|HQ846066.1| Amphioctopus ovulum isolate SP4-7 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:15:39 2013 : MATCH 0.9625:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:19619554549:253:>gi|328963293|gb|HQ846063.1| Amphioctopus ovulum isolate SP4-4 16S ribosomal RNA gene, partial sequence; mitochondrial
Mon Feb 18 15:15:39 2013 : MATCH 0.9250:GTCTCTTTGAGTGTTTTTAATAGAGAGTTGGGCCTGCTCAGTGATTAATATTTAACAGCTGCGGTATTATAACTGTACTA:19619554803:260:>gi|328963297|gb|HQ846067.1| Octopus sp. 2 LD-2011 isolate sp5 16S ribosomal RNA gene, partial sequence; mitochondrial
```
```
...

Mon Feb 18 15:17:16 2013 : 16666398 completion = 1.00	thread count = 7	list size = 54
Mon Feb 18 15:17:16 2013 : 527239145:283:>gi|18073263|emb|AJ252744.1| Cistopus indicus mitochondrial 16S rRNA gene (partial)

Mon Feb 18 15:17:16 2013 : 527239429:255:>gi|18073264|emb|AJ252745.1| Hapalochlaena lunulata mitochondrial 16S rRNA gene (partial)

Mon Feb 18 15:17:16 2013 : 527644778:255:>gi|18076176|emb|AJ252746.1| Octopus aegina mitochondrial 16S rRNA gene (partial)

Mon Feb 18 15:17:16 2013 : 527645034:256:>gi|18076177|emb|AJ252747.1| Octopus areolatus mitochondrial 16S rRNA gene (partial)

Mon Feb 18 15:17:16 2013 : 527645291:256:>gi|18076178|emb|AJ252748.1| Octopus bimaculoides mitochondrial 16S rRNA gene (partial)

Mon Feb 18 15:17:16 2013 : 527646338:256:>gi|18076182|emb|AJ252752.1| Octopus mototi mitochondrial 16S rRNA gene (partial)

Mon Feb 18 15:17:16 2013 : 527647411:253:>gi|18076186|emb|AJ252756.1| Octopus sp. 1 mitochondrial 16S rRNA gene (partial)

Mon Feb 18 15:17:16 2013 : 527648208:272:>gi|18076189|emb|AJ252759.1| Octopus sp. 4 mitochondrial 16S rRNA gene (partial)

Mon Feb 18 15:17:16 2013 : 527649803:261:>gi|18076195|emb|AJ252770.1| Octopus vulgaris Venezuela mitochondrial 16S rRNA gene (partial)

Mon Feb 18 15:17:16 2013 : 527650065:263:>gi|18076196|emb|AJ252771.1| Octopus vulgaris Taiwan mitochondrial 16S rRNA gene (partial)

Mon Feb 18 15:17:16 2013 : 527650329:262:>gi|18076197|emb|AJ252772.1| Octopus vulgaris South Africa mitochondrial 16S rRNA gene (partial)

Mon Feb 18 15:17:16 2013 : 527650592:262:>gi|18076198|emb|AJ252773.1| Octopus vulgaris Tenerife mitochondrial 16S rRNA gene (partial)

Mon Feb 18 15:17:16 2013 : 527651639:264:>gi|18076203|emb|AJ252778.1| Octopus vulgaris Banyuls5 mitochondrial 16S rRNA gene (partial)

Mon Feb 18 15:17:16 2013 : 527766936:254:>gi|18076682|emb|AJ311108.1| Octopus kagoshimensis partial mitochondrial partial 16S rRNA gene

Mon Feb 18 15:17:16 2013 : 527767744:266:>gi|18076685|emb|AJ311111.1| Octopus wolfi partial mitochondrial partial 16S rRNA gene

Mon Feb 18 15:17:16 2013 : 527768528:254:>gi|18076688|emb|AJ311114.1| Octopus sp. HBH-7 partial mitochondrial partial 16S rRNA gene

Mon Feb 18 15:17:16 2013 : 527768783:270:>gi|18076689|emb|AJ311115.1| Octopus sp. HBH-B partial mitochondrial partial 16S rRNA gene

Mon Feb 18 15:17:16 2013 : 1624374096:265:>gi|83306178|emb|AJ616308.1| Octopus vulgaris mitochondrial partial 16S rRNA gene, from Brazil

Mon Feb 18 15:17:16 2013 : 2151731701:255:>gi|14161380|gb|AF369111.1| Octopus ocellatus 16S ribosomal RNA gene, partial sequence; mitochondrial gene for mitochondrial productgi|328963253|gb|HQ846023.1| Amphioctopus fangsiao isolate L13 16S ribosomal RNA gene, partial sequence; mitochondrialgi|328963255|gb|HQ846025.1| Amphioctopus fangsiao isolate M9 16S ribosomal RNA gene, partial sequence; mitochondrialgi|328963264|gb|HQ846034.1| Amphioctopus fangsiao isolate P1 16S ribosomal RNA gene, partial sequence; mitochondrialgi|328963292|gb|HQ846062.1| Amphioctopus fangsiao isolate L21 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 2151731957:255:>gi|14161381|gb|AF369112.1|AF369112 Octopus variabilis 16S ribosomal RNA gene, partial sequence; mitochondrial gene for mitochondrial product

Mon Feb 18 15:17:16 2013 : 4929505488:275:>gi|62005859|dbj|AB191104.1| Octopus vulgaris gene for 16S rRNA, partial sequence

Mon Feb 18 15:17:16 2013 : 4929505764:258:>gi|62005860|dbj|AB191105.1| Amphioctopus fangsiao gene for 16S rRNA, partial sequence

Mon Feb 18 15:17:16 2013 : 4929506023:254:>gi|62005861|dbj|AB191106.1| Octopus parvus gene for 16S rRNA, partial sequence

Mon Feb 18 15:17:16 2013 : 4929506804:254:>gi|62005864|dbj|AB191109.1| Octopus areolatus gene for 16S rRNA, partial sequence

Mon Feb 18 15:17:16 2013 : 4929507341:256:>gi|62005866|dbj|AB191111.1| Amphioctopus aegina gene for 16S rRNA, partial sequencegi|328963277|gb|HQ846047.1| Amphioctopus marginatus isolate TS1 16S ribosomal RNA gene, partial sequence; mitochondrialgi|328963279|gb|HQ846049.1| Amphioctopus marginatus isolate TS3 16S ribosomal RNA gene, partial sequence; mitochondrialgi|328963280|gb|HQ846050.1| Amphioctopus marginatus isolate TS4 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 4929507871:253:>gi|62005868|dbj|AB191113.1| Hapalochlaena lunulata gene for 16S rRNA, partial sequence

Mon Feb 18 15:17:16 2013 : 5008960391:258:>gi|66947435|emb|AJ616306.1| Octopus vulgaris mitochondrial partial 16S rRNA gene, from South Africa

Mon Feb 18 15:17:16 2013 : 6673050519:254:>gi|45510938|gb|AY545107.1| Hapalochlaena maculosa 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 8261281288:264:>gi|116829852|gb|EF016336.1| Octopus vulgaris 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 14350999006:253:>gi|268308309|gb|FJ800371.1| Octopus aegina 16S ribosomal RNA gene, partial sequence; mitochondrialgi|328963276|gb|HQ846046.1| Amphioctopus aegina isolate T8 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 15486482358:267:>gi|283777468|gb|GQ900704.1| Octopus mercatoris isolate OctMerc40 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 15486483442:258:>gi|283777472|gb|GQ900708.1| Amphioctopus arenicola isolate AmphAren74 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 15486483701:256:>gi|283777473|gb|GQ900709.1| Amphioctopus marginatus isolate AmphMarg29 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 15486483958:255:>gi|283777474|gb|GQ900710.1| Hapalochlaena lunulata isolate HapLunu32 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 15486484214:257:>gi|283777475|gb|GQ900711.1| Hapalochlaena fasciata isolate HapFasc36 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 15486484910:257:>gi|283777478|gb|GQ900714.1| Octopus bimaculoides isolate OctBima07 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 15486485427:274:>gi|283777480|gb|GQ900716.1| Abdopus sp. 1 CLH-2009 isolate BigSuck87 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 15486485702:262:>gi|283777481|gb|GQ900717.1| Abdopus aculeatus isolate AbdAcul52 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 15486485965:261:>gi|283777482|gb|GQ900718.1| Abdopus sp. 'ward' isolate AbdBrac22 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 19619547301:264:>gi|328963251|gb|HQ846021.1| Octopus vulgaris isolate K1 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 19619547566:257:>gi|328963252|gb|HQ846022.1| Cistopus sp. LD-2011 isolate L6 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 19619549182:259:>gi|328963260|gb|HQ846030.1| Amphioctopus kagoshimensis isolate OK1 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 19619549442:258:>gi|328963262|gb|HQ846032.1| Amphioctopus kagoshimensis isolate OK3 16S ribosomal RNA gene, partial sequence; mitochondrialgi|328963263|gb|HQ846033.1| Amphioctopus kagoshimensis isolate OK4 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 19619549701:258:>gi|328963261|gb|HQ846031.1| Amphioctopus kagoshimensis isolate OK2 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 19619549960:255:>gi|328963265|gb|HQ846035.1| Amphioctopus fangsiao isolate P2 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 19619550216:257:>gi|328963267|gb|HQ846037.1| Cistopus sp. LD-2011 isolate P4 16S ribosomal RNA gene, partial sequence; mitochondrialgi|328963268|gb|HQ846038.1| Cistopus sp. LD-2011 isolate P5 16S ribosomal RNA gene, partial sequence; mitochondrialgi|328963269|gb|HQ846039.1| Cistopus sp. LD-2011 isolate P7 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 19619550474:257:>gi|328963266|gb|HQ846036.1| Cistopus sp. LD-2011 isolate P3 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 19619550988:253:>gi|328963272|gb|HQ846042.1| Amphioctopus aegina isolate T3 16S ribosomal RNA gene, partial sequence; mitochondrialgi|328963273|gb|HQ846043.1| Amphioctopus aegina isolate T5 16S ribosomal RNA gene, partial sequence; mitochondrialgi|328963275|gb|HQ846045.1| Amphioctopus aegina isolate T7 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 19619551242:253:>gi|328963271|gb|HQ846041.1| Amphioctopus aegina isolate T1 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 19619551744:236:>gi|328963278|gb|HQ846048.1| Amphioctopus marginatus isolate TS2 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 19619554029:265:>gi|328963291|gb|HQ846061.1| Octopus vulgaris isolate K3 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 19619554295:253:>gi|328963294|gb|HQ846064.1| Amphioctopus ovulum isolate SP4-5 16S ribosomal RNA gene, partial sequence; mitochondrialgi|328963295|gb|HQ846065.1| Amphioctopus ovulum isolate SP4-3 16S ribosomal RNA gene, partial sequence; mitochondrialgi|328963296|gb|HQ846066.1| Amphioctopus ovulum isolate SP4-7 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 19619554549:253:>gi|328963293|gb|HQ846063.1| Amphioctopus ovulum isolate SP4-4 16S ribosomal RNA gene, partial sequence; mitochondrial

Mon Feb 18 15:17:16 2013 : 19619554803:260:>gi|328963297|gb|HQ846067.1| Octopus sp. 2 LD-2011 isolate sp5 16S ribosomal RNA gene, partial sequence; mitochondrial


real	15m56.159s
user	122m39.316s
sys	0m44.983s


$ls -lhu ../nt
-rwxr-xr-x 1 tony tony 43G Feb 18 14:43 ../nt
```
