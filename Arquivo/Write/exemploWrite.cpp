#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arq;
	int x = 10;
	arq = fopen("novo.txt", "wt");
	
	if(arq == NULL){
		printf("Erro ao abrir o arquivo\n");
		exit(1);
	}
	printf("sucesso na operacao!\n");
	fprintf(arq, "Estamos escrevendo no arquivo novo.txt\n");
	fprintf(arq, "x = %d\n", x);	
	fclose(arq);
	
	return 0;
}

