int main(){
    float imc, peso, altura;

    printf("informe o seu peso e depois a altura");
    scanf("%f%f", &peso, &altura);

    imc = peso /(altura * altura);
    printf("\n IMC: %.2f", imc);

    if(imc < 20)
        printf("\n Abaixo do peso");
    else if((imc >= 20) && (imc < 25))
        printf("\n Peso normal");
    else if((25<= imc) && (imc<30))
        printf("\n Acima do peso");
    else if((30<=imc) && (imc>35))
        printf("\n Obeso");
    else
        printf("\n Muito obeso");
}
