#include <stdio.h>
#include <string.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "Portuguese");
   char *psResultado;
   char sFrase[] = "isto e um teste é um abaxito de charruto";
 
   printf("\nEndereço Inicial = %d\n", sFrase );
 
   /* A função retornará o endereço correspondente à localização do "ste" */
   psResultado = strstr(sFrase, "ste");
 
   printf("\nEndereço inicial para a pesquisa = %d\n", psResultado );
   printf("\nEndereço inicial para a pesquisa = %s\n", psResultado );
   return 0;
}
