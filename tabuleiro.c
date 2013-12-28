#include "tabuleiro.h"
#include <stdlib.h>


static Tabuleiro* tabuleiro = NULL;

void cria_tabuleiro(){
  tabuleiro = NULL;
  tabuleiro = malloc(sizeof (Tabuleiro));
}

Tabuleiro* get_tabuleiro(){
  return tabuleiro;
}


void detroy_tabuleiro(){
  if (tabuleiro != NULL){
    free (tabuleiro);
    tabuleiro = NULL;
  }
}

static int casas_quantidade = 0;

int get_casas_quantidade(){
  return casas_quantidade;
}
