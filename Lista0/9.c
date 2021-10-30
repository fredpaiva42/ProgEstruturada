/*
 * Faça um programa que leia o salário de um funcionário e que calcule e escreva o salário com um
desconto de 10%.
 */

# include <stdio.h>

int nove (void) {
    float salario, desconto = 0.10f, salarioFinal;

    printf("Informe seu salario: ");
    scanf("%f", &salario);

    salarioFinal = salario - (salario * desconto);

    printf("Seu salario com desconto: R$ %.2f", salarioFinal);
    return 0;
}