/*Faça um programa que preencha uma matriz 3x4 com números inteiros.
a. Faça uma função para preencher a matriz;
b. Faça uma função que escreva a matriz formatada;
 */

# include <stdio.h>

# define L 3
# define C 4

void preencherMatrizInt(int mat[L][C]){
    int i, j;

    for (i = 0; i < L; i++){
        for (j = 0; j < C; j++){
            printf("Digite um numero inteiro para a posicao [%d][%d]:", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void escreveMatrizInt(int mat[L][C]){
    int i, j;
    for (i = 0; i < L; i++){
        for (j = 0; j < C; j++){
            printf("%02d ", mat[i][j]);
        }
        printf("\n");
    }
}

int ex04Aula6(void) {
    int matInt[L][C];

    preencherMatrizInt(matInt);
    printf("\n\nA matriz de %dx%d:\n\n", L, C);
    escreveMatrizInt(matInt);
    return 0;
}