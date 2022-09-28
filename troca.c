#include<stdio.h>

void troca(int *px, int *py){
    int temp;
    temp = *px;

    *px = *py;
    *py = temp;
}
int main (){
    int num1 = 5, num2 = 7;

    troca(&num1, &num2);

    printf("Resultado:\n num1 eh: %d num2 eh: %d", num1, num2);
}
