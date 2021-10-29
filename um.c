# include <stdio.h>
#include <math.h>

/*1. Faça um programa que leia a base e a altura de um retângulo e escreva o seu perímetro, a sua
área e a sua diagonal*/

int main (void) {
    float base, altura, perimetro, area, diagonal;

    printf("Digite a base e a altura do retangulo: ");
    scanf("%f %f", &base, &altura);

    area = base * altura;
    perimetro = 2*(base + altura);
    diagonal = sqrt((pow(base, 2) + pow(altura, 2)));

    printf("\nArea: %.2f", area);
    printf("\nPerimetro: %.2f", perimetro);
    printf("\nDiagonal: %.2f", diagonal);

    return 0;
}