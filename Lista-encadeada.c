// lista encadeada
#include<stdlib.h>
#include<stddef.h>


struct lista{
    int matricula;
    struct lista* proximo;

};

typedef struct lista Lista;

// Função de inicialização: retorna uma lista vazia

Lista* inicializa(void){
    return NULL;
}

// adicionar elementos no inicio, retorna uma lista atualizada

Lista* insere(Lista* l, int i){
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->matricula = i;
    novo->proximo = l;

    return novo;
}

// função imprime

void imprime(Lista* l){
    Lista* p; // variavel q percorre alista
    for(p = l; p != NULL; p = p->proximo){
        printf("\n matricula: %d \n", p->matricula);
    }
}
// função vazia
int vazia(Lista* l){
    if( l == NULL){
        return 1;
    }else{
        return 0;}
// ou  return (1 == NULL);
}

// função retira

Lista* retira(Lista* l, int v){
     Lista* anterior = NULL; // ponteiro para elemento anterior
     Lista* p = l; // ponteiro percorre lista

}

int main(void){
    Lista* l; //Declara lista não inicializada
    l = inicializa(); // inicializa a lista vazia
    l = insere(l, 4); // insere elemento 4
    l = insere(l, 8); //insere elemento 8
    imprime(l);
    return 0;
}
