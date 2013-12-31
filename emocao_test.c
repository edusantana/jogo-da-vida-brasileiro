// jdvb_game_test.c
// See http://pt.slideshare.net/amritayan/test-driven-development-in-c

#include "gamecontroller.h"
#include <stddef.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>


static int QUANTIDADE_JOGADORES = 3;
bool USASANDO_TABULEIRO = false;
Emocao EMOCAO_INICIAL = Esperanca;

static void verificaEmocaoInicialDosJogadores(){
  for (int i=0; i < QUANTIDADE_JOGADORES; i++){
    assert(jogador_emocao(i) == EMOCAO_INICIAL &&
      "Emoção inicial dos jogadores é Esperanca");
  }
}

static void verificaEmocaoAtual(Emocao emocao){
  assert(emocaoAtual() == emocao &&
    "Emoção esperada para o jogador da vez");
}

static void  incrementaEmocao_e_verifica(Emocao emocao){
  incrementaEmocao();
  verificaEmocaoAtual(emocao);
}

static void test_incremente_decremento_emocional(void){
  
  cria_jogadores(QUANTIDADE_JOGADORES);
  inicializa_jogadores(USASANDO_TABULEIRO);

  verificaEmocaoInicialDosJogadores();
  
  decrementaEmocao();
  decrementaEmocao();
  decrementaEmocao();
  decrementaEmocao();
  verificaEmocaoAtual(Depressao);

  // Na pior emoção, quando decrementa,
  // permanece a mesma;
  decrementaEmocao();
  verificaEmocaoAtual(Depressao);

  incrementaEmocao();
  verificaEmocaoAtual(Raiva);

  incrementaEmocao_e_verifica(Preocupacao);
  incrementaEmocao_e_verifica(Irritacao);
  incrementaEmocao_e_verifica(Esperanca);
  incrementaEmocao_e_verifica(Felicidade);
  incrementaEmocao_e_verifica(Paixao);
  incrementaEmocao_e_verifica(Amor);
}


int main() {
  test_incremente_decremento_emocional();
}

