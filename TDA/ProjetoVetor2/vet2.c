#include <stdio.h>
#include <stdlib.h>
#include "vet2.h"

Vetor leitura(){
	int i;
	Vetor v;
	printf("Qual a quantidade de itens?: ");
	scanf("%d", &v.tamanho);
	v.itens = malloc(v.tamanho * sizeof(float));
	printf("Informe os %d elementos\n", v.tamanho);
	for(i=0; i < v.tamanho; i++){
		scanf("%f", &v.itens[i]);
	}
	return v;
}



void imprime(Vetor v){
	int i;
	printf("\nEXIBINDO O VETOR\n");	
	for(i=0; i < v.tamanho; i++){
		printf("%0.2f ", v.itens[i]);
	}
}
