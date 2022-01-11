/*
 * Faça um programa que leia 2 pontos e implemente uma única função que:
 * — Receba os pontos lidos como parâmetros
 * — Retorne a multiplicação dos pontos
 * — Retorne a soma dos pontos
 */

# include <stdio.h>

struct tipoPonto {
    int x;
    int y;
}; typedef struct tipoPonto tPonto;

void calculaPontos (tPonto A, tPonto B, tPonto *soma, tPonto *multiplicacao){
    soma -> x = A.x + B.x;
    soma -> y =  A.y + B.y;

    multiplicacao -> x = A.x * B.x;
    multiplicacao -> y = A.y * B.y;
}

int ex03Aula8(void){
    tPonto A, B, soma, multiplicacao;

    printf("\nDigite os valores para A:");
    scanf("%d %d",&A.x,&A.y);
    printf("\nDigite os valores para B:");
    scanf("%d %d",&B.x,&B.y);

    calculaPontos(A, B, &soma, &multiplicacao);
    printf("\nA soma dos pontos: (%d, %d)", soma.x, soma.y);
    printf("\nA multiplicacao dos pontos: (%d, %d)", multiplicacao.x, multiplicacao.y);

    return 0;
}