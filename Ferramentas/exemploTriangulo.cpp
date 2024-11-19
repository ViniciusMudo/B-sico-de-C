#include <stdio.h>
int main(){
	int lado1, lado2, lado3;
	printf("Informe o comprimento dos tres lados: ");
	scanf("%d %d %d", &lado1, &lado2, &lado3);
	
	if(lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2){
		printf("Formam um triangulo ");
		if(lado1 == lado2 && lado2 == lado3){
			printf("equilatero\n");
		}else{
			if(lado1 == lado2 || lado2 == lado3 || lado1 == lado3){
				printf("isosceles\n");
			}else{
				printf("escaleno\n");
			}
		}	
	}else{
		printf("NAO formam um triangulo.\n");
	}
	return 0;
}

