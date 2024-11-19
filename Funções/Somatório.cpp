#include <stdio.h>
#include <locale.h>
int tamanho; // variável global

int somatorio(int* v, int tamanho){ // '*' ponteiro indicando para o vetor(ou variavel);
	int i, soma=0;
	for(i=0; i<tamanho; i++){
		soma=soma+v[i];
	}
	return soma;
}

int somatorio2(int v[]){ // 'int*' ou 'v[]'  \  Sem o uso de 'tamanho' dentro do main, mas o 'tamanho' var global;
	int i, soma=0;
	for(i=0; i<tamanho; i++){
		soma=soma+v[i];
	}
	return soma;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int s, vet[]={8, 2, 5, 10, 7, 50, 12, 30}; 
    tamanho=sizeof(vet)/sizeof vet[0];
    printf("Tamanho: %d\n", tamanho);
    
	s=somatorio(vet, tamanho);
    printf("\nSomatório: %d\n", s);
    	
	s=somatorio2(vet);
    printf("\nSomatório 2: %d\n", s);
	return 0;
}

