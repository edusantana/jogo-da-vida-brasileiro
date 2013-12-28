#ifndef GAMECONTROLLER
#define GAMECONTROLLER

typedef struct{
  int posicao;
} Jogador;

void cria_jogadores(int quantidade);
void inicializa_jogo();

int jogadores_quantidade();
int jogador_posicao(int jogador);

#endif /* GAMECONTROLLER */
