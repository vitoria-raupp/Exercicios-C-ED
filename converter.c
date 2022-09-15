#include<stdio.h>

float converta(float fahrenheit){
    return (5.0/9.0*(fahrenheit - 32));
}
void main(){
    float fahrenheit;
    printf("Informe os graus em fahrenheit: ");
    scanf("%f", &fahrenheit);

    printf("\n %.2f graus Fahrenheit = %.2f graus Centigrados ", fahrenheit, converta(fahrenheit));
}
