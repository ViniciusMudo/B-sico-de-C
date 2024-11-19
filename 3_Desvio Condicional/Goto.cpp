#include <stdio.h>
#include <locale.h>
int main(){
	int x=1;
	setlocale(LC_ALL, "Portuguese");
	enquanto:
	if(x>=10) goto fim;
	    printf("%d\n", x);
	    x++;
	    goto enquanto;
	fim:
	return 0;
}

