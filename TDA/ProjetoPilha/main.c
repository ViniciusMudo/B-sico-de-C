#include <stdio.h>
#include <stdlib.h>
#include "plh.h"

int main() {
	Pilha p1;
	int x;
	criarP(&p1);
	//printf("Pilha vazia?: %d\n", vaziaP(p1));
	//printf("Pilha cheia?: %d\n", cheiaP(p1));
	while(!cheiaP(p1)){
		printf("Informe o elemento a ser empilhado: ");
		scanf("%d", &x);
		push(&p1, x);
	}
	mostrarP(p1);
	
	printf("\nelemento do topo: %d\n\n", top(p1));
	
	printf("\nExibindo a Pilha\n");
	while(!vaziaP(p1)){
		printf("%d\n",pop(&p1));
	}
	
	printf("\nElemento do topo: %d\n", top(p1));
	
	return 0;
}
