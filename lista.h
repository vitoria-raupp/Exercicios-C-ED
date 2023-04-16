#define max 100
#define TRUE 1
#define FALSE 0
#define boolean int


typedef int tipo_chave;

typedef struct {
    char marca[max];
    char modelo[max];
    int ano;
} tipo_dado;

typedef struct //estrutura criada para os elementos
{
    tipo_chave chave;
    tipo_dado info;
} tipo_elem;

typedef struct
{
    int nelem; //n elementos
    tipo_elem A[max+1]; //vetor para os elementos
} lista;

boolean Vazia(lista *L);
boolean Cheia(lista *L);
void Definir(lista *L);
void Apagar(lista *L);
boolean Inserir_posic(tipo_elem x, int p, lista *L);
boolean Inserir_ord(tipo_elem x, lista *L);
boolean Buscar(tipo_chave x, lista *L, int *p);
boolean Buscar_ord(tipo_chave x, lista *L, int *p);
boolean Busca_bin(tipo_chave x, lista *L, int *p);
void Remover_posic(int *p, lista *L);
boolean Remover_ch(tipo_chave x, lista *L);
void Impr_elem(tipo_elem t);
void Imprimir(lista *L);
int Tamanho(lista *L);
