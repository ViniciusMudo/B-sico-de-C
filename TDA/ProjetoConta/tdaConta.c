#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tdaConta.h"

//IMPLEMENTAÇÃO

void abrir(Conta* c, int num, char* nome, float valor){
	c->numero = num;
	strcpy(c->titular, nome);
	c->saldo = valor;
	printf("Abertura de conta efetuada com sucesso!\n");
}

void creditar(Conta* c, float valor){
	c->saldo = c->saldo + valor;
	printf("Credito efetuado!\n");
}


void debitar(Conta* c, float valor){
	if(c->saldo >= valor){
		c->saldo = c->saldo - valor;
		printf("Debito efetuado!\n");
	}else{
		printf("Saldo insuficiente!\n");
	}	
}

void mostrar(Conta c){
	printf("============ DADOS DA CONTA NUMERO %d ============\n",c.numero);
	printf("Nome do titular: %s\n", c.titular);
	printf("Saldo atual: R$ %0.2f\n", c.saldo);
	printf("===================================================\n");
}










