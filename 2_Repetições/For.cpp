#include <stdio.h>
#include <locale.h>
int main(){
	int i;
	setlocale(LC_ALL, "Portuguese");
	printf("UTILIZANDO WHILE:\n");
	i=1; // 1 Inicialização
	while(i<=10){// 2 Condição
		printf("Programação\n");
		i++; // 3 Contador
	}

//////////////////////////////////////////////////////////////////////////////

	printf("\nUTILIZANDO FOR:\n");
	for(i=1; i<=10; i++){ // Inicialização, Condição e Contador
		printf("Programação\n");
	}
	printf("\nFim do programa\n");
    return 0;
}
