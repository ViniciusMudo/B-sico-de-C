#include <stdio.h>
#include <locale.h>
// tipo uma matriz
int main(){
	char dias[][4]={"DOM", "SEG", "TER", "QUA", "QUI", "SEX", "SAB"}; // Toda string termina '\0', 4 = 0, 1, 2, 3.  7 linhas e 3 colunas.
	int i; // O 7 � o tamanho do vetor, 4 � a quantidade de caracteres nos itens do vetor.
	       // n�o necess�rio colocar o 7, ele vai presumir a partir da quantidade de membros dentro 
	setlocale(LC_ALL, "Portuguese");
	for(i=0;i<7;i++){
		printf("%s\n", dias[i]);
	}
	return 0;
}

