#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int *p, q; // Ponteiro:'*' reserva um lugar na mem�ria para qualquer tipo de v�riavel, no caso aqui � 'inteiro';
    int x;
    scanf("%d", &x);
	p=&x; // 'p' n�o � igual ao valor da variavel, 'p', est� colocando (o endere�o de&) 'x' (no endere�o de*) '*p';	
    // '&' tbm � um ponteiro, 
    printf("Endere�o: %d \n", p);
	printf("Valor: %d \n", *p);// '*p' cont�m o endere�o de 'x', e mostra ele;
	
	*p=1234; // Isso altera o conte�do de 'valor';
	
	q=*p; // 'q' agora cont�m o valor de '*p', que cont�m o valor de 'x';
	
	printf("Valor *p: %d \n",  *p);
	printf("Valor  q: %d \n", q);
	printf("Valor  valor: %d \n", x);
	return 0;
}// 'p' n�o � uma vari�vel, mas um ponteiro;

