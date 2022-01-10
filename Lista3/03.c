/*
 * 3. Faça um programa que leia os N salários dos funcionários de uma empresa.
    Calcule a média salarial da empresa e escreva a quantidade de funcionários que
    possuem salário acima da média.
 */

#include <stdio.h>

#define N 5

void salarioAcimadaMedia (float *salarios, float media){
    int i, count = 0;
    for(i=0; i<N; i++){
        if (salarios[i] > media){
            ++count;
        }
    }
    printf("qtd salarios acima da media: %d", count);
}

int ex03Lista3(void) {
    float salarios[N], media = 0;

    for (int i = 0; i < N; i++){
        printf("Digite o salario dos funcionarios: ");
        scanf("%f", &salarios[i]);

        media += salarios[i];
    }

    media /= N;
    printf("A media salarial eh: R$ %.2f", media);

    salarioAcimadaMedia(salarios, media);

    return 0;
}