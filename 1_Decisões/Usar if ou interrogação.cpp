#include <stdio.h>
#include <locale.h>
int main(){
	int x, y;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o valor de X: ");
	scanf("%d", &x);
	x%2==0? printf("\n%d � par\n", x):printf("\n%d � �mpar\n", x);
    
//	x>0? printf("%d � positivo\n", x): // '?' equivale a um if
//	   x<0?printf("%d � negativo\n", x): 
//	      printf("%d � nulo\n", x);    // pode deixar assim em muitas linhas ou em s� uma.
    
	if(x>0){ 
		printf("%d � positivo\n", x);
	}else{
		if(x<0){
			printf("%d � negativo\n", x);
		}else{
			printf("%d � nulo\n", x);
		}
	}   
    printf("\nDigite o valor de Y: ");
	scanf("%d", &y);
	
	y>x? printf("\n%d � o maior n�mero\n", y):printf("\n%d � o maior n�mero\n", x);
	
//	if(y>x){
//		printf("\n%d � o maior n�mero\n", y);
//	}else{
//		printf("\n%d � o maior n�mero\n", x);
//	}
	return 0;
}

