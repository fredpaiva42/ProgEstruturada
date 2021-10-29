/*
 * Faça um programa que leia três notas de um aluno com os seus respectivos pesos e que calcule e
escreva a média ponderada dessas notas
 */
#include <stdio.h>

int main (void) {
    float media, n1, n2, n3;
    int peso1, peso2, peso3;

    printf("Digite suas 3 notas e os pesos delas: ");
    scanf ("%f %f %f %d %d %d", &n1, &n2, &n3, &peso1, &peso2, &peso3);

    media = (n1 * peso1 + n2 * peso2 + n3 * peso3) /(peso1+peso2+peso3);
    printf("Sua media é: %.2f", media);
    return 0;
}