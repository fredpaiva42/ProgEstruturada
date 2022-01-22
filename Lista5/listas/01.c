/*
 * 1. Faça uma função recursiva que retorne o número de nós contidos em uma lista L. Considere que L é
    simplesmente encadeada, sem nó cabeça e não circular. Os elementos de L não estão
    necessariamente em ordem
 */

# include <stdio.h>
# include <stdlib.h>

struct NO {
    int conteudo;
    struct NO *prox;
}; typedef struct NO lista;

int busca (lista *L, int elem, lista **pre){
    lista *aux, *preL;
    aux = L;
    preL = NULL;

    while ((aux != NULL) && (elem > aux -> conteudo)){
        preL = aux;
        aux = aux -> prox;
    }
    (*pre) = preL;
    if((aux != NULL) && (elem == aux -> conteudo)){
        return 1;
    }
    return 0;
}

lista *insere (lista *L, int elem){
    lista *pre, *el;
    if (!busca(L, elem, &pre)){
        el = (lista *)malloc(sizeof(lista));
        el -> conteudo = elem;
        if (L == NULL || pre == NULL){
            el -> prox = L;
            L = el;
        } else {
            el -> prox = pre -> prox;
            pre -> prox = el;
        }
    } else {
        printf("-> Elemento ja existe\n");
    }
    return L;
}

int contaNos (lista *L){
    lista *aux;
    aux = L;

    if (aux == NULL)
        return 0;

    else
        return (1 + (contaNos(aux->prox)));
}

int contaNosDaLista(void) {
    lista *L;
    int num;

    L = NULL;
    printf("Digite um num:");
    scanf("%d", &num);

    while (num >= 0) {
        L = insere(L, num);

        printf("Digite um num:");
        scanf("%d", &num);
    }

    printf("Quantidade de nos na lista: %d.", contaNos(L));

    return 0;
}