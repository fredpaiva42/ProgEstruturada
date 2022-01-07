/*
 * 2. Considere um vetor que guarde 100 números reais. Faça um programa que
    preencha este vetor. Após o vetor preenchido multiplique seus valores ímpares
    por 3 e divida os valores pares por 2. Escreva o maior elemento do vetor.
 */

# include <stdio.h>
#define TAM 5

void preencherVector(float *vetor) {
    int i;
    for (i = 0; i < TAM; i++) {
        printf("Digite um numero:");
        scanf("%f", &vetor[i]);

        if (i % 2 != 0)
            vetor[i] = vetor[i] * 3;
        else
            vetor[i] = vetor[i] / 2;
    }
}

void maiorElemento(float *vetor, float *maior) {
    for (int i = 0; i < TAM; i++) {
        if (vetor[i] > *maior)
            *maior = vetor[i];
    }
    printf("%f", *maior);
}

int main(void) {
    float vetor[TAM], maior = 0;

    preencherVector(vetor);
    maiorElemento(vetor, &maior);


    return 0;

}