// jdvb_game_test.c
// See http://pt.slideshare.net/amritayan/test-driven-development-in-c

#include "gamecontroller.h"
#include "tabuleiro.h"
#include <stddef.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>


static int QUANTIDADE_JOGADORES = 3;

static void tearDown(){
  detroy_tabuleiro();
}

static void verifica_pre_condicao(){
  assert(get_tabuleiro() == NULL
    && "test_cria_tabuleiro / tabuleiro inicia null");
}

static void verifica_estado_inicial_do_jogo(){
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

void verifica_nascimento(int jogador, char* nome, DoencaHereditaria dh){
  assert(getDH(jogador) == dh &&
    "Doença foi registrada");
  assert(strcmp(nome, getNome(jogador)) == 0 &&
    "Nome do jogador foi registrado");

}

void verificaJogadorNaCasa(int jogador, int posicao){
    assert(jogador_posicao(jogador) == posicao && 
      "Jogador andou");
}

static void test_prepara_jogo(void){
  verifica_pre_condicao();
  
  cria_tabuleiro();
  cria_jogadores(QUANTIDADE_JOGADORES);
  inicializa_jogo();
  
  verifica_estado_inicial_do_jogo();
  
  nascimento(0,"João", NenhumaDoenca);
  nascimento(1,"Maria", Hipertensao);
  nascimento(2,"Roberto", Diabetes);

  verifica_nascimento(0, "João", NenhumaDoenca);
  verifica_nascimento(1, "Maria", Hipertensao);
  verifica_nascimento(2, "Roberto", Diabetes);

  bool executaAcaoDaCasa = false;
  setRoleta(3);
  moveJogador(executaAcaoDaCasa);
  setRoleta(2);
  moveJogador(executaAcaoDaCasa);
  setRoleta(1);
  moveJogador(executaAcaoDaCasa);

  verificaJogadorNaCasa(0, 3);
  verificaJogadorNaCasa(1, 2);
  verificaJogadorNaCasa(2, 1);

  tearDown();
}


int main() {
  test_prepara_jogo();
}

