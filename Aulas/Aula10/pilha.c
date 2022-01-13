/*
 * Faça um programa que:
 * Crie uma pilha encadeada com números inteiros
 * os números devem ser inseridos na pilha até que o usuário digite um número negativo
 * Ao final do programa imprima a pilha
 * Devem ser criadas as funções push e pop
 */

#include <stdio.h>
#include <stdlib.h>

struct NO {
    int info;
    struct NO *prox;
}; typedef struct NO pilha;

//inserindo um nó na pilha
pilha *push(pilha *topo, int elem){
    pilha *el;

    el = (pilha*) malloc(sizeof(pilha));
    el -> info = elem; // recebe o numero em si
    el -> prox = topo;
    topo =  el;

    return topo;
}

pilha *pop(pilha *topo) {
    pilha *lixo;

    if (topo != NULL) {
        lixo = topo;
        topo = topo -> prox;
        free(lixo);
    }
    return topo;
}


int pilhaEncadeada(void) {
    pilha *topo;
    topo = NULL;
    int num;

    printf("Digite um numero:");
    scanf("%d", &num);

    while (num >= 0){
        topo = push(topo, num);

        printf("Digite um numero:");
        scanf("%d", &num);
    }

    printf("\nPilha ");
    while (topo != NULL){
        printf("-> %d ", topo -> info);
        topo = pop(topo);
    }

    return 0;
}