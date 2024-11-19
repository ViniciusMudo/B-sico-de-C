#include <stdio.h>
#include <locale.h>
int main(){
	int ini, fim;
	setlocale(LC_ALL, "Portuguese");
	printf("Informe o valor inicial: ");
	scanf("%d", &ini);
	printf("Informe o valor final: ");
	scanf("%d", &fim);
	while(ini<=fim){
		printf("%d\n", ini);
		ini++;
	}
	printf("  \nFIM DO PROGRAMA\n");
	return 0;
}

