/*
 * Seja uma fila F de números inteiros com alocação sequencial estática, faça a declaração desta
estrutura e uma função que verifique se o elemento do começo da fila é par
 */

# include <stdio.h>

# define MAX 5

struct FILA {
    int dado[MAX];
    int fim, total;
};typedef struct FILA fila;

void inserir3(fila *F, int elem){
    F->dado[F->fim] = elem;
    F -> fim++;
    F-> fim = F-> fim %MAX;
    F-> total++;
}

void ehpar(fila *F) {
    int num;

    num = F -> dado[0];
    printf("\nO numero do inicio da lista (%d) ", num);

    if ((num % 2) == 0)
        printf("\n%d eh par.", num);
    else
        printf("\n%d nao eh par", num);
}

int ex03Lista5Fila (void){
    fila F;
    int elem, i;

    F.total = 0;
    F.fim = 0;

    printf("Digite um numero:");
    scanf("%d",&elem);

    while (elem > 0){
        inserir3(&F, elem);
        printf("Digite um numero:");
        scanf("%d",&elem);
    }
    ehpar(&F);

    return 0;
}