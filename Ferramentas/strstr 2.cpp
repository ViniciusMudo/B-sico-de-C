#include <stdio.h>
#include <string.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "Portuguese");
   char *psResultado;
   char sFrase[] = "isto e um teste � um abaxito de charruto";
 
   printf("\nEndere�o Inicial = %d\n", sFrase );
 
   /* A fun��o retornar� o endere�o correspondente � localiza��o do "ste" */
   psResultado = strstr(sFrase, "ste");
 
   printf("\nEndere�o inicial para a pesquisa = %d\n", psResultado );
   printf("\nEndere�o inicial para a pesquisa = %s\n", psResultado );
   return 0;
}
