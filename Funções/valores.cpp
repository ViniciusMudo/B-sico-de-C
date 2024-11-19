#include <stdio.h>
#include <locale.h>
void alterarValor(int* n){
	printf("Informe o novo valor inteiro: ");
	scanf("%d", n); // não precisa do '&';
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    int x;
    printf("Informe um valor inteiro: ");
    scanf("%d", &x);
    alterarValor(&x); // '&' usado pra acessar o endereço da memória;
    printf("O novo valor digitado foi %d\n", x);
	return 0;
}

