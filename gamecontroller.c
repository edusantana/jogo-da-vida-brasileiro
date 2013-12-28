#include "gamecontroller.h"
#include <stdlib.h>

struct Jogador {
  int posicao;
  char* nome;
  DoencaHereditaria dh;
};

static struct Jogador *jogadores;
static int jogadores_qtde = 0;

int jogadores_quantidade(){
  return jogadores_qtde;
}

void cria_jogadores(int quantidade){
  jogadores_qtde = quantidade;
  jogadores = calloc(quantidade, sizeof(struct Jogador));

}

static int jogador_da_vez = -1;
int jogadorDaVez(){
  return jogador_da_vez;
}
void inicializa_jogo(){
  jogador_da_vez = 0;
}

int jogador_posicao(int jogador){
  return 0;
}

void nascimento(int jogador, char* nome,
  DoencaHereditaria dh){
  jogadores[jogador].nome = nome;
  jogadores[jogador].dh = dh;
}
char* getNome(int jogador){
  return   jogadores[jogador].nome;
}
DoencaHereditaria getDH(int jogador){
  return   jogadores[jogador].dh;
}

void setRoleta(int roleta){

}
void moveJogador(bool executaAcaoDaCasa){

}


