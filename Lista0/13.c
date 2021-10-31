/*
 * 13. Faça um programa que leia dois números inteiros e que calcule e mostre a soma e a multiplicação
dos dois números e a divisão e a subtração do primeiro pelo segundo
 */
# include <stdio.h>
# include <locale.h>

int treze (void) {
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, soma, multiplicacao, divisao, subtracao;

    scanf("%d %d", &num1, &num2);

    soma = num1 + num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;
    subtracao = num1 - num2;

    wprintf(L"soma: %d \n", soma);
    wprintf(L"multiplicação: %d \n", multiplicacao);
    wprintf(L"divisão: %d \n", divisao);
    wprintf(L"subtração: %d \n", subtracao);

    return 0;
}
