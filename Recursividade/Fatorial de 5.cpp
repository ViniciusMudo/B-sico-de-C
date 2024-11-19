#include <stdio.h>
#include <locale.h>
int FF(int y);
int n=0;
int main(){
    setlocale(LC_ALL, "Portuguese");
    int w, y;
    y=2;
    w=FF(y);
    w=w-50;
    printf("%d e %d", w, n);
	return 0;
}
int FF(int y){
	n=n+1;
	if(y<2){
		return 1;
	}else{
		return y * FF(y-1);
	}
}
