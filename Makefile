.PHONY: clean all

CFLAGS+= -Ofast -g -Wall -Wextra
LIBS=-lm -lpthread

all: main


main: database.o thread.o main.o config.o log.o case.o
	$(CC) $(CFLAGS) $^ -o $@ $(LIBS)

createdb: database.o createdb.o config.o case.o
	$(CC) $(CFLAGS) $^ -o $@ $(LIBS)

clean:
	rm -f main log.txt createdb *.o
