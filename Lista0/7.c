/*
 * Faça um programa que leia três notas e que calcule e escreva a média aritmética dessas notas.
 */
#include <stdio.h>

int main (void) {
    float media, n1, n2, n3;

    printf("Digite suas 3 notas: ");
    scanf ("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) /3;
    printf("Sua media é: %.2f", media);
    return 0;
}