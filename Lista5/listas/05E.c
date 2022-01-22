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
    char  conteudo[10];
    struct NO *prox, *ant;
};
typedef struct NO lista;

int busca5E(lista *L, char *fruta, lista **pre){
    lista *aux, *preL;
    aux = L->prox;
    preL= L;
    while ((aux != L) && (strcmp(fruta,aux-> conteudo) > 0)) {
        preL = aux;
        aux = aux->prox;
    }
    (*pre) = preL;
    if ((aux != L) && (strcmp(fruta,aux-> conteudo) == 0))
        return 1;
    return 0;
}

lista *insere5E(lista *L, char *fruta) {
    lista *pre, *el;
    if (!busca5E(L,fruta,&pre)) {
        el = (lista *)malloc(sizeof(lista));
        strcpy(el-> conteudo,fruta);
        el->prox = pre->prox;
        el->ant = pre;
        el->prox->ant = el;
        pre->prox = el;
    } else
        printf("--> Elemento já existe\n");
    return L;
}

void imprime5E(lista *L) {
    lista *aux;
    aux = L->prox;
    printf("-> %s ", L-> conteudo);
    while (aux != L) {
        printf("->  %s ", aux-> conteudo);
        aux = aux->prox;
    }
    printf("\n");
    aux = L->ant;
    printf("-> %s ", L-> conteudo);
    while (aux != L) {
        printf("-> %s ", aux-> conteudo);
        aux = aux->ant;
    }
}

lista* concatena5E(lista *L1, lista *L2){
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

int ex05ELista5(void) {
    lista *L1, *L2;
    char fruta[10];

    L1 = (lista *) malloc(sizeof(lista));
    strcpy(L1-> conteudo,"NO_L1");
    L1->prox = L1;
    printf("\n------ CRIANDO L1 ------\n");
    printf("Digite uma fruta:");
    scanf(" %s", fruta);
    while (strcmp(fruta,"fim") != 0) {
        L1 = insere5E(L1,fruta);
        printf("Digite uma fruta:");
        scanf(" %s", fruta);
    }

    L2 = (lista *) malloc(sizeof(lista));
    strcpy(L2-> conteudo,"NO_L2");
    L2->prox = L2;
    printf("\n------ CRIANDO L2 ------\n");
    printf("Digite uma fruta:");
    scanf(" %s", fruta);
    while (strcmp(fruta,"fim") != 0) {
        L2 = insere5E(L2,fruta);
        printf("Digite uma fruta:");
        scanf(" %s", fruta);
    }

    printf("\n\nL1 ");
    imprime5E(L1);
    printf("\n\nL2 ");
    imprime5E(L2);

    L1 = concatena5E(L1,L2);
    printf("\n\n(L1+L2) ");
    imprime5E(L1);
    return 0;
}