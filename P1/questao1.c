# include <stdio.h>

# define N 2

void preencherMatriz(int mat[N][N]){
    int i, j;
    for (i=0; i < N; i++){
        for (j=0; j < N; j++){
            printf("Digite a posicao [%d][%d]:", i, j);
            scanf("%d",&mat[i][j]);
        }
    }
}

void escreveMatriz(int mat[N][N]){
    int i, j;
    for (i=0; i < N; i++) {
        for (j=0; j < N; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}


void somaMatriz(int matA[N][N], int matB[N][N], int resultado[N][N]){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            resultado[i][j] = matA[i][j] + matB[i][j];
        }
    }
    escreveMatriz(resultado);
}

void subtraiMatriz(int matA[N][N], int matB[N][N], int resultado[N][N])
{
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            resultado[i][j] = matA[i][j] - matB[i][j];
        }
    }
    escreveMatriz(resultado);
}

void multiplicaMatriz(int matA[N][N], int matB[N][N], int resultado[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            resultado[i][j]=0;
            for(int k=0;k<N;k++){
                resultado[i][j]+=matA[i][k]*matB[k][j];
            }
        }
    }
    escreveMatriz(resultado);
}

void apresentaMenu() {
    printf("MENU\n");
    printf("1 - (A + B)\n");
    printf("2 - (A - B)\n");
    printf("3 - (A x B)\n");
    printf("4 - Fim do Programa\n");
    printf("==> ");
}

int questao1(void) {
    int matrizA[N][N], matrizB[N][N], decisao, resultado[N][N];

    printf("Preenchendo a Matriz A: \n");
    preencherMatriz(matrizA);
    printf("\n");
    printf("Preenchendo a Matriz B: \n");
    preencherMatriz(matrizB);

    printf("\n");
    printf("Escrevendo a Matriz A: \n");
    escreveMatriz(matrizA);
    printf("\n");
    printf("Escrevendo a Matriz B: \n");
    escreveMatriz(matrizB);
    printf("\n");

    apresentaMenu();

    scanf("%d", &decisao);
    while (decisao != 4){
    switch(decisao){
        case 1:
            somaMatriz(matrizA, matrizB, resultado);
            break;
        case 2:
            subtraiMatriz(matrizA, matrizB, resultado);
            break;
        case 3:
            multiplicaMatriz(matrizA, matrizB, resultado);
            break;
        case 4:
            return 0;
        default:
            printf("Opção inválida!\n");
            break;
        }
        apresentaMenu();
        scanf("%d", &decisao);
    }
    return 0;
}
