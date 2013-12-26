#include "tabuleiro.h"
#include <stdlib.h>


static Tabuleiro* tabuleiro = NULL;

void cria_tabuleiro(Casas_Creator* f){
  tabuleiro = NULL;
  tabuleiro = malloc(sizeof (Tabuleiro));
  f();
}

Tabuleiro* get_tabuleiro(){
  return tabuleiro;
}

void cria_casas(Tabuleiro* t){

}
