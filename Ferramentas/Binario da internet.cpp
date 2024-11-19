#include <stdio.h>
#include <stdlib.h>

/*
        Escrito por Wagner Gaspar
        Mar�o de 2021

        Aula 164: Fa�a um procedimento recursivo para converter um n�mero decimal n para sua forma bin�ria.
*/

void binario(int n){
    if(n == 0)
        printf("%d", n);
    else{
        binario(n/2);
        printf("%d", n % 2);
    }
}

int main () {

    int n;

    printf("Digite um valor decimal: ");
    scanf("%d",&n);

    binario(n);

    return 0;
}
