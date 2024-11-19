#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	for(i=0;i<=20;i++){
		if(i%5==0){
			continue; // pula as ações abaixo e continua o programa.
		}
		printf("%d\n", i);
	}
	printf("Fim do programa!\n");
	return 0;
}

