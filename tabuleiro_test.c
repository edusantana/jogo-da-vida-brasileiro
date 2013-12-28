// jdvb_game_test.c
// See http://pt.slideshare.net/amritayan/test-driven-development-in-c

#include "tabuleiro.h"
#include <stddef.h>
#include <assert.h>
#include <stdbool.h>


static void test_criacao_tabuleiro(void){
  detroy_tabuleiro();
  assert(get_tabuleiro() == NULL
    && "test_cria_tabuleiro / tabuleiro inicia null");
  
  cria_tabuleiro();
  assert(get_tabuleiro() != NULL
    && "test_cria_tabuleiro");

}

int main() {
  test_criacao_tabuleiro();
  test_criacao_tabuleiro();
}

