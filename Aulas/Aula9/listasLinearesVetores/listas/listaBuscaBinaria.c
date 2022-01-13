#include <stdio.h>

# define MAX 10

struct LISTA {
    int dado[MAX];
    int total;
}; typedef struct LISTA lista;

void imprimeListaBin(lista *L){
    int i;
    for(i=0; i < L->total; i++){
        printf("[%d] ", L -> dado[i]);
    }
}

// busca binária
int buscaElemBinaria(lista *L, int elem, int *pos){
    int inicio, fim, meio, achou = 0;

    inicio = 0;
    fim = L -> total;

    while (inicio <= fim && !achou) {
        meio = (inicio + fim) / 2;

        if (elem > L -> dado[meio]){
            inicio = meio + 1;
            (*pos) = inicio;
        }else {
            if (elem < L -> dado[meio]){
                fim = meio - 1;
                (*pos) = meio;
            }
            else {
                achou = 1;
                (*pos) = meio;
            }
        }
    }
    return achou;
}


void insereElemBinaria (lista *L, int elem){
    int pos, achou, i;

    achou = buscaElemBinaria(L, elem, &pos);

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

void removeElemBinaria (lista *L, int elem){
    int pos, achou, i;

    achou = buscaElemBinaria(L, elem, &pos);
    if (achou) {
        for (i = pos; i<L->total-1; i++)
            L->dado[i] = L->dado[i+1];

        L->total--;
    } else
        printf("Elemento %d nao existe nessa lista!\n", elem);
}

int listaBuscaBinaria(void) {
    lista L;
    int num, i, N, resultado;
    L.total = 0;

    printf("\nDigite a quantidade de elementos para inserir:");
    scanf("%d", &N);

    for (i = 0; i < N;  i++){
        printf("\nDigite o numero a ser inserido:");
        scanf("%d", &num);

        insereElemBinaria(&L, num);
    }

    printf("\n\n Estado de L \n");
    imprimeListaBin(&L);

    printf("\nDigite a quantidade de elementos para remover:");
    scanf("%d", &N);
    for (i = 0; i < N; i++){
        printf("\nDigite o numero a ser removido:");
        scanf("%d", &num);

        removeElemBinaria(&L, num);
    }

    printf("\n\n Estado de L \n");
    imprimeListaBin(&L);

    return 0;
}