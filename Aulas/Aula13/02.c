/*
 * Fazer um programa que crie uma lista simplesmente encadeada com nó cabeça:

    Na lista devem ser inseridos números inteiros.
    Os números devem ser inseridos ao final da lista.
    Podem ser inseridos números repetidos.
    Devem ser inseridos números até que se digite um número negativo.
    Imprimir a lista
    Perguntar ao usuário um número para apagar.
    Apagar todas as ocorrências deste número na lista.

    O programa só poderá ter 3 funções:

    main
    imprime
    insere
 */

#include <stdio.h>
#include <stdlib.h>

struct NO {
    int conteudo;
    struct NO *prox;
};typedef struct NO lista;

void insere13(lista *L, int elem){
    lista *el, *aux;

    aux = L;
    while (aux->prox != NULL){
        aux = aux->prox;
    }

    el = (lista *)malloc(sizeof(lista));
    el->conteudo = elem;
    el->prox = NULL;
    aux->prox = el;

//    el = (lista *)malloc(sizeof(lista));
//    el->conteudo = elem;
//    el->prox = NULL;
//    aux = L;
//    while (aux->prox != NULL)
//        aux = aux->prox;
//    aux->prox = el;
}

void imprime13(lista *L){
    lista *aux;
    aux = L -> prox;
    while (aux != NULL){
        printf("-> %d ", aux -> conteudo);
        aux = aux -> prox;
    }
}

int ex02Aula13(){
    lista *L, *aux, *lixo, *pre;
    int elem;

    L = (lista *)malloc(sizeof(lista));
    L -> prox = NULL;
    printf("Digite um num:");
    scanf("%d",&elem);
    while (elem >= 0){
        insere13(L, elem);
        printf("Digite um num:");
        scanf("%d",&elem);
    }

    imprime13(L);

    printf("\nDigite o elemento que voce deseja apagar:");
    scanf("%d",&elem);

    aux = L->prox;
    pre = L;
    while (aux != NULL) {
        if (aux->conteudo == elem) {
            lixo = aux;
            pre->prox = aux->prox;
            free(lixo);
            aux = pre->prox;
        } else {
            pre = aux;
            aux = aux->prox;
        }
    }

    imprime13(L);
    return 0;
}