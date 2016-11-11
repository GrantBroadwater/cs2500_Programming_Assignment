CC=gcc
CFLAGS=-c

default: build

run:
	bin/a.out

build: bin/main.o bin/functions.o
	$(CC) bin/main.o bin/functions.o -o bin/a.out

test: bin/test.o bin/functions.o
	$(CC) bin/test.o bin/functions.o -o bin/a.out

bin/test.o:
	$(CC) $(CFLAGS) test.c -o bin/test.o

bin/main.o: main.c
	$(CC) $(CFLAGS) main.c -o bin/main.o

bin/functions.o: functions.c
	$(CC) $(CFLAGS) functions.c -o bin/functions.o

clean:
	rm bin/*
