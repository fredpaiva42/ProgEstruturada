/*
 *  1. Faça um programa que leia os nomes e as notas dos 60 alunos de uma turma e
    imprima, após a entrada de todos os dados, os nomes dos alunos aprovados.
    Considere que a média para aprovação é 6,0.
 */

#include <stdio.h>

#define TAM 60

int ex01Lista3(void) {
    int i;
    char nomes[TAM][20];
    float notas[TAM];

    for (i = 0; i < TAM; i++){
        printf("\nNome do aluno:");
        scanf(" %s", nomes[i]);
        printf("Nota:");
        scanf("%f", &notas[i]);
    }

    printf("\nAprovados:\n");
    for (i = 0; i < TAM; i++){
        if (notas[i] >= 6.0){
            printf("%s\n", nomes[i]);
        }
    }
    return 0;
}