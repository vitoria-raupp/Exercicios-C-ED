
#ifndef LISTA_ORDENADA_H
#define LISTA_ORDENADA_H

typedef char item;

typedef struct node_{
	item data;
	struct node_ *next, *prev;
} node;

typedef struct {
	node *sentinela;
	unsigned quantidade;
	int (*comp)(item,  item);
} lista;

typedef struct {
	node *posicao;
	lista *estrutura;
} iterador;

void inicializa( lista* l, int (*menor_igual_maior)( item i1, item i2));

void destroi(lista* l);

int vazia(lista* l);

void insere(lista* l, item i);

void retiraUm(lista* l, item i);

void retira(lista* l, item i);

iterador primeiro(lista* l);

iterador ultimo(lista* l);

int elementov(iterador it, item* i);

item elemento(iterador it);

int proximo(iterador* it);

int anterior(iterador* it);

int acabou(iterador it);


#endif
