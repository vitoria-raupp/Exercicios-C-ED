#include <stdio.h>
#include <stdlib.h>

float cal_media(int quant,float *p){
    int i;
    float somar;
    for (i=0; i < quant; i ++){
        somar += p[i];
    }
    return somar/quant;
}

float cal_variancia(int quant,float *p, float media){
    int i;
    float soma;
    soma = 0.0;
    for(i=0; i < quant; i ++){
        soma += (p[i] - media) * (p[i] - media);
    }
    return soma/quant;
}

main(){
    float *ponteiro;
    float media, variancia;
    int quantidade, i;

    // leitura do numero de valores que deseja informar
    printf("Digite quantas notas quer informar: \n");
    scanf("%d", &quantidade);

    // alocação dinamica de memoria

    ponteiro = (float*) malloc(quantidade*sizeof(float));

    if(ponteiro==NULL){
        printf("\n Memoria insuficiente");
    }

    for(i = 0; i < quantidade; i ++){
            printf("Digite o %do numero: \n", i+1);
            scanf("%f", &ponteiro[i]);
    }

    media = cal_media(quantidade, ponteiro);
    printf("Media :%.2f \n", media);

    variancia = cal_variancia(quantidade, ponteiro, media);
    printf("Variancia: %.2f", variancia);

    free(ponteiro);
}
