#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// 'rt' = abre o arquivo para leitura(arquivo deve existir);  READER
// 'rt+'= abre o arquivo para leitura e escrita(arquivo deve existir);
// 'wt' = apaga o arquivo e abre um novo para reiscritura(pode criar arquivo tbm); WRITE
// 'wt+'= apaga o arquivo e abre um novo para leitura e escrita(pode criar arquivo tbm);
// 'at' = Anexa dados em um arquivo já existente(cria arquivo caso não exista); APPEND
// 'at+'= Anexa dados em um arquivo já existente, permitindo a leitura(cria arquivo caso não exista);
int main(){
	setlocale(LC_ALL, "Portuguese");
	FILE *arq = fopen("Teste.txt", "wt+"); // apaga e abre um novo e eu posso escrever nele;
	char a[40];
	if(arq == NULL){
		printf("Erro ao abrir o arquivo\n");
		exit(1);
	}else{
		printf("Sucesso na operação!\n");
	}
	scanf("%[^\n]s", a);
	fprintf(arq, "%s", a);
	fclose(arq);
	return 0;
}

