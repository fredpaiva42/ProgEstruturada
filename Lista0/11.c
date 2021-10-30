/*
 * 11. Faça um programa que leia o salário de um funcionário e o salário mínimo vigente. Calcular e
escrever quantos salários mínimos ganha o funcionário.
 */

# include <stdio.h>
# include <locale.h>

int main (void) {
    setlocale(LC_ALL, "Portuguese");
    float salarioMinimo, salario, total;

    printf("Informe o salario minimo vigente: ");
    scanf("%f", &salarioMinimo);
    printf("Informe o seu salario:");
    scanf("%f", &salario);

    total = salario / salarioMinimo;

    wprintf(L"Voce recebe %.1f salários minimos", total);

    return 0;
}