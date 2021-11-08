/*
 * A prefeitura da “Terra do Nunca” vai realizar suas eleições em urnas eletrônicas, sendo 3 os
candidatos à prefeitura (Capitão Gancho, Peter Pan e Wendy). Elabore um programa que permita ao
usuário informar o número de votos de cada um dos candidatos, escrevendo em seguida o resultado
da eleição. Sabe-se que, caso um dos candidatos tenha mais de 50% dos votos ele é eleito sem
necessidade de segundo turno. Na “Terra do Nunca” não existem votos nulos ou brancos.
 */

# include <stdio.h>

int nono (void) {
    int qtdVotosC, qtdVotosP, qtdVotosW, totalVotos, metade;

    printf("Informe a quantidade de votos para o Capitao Gancho:");
    scanf("%d", &qtdVotosC);
    printf("Informe a quantidade de votos para o Peter Pan:");
    scanf("%d", &qtdVotosP);
    printf("Informe a quantidade de votos para a Wendy:");
    scanf("%d", &qtdVotosW);

    totalVotos = qtdVotosW * qtdVotosC + qtdVotosP;
    metade = totalVotos * 0.5;
    if (qtdVotosW > metade || qtdVotosC > metade || qtdVotosP > metade) {
        if (qtdVotosC > qtdVotosW && qtdVotosC > qtdVotosP){
            printf("Capitao Gancho foi o vencedor!");
        }else if (qtdVotosP > qtdVotosW && qtdVotosP > qtdVotosC){
            printf("Peter Pan foi o vencedor!");
        }else {
            printf("Wendy foi a vencedora!");
        }
    }else {
        printf("\nSegundo turno!\n");
        if (qtdVotosC > qtdVotosP && qtdVotosW > qtdVotosP) {
            printf("Informe a quantidade de votos para o Capitao Gancho:");
            scanf("%d", &qtdVotosC);
            printf("Informe a quantidade de votos para a Wendy:");
            scanf("%d", &qtdVotosW);

            if (qtdVotosC > qtdVotosW){
                printf("Capitao Gancho foi o vencedor!");
            }else {
                printf("Wendy foi a vencedora!");
            }
        } else if (qtdVotosP > qtdVotosC && qtdVotosW > qtdVotosC) {
            printf("Informe a quantidade de votos para o Peter Pan:");
            scanf("%d", &qtdVotosP);
            printf("Informe a quantidade de votos para a Wendy:");
            scanf("%d", &qtdVotosW);

            if (qtdVotosP > qtdVotosW){
                printf("Peter Pan foi o vencedor!");
            }else {
                printf("Wendy foi a vencedora!");
            }
        } else {
            printf("Informe a quantidade de votos para o Capitao Gancho:");
            scanf("%d", &qtdVotosC);
            printf("Informe a quantidade de votos para o Peter Pan:");
            scanf("%d", &qtdVotosP);

            if (qtdVotosC > qtdVotosP){
                printf("Capitao Gancho foi o vencedor!");
            }else {
                printf("Peter Pan foi o vencedor!");
            }
        }
    }

    return 0;
}