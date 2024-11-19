#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#define TORETO 4
int main(){
    setlocale(LC_ALL, "Portuguese");
    int mat[TORETO][TORETO], i, j;
    srand(time(NULL));
    for(i=0;i<TORETO;i++){
    	for(j=0;j<TORETO;j++){
    		//printf("Informe um valor: ");
    		//scanf("%d", &mat[i][j]);
    		mat[i][j]=rand() %10;
		}
	}
	printf("\nMatriz\n");
	for(i=0;i<TORETO;i++){
		for(j=0;j<TORETO;j++){
			printf("%4d", mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}

