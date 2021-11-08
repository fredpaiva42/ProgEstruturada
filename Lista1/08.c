/*
 * 8. Faça um programa que leia o número de eleitores de um município, o número de votos brancos,
nulos e validos. Calcule e escreva o percentual que cada um representa em relação ao total de
eleitores.
 */

# include <stdio.h>

int oitavo (void) {
    int numEleitores, qtdVotosBrancos, qtdVotosNulos, qtdVotosValidos;
    float percentualVotosB, percentualVotosN, percentualVotosV;

    printf("Informe o Total de eleitores do municipio:");
    scanf("%d", &numEleitores);
    printf("Informe a quantidade de votos em branco, a quantidade de votos nulos e a quantidade de votos validos:");
    scanf("%d %d %d", &qtdVotosBrancos, &qtdVotosNulos, &qtdVotosValidos);

    percentualVotosV = (float) qtdVotosValidos * 100 / numEleitores;
    percentualVotosN = (float) qtdVotosNulos * 100 / numEleitores;
    percentualVotosB = (float) qtdVotosBrancos * 100 / numEleitores;

    printf("\nTotal de Eleitores: %d\n Percentual de votos validos: %.1f%% \nPercentual de votos em Branco: %.1f%% \npercentual de votos nulos: %.1f%%", numEleitores, percentualVotosV, percentualVotosB, percentualVotosN);
    return 0;
}