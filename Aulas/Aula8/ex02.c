/*
 * 2. Faça um programa que contenha uma função que contenha uma função que receba duas estruturas do tipo dma, cada uma representando uma data válida, e que devolva o número de anos completos que decorreram entre as duas datas.
 */

# include <stdio.h>

struct dma {
    int dia, mes, ano;
}; typedef struct dma tdma;

int qtdAnosEntreDatas (tdma dataI, tdma dataF){
    int anos;

    anos = dataF.ano - dataI.ano;

    if (dataI.mes > dataF.mes)
        anos--;
    else
        if (dataI.mes == dataF.mes)
            if (dataI.dia > dataF.dia)
                anos--;
    return anos;
}

int ex02Aula8(void) {
    tdma dataI, dataF;
    int anos;

    printf("\nDigite a data inicial:");
    scanf("%d/%d/%d", &dataI.dia, &dataI.mes, &dataI.ano);
    printf("\nDigite a data final:");
    scanf("%d/%d/%d", &dataF.dia, &dataF.mes, &dataF.ano);

    anos = qtdAnosEntreDatas(dataI, dataF);
    printf("\n\nSe passaram %d anos", anos);
    return 0;
}