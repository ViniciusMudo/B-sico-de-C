#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int mat[4][4], i, j;
    // Linhas
	for(i=0;i<4;i++){
    	// Colunas
    	for(j=0;j<4;j++){
    		printf("Mat[%d][%d]: ", i, j); scanf("%d", &mat[i][j]);
		}
	}
	printf("\n\nExibindo a Matriz:\n");
	// Linhas
	for(i=0;i<4;i++){
    	// Colunas
    	for(j=0;j<4;j++){
    		printf("\nMat[%d][%d]: %d", i, j, mat[i][j]);
		}
	}
	printf("\n\nExibindo a Matriz Formatada:\n");
	// Linhas
	for(i=0;i<4;i++){
    	// Colunas
    	for(j=0;j<4;j++){
    		printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}	
	return 0;
}

