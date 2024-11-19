#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i=1;
	int x=1;
	repitaDeNovo:
		if(i>5) goto fimDeVerdade;
	enquanto:
	if(x>=10) goto fim;
	    printf("%d\n", x);
	    x++;
	    goto enquanto;
	fim:
	printf("Fim da repetição!\n");
	i++;
	x=1;
	printf("Eita me arrependi, repita de novo!\n");
	goto repitaDeNovo;
	fimDeVerdade:
		printf("Fim de verdade!\n");
	return 0;
}

