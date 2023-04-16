#include <stdio.h>
#include <malloc.h>

typedef struct elemento {
  int valor;
  struct elemento* prox;
} NODO;

typedef struct {
	struct elemento* head;
  struct elemento* tail;
} LISTA;

void iniciaLISTA(LISTA* LISTA) {
  LISTA->head = NULL;
  LISTA->tail = NULL;
}

void adicionar(LISTA* LISTA, int valor) {
  struct elemento* novo = (struct elemento*) malloc(sizeof(struct elemento));

  novo->valor = valor;
  novo->prox = NULL;

  if (LISTA->head == NULL) LISTA->head = novo; // LISTA ESTA VAZIA
  else LISTA->tail->prox = novo;

  // ADICIONANDO NO FIM
  LISTA->tail = novo;
}

void remover(LISTA* LISTA) {
  if (LISTA->head != NULL) {
    if(LISTA->head == LISTA->tail){
      free(LISTA->head);

      LISTA->head = NULL;
      LISTA->tail = NULL;
    } else {
       NODO* aux = LISTA->head;

       while(aux->prox != NULL){
         if(aux->prox == LISTA->tail) {
           free(aux->prox);
           aux->prox = NULL;
           LISTA->tail = aux;
         } else {
           aux = aux->prox;
         }
       }
    }
  }
}

void imprimeLISTA(LISTA* LISTA) {
  struct elemento* i = LISTA->head;

  printf("MINHA LISTA :)\n");

  while(i != NULL) {
    printf("|_%d_|", i->valor);
    i = i->prox;
  }

  printf("\n\n");
}

int length(LISTA* LISTA) {
  struct elemento* i = LISTA->head;
  int tamanho = 0;

  while(i != NULL) {
    tamanho++;
    i = i->prox;
  }

  return tamanho;
}

int main(void) {
  LISTA minhaLISTA;
  LISTA minhaLISTA2;

  iniciaLISTA(&minhaLISTA);
  iniciaLISTA(&minhaLISTA2);

  adicionar(&minhaLISTA, 2);
  adicionar(&minhaLISTA, 3);
  adicionar(&minhaLISTA, 3);
  adicionar(&minhaLISTA, 4);

  remover(&minhaLISTA);

  imprimeLISTA(&minhaLISTA);

  return 0;
}
