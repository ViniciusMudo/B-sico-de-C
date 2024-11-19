#include <stdio.h>
#include <locale.h>
#define MAX 3
typedef struct aluno Aluno;  // aluno agora tbm é Aluno
struct aluno{
    char nome[40];
    int mat;     // tudo isso é parte do vetor aluno.
    float nota[2];
    float media;
};
int main(){
	setlocale(LC_ALL, "Portuguese");
	Aluno turma[MAX]; 
	float soma=0;
	int i, j; i;
	for(i=0;i<MAX;i++){
		printf("Informe o nome do aluno: ");
	    scanf("%s", turma[i].nome);
	    printf("Informe a matrícula do aluno: ");
	    scanf("%d", &turma[i].mat);
	    soma=0.0;
		for(j=0;j<2;j++){
	    	printf("Informe a %dª nota do aluno: ", j+1);
	        scanf("%f", &turma[i].nota[j]);
	        soma=soma+turma[i].nota[j];
		}
	    turma[i].media=soma/2.0;
		printf("\n");
	}	
	printf("\nEXIBINDO OS DADOS DO ALUNO:\n\n"); 
	for(i=0;i<MAX;i++){
		printf("Nome: %s\nMatrícula: %d\nMédia: %.2f\n\n", turma[i].nome, turma[i].mat, turma[i].media);
	}
	printf("\n _________________FIM_DO_PROGRAMA_________________\n\n");
	return 0;
}

