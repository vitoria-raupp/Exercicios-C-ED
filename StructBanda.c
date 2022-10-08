#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char nomeBanda[100];
    char generoMusica[100];
    int integrantes;
    int ranking;
} DadosBanda;

int main(){
    DadosBanda rock;

    printf("Digite o nome da banda: ");
    fgets(rock.nomeBanda, 90, stdin);
    printf("Digite o genero musical da banda: ");
    fgets(rock.generoMusica, 90, stdin);
    printf("Digite a quantidade de integrantes da banda: ");
    scanf("%d", &rock.integrantes);
    printf("Digite a posição do ranking da banda: ");
    scanf("%d", &rock.ranking);

    printf("Nome da Banda: %s Genero Musica: %s Integrantes: %d \n Ranking: %d", rock.nomeBanda,rock.generoMusica,rock.integrantes, rock.ranking);

}
