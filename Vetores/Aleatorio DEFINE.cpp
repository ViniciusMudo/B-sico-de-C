#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#define MAX 5
int main(){
	int valor[MAX], dobro[MAX], i;
	srand(time(NULL)); // Sem isso, cada loop serão os mesmo números
	setlocale(LC_ALL, "Portuguese");
	for(i=0;i<MAX;i++){
		valor[i]= rand() % 1000;
		dobro[i]= valor[i]*2;
	}
	printf("\nExibindo o vetor original\n\n");
	for(i=0;i<MAX;i++){
		printf("%d%c valor = %d\n",i+1, 170, valor[i]);
	}
	printf("\nExibindo o vetor dobro\n\n");
	for(i=0;i<MAX;i++){
		printf("%d%c valor = %d\n",i+1, 170, dobro[i]);
	}
	return 0;
}

