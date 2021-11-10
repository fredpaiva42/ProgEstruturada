/*1. Faça um programa que leia N valores em dólar e que
transforme para real. Deve ser feita uma função que receba o
valor em dólar, a cotação e retorne o equivalente em real.
 */

# include <stdio.h>

float dolarReal(float dolar, float cotacao){
    return(dolar * cotacao);
}

int converterDolarReal(void) {
    float quantia, cotacaoDia;
    int i, qtdValores;

    printf("Digite quantos valores voce deseja converter:");
    scanf("%d", &qtdValores);

    for (i = 0; i < qtdValores; i++) {
        printf("Digite o valor em dolares:");
        scanf("%f", &quantia);
        printf("Digite a cotacao do dia:");
        scanf("%f", &cotacaoDia);

        printf("\n%.2f em reais: R$ %.2f\n", quantia, dolarReal(quantia, cotacaoDia));
    }
    return 0;
}