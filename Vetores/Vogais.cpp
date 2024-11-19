#include <stdio.h>
#include <locale.h>
int main(){
	int digitos[]={0,1,2,3,4,5,6,7,8,9}, i;
	char vogais[]={'a','e','i','o','u'};
	setlocale(LC_ALL, "Portuguese");
	printf("Mostrando os dígitos\n");
	for(i=0;i<10;i++){
		printf("%d ", digitos[i]);
	}
	printf("\nMostrando as Vogais\n");
	for(i=0;i<5;i++){
		printf("%c ", vogais[i]);
	}
	return 0;
}

