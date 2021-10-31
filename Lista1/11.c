/*
 * Uma loja de bicicletas paga a cada vendedor 2 salários mínimos mensais, mais uma comissão de 5%
sobre as vendas das bicicletas, dividida igualmente entre eles. Escreva um programa que leia o
número de empregados da loja, o valor do salário mínimo, o valor das vendas do mês e que calcule e
escreva: o salário total de cada empregado.
 */

# include <stdio.h>

int decimoPrimeiro (void) {
    int qtdFuncionarios;
    float vendaMes, salarioMinimo, comissao, salarioFinal;

    printf("Informe o total de funcionarios:");
    scanf("%d", &qtdFuncionarios);
    printf("Informe o valor das vendas no mes:");
    scanf("%f", &vendaMes);
    printf("Informe o valor do salarioMinimo:");
    scanf("%f", &salarioMinimo);

    comissao = (vendaMes * 0.05) / qtdFuncionarios;
    salarioFinal = (salarioMinimo * 2 + comissao);

    printf("O salario total de cada funcionario: R$ %.2f", salarioFinal);
    return 0;
}