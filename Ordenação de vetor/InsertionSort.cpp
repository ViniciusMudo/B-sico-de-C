#include <stdlib.h>
#include <stdio.h>

void insertionSort(int *v, int n){
	int i, j, temp;
	for(i = 1; i < n; i++){
		temp = v[i];
		for(j = i-1; j >= 0 && temp < v[j]; j--){
			v[j+1] = v[j];
		}
		v[j+1] = temp;
	}
}

int main(){
	int i;
	int vetor[5] = {25,48,37,12,57};
	insertionSort(vetor,5);
	printf("Vetor ordenado: ");
	for(i=0; i<5; i++){
		printf("%d ",vetor[i]);
	}
	return 0;
}

