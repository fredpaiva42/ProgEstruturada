#include <stdio.h>
#include <stdlib.h>

struct NO {
    int info;
    struct NO *prox;
};
typedef struct NO fila;
typedef struct NO pilha;

void insereNaFilaEx01(fila **inicio, fila **final, int elem){
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

fila *removeFilaEx01(fila *inicio){
    fila *lixo;

    if (inicio != NULL){
        lixo = inicio;
        inicio = inicio -> prox;
        free(lixo);
    }
    return inicio;
}

pilha *pushEx01(pilha *topo, int elem){
    pilha *el;
    if (elem  % 2 == 0){
        el = (pilha*) malloc(sizeof(pilha));
        el -> info = elem; // recebe o numero em si
        el -> prox = topo;
        topo =  el;
    }
    return topo;
}

pilha *popEx01(pilha *topo) {
    pilha *lixo;

    if (topo != NULL) {
        lixo = topo;
        topo = topo -> prox;
        free(lixo);
    }
    return topo;
}


int ex01Aula10(void) {
    int num;
    fila *inicio, *final;
    pilha *topo;

    topo =  NULL;
    inicio = NULL;
    final = NULL;

    printf("Digite um numero:");
    scanf("%d", &num);
    while (num >= 0){
        insereNaFilaEx01(&inicio, &final, num);

        printf("Digite um numero:");
        scanf("%d", &num);
    }

//    printf("\n\nTeste Fila: ");
//    while (inicio != NULL){
//       printf("%d ", inicio -> info);
//       inicio = inicio -> prox;
//    }

    while (inicio != NULL){
        num = inicio -> info;
        topo = pushEx01(topo, num);
        inicio = removeFilaEx01(inicio);
    }

    printf("\nPilha ");
    while (topo != NULL){
        printf("-> %d ", topo -> info);
        topo = popEx01(topo);
    }

    return 0;
}