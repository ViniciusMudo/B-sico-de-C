#include <stdio.h>
#include <locale.h>
int main(){
    int i=1;
	setlocale(LC_ALL, "Portuguese");
    while(i<=10){
    	printf("%d\n", i);
    	i++;
	}
	return 0;
}

