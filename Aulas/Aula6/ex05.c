/*Faça um programa que preencha uma matriz NxN e que
escreva a soma dos elementos da diagonal principal.
a. Faça uma função para preencher a matriz;
b. Faça uma função que escreva a matriz formatada;
c. Faça uma função que retorne a soma dos elementos da
diagonal principal
 */

# include <stdio.h>

# define N 3

void preencherMatrizNN(int mat[N][N]){
    int i, j;
    printf("\nPreenchendo a Matriz\n");
    for (i=0; i < N; i++){
        for (j=0; j < N; j++){
            printf("Digite a posicao [%d][%d]:", i, j);
            scanf("%d",&mat[i][j]);
        }
    }
}

void escreveMatrizNN(int mat[N][N]){
    int i, j;
    for (i=0; i < N; i++) {
        for (j=0; j < N; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int somaDiagonalPrincipal(int mat[N][N]){
    int i, soma = 0;
    for (i=0; i < N; i++){
        soma += mat[i][i];
    }
    return soma;
}


int ex05Aula6(void) {
    int matriz[N][N], soma;

    preencherMatrizNN(matriz);
    printf("\n\nA matriz %dx%d:\n\n", N, N);
    escreveMatrizNN(matriz);

    soma = somaDiagonalPrincipal(matriz);
    printf("\n\nA soma da diagonal principal eh: %d", soma);

    return 0;
}