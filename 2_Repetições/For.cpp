#include <stdio.h>
#include <locale.h>
int main(){
	int i;
	setlocale(LC_ALL, "Portuguese");
	printf("UTILIZANDO WHILE:\n");
	i=1; // 1 Inicializa��o
	while(i<=10){// 2 Condi��o
		printf("Programa��o\n");
		i++; // 3 Contador
	}

//////////////////////////////////////////////////////////////////////////////

	printf("\nUTILIZANDO FOR:\n");
	for(i=1; i<=10; i++){ // Inicializa��o, Condi��o e Contador
		printf("Programa��o\n");
	}
	printf("\nFim do programa\n");
    return 0;
}
