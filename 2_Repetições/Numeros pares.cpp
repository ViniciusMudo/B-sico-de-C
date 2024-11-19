#include <stdio.h>
#include <locale.h>
int main(){
	int i, j;
	setlocale(LC_ALL, "Portuguese");
	for(i=0; i<=20; i++){
		if(i%2==0){
			printf("%d\n", i);
		}
	}
	printf("\nOUTRA MANEIRA DE MOSTRAR OS PARES E ÍMPARES.\n");
	for(i=0, j=1; i<=21 && j<=21; i=i+2, j=j+2){
		printf("%d - %d\n", i, j);
	}
	return 0;
}

