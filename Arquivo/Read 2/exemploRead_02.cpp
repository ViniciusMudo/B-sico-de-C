#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arq;
	int x;
	arq = fopen("numeros.txt", "rt");
	if(arq == NULL){
		printf("Erro ao abrir o arquivo\n");
		exit(1);
	}
	while(fscanf(arq,"%d", &x) != EOF){
		printf("%d ", x);
	}
	fclose(arq);
	return 0;
}

