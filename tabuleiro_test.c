// jdvb_game_test.c
// See http://pt.slideshare.net/amritayan/test-driven-development-in-c

#include "tabuleiro.h"
#include <stddef.h>
#include <assert.h>
#include <stdbool.h>


static void test_cria_tabuleiro(void){
  cria_tabuleiro();
  assert(get_tabuleiro() != NULL
    && "test_cria_tabuleiro");
}

int main() {
  test_cria_tabuleiro();
}

