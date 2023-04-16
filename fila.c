#include<stdio.h>
#include "fila.h"

struct no{
    float elemento;
    struct no* proximo;
};
typedef struct no No;

struct fila {
    No* inicio;
    No* fim;
};

Fila* cria(void){
    Fila* f = (Fila*) malloc(sizeof(Fila));
    f->inicio = f->fim = NULL;
    return f;
}

No* ins_fim(No* fim, float valor){
    No* p = (No*) malloc(sizeof(No));

    p->elemento = valor;
    p->proximo = NULL;

    if(fim!= NULL)
        fim->proximo = p;

    return p;
};

