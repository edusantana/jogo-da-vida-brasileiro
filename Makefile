CC=gcc
CFLAGS=-Wall -g -std=c1x

all: jdvb_test tabuleiro_test

tabuleiro_test: tabuleiro_test.c tabuleiro.c
	$(CC) $(CFLAGS) tabuleiro_test.c tabuleiro.c -o tabuleiro_test
	./tabuleiro_test

jdvb_test: jdvb_test.c jogo.c tabuleiro.c
	$(CC) $(CFLAGS) jdvb_test.c jogo.c tabuleiro.c -o jdvb_test
	./jdvb_test

clean:
	rm -rf jdvb_test tabuleiro_test

