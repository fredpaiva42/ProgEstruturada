/*
 *2. Faça um programa que leia dois números inteiros e que calcule e mostre a soma e a multiplicação
dos dois números e a divisão e a subtração do primeiro pelo segundo. Caso o segundo número
digitado seja zero, o programa deve informar ao usuário que a operação de divisão é impossível.
 */

# include <stdio.h>
# include <locale.h>

int segundo (void) {
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    float soma, subtracao, multiplicacao, divisao;

    wprintf(L"Digite dois números:");
    scanf("%d %d", &n1, &n2);

    soma = n1 + n2;
    subtracao = n1 - n2;
    multiplicacao = n1 * n2;
    divisao = (float) n1 / n2;

    wprintf(L"Soma: %.0f\n", soma);
    wprintf(L"Subtração: %.0f\n", subtracao);
    wprintf(L"multiplicação: %.0f\n", multiplicacao);
    if (n2 == 0) {
        wprintf(L"Divisão impossível!");
    }else {
        wprintf(L"Divisão: %.1f", divisao);
    }

    return 0;
}