/*
 * Faça um programa que crie uma lista L com números inteiros:
 * A lista deve estar ordenada de maneira crescente.
 * Crie uma função para inserir Elementos
 * Crie uma função para remover Elementos
 * Crie uma função para buscar elementos
 */


#include <stdio.h>

# define MAX 10

struct LISTA {
    int dado[MAX];
    int total;
}; typedef struct LISTA lista;

void imprimeLista(lista *L){
    int i;
    for(i=0; i < L->total; i++){
        printf("[%d] ", L -> dado[i]);
    }
}

// busca sequencial
int buscaElem(lista *L, int elem, int *pos){
    int i = 0;
    while(i < L ->total && elem > L -> dado[i]){
        i++;
    }
    (*pos) = i;

    if (L -> total == i)
        return 0;
    else
        if (elem == L -> dado[i])
            return 1;
        else
            return 0;
}


void insereElem (lista *L, int elem){
    int pos, achou, i;

    achou = buscaElem(L, elem, &pos);

    if (!achou){
        for (i = L ->total; i > pos; i--){
            L -> dado[i] = L -> dado[i - 1];
        }
        L -> dado[i] = elem;
        L -> total++;
    }else{
        printf("O elemento %d ja existe!\n", elem);
    }
}

void removeElem (lista *L, int elem){
    int pos, achou, i;

    achou = buscaElem(L, elem, &pos);
    if (achou) {
        for (i = pos; i<L->total-1; i++)
            L->dado[i] = L->dado[i+1];

        L->total--;
    } else
        printf("Elemento %d nao existe nessa lista!\n", elem);
}

int listaBuscaSequencial(void) {
    lista L;
    int num, i, N, resultado;
    L.total = 0;

    printf("\nDigite a quantidade de elementos para inserir:");
    scanf("%d", &N);

    for (i = 0; i < N;  i++){
        printf("\nDigite o numero a ser inserido:");
        scanf("%d", &num);

        insereElem(&L, num);
    }

    printf("\n\n Estado de L \n");
    imprimeLista(&L);

    printf("\nDigite a quantidade de elementos para remover:");
    scanf("%d", &N);
    for (i = 0; i < N; i++){
        printf("\nDigite o numero a ser removido:");
        scanf("%d", &num);

        removeElem(&L, num);
    }

    printf("\n\n Estado de L \n");
    imprimeLista(&L);

    return 0;
}