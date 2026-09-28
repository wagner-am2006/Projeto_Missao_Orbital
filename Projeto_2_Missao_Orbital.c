#include <stdio.h>

int main() {

    // Nome: Dyego Luiz Paiva de Castro,Wagner Alves moreira,Maria Eduarda Flausino Alves
    // RGM: 49442708,47547821,49177681
    // Projeto 2 - Missão Orbital

    int codigoCadete;
    int etapa;
    int pontos;
    int total;
    float media;
    int continuar;

    do {

        printf("\n==============================\n");
        printf("      MISSAO ORBITAL\n");
        printf("==============================\n");

        printf("Codigo do cadete: ");
        scanf("%d", &codigoCadete);

        
        total = 0;

        
        for (etapa = 1; etapa <= 3; etapa++) {

            printf("Pontuacao da etapa %d: ", etapa);
            scanf("%d", &pontos);

            
            while (pontos < 0 || pontos > 100) {

                printf("Pontuacao invalida!\n");
                printf("Digite uma pontuacao entre 0 e 100: ");
                scanf("%d", &pontos);
            }

            
            total = total + pontos;
        }

      
        media = total / 3.0;

        printf("\n---------- RESULTADO ----------\n");
        printf("Cadete: %d\n", codigoCadete);
        printf("Pontuacao total: %d pontos\n", total);
        printf("Media: %.2f\n", media);

       
        if (media >= 85.0) {

            printf("Classificacao: COMANDANTE DA MISSAO\n");
            printf("Treinamento concluido com excelencia.\n");

        } else if (media >= 70.0) {

            printf("Classificacao: PILOTO APROVADO\n");
            printf("Cadete autorizado para a missao.\n");

        } else if (media >= 50.0) {

            printf("Classificacao: CADETE EM RECUPERACAO\n");
            printf("Novo treinamento recomendado.\n");

        } else {

            printf("Classificacao: TREINAMENTO REINICIADO\n");
            printf("Cadete ainda nao autorizado.\n");
        }

        // Verifica pontuacao maxima
        if (total == 300) {
            printf("PONTUACAO MAXIMA!\n");
        }

        printf("-------------------------------\n");

        printf("Avaliar outro cadete? 1-Sim | 0-Nao: ");
        scanf("%d", &continuar);

    } while (continuar == 1);

    printf("\nSistema encerrado.\n");

    return 0;
}