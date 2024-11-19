#include <stdio.h>
#include <locale.h>
int main(){
	float v1, v2;
	char op;
	setlocale(LC_ALL, "Portuguese");
	printf("Agora informe dois valores num�ricos:");
	scanf("%f %f", &v1, &v2);
	fflush(stdin); // limpando o buffer de mem�ria
	printf("Informe a opera��o desejada(+, -, *, /):");
	scanf("%c", &op);
	switch(op){  // escolha / caso bastante usado na constru��o de MENUS
		case '+':
		    printf("\n  %.1f %c %.1f = %.1f", v1, op, v2, v1+v2);
		    break;
		case '-':
		    printf("\n  %.1f %c %.1f = %.1f", v1, op, v2, v1-v2);
		    break;
		case '*':
		    printf("\n  %.1f %c %.1f = %.1f", v1, op, v2, v1*v2);
		    break;
		case '/':
		    if(v2==0){
		    	printf("\nERRO: \nDEST\n      RUI��O D A REAL    \nIDA\n    DE!!!");
			}else{
				printf("\n  %.1f %c %.1f = %.1f", v1, op, v2, v1/v2);
		   } 
		   break;
		default:
			printf("\n OPERADOR INV�LIDO!!!\n");
	}
	printf("\n\nFINALIZANDO O PROGRAMA.\n");
	return 0;
}
