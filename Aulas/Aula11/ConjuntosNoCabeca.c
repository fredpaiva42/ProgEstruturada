//Fazer exercício, para corrigir na próxima aula:
//
//Crie 2 listas L1 e L2 (com nós cabeça) de números inteiros que representarão conjuntos matemáticos. As listas devem ser preenchidas até que o usuário digite um número negativo.
//Não podem possuir números repetidos
//        Os conjuntos não precisam estar ordenados
//        Devem ser criadas as funções insereElem e buscaElem
//        A função insereElem não deve incluir os elementos ordenadamente, podem ser inseridos sempre no inicio
//        Crie o seguinte MENU para o usuário e implemente funções para cada item
//1 — Mostra L1 e L2
//2 — Interseção de L1 e L2
//3 — União de L1 e L2
//4 — Fim do programa

#include <stdio.h>
#include <stdlib.h>

struct NO {
    int info;
    struct NO *prox;
};
typedef struct NO lista;


int busca11B(lista *L, int elem){
    lista *aux;
    aux = L->prox;
    while (aux != NULL) {
        if (elem == aux->info)
            return 1;
        aux = aux->prox;
    }
    return 0;
}

lista *insere11B(lista *L, int elem) {
    lista *el;
    if (!busca11B(L,elem)) {
        el = (lista *)malloc(sizeof(lista));
        el->info = elem;
        el->prox = L->prox;
        L->prox = el;
    } else
        printf("--> Elemento ja existe\n");
    return L;
}


void intersecao11B(lista *L1, lista *L2) {
    lista *aux;

    L1 = L1->prox;
    while (L1 != NULL) {
        aux = L2->prox;
        while (aux != NULL) {
            if (L1->info == aux->info) {
                printf(" %d ->",aux->info);
                break;
            }
            aux = aux->prox;
        }
        L1 = L1->prox;
    }
}

void uniao11B(lista *L1, lista *L2) {
    lista *aux;
    int achou;

    L1 = L1->prox;
    while (L1 != NULL) {
        aux = L2->prox;
        achou = 0;
        while (aux != NULL) {
            if (L1->info == aux->info) {
                achou = 1;
                break;
            } else
                aux = aux->prox;
        }
        if (!achou)
            printf(" %d ->",L1->info);
        L1 = L1->prox;
    }

    aux = L2->prox;
    while (aux != NULL) {
        printf(" %d ->",aux->info);
        aux = aux->prox;
    }
}



void imprime11B(lista *L) {
    while (L != NULL) {
        printf("%d -> ", L->info);
        L = L->prox;
    }
}

int mn() {
    int op;
    printf("\n\nEscolha uma operacao: \n");
    printf("1: Intersecao\n");
    printf("2: Uniao\n");
    printf("3: Mostra Listas\n");
    printf("4: FIM\n");
    printf("==> ");
    scanf("%d", &op);
    return op;
}

int ex2Aula11(void) {
    lista *L1, *L2;
    int num, op;

    L1 = (lista *)malloc(sizeof(lista));
    L1->prox = NULL;
    L2 = (lista *)malloc(sizeof(lista));
    L2->prox = NULL;

    printf("Digite um num para L1: ");
    scanf("%d", &num);
    while (num >=0) {
        L1 = insere11B(L1,num);
        printf("Digite um num para L1: ");
        scanf("%d", &num);
    }

    printf("\nDigite um num para L2: ");
    scanf("%d", &num);
    while (num >=0) {
        L2 = insere11B(L2,num);
        printf("Digite um num para L2: ");
        scanf("%d", &num);
    }

    do {
        op = mn();
        switch (op) {
            case 1:
                printf("\n\nIntersecao -> ");
                intersecao11B(L1,L2);
                break;
            case 2:
                printf("\n\nUniao -> ");
                uniao11B(L1,L2);
                break;
            case 3:
                printf("\n\nLista L1 -> ");
                imprime11B(L1->prox);
                printf("\n\nLista L2 -> ");
                imprime11B(L2->prox);
                break;
            case 4:
                printf("\nFim do programa\n");
                break;
            default:
                printf("\nOpcao invalida!\n");
        }
    } while (op != 4);

    return 0;
}
