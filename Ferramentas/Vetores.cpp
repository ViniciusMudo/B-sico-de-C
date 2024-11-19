#include <stdio.h>
#include <locale.h>
#define MAX 5
int main(){
	int valor[MAX],i;
	setlocale(LC_ALL, "Portuguese");
	for(i=0;i<MAX;i++){
		printf("Informe o %d%c valor: ", i+1, 170);
		scanf("%d", &valor[i]);
		valor[i]= valor[i] * 2;
	}
	for(i=0;i<MAX;i++){
		
		printf("%d%c valor = %d\n",i+1, 170, valor[i]);
	}
	return 0;
}

