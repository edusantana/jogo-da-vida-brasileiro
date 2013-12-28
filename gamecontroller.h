#ifndef GAMECONTROLLER
#define GAMECONTROLLER

typedef struct _Jogador{
  int posicao;
} Jogador;

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

#endif /* GAMECONTROLLER */
