#include <stdio.h>

void main(){
    const int n = 8; //tamanho dos vetores
    int a[n], b [n]; // declaração dos vetores a e b
    int i;
    for(i = 1; i <= n; i++){
            printf("Informe o %d. elemento: ", i, n);
            scanf("%d", &a[i]);
    }

    for(i = 1; i <= n; i++)
        b[i] = a [i]*2;

    printf("\n-----------------");

    for(i = 1; i <= n; i++)
        printf("%d - %d x 2 = %d \n", i, a[i], b[i]);

}
