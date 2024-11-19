#include <stdio.h>
#include <locale.h>
int main(){
	int x, y;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o valor de X: ");
	scanf("%d", &x);
	x%2==0? printf("\n%d é par\n", x):printf("\n%d é ímpar\n", x);
    
//	x>0? printf("%d é positivo\n", x): // '?' equivale a um if
//	   x<0?printf("%d é negativo\n", x): 
//	      printf("%d é nulo\n", x);    // pode deixar assim em muitas linhas ou em só uma.
    
	if(x>0){ 
		printf("%d é positivo\n", x);
	}else{
		if(x<0){
			printf("%d é negativo\n", x);
		}else{
			printf("%d é nulo\n", x);
		}
	}   
    printf("\nDigite o valor de Y: ");
	scanf("%d", &y);
	
	y>x? printf("\n%d é o maior número\n", y):printf("\n%d é o maior número\n", x);
	
//	if(y>x){
//		printf("\n%d é o maior número\n", y);
//	}else{
//		printf("\n%d é o maior número\n", x);
//	}
	return 0;
}

