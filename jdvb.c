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
  int quantidade_de_jogadores = ler_quantidade_de_jogadores();
  cria_jogadores(quantidade_de_jogadores);
}


int quantidade_de_jogadores = -1;

void cria_jogadores(int quantidade){
  quantidade_de_jogadores = quantidade;
}

int ler_quantidade_de_jogadores(){
  return 0;
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


