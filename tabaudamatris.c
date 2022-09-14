#include<stdio.h>

void main(){
    int numero;

    printf("\ninforme um numero para a tabuada: ");
    scanf("%d", &numero);

    printf("\n O numero informado foi: %d", numero);

    tabuada(numero);
}

void tabuada(int a){
    int i;
    for(i = 1; i <= 10; i++){
        printf("\n%d x %d = %d", i, a, (i*a));
    }
}
