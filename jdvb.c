#include <stdio.h>
#include "jdvb.h"

int main(int argc, char* argv[]){

  int erro = processa_argumentos(argc,argv);
  
  if (!erro){
    jogo();
  }

  return erro;
}

int sair = 0;

void jogo(){
  inicializa_jogo();

  while (!sair){
    processa_entradas_do_usuario();
    atualiza_mundo_do_jogo();
    renderiza_mundo_do_jogo();
  }

  termina_jogo();
}

int processa_argumentos(int argc, char* argv[]){
  int erro = 0;
  return erro;
}

void inicializa_jogo(){
}
void termina_jogo(){
}
void processa_entradas_do_usuario(){

  // verifica condição de saída
  sair = 1;

}
void atualiza_mundo_do_jogo(){
}
void renderiza_mundo_do_jogo(){
}


