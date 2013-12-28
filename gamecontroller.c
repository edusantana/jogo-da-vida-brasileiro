#include "gamecontroller.h"
#include <stdlib.h>


static struct Jogador *jogadores;
static int jogadores_qtde = 0;

void cria_jogadores(int quantidade){
  jogadores_qtde = quantidade;
  jogadores = calloc(quantidade, sizeof(Jogador));

}
void inicializa_jogo(){

}

int jogadores_quantidade(){
  return jogadores_qtde;
}
int jogador_posicao(int jogador){
  return 0;
}
