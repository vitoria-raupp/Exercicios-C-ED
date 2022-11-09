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

float cal_variamcia(int quant,float *p){
    int i;
    float soma;
    float cal_media(media);
    for(i=0; i < quant; i ++){
        soma += (p[i] - media) * (p[i] - media);
    }
    return soma
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
    printf("Media :%f ", media);

    media = cal_variamcia(quantidade, ponteiro);
    printf("Variamcia: %f", media);
}
