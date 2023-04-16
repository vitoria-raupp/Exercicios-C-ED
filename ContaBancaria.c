#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char logradouro [100];
    char complemento [100];
    int cep;
} enderecoConta;

typedef struct{
    char nomeCompleto [300];
    int cpf;
    int senha;
    float saldo;
    enderecoConta endereco;
} contaBancaria;

void imprime(contaBancaria b){
    printf("\nNome Completo: %s", b.nomeCompleto);
    printf("\nCPF: %d", b.cpf);
    printf("\nEndereco completo: %s%s%d", b.endereco.logradouro, b.endereco.complemento, b.endereco.cep);
    printf("\n");
}

contaBancaria fisica[3];

contaBancaria LerConta(){

    contaBancaria fisica;

    printf("\n Nome Completo: ");
    fgets(fisica.nomeCompleto, 299, stdin);

    printf("CPF: ");
    scanf("%d",&fisica.cpf);
    scanf("%c");

    printf("Endereco, Logradouro: ");
    fgets(fisica.endereco.logradouro, 99, stdin);

    printf("Endereco, Complemento: ");
    fgets(fisica.endereco.complemento, 99, stdin);

    printf("Endereco, CEP: ");
    scanf("%d",&fisica.endereco.cep);
    scanf("%c");

    printf("Digite a senha de numeros: ");
    scanf("%d",&fisica.senha);
    scanf("%c");
    return fisica;
}

//int i;

int deposito(){
  int cpf, dep, i;

    printf("Digite o CPF da conta: ");
    scanf("%d",&cpf);
    fflush(stdin);

        if(cpf == fisica[i].cpf){
            printf("Informe o valor do deposito: ");
            scanf("%d",&dep);
            fflush(stdin);

            fisica[i].saldo = fisica[i].saldo + dep;

            printf("O Saldo atual da conta é: %d ", fisica[i].saldo);

        }else{
            printf("conta invalido");
        }
}
void verificaSenha(){
    int cpf, senha,i;

    printf("Digite o CPF da conta: ");
    scanf("%d",&cpf);
    fflush(stdin);

    if(cpf == fisica[i].cpf){
        printf("Informe a senha: ");
        scanf("%d",&senha);
        fflush(stdin);
        if(senha == fisica[i].senha){
            printf("Senha correta");
        }else{
        printf("Senha incorreta");
        }
    }else{
    printf("conta invalida");
    }
}
int main(){
    int i;
   // contaBancaria fisica[3];

    for(i = 0; i < 3; i ++){
        fisica[i]=LerConta();
    }

    for(i = 0; i < 3; i++){
        imprime(fisica[i]);
    }
    deposito();
    verificaSenha();
return 0;
}
