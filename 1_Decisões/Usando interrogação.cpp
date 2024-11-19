#include <stdio.h>
#include <locale.h>
int main(){
	int x;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um número: ");
	scanf("%d", &x);
	x%2==0&&x>100? printf("\n%d é par e maior que 100.\n", x):printf("\n%d é ímpar ou <= 100.\n", x);
	return 0; // && = and, e
}

