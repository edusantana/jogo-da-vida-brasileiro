#include "gamecontroller.h"
#include <stdlib.h>

struct Jogador {
  int posicao;
  char* nome;
  DoencaHereditaria dh;
  Emocao emocao;
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

void proximoJogador(){
  jogador_da_vez++;
  jogador_da_vez%=jogadores_quantidade();
  
}

void inicializa_jogo(){
  jogador_da_vez = 0;
}


void inicializa_jogadores(bool usandoTabuleiro){
  for (int jogador=0; jogador < jogadores_quantidade();
     jogador++){
    // definindo emoção inicial
    jogadores[jogador].emocao = Esperanca;
  }
}


int jogador_posicao(int jogador){
  return jogadores[jogador].posicao;
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

static int roleta=-1;
void setRoleta(int roletaValor){
  roleta = roletaValor;
}

void moveJogador(bool executaAcaoDaCasa){
  jogadores[jogadorDaVez()].posicao += roleta;
  proximoJogador();
}

Emocao jogador_emocao(int jogador){
  return jogadores[jogador].emocao;
}

Emocao emocaoAtual(){
  return jogador_emocao(jogadorDaVez());
}

void incrementaEmocao(){
  Emocao novaEmocao;
  switch (emocaoAtual()){
    case  Depressao:
      novaEmocao = Raiva;
      break;
    case  Raiva:
      novaEmocao = Preocupacao;
      break;
    case  Preocupacao:
      novaEmocao = Irritacao;
      break;
    case  Irritacao:
      novaEmocao = Esperanca;
      break;
    case  Esperanca:
      novaEmocao = Felicidade;
      break;
    case  Felicidade:
      novaEmocao = Paixao;
      break;
    case  Paixao:
      novaEmocao = Amor;
      break;
    case  Amor:
      novaEmocao = Amor;
    break;
  }
  jogadores[jogadorDaVez()].emocao = novaEmocao;
}
void decrementaEmocao(){
  Emocao novaEmocao;
  switch (emocaoAtual()){
    case  Depressao:
      novaEmocao = Depressao;
      break;
    case  Raiva:
      novaEmocao = Depressao;
      break;
    case  Preocupacao:
      novaEmocao = Raiva;
      break;
    case  Irritacao:
      novaEmocao = Preocupacao;
      break;
    case  Esperanca:
      novaEmocao = Irritacao;
      break;
    case  Felicidade:
      novaEmocao = Esperanca;
      break;
    case  Paixao:
      novaEmocao = Felicidade;
      break;
    case  Amor:
      novaEmocao = Paixao;
    break;
  }
  jogadores[jogadorDaVez()].emocao = novaEmocao;
}
