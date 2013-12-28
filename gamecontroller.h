#ifndef GAMECONTROLLER
#define GAMECONTROLLER

#include <stdbool.h>

typedef enum doencas_hereditarias{
  NenhumaDoenca,
  Hipertensao,
  Alzheimer,
  Diabetes,
  Cancer
} DoencaHereditaria;



void cria_jogadores(int quantidade);
void inicializa_jogo();

int jogadores_quantidade();
int jogador_posicao(int jogador);

int jogadorDaVez();

void nascimento(int jogador, char* nome, DoencaHereditaria dh);
char* getNome(int jogador);
DoencaHereditaria getDH(int jogador);

void setRoleta(int roleta);
void moveJogador(bool executaAcaoDaCasa);

#endif /* GAMECONTROLLER */
