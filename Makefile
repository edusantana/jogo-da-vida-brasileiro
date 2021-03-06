CC=gcc
CFLAGS=-Wall -g -std=c1x

all: jdvb_test tabuleiro_test gamecontroller_test emocao_test casa_test

casa_test: casa_test.c gamecontroller.c tabuleiro.c
	$(CC) $(CFLAGS) casa_test.c gamecontroller.c tabuleiro.c -o casa_test

emocao_test: emocao_test.c gamecontroller.c tabuleiro.c
	$(CC) $(CFLAGS) emocao_test.c gamecontroller.c tabuleiro.c -o emocao_test

gamecontroller_test: gamecontroller_test.c gamecontroller.c tabuleiro.c
	$(CC) $(CFLAGS) gamecontroller_test.c gamecontroller.c tabuleiro.c -o gamecontroller_test

tabuleiro_test: tabuleiro_test.c tabuleiro.c
	$(CC) $(CFLAGS) tabuleiro_test.c tabuleiro.c -o tabuleiro_test

jdvb_test: jdvb_test.c jogo.c tabuleiro.c
	$(CC) $(CFLAGS) jdvb_test.c jogo.c tabuleiro.c -o jdvb_test

test:
	./emocao_test
	./gamecontroller_test
	./tabuleiro_test
	./jdvb_test
	./casa_test

clean:
	rm -rf jdvb_test tabuleiro_test gamecontroller_test emocao_test casa_test

