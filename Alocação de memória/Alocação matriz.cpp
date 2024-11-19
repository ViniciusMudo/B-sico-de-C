#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int** m;
	int i, j, lin, col;
	printf("Informe o número de linhas da matriz: ");
	scanf("%d", &lin);
	printf("Informe o número de colunas da matriz: ");
	scanf("%d", &col);
	m=(int*)malloc(lin*sizeof(int));
	if(m==NULL){
		printf("Erro...\n");
		exit(1);
	}
	for(i=0;i<lin;i++){
		m[i]=(int**)malloc(col*sizeof(int*));
		for(j=0;j<col;j++){
			m[i][j]=rand() %100+1;
		}
	}
	
	
	printf("\nExibindo a matriz\n");
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			printf("%4d", m[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<lin;i++){
		free(m[i]);
	}
	free(m);
	return 0;
}

