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
    printf("\n Sexo: %c", p.sexo);
    printf("\n Data de nascimento: %d/%d/%d", p.data.dia, p.data.mes, p.data.ano);
}

Pessoa LerPessoa(){

    Pessoa cliente;

    printf("Nome: \n");
    fgets(cliente.nome, 40, stdin);

    printf("Sexo: \n");
    scanf("%c", &cliente.sexo);

    printf("Idade: \n");
    scanf("%d", &cliente.idade);

    printf("Digite sua data de nascimento: dd mm aaaa \n");
    scanf("%d %d %d", &cliente.data.dia, &cliente.data.mes, &cliente.data.ano);

    return cliente;
}
int main(){
    Pessoa cliente;
/*
    printf("Nome: \n");
    fgets(cliente.nome, 40, stdin);

    printf("Sexo: \n");
    scanf("%c", &cliente.sexo);

    printf("Idade: \n");
    scanf("%d", &cliente.idade);

    printf("Digite sua data de nascimento: dd mm aaaa \n");
    scanf("%d %d %d", &cliente.data.dia, &cliente.data.mes, &cliente.data.ano);
*/

    cliente = LerPessoa();
    imprimir(cliente);

return 0;
}

    //printf("Nome: %sIdade %d \nSexo: %c \n", cliente.nome, cliente.idade, cliente.sexo);
    //printf("Data de nascimento: %d/%d/%d", cliente.data.dia, cliente.data.mes, cliente.data.ano);
    //cliente.idade = 19;
    //cliente.sexo = 'F';
    //strcpy(cliente.nome, "Vitoria");
