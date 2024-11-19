#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
int main(){
	float nota1, nota2, media;
	setlocale(LC_ALL, "PORTUGUESE");
	printf("Informe a 1a. nota: ");
	scanf("%f", &nota1);
	printf("Informe a 2a. nota: ");
	scanf("%f", &nota2);
	media=(nota1+nota2)/2;
	if(media>=7){
		system("cls");
		system("color f1"); // cor azul
		printf("Aprovado. Parabéns!!!\n");
	}else{
		system("cls");
		system("color f4"); // cor vermelha
		printf("Que pena...não foi dessa vez!!!\n");
	}
	return 0;
}

