#include <stdio.h>
#include <string.h> // usar fun��es string
#include <locale.h>
int main(){
	char nome[30];
	int i, tamanho;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o nome: ");
	scanf("%s", nome);
	//tamanho=strlen(nome); // conta o n�mero de caracteres na palavra
	printf("A palavra digitada cont�m %d letras\n", tamanho);
	for(i=0;i<strlen(nome);i++){
		printf("%d - %c\n", i+1, nome[i]);
	}
	return 0;
}

