/*
 * Considere duas listas encadeadas L1 e L2, onde cada nó da lista possui duas partes: dado, que
    guarda um número inteiro e prox, que guarda o endereço do próximo nó. Para cada item abaixo, faça
    uma função que receba as duas listas como parâmetros e as concatene de acordo com as
    características especificadas.
    Para concatenar L1 com L2 basta juntar o final de L1 com o começo de L2, formando uma única lista
    com endereço inicial em L1

    b. L1 e L2 são simplesmente encadeadas, circulares e sem nós cabeça;
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NO {
    char conteudo[10];
    struct NO *prox;
}; typedef struct NO lista;

int busca5B (lista *L, char *fruta, lista **pre){
    lista *aux, *preL;

    *pre = NULL;
    if (L == NULL)
        return 0;
    else {
        if (strcmp(fruta,L->conteudo) < 0)
            return 0;
        if (strcmp(fruta,L->conteudo) == 0)
            return 1;
    }
    aux = L->prox;
    preL = L;

    while ((aux != L) && (strcmp(fruta,aux -> conteudo) > 0)) {
        preL = aux;
        aux = aux->prox;
    }
    (*pre) = preL;
    if (strcmp(fruta,aux -> conteudo) == 0)
        return 1;
    return 0;
}

lista *insere5B (lista *L, char *fruta) {
    lista *pre, *el, *aux;
    if (!busca5B(L,fruta,&pre)) {
        el = (lista *)malloc(sizeof(lista));
        strcpy(el->conteudo,fruta);
        if (L == NULL) {
            el->prox = el;
            L = el;
        } else {
            if (pre == NULL) {
                aux = L->prox;
                pre = L;
                while (aux != L) {
                    pre = aux;
                    aux = aux->prox;
                }
                L = el;
            }
            el->prox = pre->prox;
            pre->prox = el;
        }
    } else
        printf("-> Elemento já existe\n");
    return L;
}

void imprime5B(lista *L) {

    lista *aux;
    if (L != NULL) {
        printf("-> %s ", L->conteudo);
        aux = L->prox;
        while (aux != L) {
            printf("-> %s ", aux->conteudo);
            aux = aux->prox;
        }

    }
}

lista* concatena5B(lista *L1, lista *L2){
    lista *aux1, *aux2;

    if (L2 != NULL) {
        if (L1 != NULL) {
            aux1 = L1;
            while (aux1->prox != L1)
                aux1 = aux1->prox;
            aux1->prox = L2;
            aux2 = L2;
            while (aux2->prox != L2)
                aux2 = aux2->prox;
            aux2->prox = L1;
        } else
            L1 = L2;
    }

    return L1;
}

int ex05BLista5(void) {
    lista *L1, *L2;
    char fruta[10];

    L1 = NULL;
    printf("\n------ CRIANDO L1 ------\n");
    printf("Digite uma fruta: ");
    scanf(" %s", fruta);
    while (strcmp(fruta,"fim") != 0) {
        L1 = insere5B(L1,fruta);
        printf("Digite uma fruta: ");
        scanf("%s", fruta);
    }

    L2 = NULL;
    printf("\n------ CRIANDO L2 ------\n");
    printf("Digite uma fruta: ");
    scanf(" %s", fruta);
    while (strcmp(fruta,"fim") != 0) {
        L2 = insere5B(L2,fruta);
        printf("Digite uma fruta: ");
        scanf("%s", fruta);
    }

    printf("\n\n L1 ");
    imprime5B(L1);
    printf("\n\n L2 ");
    imprime5B(L2);

    L1 = concatena5B(L1,L2);
    printf("\n\n (L1+L2) ");
    imprime5B(L1);
    return 0;
}