#include <stdio.h>
#include <locale.h>
void troca(int* x, int* y){ // porteiros pra receberem os endereços;
	int aux;
	aux=*x; // aux=5
	*x=*y;  // x=10
	*y=aux; // y=5
	printf("Dentro da função\n");
	printf("a (x)=%d\n", *y);
	printf("b (y)=%d\n", *x);
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    int a=5, b=10; // x=a  y=b;
    troca(&a, &b); // '&' é o endereço;
    printf("Depois da troca\n");
    printf("a = %d\n", a);
	printf("b = %d\n", b);
	return 0;
}

