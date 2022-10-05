#include<stdio.h>

// modelagem da estrutura
struct ponto{
    float x;
    float y;
};

int main(){
  // instanciar a estrutura
    struct ponto p;
    printf("Digite as cordenadas do ponto x e do ponto y: \n");
    scanf("%f %f", &p.x, &p.y);

    // acessando os campos
    printf("O ponto fornecido foi: (%.2f, %.2f) \n", p.x, p.y);

    return 0;
}
