CC=gcc
CFLAGS=-c

default: build

build: bin/main.o
	$(CC) bin/main.o -o bin/a.out

bin/main.o: main.c
	$(CC) $(CFLAGS) main.c -o bin/main.o








