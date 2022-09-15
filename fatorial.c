#include<stdio.h>

void main(){
    int numero;
    printf("\n informe um numero para responder o fatorial: ");
    scanf("%d", &numero);

    printf("Fatorial de %d e = %d ", numero, fat(numero));

}

int fat(int numero){
    int soma = numero;
    for(int i = (numero - 1); i > 1; i --){
        soma = soma * i ;
    }
}
