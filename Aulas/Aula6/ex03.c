/*3. Preencher 2 vetores de X posições cada, com números
inteiros. Fazer uma função que receba os dois vetores
como parâmetros e que retorne a quantidade de posições
que possuem números distintos.
 */

# include <stdio.h>

# define TAM 5

void preencheVetor(int *v, char nome[1]){
    int i;
    printf("\n\nPreenchendo o vetor %s\n", nome);
    for (i = 0; i<TAM; i++){
        printf("Digite um numero para a posicao %d:", i);
        scanf("%d", &v[i]);
    }
}

int comparaVetor(int *vA, int *vB){
    int i, diff = 0;
    for(i = 0; i <TAM; i ++){
        if (vA[i] != vB[i]){
            diff += 1;
        }
    }
    return diff;
}

int ex03Aula6(void) {
    int diferenca, vetA[TAM], vetB[TAM];

    preencheVetor(vetA, "A");
    preencheVetor(vetB, "B");

    diferenca = comparaVetor(vetA, vetB);
    printf("\n\nOs vetores possuem %d posicoes distintas!", diferenca);
    return 0;
}