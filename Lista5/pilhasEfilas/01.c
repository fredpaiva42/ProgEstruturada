/*
 * Faça uma função que receba uma pilha P como parâmetro e que escreva todos os seus elementos.
    Considere uma pilha de números inteiros. Considere alocação encadeada dinâmica.
 */


#include <stdio.h>
#include <stdlib.h>

struct NO {
    int conteudo;
    struct NO *prox;
}; typedef struct NO pilha;

pilha *push1(pilha *topo, int elem){
    pilha *el;

    el = (pilha *)malloc(sizeof(pilha));
    el -> conteudo = elem;
    el -> prox = topo;
    topo = el;

    return topo;
}

pilha *pop1(pilha *topo){
    pilha *lixo;
    if (topo != NULL){
        lixo = topo;
        topo = topo -> prox;
        free(lixo);
    }
    return topo;
}

int ex01Lista5 (void){
    int num;
    pilha *topo;
    topo = NULL;

    printf("\nDigite um numero:");
    scanf("%d", &num);

    while(num >0){
        topo = push1(topo, num);
        printf("Digte um numero:");
        scanf("%d", &num);
    }

    printf("\nPilha ");

    while (topo != NULL){
        printf("-> %d ", topo -> conteudo);
        topo = pop1(topo);
    }
    return 0;
}