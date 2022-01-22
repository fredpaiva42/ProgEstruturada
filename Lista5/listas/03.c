/*
 * Faça uma função recursiva que escreva se um determinado elemento pertence ou não a uma lista.
    Considere que L é simplesmente encadeada, sem nó cabeça e não circular.
 */
#include <stdio.h>
#include <stdlib.h>

struct NO {
    int conteudo;
    struct NO *prox;
}; typedef struct NO lista;

int busca3(lista *L, int elem, lista **pre){
    lista *aux, *preL;
    aux = L;
    preL = NULL;

    while ((aux != NULL) && (elem > aux->conteudo)){
        preL = aux;
        aux = aux->prox;
    }
    (*pre) = preL;
    if ((aux != NULL) && (elem == aux -> conteudo))
        return 1;
    return 0;
}

lista *insere3(lista *L, int elem) {
    lista *pre, *el;

    if (!busca3(L, elem, &pre)) {
        el = (lista *)malloc(sizeof(lista));
        el -> conteudo = elem;
        if (L == NULL || pre == NULL){
            el -> prox = L;
            L = el;
        } else {
            el -> prox = pre -> prox;
            pre -> prox = el;
        }
    } else
        printf("-> Elemento ja existe\n");
    return L;
}

int encontraElem (lista *L, int elem){
    lista *aux;
    aux = L;

    if (aux == NULL){
        return 0;
    } else if ( aux -> conteudo == elem){
        return 1;
    }else {
        return (encontraElem(aux->prox, elem));
    }
}

int ex03Lista5 (void) {
    lista *L;
    int num, elem;

    L = NULL;
    printf("Digire um num:");
    scanf("%d", &num);

    while (num >= 0){
        L = insere3(L, num);
        printf("Digite um num:");
        scanf("%d", &num);
    }

    printf("Digite o elemento que voce procura:");
    scanf("%d", &elem);

    if (encontraElem(L, elem)){
        printf("\nO %d, se encontra na lista.", elem);
    }else{
        printf("\nO %d, nao se encontra na lista.", elem);
    }

    return 0;
}
