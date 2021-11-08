/*
 *7. Faça um programa que leia a quantidade de horas aula dadas por dois professores e o valor por
hora recebido por cada um. Mostrar na tela qual dos professores tem salário total maior
 */

# include <stdio.h>


int setimo (void) {

    int qtdH1, qtdH2;
    float valorH1, valorH2, salario1, salario2;

    printf("Informe a quantidade de horas ministrada pelo professor 1:");
    scanf("%d", &qtdH1);
    printf("Informe o Valor/hora do professor 1:");
    scanf("%f", &valorH1);
    printf("Informe a quantidade de horas ministrada pelo professor 2:");
    scanf("%d", &qtdH2);
    printf("Informe o Valor/hora do professor 2:");
    scanf("%f", &valorH2);

    salario1 = qtdH1 * valorH1;
    salario2 = qtdH2 * valorH2;

    if (salario1 > salario2) {
        printf("O professor 1 tem um salario total maior");
    }else {
        printf("O professor 2 tem um salario total maior");
    }
    return 0;
}