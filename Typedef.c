#include<stdio.h>

// modelagem da estrutura
typedef struct{
    float x;
    float y;
} Ponto;

int main(){
  // instanciar a estrutura
    Ponto p;
    printf("Digite as cordenadas do ponto x e do ponto y: \n");
    scanf("%f %f", &p.x, &p.y);

    // acessando os campos
    printf("O ponto fornecido foi: (%.2f, %.2f) \n", p.x, p.y);

    return 0;
}
