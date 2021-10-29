/*
 *4. Um funcionário recebe um salário fixo mais 4% de comissão sobre as suas vendas. Faça um
programa que receba o valor do salário fixo do funcionário, o valor das suas vendas e que calcule
e mostre o salário final do funcionário.
 */
#include <stdio.h>

int main (void){
    float salarioFixo, salarioReajustado;
    float valorVendas;

    printf("Informe seu salário fixo: \n");
    scanf("%f", &salarioFixo);
    printf("Informe o valor de vendas que você fez esse mes: \n");
    scanf("%f", &valorVendas);

    salarioReajustado = salarioFixo + (valorVendas * 0.04);
    printf("Salario final: R$ %.2f", salarioReajustado);

    return 0;
}