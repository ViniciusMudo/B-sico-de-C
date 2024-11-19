#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arq = fopen("numeros2.txt", "rt");
	FILE *saida = fopen("somatorio.txt", "wt");
	int i, n, soma=0;
	int* vet;	
	if(arq == NULL){
		printf("Erro ao abrir o arquivo\n");
		exit(1);
	}
	fscanf(arq,"%d", &n);
	vet = (int*)malloc(n * sizeof(int));
	for(i=0; i<n; i++){
		fscanf(arq,"%d", &vet[i]);
		soma = soma + vet[i];
	}
	fprintf(saida, "Vetor de entrada\n");
	for(i=0; i<n; i++){
		fprintf(saida, "%d ", vet[i]);
	}
	fprintf(saida, "\n\nSomatorio dos elementos: %d\n", soma);
	printf("Operacao bem sucedida!");
	fclose(arq);
	fclose(saida);
	return 0;
}

