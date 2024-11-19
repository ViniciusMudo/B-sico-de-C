#include <stdio.h>
#include <locale.h>
int main(){
    int i=1, n;
	setlocale(LC_ALL, "Portuguese");
    printf("Deseja exibir os valores de 1 até quanto: ");
    scanf("%d", &n);
	do{
    	printf("%d\n", i);
    	i++;
	}while(i<=n);
	printf("\n\n%d\n\n", i);
	return 0;
}

