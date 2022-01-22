/*
 *2. Faça uma função que receba uma pilha de inteiros P como parâmetro e que passe seus elementos
pares para uma pilha chamada PAR, e seus elementos ímpares para uma pilha chamada IMPAR. PAR
e IMPAR também devem ser parâmetros da função. Considere alocação encadeada dinâmica.
 */

# include <stdio.h>
#include <stdlib.h>

struct NO {
    int conteudo;
    struct NO *prox;
}; typedef struct NO pilha;

pilha *push2(pilha *topo, int elem){
    pilha *el;

    el = (pilha *) malloc(sizeof(pilha));
    el -> conteudo = elem;
    el -> prox = topo;
    topo = el;

    return topo;
}

pilha *pop2(pilha *topo){
    pilha *lixo;

    if (topo != NULL){
        lixo = topo;
        topo = topo-> prox;
        free(lixo);
    }
    return topo;
}

void imparOUpar(pilha *P, pilha **PAR, pilha **IMPAR){
    int elem;
    while (P != NULL){
        elem = P-> conteudo;

        if ((elem %2) == 0)
            (*PAR) = push2((*PAR), elem);
        else
            (*IMPAR) = push2((*IMPAR), elem);
        P = pop2(P);
    }
}

int ex02Lista5Pilhas (void){
    int num;
    pilha *P, *par, *impar;
    P = NULL;
    par = NULL;
    impar = NULL;

    printf("Digite um numero:");
    scanf("%d", &num);

    while (num > 0){
        P = push2(P, num);

        printf("Digite um numero:");
        scanf("%d", &num);
    }

    imparOUpar(P, &par, &impar);

    printf("\nPilha de numeros pares:\n");

    while (par != NULL){
        printf("-> %d ", par -> conteudo);
        par = pop2(par);
    }

    printf("\nPilha de numeros impares:\n");

    while (impar != NULL){
        printf("-> %d ", impar -> conteudo);
        impar = pop2(impar);
    }

    return 0;
}