#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void shellSortShell(int* A, int n){
	int aux, i, j, h=n/2;    
	// Calcula a distância incial;
	while(h > 0){  
		i = h;
	// loop para cobrir o vetor por completo e salvar o valor a ser comparado;
		while(i < n){   
			aux = A[i]; 
	    	j = i;      
	// Realiza as comparações nas posições em "h" distância  e a troca se necessário;
		    while(j >= h && aux < A[j-h]){   
			    A[j] = A[j-h];    
			    j = j-h;         
	        }
    // Atualiza o valor da posição A[j], caso tenha se feito uma troca;
		    A[j] = aux;  
		    i += 1;      
	    }
    // Atuliza o valor de "h";
	    h = h/2; 
	}
}



void shellSortKnuth(int* A, int n){
	int aux, i, j, h=1;
	//Calcula a distância incial;
	while(h < n/3){ 
		h = h*3+1;  
    }
	while(h > 0){
	// loop para cobrir o vetor por completo e salvar o valor a ser comparado;
		for(i = h ; i< n ; i++){
			aux = A[i];
			j = i;
    // Realiza as comparações nas posições em "h" distância  e a troca se necessário;
			while(j >= h && aux < A[j-h]){ 
				A[j] = A[j-h]; 
				j = j-h; 
			}
	// Atualiza o valor da posição A[j], caso tenha se feito uma troca;
			A[j] = aux; 
		}
	 // Atuliza o valor de "h";
		h = h/3;		
    }
}



int main(){
    setlocale(LC_ALL, "Portuguese");
    int total, i, A[]={66, 27, 6, 10, 5, 18, 90, 3, 65, 12}, *B; // VETOR DE 10 POSIÇÕES;
    total = sizeof(A)/4;
    B = (int*)malloc(total * sizeof(int));
    for(i = 0; i < total; i++){
    	B[i] = A[i];
	}
	
	printf("Antes de ordenar: \n");
    for(i = 0; i < total; i++){
    	printf("%d, ", A[i]);
	}
	
	// Usando o método proposto por Shell;
	shellSortShell(A, total);
	printf("\n\nDepois de ordenar em Shell: \n");
    for(i = 0; i < total; i++){
    	printf("%d, ", A[i]);
	}
	
	// Usando o método proposto por Knuth;
	shellSortKnuth(B, total);
	printf("\n\nDepois de ordenar em Knuth: \n");
    for(i = 0; i < total; i++){
    	printf("%d, ", B[i]);
	}
	printf("\n");
	return 0;
}
