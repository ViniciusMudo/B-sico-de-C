#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int x, y, z;
    while(x<5){
    	z=2+x;
		y=2*z;
		x+=2;
	}
	printf("%d, %d, %d", x, z, y);
	return 0;
}

