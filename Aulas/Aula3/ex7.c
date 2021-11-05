/*
 * 7. Calcular o salário de um funcionário sabendo que ele foi contratado
    por 1000 reais em 1995 e que no ano seguinte recebeu um
    aumento de 0.1%, A partir daí, em cada ano o funcionário recebeu
    um percentual de aumento do dobro do ano anterior.
 */

# include <stdio.h>

int main (void) {
    double salarioI = 1000.0, salarioFinal;
    float taxaAumento = 0.01f;
    int anoI, anoF = 2021;

    for (anoI = 1995; anoI < anoF; anoI ++){
        salarioI += salarioI * taxaAumento;
        salarioFinal = salarioI;
        printf("Salario em %d: R$ %.2f - aumento de %.1f%% \n", anoI, salarioFinal, taxaAumento*100);
        taxaAumento *= 2;
    }
    printf("Salario do funcionario em %d eh: R$ %.2f - aumento de %.1f%%", anoF, salarioFinal, taxaAumento*100);
    return 0;
}