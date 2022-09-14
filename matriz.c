#include<stdio.h>

int main(){
    #define n 3
    int i, j, m[n][n];

    // laço dentro do laço
    for (i = 0; i < n; i ++){
        printf("Informe os elementos da %da linha: \n", (i+1));
        for(j = 0; j < n; j++){
            printf("m[%d][%d] = ", i, j);
            scanf("%d", &m[i][j]);
        }
        printf("\n");

    }
    printf("\n");

    for(i=0; i<n; i++){
        printf("%d linha: ", i);
        for(j=0; j<n; j++){
            printf("%d", m[i][j]);
        }
        printf("\n");
    }

}
