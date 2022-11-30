// pilha

struct No{
    int numero;
    struct No * proximo;
};
typedef struct No no;

int tam;

// interface

void inicia(no *PILHA);


void opcao(no *PILHA, int op);
void exibe(no *PILHA);
void libera(no *PILHA);
void empilha(no *PILHA);
void desenpilhar();

int menu(void){
    int opcao;

    printf("escolha a opcao desejada: ");
    printf("0 - sair");
    printf("1 - zerar a pilha ");
    printf("2 - exibir a pilha ");
    printf("3 - empilhar ");
    printf("4 - desempilhar  ");
    printf("Opcao: ");
    scanf("%d", &opcao);

    return opcao;
}
