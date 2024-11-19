#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    FILE *arq = fopen("FILE Arquivo.txt", "r");
    char texto[200];
    if(arq==NULL){
    	printf("ERRO");
    	exit(1);
	}           // variavel, tamanho, arquivo da leitura;
	while (fgets(texto, 200, arq)!=NULL){ //gets pega a frase inteira;
		printf("%s", texto);
	}
	fclose(arq);
	return 0;
}
