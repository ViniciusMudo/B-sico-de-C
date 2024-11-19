//INTERFACE
struct conta{
	int numero;
	char titular[30];
	float saldo;
};

typedef struct conta Conta;

void abrir(Conta* c, int num, char* nome, float valor);
void creditar(Conta* c, float valor);
void debitar(Conta* c, float valor);
void mostrar(Conta c);
