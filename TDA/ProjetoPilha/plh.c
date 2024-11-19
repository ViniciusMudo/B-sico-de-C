#include <stdio.h>
#include <stdlib.h>
#include "plh.h"

//Implementação

void criarP(Pilha* P){
	P->topo = -1; // "->", por que está passando por referencia
	printf("Pilha inicializada!\n");	
}

int vaziaP(Pilha P){
	return (P.topo == -1);
}

int cheiaP(Pilha P){
	return (P.topo == MAX-1);
}

void push(Pilha* P, int item){
	if(cheiaP(*P)){
		printf("OVERFLOW\n");
	}else{
		P->topo++;
		P->itens[P->topo] = item;
		printf("%d foi empilhado\n", item);
	}
}

int pop(Pilha* P){
	int ret;
	if(vaziaP(*P)){
		ret = -1;
	}else{
		ret = P->itens[P->topo];
		P->topo--;	
	}
	return ret;
}

int top(Pilha P){
	int ret;
	if(vaziaP(P)){
		ret = -1;
	}else{
		ret = P.itens[P.topo];
	}
	return ret;
}
void mostrarP(Pilha P){
	if(vaziaP(P)){
		printf("Pilha vazia\n");
	}else{
		while(!vaziaP(P)){
			printf("%d\n",pop(&P));
		}
	}	
}









