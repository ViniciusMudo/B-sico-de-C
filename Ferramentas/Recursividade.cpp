#include <stdio.h>

int soma(int n);
int main(){
    int n;
    int resultado;
    scanf("%d", &n);
    resultado=soma(n);
	return 0;
}

int soma(int n){
	int resultado;
	if(n==0){
		resultado=1;
	}else{
		printf("\n= %d    %d =\n", n, resultado);
		resultado=n+soma(n-1);
		printf("\n  %d    %d\n", n, resultado);
	}
	return resultado;
}
