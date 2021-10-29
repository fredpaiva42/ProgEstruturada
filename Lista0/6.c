/*
 *João recebeu seu salário e precisa pagar duas contas atrasadas. Como as contas estão
atrasadas, João deverá pagar uma multa de 2% sobre cada uma. Faça um programa que leia o
valor do salário de João e das contas que ele deve pagar, e que mostre quanto restará do seu
salário após o pagamento das contas.
 */

# include <stdio.h>

int main (void) {
    float salario, conta1, conta2, restante;

    printf("Informe seu salario: ");
    scanf("%f", &salario);
    printf("Informe o valor das suas contas: ");
    scanf("%f %f", &conta1, &conta2);
    conta1 += conta1 * 0.02;
    conta2 += conta2 * 0.02;
    restante = salario - (conta1 + conta2);

    printf("Sobrou %.2f do salário do João!", restante);
    return 0;
}