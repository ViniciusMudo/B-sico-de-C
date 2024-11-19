#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    FILE *arq = fopen("FILE Arquivo.txt", "r");;
    char c;
    int linha=0;
    if(arq==NULL){
    	printf("ERRO");
    	exit(1);
	}          
	c=fgetc(arq); /* Vai ler os caracteres do arquivo um por um */ 
	while (c!=EOF){ /* EOF= Fim Do Arquivo */ 
		printf("%c", c); 
		c=fgetc(arq);
	}
	fclose(arq);
	return 0;
}

