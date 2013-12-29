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

typedef enum estado_emotivo {
  Depressao,
  Raiva,
  Preocupacao,
  Irritacao,
  Esperanca,
  Felicidade,
  Paixao,
  Amor
} Emocao;


void cria_jogadores(int quantidade);
void inicializa_jogo();
// Inicializa jogadores
void inicializa_jogadores(bool usandoTabuleiro);

int jogadores_quantidade();
int jogador_posicao(int jogador);

int jogadorDaVez();

void nascimento(int jogador, char* nome, DoencaHereditaria dh);
char* getNome(int jogador);
DoencaHereditaria getDH(int jogador);

void setRoleta(int roleta);
void moveJogador(bool executaAcaoDaCasa);

Emocao jogador_emocao(int jogador);
// Emoção do Jogador da vez
Emocao emocaoAtual();

void incrementaEmocao();
void decrementaEmocao();

#endif /* GAMECONTROLLER */
