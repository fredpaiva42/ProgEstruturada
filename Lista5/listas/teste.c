/*
 *  Considere duas listas encadeadas L1 e L2, onde cada nó da lista possui duas partes: dado, que guarda um número inteiro e prox, que guarda o endereço do próximo nó. Para cada item abaixo, faça uma função que receba as duas listas como parâmetros e as concatene de acordo com as características especificadas.
    Para concatenar L1 com L2 basta juntar o final de L1 com o começo de L2, formando uma única lista com endereço inicial em L1

    e. L1 e L2 são duplamente encadeadas, circulares e com nós cabeça;
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// COCATENA LISTA
// DUPLAMENTE ENCADEADA,
// CIRCULAR,
// COM NÓ CABEÇA

struct NO {
    int  conteudo;
    struct NO *prox, *ant;
};
typedef struct NO lista;

int buscateste(lista *L, int elem, lista **pre){
    lista *aux, *preL;
    aux = L->prox;
    preL= L;
    while ((aux != L) && (elem > aux->conteudo)) {
        preL = aux;
        aux = aux->prox;
    }
    (*pre) = preL;
    if ((aux != L) && (elem == aux -> conteudo))
        return 1;
    return 0;
}

lista *insereteste(lista *L, int elem) {
    lista *pre, *el;
    if (!buscateste(L,elem,&pre)) {
        el = (lista *)malloc(sizeof(lista));
        el -> conteudo = elem;
        el->prox = pre->prox;
        el->ant = pre;
        el->prox->ant = el;
        pre->prox = el;
    } else
        printf("--> Elemento já existe\n");
    return L;
}

void imprimeteste(lista *L) {
    lista *aux;
    aux = L->prox;
    while (aux != L) {
        printf("->  %d ", aux-> conteudo);
        aux = aux->prox;
    }
    printf("\n");
    aux = L->ant;
    while (aux != L) {
        printf("-> %d ", aux-> conteudo);
        aux = aux->ant;
    }
}

lista* concatenateste(lista *L1, lista *L2){
    lista *aux1, *aux2;

    if (L2->prox != L2) {
        aux1 = L1->ant;
        aux1->prox = L2->prox;
        L2->prox->ant = aux1;
        aux2 = L2->ant;
        aux2->prox = L1;
        L1->ant = aux2;
    }
    free(L2);

    return L1;
}

int teste(void) {
    lista *L1, *L2;
    int num;

    L1 = (lista *) malloc(sizeof(lista));
    L1->prox = L1;
    printf("\n------ CRIANDO L1 ------\n");
    printf("Digite um num:");
    scanf("%d", &num);
    while (num >= 0) {
        L1 = insereteste(L1,num);
        printf("Digite um num:");
        scanf("%d", &num);
    }

    L2 = (lista *) malloc(sizeof(lista));
    L2->prox = L2;
    printf("\n------ CRIANDO L2 ------\n");
    printf("Digite um num:");
    scanf("%d", &num);
    while (num >= 0) {
        L2 = insereteste(L2,num);
        printf("Digite uma fruta:");
        scanf("%d", &num);
    }

    printf("\n\nL1 -> NO_L1 ");
    imprimeteste(L1);
    printf("\n\nL2 -> NO_L2 ");
    imprimeteste(L2);

    L1 = concatenateste(L1,L2);
    printf("\n\n(L1+L2) -> NO_L1 ");
    imprimeteste(L1);
    return 0;
}