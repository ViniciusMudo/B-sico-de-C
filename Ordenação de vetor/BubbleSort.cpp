#include <stdlib.h>
#include <stdio.h>
int comp=0, troca=0;
void bubbleSort(int *v, int n){
	int i, j, temp, trocou;
	for(i = n-1; i >= 1; i--){
	//	trocou=0;
		for(j = 0; j < i; j++){
			comp++;
			if(v[j] > v[j+1]){
				troca++;
				temp = v[j]	;
				v[j] = v[j+1];
				v[j+1] = temp;
			//	trocou = 1;
			}
		}
	/*	if(trocou == 0){
			return;
		}*/
	}
}

int main(){
	int i;
	int vetor[12] = {2,7,8,12,17,26,33,42,51,73,81,89};
	bubbleSort(vetor,12);
	printf("Vetor ordenado: ");
	for(i=0; i<12; i++){
		printf("%d ",vetor[i]);
	}
	printf("\nComparacoes: %d \n",comp);
	printf("Trocas: %d \n",troca);
	return 0;
}







