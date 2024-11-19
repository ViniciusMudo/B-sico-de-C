#include <stdio.h>
#include <locale.h>
float areaRet(float b, float h);
int main(){
    setlocale(LC_ALL, "Portuguese");
    float base, altura, resultado, total, preco=50.00;
	printf("Informe a base e a altura do retangulo: ");
    scanf("%f %f", &base, &altura);
    resultado=areaRet(base, altura); // depois vem pra cá e se torna resultado;
    printf("A área do retângulo é %.2f.\n", resultado);
	total=preco*resultado; // pode reultilizar;
	printf("\nVou gastar R$%.2f para comprar o reboco da parede. ", total);
	if(total>1000){
		printf(":(\n");
	}else{
		printf(":)\n");
	}
	return 0;
}
float areaRet(float b, float h){
	float area;
	area=b*h;
	return area;
}
