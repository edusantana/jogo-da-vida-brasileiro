/*
 * casa_test.c
 *
 *  Created on: 31/12/2013
 *      Author: edusantana
 */

// jdvb_game_test.c
// See http://pt.slideshare.net/amritayan/test-driven-development-in-c
#include "casa.h"
#include <stddef.h>
#include <assert.h>
#include <stdbool.h>

static int passou = -1;
static void passaExemplo(int jogador) {
	//passou = true;
}

static int visitou = -1;
static void visitaExemplo(int jogador) {
	//visitou = true;
}

static void test_passando_e_visitando_casa(void) {

	int jogador0 = 0;
	int jogador1 = 1;

	Casa casa = {.passa = &passaExemplo, .visita = &visitaExemplo};
	casa.passa(jogador0);
	casa.visita(jogador1);

	assert(passou == jogador0 && "Jogador 0 passou pela casa");
	assert(visitou == jogador1 && "Jogador 1 visitou a casa");

}

int main() {
	test_passando_e_visitando_casa();
}

