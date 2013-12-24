CC=gcc
CFLAGS=-Wall -g -std=c1x

all: jdvb jdvb_test

jdvb_test: jdvb_test.c jogo.c
	$(CC) $(CFLAGS) jdvb_test.c jogo.c -o jdvb_test

jogo.o: jogo.c jogo.h
	$(CC) $(CFLAGS) -c jogo.c

clean:
	rm -rf jdvb jdvb_test jogo.o jdvb.o

