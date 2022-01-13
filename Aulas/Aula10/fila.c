#include <stdio.h>
#include <stdlib.h>

struct NO {
    int info;
    struct NO *prox;
}; typedef struct NO fila;

void insereNaFila(fila **inicio, fila **final, int elem){
    fila *el;

    el = (fila *) malloc(sizeof(fila));
    el -> info = elem;
    el -> prox = NULL;
    if ((*inicio) == NULL){
        (*inicio) = el;
    } else{
        (*final) -> prox = el;
    }
    (*final) = el;
}

fila *removeFila(fila *inicio){
    fila *lixo;

    if (inicio != NULL){
        lixo = inicio;
        inicio = inicio -> prox;
        free(lixo);
    }
    return inicio;
}

int filaEncadeada(void) {
    int num;
    fila *inicio, *final;

    inicio = NULL;
    final = NULL;

    printf("Digite um numero:");
    scanf("%d", &num);
    while (num >= 0){
        insereNaFila(&inicio, &final, num);

        printf("Digite um numero:");
        scanf("%d", &num);
    }
    printf("\nFila ");
    while (inicio != NULL){
        printf("-> %d ", inicio -> info);
        inicio = removeFila(inicio);
    }

    return 0;
}