#include <stdio.h>
#include <locale.h>
int main(){
	float media, soma=0, mediaTurma;
	int contAlunos;
	setlocale(LC_ALL, "Portuguese");
	printf("Informe a m�dia ou -1 para encerrar:");
	scanf("%f", &media);
	while(media>=0 && media<=10){
		if (media==10){
			printf("PARAB�NS!!! CONTINUE SEMPRE ASSIM.\n");
		}
		soma=soma+media; //acumulador
		contAlunos++; //contador
		printf("Informe a m�dia ou -1 para encerrar:");
	    scanf("%f", &media);
	}
	contAlunos--;
	printf("\n\nSoma das m�dias: %.2f", soma);
	printf("\nQuantidade de m�dias informadas: %d", contAlunos);
	mediaTurma=soma/contAlunos;
	printf("\nM�dia da turma: %.2f", mediaTurma);
	printf("   \n\nFIM DO PROGRAMA\n");
	return 0;
}

