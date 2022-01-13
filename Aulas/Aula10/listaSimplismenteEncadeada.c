/*
 * Faça um programa que:
 * Cire uma lista encadeada L com números inteiros
 * Os números devem ser inseridos na lista em ordem crescente até que o usuário digite um número negativo
 * A lista não deve possuir números repetidos
 * Ao final do programa, imprima a lista
 * Deve ser criadas as funções de BuscaElemento, inserirElemento, ImprimeLista
 */

#include <stdio.h>
#include <stdlib.h>

//struct NO {
//    int id;
//    char nome[40];
//    struct NO *prox;
//};typedef struct NO lista;

// Declaração de uma lista Simplismente encadeada com números inteiros
struct NO {
    int info;
    struct NO *prox;
};typedef struct NO lista;

int buscaElemLista(lista *L, int elem, lista **pre){
    lista *aux, *preL;
    aux = L;
    preL= NULL;
    while ((aux != NULL) && (elem > aux->info)) { // ordem crescente
        preL = aux;
        aux = aux->prox;
    }
    (*pre) = preL;
    if ((aux != NULL) && (elem == aux->info))
        return 1;
    return 0;
}

lista *insereNaLista(lista *L, int elem) {
    lista *pre, *el;
    if (!buscaElemLista(L, elem, &pre)){
        el = (lista*) malloc(sizeof(lista));
        el -> info = elem;
        if (L == NULL || pre == NULL){ // inicio ou lista vazia
            el -> prox = L;
            L = el;
        } else{ // meio ou fim
            el -> prox = pre -> prox;
            pre -> prox = el;
        }
    }else {
        printf("--> Elemento ja existe\n");
    }
    return L;
}

//lista *removeDaLista(lista *L, int elem) {
//    lista *pre, *lixo;
//    if (buscaElemLista(L, elem, &pre)){
//        if (L -> info == elem) { // se é o elemento inicial
//            lixo = L;
//            L = L -> prox;
//        } else{
//            lixo = pre -> prox;
//            pre -> prox = lixo -> prox;
//        }
//        free(lixo);
//    }
//    return L;
//}

void imprimeLista(lista *L){
    lista *aux;
    aux = L;

    while(aux != NULL){
        printf("-> %d ", aux->info);
        aux = aux-> prox;
    }
}

int listaSimplismenteEncadeada(void) {
    lista *L;
    int num;

    L = NULL;
    printf("Digite um numero:");
    scanf("%d", &num);
    while (num >= 0) {
        L = insereNaLista(L, num);
        printf("Digite um numero:");
        scanf("%d", &num);
    }

    printf("\n\nLista ");
    imprimeLista(L);

    return 0;
}