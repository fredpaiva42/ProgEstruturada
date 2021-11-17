/*Crie uma matriz N x N que representará as amizades entre um
grupo de pessoas. A matriz AMIZADE é preenchida, em cada
posição com o número 0 ou 1. O número 1 numa posição i, j
indica que a pessoa i é amiga de j. Por outro lado, o número 0
indica que i e j não são amigos.
* Faça um programa que preencha a matriz de amizades e depois
verifique se existe alguma inconsistência, já que a relação de
amizade é recíproca.
* Faça uma função que retorne quantas inconsistências existem na
matriz.
 */

# include <stdio.h>

# define N 4

void preencherMatrizAmizade(int mat[N][N]){
    int i, j;
    printf("\nPreenchendo a Matriz\n");
    for (i=0; i < N; i++){
        for (j=0; j < N; j++){
            printf("Digite a posicao [%d][%d]:", i, j);
            scanf("%d",&mat[i][j]);
        }
    }
}

void escreveMatrizAmizade(int mat[N][N]){
    int i, j;
    for (i=0; i < N; i++) {
        for (j=0; j < N; j++){
            printf("[%d][%d]:%d ", i, j,mat[i][j]);
        }
        printf("\n");
    }
}

int amizadeNaoReciproca (int mat[N][N]){
    int i, j, contador = 0;
    for (i = 0; i < N; i++){
        for (j = i; j < N; j++){
            if (mat[i][j] != mat [j][i]){
                contador++;
            }
        }
        printf("\n");
    }
    return contador;
}


int ex06Aula6(void) {
    int matriz[N][N];

    preencherMatrizAmizade(matriz);
    printf("\n\nA matriz %dx%d:\n\n", N, N);
    escreveMatrizAmizade(matriz);


    printf("\n\nExistem %d amizades nao reciprocas.", amizadeNaoReciproca(matriz));

    return 0;
}