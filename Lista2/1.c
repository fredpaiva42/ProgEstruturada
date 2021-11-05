/*
 * 1. Faça um programa que apresente o peso total que será carregado por um caminhão. Sabe-se que
    este caminhão carrega 25 caixas. O peso de cada uma das caixas será informado pelo usuário.
 */

# include <stdio.h>

int ex1L2 (void) {
    int qtdCaixas = 25, i;
    float pesoPorCaixa, pesoTotal;

    for (i = qtdCaixas; i > 0; i--){
        printf("Informe o peso de cada caixa:");
        scanf("%f", &pesoPorCaixa);

        pesoTotal += pesoPorCaixa;
    }
    printf("O caminhao ira carrgar no total: %.2f KG", pesoTotal);
    return 0;
}