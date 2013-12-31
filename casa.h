/*
 * casa.h
 *
 *  Created on: 31/12/2013
 *      Author: edusantana
 */

#ifndef CASA_H_
#define CASA_H_

typedef struct casa_arquitetura{
	void (*passa)(int jogador);
	void (*visita)(int jogador);
} Casa ;

#endif /* CASA_H_ */
