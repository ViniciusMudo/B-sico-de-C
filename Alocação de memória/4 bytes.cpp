#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int* p=0;
    p=(int*)malloc(3*sizeof(int));
    printf("%d\n", p);
    p++; // ganha 4 bytes;
    printf("%d\n", p);
    p++; 
    printf("%d\n", p);
	return 0;
}

