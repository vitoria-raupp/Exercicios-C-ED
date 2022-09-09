int main(){
    int valor;

    printf("informe um valor:  ");
    scanf("%d", &valor);

    for(int i  = 1; i <= 10; i ++){
        printf("%d X %d = %d", valor, i, (i*valor));
        printf("\n");
    }
}
