#include <stdlib.h>
#include <stdio.h>

int comp=0;
int troca=0;
void selectionSort(int *v, int n){
	int i, j, menor, temp;
	for(i = 0; i < n-1; i++){
		menor = i;
		for(j = i+1; j < n; j++){
			comp++;
			if(v[j] < v[menor]){
				menor = j;								
			}
		}		
		temp = v[i]	;
		v[i] = v[menor];
		v[menor] = temp;
		troca++;
	}
}

int main(){
	int i;
	int vetor[10] = {25,48,3,12,57,8,33,92,10,73};
	selectionSort(vetor,10);
	printf("Vetor ordenado: ");
	for(i=0; i<10; i++){
		printf("%d ",vetor[i]);
	}
	printf("\nComparacoes: %d\n",comp);
	printf("\nTrocas: %d\n",troca);

	return 0;
}

