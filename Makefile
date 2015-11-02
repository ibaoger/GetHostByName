
CC=gcc
LD=ld
FLAGS=-g -Wall -m32
LDFLAGS=-g -Wall -m32

all: main

main: main.o gethostbyname.o
	$(CC) $(FLAGS) -o main main.o gethostbyname.o

main.o: main.c gethostbyname.h
	$(CC) $(FLAGS) -c main.c

gethostbyname.o: gethostbyname.c gethostbyname.h
	$(CC) $(FLAGS) -c gethostbyname.c

clean:
	rm -rf *.o main
