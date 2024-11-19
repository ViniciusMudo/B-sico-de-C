#include <stdio.h>
#include <stdlib.h> // para o exit(0);
#include <locale.h>
#define PI 3.14
float areaRet(float b, float h){
	return b*h; // retorna e se tornar aquilo ali em cima;
}
float areaQuad(float ld){
	return ld*ld;// area=ld*ld;
}
float areaTri(float b, float h){
    return(b*h)/2;
}
float areaCirc(float r){
	return PI*r*r;
} 
void menu(){
	printf("======== MENU =========\n");
	printf("1-- �rea do ret�ngulo--\n");
	printf("2-- �rea do quadrado --\n");
	printf("3-- �rea do tri�ngulo--\n");
	printf("4-- �rea do c�rculo  --\n");
	printf("5-- Sair do programa --\n");
	printf("=======================\n");
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    float base, altura, lado, raio, resultado;
    int opcao;
    menu();
    printf("Escolha a op��o desejada: ");
    scanf("%d", &opcao);
    switch(opcao){
    	case 1:
    		printf("Informe a base e a altura do retangulo: ");
			scanf("%f %f", &base, &altura);
			resultado=areaRet(base, altura); // depois vem pra c� e se torna resultado;
			printf("A �rea do ret�ngulo � %.2f.\n\n", resultado);
			break;
		case 2:
			printf("Informe o lado do quadrado: ");
			scanf("%f", &lado);
			resultado=areaQuad(lado);// lado=float ld;
			printf("A �rea do quadrado � %.2f.\n\n", resultado);
			break;
		case 3:
      	    printf("Informe a base e a altura do tri�ngulo: ");
	        scanf("%f %f", &base, &altura);
			resultado=areaTri(base, altura);
			printf("A �rea do tri�ngulo � %.2f.\n\n", resultado);		
			break;
		case 4:
			printf("Informe o raio do c�rculo: ");
			scanf("%f", &raio);
			resultado=areaCirc(raio);// raio=r;
			printf("A �rea do c�rculo � %.2f\n\n", resultado);
			break;
		case 5:
			printf("\nFim do programa!!\n");
			exit(0);
	}
	return 0;
}
