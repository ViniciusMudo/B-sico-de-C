#include <stdio.h>
#include <locale.h>
#define MAX 5
int main(){
	char letras[MAX];
	int i;
	setlocale(LC_ALL, "Portuguese");
	for(i=0;i<MAX;i++){
		printf("Informe a %d%c letra: ", i+1, 170);
		fflush(stdin); // limpa a memória e deixa colocar mais caracter
		scanf("%c", &letras[i]);
	}
	printf("\nExibindo vetor\n");
	for(i=0;i<MAX;i++){
	    printf(" %d%c valor = %d\n", i+1, 170, letras[i]);
    }
    return 0;
}

