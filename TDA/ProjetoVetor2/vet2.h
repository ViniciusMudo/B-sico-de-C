struct vetor{
	int tamanho;
	float* itens;
};

typedef struct vetor Vetor;

Vetor leitura();
void imprime(Vetor v);
