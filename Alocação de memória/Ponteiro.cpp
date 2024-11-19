#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int *p, q; // Ponteiro:'*' reserva um lugar na memória para qualquer tipo de váriavel, no caso aqui é 'inteiro';
    int x;
    scanf("%d", &x);
	p=&x; // 'p' não é igual ao valor da variavel, 'p', está colocando (o endereço de&) 'x' (no endereço de*) '*p';	
    // '&' tbm é um ponteiro, 
    printf("Endereço: %d \n", p);
	printf("Valor: %d \n", *p);// '*p' contém o endereço de 'x', e mostra ele;
	
	*p=1234; // Isso altera o conteúdo de 'valor';
	
	q=*p; // 'q' agora contém o valor de '*p', que contém o valor de 'x';
	
	printf("Valor *p: %d \n",  *p);
	printf("Valor  q: %d \n", q);
	printf("Valor  valor: %d \n", x);
	return 0;
}// 'p' não é uma variável, mas um ponteiro;

