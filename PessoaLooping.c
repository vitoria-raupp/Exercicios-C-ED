#include<stdio.h>
#include<stdlib.h>

// modelagem da estrutura
// mes / dia / ano
typedef struct{
    int dia, mes, ano;
}DataNascimento;

typedef struct{
    DataNascimento data;
    char nome [50];
    int idade;
    char sexo;
} Pessoa;

void imprimir(Pessoa p){
    printf("\n Nome: %s", p.nome);
    printf(" Idade: %d", p.idade);
    printf("Sexo: %c", p.sexo);
    printf("\n Data de nascimento: %d/%d/%d", p.data.dia, p.data.mes, p.data.ano);
}

Pessoa LerPessoa(){

    Pessoa cliente;

    printf("\n Nome: ");
    fgets(cliente.nome,40,stdin);

    printf("\n Idade:");
    scanf("%d",&cliente.idade);
    scanf("%c");

    printf("\n Sexo: ");
    scanf("%c",&cliente.sexo);

    printf("\n Digite sua data de nascimento: dd mm aaaa ");
    scanf("%d %d %d", &cliente.data.dia, &cliente.data.mes, &cliente.data.ano);
    scanf("%c");
    return cliente;
}/*

Pessoa LerPessoa(){

    Pessoa cliente;

    printf("\n Nome: ");
    fgets(cliente.nome,40,stdin);

    printf("\n Sexo: ");
    scanf("%c",&cliente.sexo);

    printf("\n Idade:");
    scanf("%d",&cliente.idade);

    printf("\n Digite sua data de nascimento: dd mm aaaa ");
    scanf("%d %d %d", &cliente.data.dia, &cliente.data.mes, &cliente.data.ano);

    return cliente;
}*/
int main(){
    int i;
    Pessoa cliente [3];

    for( i = 0; i < 3; i++){
        cliente[i] = LerPessoa();
    }
    for(i = 0; i < 3; i++){
        imprimir(cliente[i]);
    }

return 0;
}
