#include <stdio.h>
#include <stdlib.h>
#include "tdaConta.h"

int main() {
	Conta c1;
	abrir(&c1, 123, "Maria", 1000);
	mostrar(c1);
	creditar(&c1, 300);
	mostrar(c1);
	debitar(&c1, 800);
	mostrar(c1);
	debitar(&c1, 800);
	mostrar(c1);
	return 0;
}
