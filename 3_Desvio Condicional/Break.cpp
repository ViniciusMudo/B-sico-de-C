#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, valor, achou=0;
	srand(time(NULL));
	valor=rand() % 50+1;
	for(i=0; i<50; i++){
		if (valor==i){
			printf("Achou!\n");
			break;
		}else{
			printf("Não achou!\n");
		}
	}
	
	printf("\nSem usar break:\n");
	for(i=0;i<50 && achou==0; i++){
		if(i==valor){
			printf("Achou!\n");
	    }else{
	    	printf("Ainda não achou!\n");
		}
	}
	printf("\n\n  FIM DO PROGRAMA \n\n ");
	return 0;
}

