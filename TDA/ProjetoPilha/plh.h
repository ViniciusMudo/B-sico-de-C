//Interface
#define MAX 3
struct pilha{
	int itens[MAX];
	int topo;
};

typedef struct pilha Pilha;

void criarP(Pilha* P);







int vaziaP(Pilha P);
int cheiaP(Pilha P);
void push(Pilha* P, int item);
int pop(Pilha* P);
int top(Pilha P);
void mostrarP(Pilha P);





