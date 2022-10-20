#include<stdio.h>

typedef struct{
    int dia, mes, ano;
} Data;

Data meuAniversario;

void imprimirData(Data *nomeQualquer){
    printf("\n%d/%d/%d \n", nomeQualquer->dia, nomeQualquer->mes, nomeQualquer ->ano);

}
int main(){

    Data meuAniversario;

    Data *ponteiro;

    //ponteiro recebe o endereço da variavel tipo data
    ponteiro = &meuAniversario;

    printf("Endereco de data: %x \n de P: %x \n", &meuAniversario, ponteiro);

    meuAniversario.dia = 04;
    meuAniversario.mes = 11;
    meuAniversario.ano = 2002;

    imprimirData(ponteiro);
    printf("%d/%d/%d", meuAniversario.dia, meuAniversario.mes, meuAniversario.ano);

}
