// jdvb_game_test.c
// See http://pt.slideshare.net/amritayan/test-driven-development-in-c

#include "tabuleiro.h"
#include <stddef.h>
#include <assert.h>
#include <stdbool.h>


static bool casas_criadas = false;

static void test_cria_tabuleiro(void){
  casas_criadas = false;
  
  inline void criador_de_casas(){casas_criadas=true;}
  
  cria_tabuleiro(&criador_de_casas);
  assert(get_tabuleiro() != NULL
    && "test_cria_tabuleiro");
  assert(casas_criadas && "test_cria_tabuleiro / casas_criadas");

}

static void test_cria_casas(){
  Tabuleiro t;
  t.casas[0] = NULL;
  
  cria_casas(&t);
  
  assert(t.casas[0] != NULL
    && "test_cria_casas");

}

int main() {
  test_cria_tabuleiro();
  test_cria_casas();
}

