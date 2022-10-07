#include<stdio.h>
#include<stdlib.h>

// modelagem da estrutura
typedef struct{
    char nome [50];
    int idade;
    char sexo;
} Pessoa;

int main(){
    Pessoa cliente;

    printf("Nome: \n");
    fgets(cliente.nome, 40, stdin);
    printf("Sexo: \n");
    scanf("%c", &cliente.sexo);
    printf("Idade: \n");
    scanf("%d", &cliente.idade);

    //cliente.idade = 19;
    //cliente.sexo = 'F';
    //strcpy(cliente.nome, "Vitoria");

    printf("Nome: %sIdade %d \nSexo: %c ", cliente.nome, cliente.idade, cliente.sexo);

return 0;
}
