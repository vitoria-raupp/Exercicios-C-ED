#include <stdio.h>
#include <stdlib.h>

main(){
    int *v;

    v = malloc(10*sizeof(int));
    //v = (int*) malloc(10*sizeof(int));

    if(v){
        printf("Memoria alocada com sucesso! \n");
        printf("\n v : %d", *v);
        *v = 100;
        printf("\n v : %d", *v);

    }else{
        printf("Memoria insuficiente \n");
    }
}
