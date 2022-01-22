/*
 * Considere duas listas encadeadas L1 e L2, onde cada nó da lista possui duas partes: dado, que
    guarda um número inteiro e prox, que guarda o endereço do próximo nó. Para cada item abaixo, faça
    uma função que receba as duas listas como parâmetros e as concatene de acordo com as
    características especificadas.
    Para concatenar L1 com L2 basta juntar o final de L1 com o começo de L2, formando uma única lista
    com endereço inicial em L1

    a. L1 e L2 são simplesmente encadeadas, não circulares e sem nós cabeça;
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NO {
    char conteudo[10];
    struct NO *prox;
}; typedef struct NO lista;

int busca5A(lista *L, char *fruta, lista **pre){
    lista *aux, *preL;
    aux = L;
    preL = NULL;

    while ((aux != NULL) && (strcmp(fruta, aux->conteudo) > 0)){
        preL = aux;
        aux = aux -> prox;
    }
    (*pre) = preL;
    if ((aux != NULL)  && (strcmp(fruta, aux-> conteudo)== 0))
        return 1;
    return 0;
}

lista *insere5A(lista *L, char *fruta){
    lista *pre, *el;
    if (!busca5A(L, fruta, &pre)){
        el = (lista *)malloc(sizeof(lista));
        strcpy(el-> conteudo,fruta);

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

void imprime5A(lista *L) {
    while (L != NULL){
        printf("-> %s ", L -> conteudo);
        L = L -> prox;
    }
}
lista *concatena5A(lista *L1, lista *L2){
    lista *aux1, *aux2;

    if (L2 != NULL) {
        if (L1 != NULL) {
            aux1 = L1;
            while (aux1->prox != NULL)
                aux1 = aux1->prox;
            aux1->prox = L2;
        }else
            L1 = L2;
    }
    return L1;
}

int ex05ALista5(void) {
    lista *L1, *L2;
    char fruta[10];
    int op;

    L1 = NULL;
    printf("\n------ CRIANDO L1 ------\n");
    printf("Digite uma fruta: ");
    scanf(" %s", fruta);
    while (strcmp(fruta,"fim") != 0) {
        L1 = insere5A(L1,fruta);
        printf("Digite uma fruta: ");
        scanf("%s", fruta);
    }

    L2 = NULL;
    printf("\n------ CRIANDO L2 ------\n");
    printf("Digite uma fruta: ");
    scanf(" %s", fruta);
    while (strcmp(fruta,"fim") != 0) {
        L2 = insere5A(L2,fruta);
        printf("Digite uma fruta: ");
        scanf("%s", fruta);
    }

    printf("\n\n L1 ");
    imprime5A(L1);
    printf("\n\n L2 ");
    imprime5A(L2);

    L1 = concatena5A(L1,L2);
    printf("\n\n (L1+L2) ");
    imprime5A(L1);
    return 0;
}
