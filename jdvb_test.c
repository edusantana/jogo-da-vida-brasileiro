// jdvb_game_test.c
// See http://pt.slideshare.net/amritayan/test-driven-development-in-c

#include "jogo.h"
#include <stddef.h>
#include <assert.h>
#include <stdbool.h>


static void test_cria_jogadores(void){
  int QTDE_JOGADORES = 2; // quantidade de jogadores
  cria_jogadores(QTDE_JOGADORES);
  assert(get_quantidade_jogadores() == QTDE_JOGADORES
    && "test_cria_jogadores");
}

int main() {
  test_cria_jogadores();
}

