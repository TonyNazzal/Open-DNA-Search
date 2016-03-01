main: clean 
	gcc -Ofast database.c thread.c main.c config.c log.c case.c -lm -lpthread
case:
	gcc -c case.c
createdb:
	gcc -Ofast database.c createdb.c config.c case.c -o createdb -lm -lpthread 
clean:
	touch main
	touch createdb
	touch log.txt
	rm createdb
	rm main
	rm log.txt
