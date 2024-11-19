#include <stdio.h>
#include <locale.h>
int n; // variavel escala global;
int dobro(int num){
	return n = num*2;
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, d;
    printf("Digite um número: ");
    scanf("%d", &n);
    d = dobro(n); // chamando a função;
    printf("O dobro de %d é %d.", n, d);
    return 0;
}
