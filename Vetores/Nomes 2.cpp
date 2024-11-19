#include <stdio.h>
#include <string.h> // usar funções string
#include <locale.h>
int main(){
	char nome[30];
	int i, tamanho;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o nome: ");
	scanf("%s", nome);
	//tamanho=strlen(nome); // conta o número de caracteres na palavra
	printf("A palavra digitada contém %d letras\n", tamanho);
	for(i=0;i<strlen(nome);i++){
		printf("%d - %c\n", i+1, nome[i]);
	}
	return 0;
}

