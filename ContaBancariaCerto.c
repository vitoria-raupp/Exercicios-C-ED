#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char logradouro [100];
    char complemento [100];
    char cep [20];
} TipoEndereco;

typedef struct{
    int cpfDoCliente;
    char nomeDoCliente[300];
    float saldoDaConta;
    int senhaDaConta;
    TipoEndereco enderecoDoCliente;
} ContaBancaria;

ContaBancaria contas[3];

void lerContas(){
    int i;
    for(i = 0; i < 1; i ++){
            printf("\n Digite o CPF do cliente : ");
            scanf("%d", &contas[i].cpfDoCliente);
            printf("\n Digite o nome do Cliente: ");
            fflush(stdin);
            fgets(contas[i].nomeDoCliente,100,stdin);
            contas[i].saldoDaConta = 0;
            printf("Digite a senha da conta");
            fflush(stdin);
            scanf("%d",&contas[i].senhaDaConta);
            printf("\n Endereco");
            printf("\n Digite o logradouro: ");
            fflush(stdin);
            fgets(contas[i].enderecoDoCliente.logradouro,100,stdin);
            printf("\n Digite o Complemento: ");
            fflush(stdin);
            fgets(contas[i].enderecoDoCliente.complemento,100,stdin);
            printf("\n Digite o CEP: ");
            fflush(stdin);
            fgets(contas[i].enderecoDoCliente.cep,20,stdin);

    }
}

void verSaldo(){
    int i, cpf, senha;
    printf("\n----------------------");
    printf("\n----Ver saldo---------");
    printf("\n----------------------");
    fflush(stdin);

    printf("\n Digite o seu cpf; ");
    scanf("%d", & )

}
int main(){
    int operacao;

    while(operacao != 0){

        printf("\n-------------------");
        printf("Qual operacao deseja realizar: ");
        printf("\n 1 - Criar conta ");
        printf("\n 2 - Ver saldo da conta ");
        printf("\n 3 - Depositas na conta ");
        printf("\n 0 - Para Sair ");
        scanf("%d", &operacao);

    if(operacao == 1){
        lerContas();
    }else if(operacao == 2){

    }else if(operacao == 3){

    }else if(operacao == 0){

    }

    }
}
