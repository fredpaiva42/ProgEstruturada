#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// COCATENA LISTA
// SIMPLESMENTE ENCADEADA,
// NÃO CIRCULAR,
// SEM NÓ CABEÇA

struct NO {
    char info[10];
    struct NO *prox;
};
typedef struct NO lista;

int buscaElem(lista *L, char *fruta, lista **pre){
    lista *aux, *preL;
    aux = L;
    preL= NULL;
    while ((aux != NULL) && (strcmp(fruta,aux->info) > 0)) {
        preL = aux;
        aux = aux->prox;
    }
    (*pre) = preL;
    if ((aux != NULL) && (strcmp(fruta,aux->info) == 0))
        return 1;
    return 0;
}

lista *insereElem(lista *L, char *fruta) {
    lista *pre, *el;
    if (!buscaElem(L,fruta,&pre)) {
        el = (lista *)malloc(sizeof(lista));
        strcpy(el->info,fruta);
        if (L == NULL || pre == NULL) {
            el->prox = L;
            L = el;
        } else {
            el->prox = pre->prox;
            pre->prox = el;
        }
    } else
        printf("--> Elemento já existe\n");
    return L;
}

void imprimeLista(lista *L) {
    while (L != NULL) {
        printf("%s -> ", L->info);
        L = L->prox;
    }
}

lista* concatena(lista *L1, lista *L2){
    lista *aux1, *aux2;

    if (L2 != NULL) {
        if (L1 != NULL) {
            aux1 = L1;
            while (aux1->prox != NULL)
                aux1 = aux1->prox;
            aux1->prox = L2;
        } else
            L1 = L2;
    }

    return L1;
}

int main(void) {
    lista *L1, *L2;
    char fruta[10];
    int op;

    L1 = NULL;
    printf("\n------ CRIANDO L1 ------\n");
    printf("Digite uma fruta: ");
    scanf(" %s", fruta);
    while (strcmp(fruta,"fim") != 0) {
        L1 = insereElem(L1,fruta);
        printf("Digite uma fruta: ");
        scanf("%s", fruta);
    }

    L2 = NULL;
    printf("\n------ CRIANDO L2 ------\n");
    printf("Digite uma fruta: ");
    scanf(" %s", fruta);
    while (strcmp(fruta,"fim") != 0) {
        L2 = insereElem(L2,fruta);
        printf("Digite uma fruta: ");
        scanf("%s", fruta);
    }

    printf("\n\n L1 -> ");
    imprimeLista(L1);
    printf("\n\n L2 -> ");
    imprimeLista(L2);

    L1 = concatena(L1,L2);
    printf("\n\n (L1+L2) -> ");
    imprimeLista(L1);
    return 0;
}