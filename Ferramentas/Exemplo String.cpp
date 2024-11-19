#include <stdio.h>

int main(){
	char nome[30];
	printf("Informe seu nome: ");
	scanf("%[^\n]s", nome);//usar essa forma para ler palavras compostas
	// Pode substituir scanf por gets para ler strings
	// gets(nome); 
	printf("Boa noite |%s|, seja bem vindo(a) a nossa aula de hoje!", nome);
	return 0;
}

