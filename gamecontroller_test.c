// jdvb_game_test.c
// See http://pt.slideshare.net/amritayan/test-driven-development-in-c

#include "gamecontroller.h"
#include "tabuleiro.h"
#include <stddef.h>
#include <assert.h>
#include <stdbool.h>


static int QUANTIDADE_JOGADORES = 3;

static void tearDown(){
  detroy_tabuleiro();
}

static void verifica_pre_condicao(){
  assert(get_tabuleiro() == NULL
    && "test_cria_tabuleiro / tabuleiro inicia null");
}

static void verifica_estado_inicial_jogadores(){
  assert(jogadores_quantidade() == QUANTIDADE_JOGADORES 
    && "Jogadores criados com sucesso");
  
  for (int i = 0; i==QUANTIDADE_JOGADORES; i++ ){
    // verifica que estão na posição inicial
    assert(jogador_posicao(i) == 0 && 
      "Jogadores estão na posição inicial");
  }
  
  assert(jogadorDaVez() == 0
    && "Jogador 0 é o primeiro");

}

static void test_prepara_jogo(void){
  verifica_pre_condicao();
  
  cria_tabuleiro();
  cria_jogadores(3);
  inicializa_jogo();
  
  verifica_estado_inicial_jogadores();

  tearDown();
}


int main() {
  test_prepara_jogo();
}

