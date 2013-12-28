#include "gamecontroller.h"
#include <stdlib.h>


static struct Jogador *jogadores;
static int jogadores_qtde = 0;

void cria_jogadores(int quantidade){
  jogadores_qtde = quantidade;
  jogadores = calloc(quantidade, sizeof(Jogador));

}

static int jogador_da_vez = -1;
int jogadorDaVez(){
  return jogador_da_vez;
}
void inicializa_jogo(){
  jogador_da_vez = 0;
}

int jogadores_quantidade(){
  return jogadores_qtde;
}
int jogador_posicao(int jogador){
  return 0;
}

void nascimento(int jogador, char* nome,
  DoencaHereditaria dh){

}
char* getNome(int jogador){
  return NULL;
}
DoencaHereditaria getDH(int jogador){
  return NenhumaDoenca;
}
