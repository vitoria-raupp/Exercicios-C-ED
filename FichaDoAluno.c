#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char nome[50];
    char disciplina[20];
    float nota_prova1, nota_prova2, nota_prova3;

} Ficha_de_aluno;

Ficha_de_aluno Aluno;

void imprime_ficha(Ficha_de_aluno Aluno){
    printf("\n Nome do aluno: %s", Aluno.nome);
    printf(" Disciplina: %s",Aluno.disciplina);
    printf(" Nota 1 prova %2.f",Aluno.nota_prova1);
    printf("\n Nota 2 prova %2.f",Aluno.nota_prova2);
    printf("\n Nota 3 prova %2.f \n",Aluno.nota_prova3);
}

//Ficha_de_aluno Aluno;

Ficha_de_aluno Registro(){
    //Ficha_de_aluno Aluno;

    printf("\n Nome do aluno:");
    fflush(stdin);
    fgets(Aluno.nome, 50, stdin);

    printf("\n Disciplina:");
    fflush(stdin);
    fgets(Aluno.disciplina, 20, stdin);

    printf("\n Nota 1 prova: ");
    scanf("%f", &Aluno.nota_prova1);

    printf("\n Nota 2 prova: ");
    scanf("%f", &Aluno.nota_prova2);

    printf("\n Nota 3 prova: ");
    scanf("%f", &Aluno.nota_prova3);

    //printf("Alunos Cadastrados: ");

    //imprime_ficha(aluno);
    return Aluno;
}

//void main(){
    //Ficha_ode_aluno aluno;
    //Aluno = Registro();
    //imprime_ficha(Aluno);}

int main(){
    int i;
    Ficha_de_aluno Aluno[2];

    for(i = 0; i < 2; i ++){
        Aluno[i] = Registro();
    }

    for(i = 0; i < 2; i++){
        imprime_ficha(Aluno[i]);
    }

return 0;
}

