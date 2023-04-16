#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista{
	int info;
	struct lista* prox;
}Lista;

typedef struct fila{
	struct lista* frente;
	struct lista* fundo;
}Fila;

Fila* cria_fila(){
	Fila* f= (Fila*) malloc(sizeof(Fila));
	f->frente= NULL;
	f->fundo= NULL;
	return f;
}

int fila_vazia(Fila* f){
	return (f->frente==NULL) || (f==NULL);
}

void inserir(Fila* f, int valor){
	Lista* novo= (Lista*) malloc(sizeof(Lista));
	novo->info= valor;
	novo->prox= NULL;
	if(fila_vazia(f)){
		f->frente= novo;
	}else{
		f->fundo->prox= novo;
	}
	f->fundo= novo;
}

void remover(Fila* f){
    if(fila_vazia(f)){
        printf("\nLista vazia!\n");
        return;
    }
    Lista* aux= f->frente;
    f->frente= f->frente->prox;
    if(f->frente==NULL){
        f->fundo= NULL;
    }
    free(aux);
}

void imprime(Fila* f){
    if(fila_vazia(f)){
        printf("\nLista vazia!\n");
        return;
    }
    printf("\n");
    for(Lista* aux= f->frente; aux!=NULL; aux=aux->prox){
        printf("[%d] ",aux->info);
    }
    printf("\n");
}

void libera(Fila** f){
    if(fila_vazia(*f)){
        return;
    }
    Lista* L= (*f)->frente;
    while(L!=NULL){
        Lista* aux= L->prox;
        free(L);
        L= aux;
    }
    free(*f);
    (*f)= NULL;
}
