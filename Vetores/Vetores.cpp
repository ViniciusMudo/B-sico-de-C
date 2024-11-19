#include <stdio.h>
#include <locale.h>
#define MAX 5
int main(){
	int valor[5], varor[MAX], i, y;
	setlocale(LC_ALL, "Portuguese");
	for(i=1;i<=5;i++){
		scanf("%d", &valor[i]);
	}
	for(i=1;i<=5;i++){
		printf("\n%d", valor[i]);
	}
	
	
	
	printf("\n\n");
	for(y=1;y<=MAX;y++){
		scanf("\n%d", &varor[y]);
	}
	for(y=1;y<=MAX;y++){
		printf("\n%d", varor[y]);
	}
	return 0;
}
