/*
 * Sabendo que o quilowatt de energia custa um décimo do salário mínimo, faça um programa que
leia o valor do salário mínimo e a quantidade de quilowatts gasta por um usuário e calcule e
escreva: o valor de um quilowatt e o valor da conta de energia do usuário.
 */

# include <stdio.h>

int main (void) {
    float salarioMinimo, consumo, valorKw, conta;

    printf("Informe o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);
    printf("Informe seu consumo em KW: ");
    scanf("%f", &consumo);

    valorKw = salarioMinimo * 1/10;
    conta = consumo * valorKw;

    printf("\nO preco do Kw e R$ %.2f e sua conta e R$ %.2f", valorKw, conta);
    return 0;
}
