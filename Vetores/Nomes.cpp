#include <stdio.h>
#include <locale.h>
int main(){
	char nome[][30]; // quando é assim, ela se torna String
	int i, cont=0;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um nome: ");
	scanf("%s", nome);
	cont=0;
	while(nome[cont]!='\0'){ // final da palavra
		cont++;
	}
	printf("\nA palavra digitada possui %d letras\n\n", cont);
	for(i=0;i<cont;i++){
		printf("%d - %c\n", i+1, nome[i]);
	}
	return 0;
}

