/*
 * Fazer um programa que crie duas listas simplesmente encadeadas L1 e L2 que guardem números
    inteiros. Tais listas representarão dois conjuntos distintos. Implementar as operações de
    interseção, união, diferença e pertinência.
    • Pode ser criado um menu na tela com as quatro operações disponíveis no programa.
    • As operações devem funcionar da mesma maneira que funcionam quando são considerados
    conjuntos. Por exemplo, quando for feita a operação de união entre L1 e L2 a lista
    resultante não poderá conter elementos repetidos.
    • Além das funções de interseção, união, diferença e pertinência podem ser criadas outras
    funções de acordo com a necessidade
 */

# include <stdio.h>
# include <stdlib.h>

struct NO {
    int conteudo;
    struct NO *prox;
}; typedef struct NO lista;

int busca4(lista *L, int elem){
    lista *aux;
    aux = L;

    while (aux != NULL){
        if (elem == aux->conteudo)
            return 1;
        aux = aux -> prox;
    }
    return 0;
}

lista *insere4(lista *L, int elem){
    lista *el;
    if (!busca4(L, elem)){
        el = (lista *)malloc(sizeof(lista));
        el -> conteudo = elem;
        el -> prox = L;
        L = el;
    } else
        printf("-> Elemento ja existe\n");
    return L;
}

void intersecao(lista *L1, lista *L2) {
    lista *aux;
    int count = 0;

    while (L1 != NULL) {
        aux = L2;
        while (aux != NULL) {
            if (L1->conteudo == aux->conteudo) {
                printf("-> %d ",aux->conteudo);
                count++;
                break;
            }
            aux = aux->prox;
        }
        L1 = L1->prox;
    }
    if (count == 0){
        printf("-> Nao ha intersecao entre L1 e L2!");
    }
}


void uniao(lista *L1, lista *L2) {
    lista *aux;
    int achou;


    while (L1 != NULL) {
        aux = L2;
        achou = 0;
        while (aux != NULL) {
            if (L1->conteudo == aux->conteudo) {
                achou = 1;
                break;
            } else
                aux = aux->prox;
        }
        if (!achou)
            printf("-> %d ",L1->conteudo);
        L1 = L1->prox;
    }

    aux = L2;
    while (aux != NULL) {
        printf("-> %d ",aux->conteudo);
        aux = aux->prox;
    }
}

int pertinencia (lista *L, int elem){
    lista *aux;
    aux = L;

    if (aux == NULL){
        return 0;
    } else if ( aux -> conteudo == elem){
        return 1;
    }else {
        return (pertinencia(aux->prox, elem));
    }
}

void imprime4(lista *L) {
    while (L != NULL) {
        printf("-> %d ", L->conteudo);
        L = L->prox;
    }
}

void diferenca(lista *L1, lista *L2, int choice) {
    lista *aux;
    int count = 0, cont = 0;
    if (choice){
        while (L1 != NULL) {
            aux = L2;
            while (aux != NULL) {
                if (L1->conteudo == aux->conteudo) {
                    count++;
                }
                aux = aux->prox;
            }
            if (count == 0){
                printf("-> %d ",L1 ->conteudo);
                cont++;
            }
            count = 0;
            L1 = L1->prox;
        }
    }else {
        count = 0;
        while (L2 != NULL) {
            aux = L1;
            while (aux != NULL) {
                if (L2->conteudo == aux->conteudo) {
                    count++;
                }
                aux = aux->prox;
            }
            if (count == 0) {
                printf("-> %d ", L2->conteudo);
                cont++;
            }
            count = 0;
            L2 = L2->prox;
        }
    }
    if (cont == 0)
        printf("{}");
}

//void diferenca(lista *L1, lista *L2) {
//    lista *aux;
//    int achou;
//
//    while (L1 != NULL) {
//        aux = L2;
//        achou = 0;
//        while (aux != NULL) {
//            if (L1->info == aux->info) {
//                achou = 1;
//                break;
//            } else
//                aux = aux->prox;
//        }
//        if (!achou)
//            printf(" %d ->",L1->info);
//        L1 = L1->prox;
//    }
//}

int menu1() {
    int op;
    printf("\n\nEscolha uma operacao: \n");
    printf("1: Intersecao\n");
    printf("2: Uniao\n");
    printf("3: Mostra Listas\n");
    printf("4: Pertinencia\n");
    printf("5: Diferenca\n");
    printf("6: FIM\n");
    printf("==> ");
    scanf("%d", &op);
    return op;
}

int ex04Lista5(void) {
    lista *L1, *L2;
    int num, op, escolha, elem, resultado;

    L1 = NULL;
    printf("Digite um num para L1:");
    scanf("%d", &num);
    while (num >=0) {
        L1 = insere4(L1,num);
        printf("Digite um num para L1:");
        scanf("%d", &num);
    }

    L2 = NULL;
    printf("\nDigite um num para L2:");
    scanf("%d", &num);
    while (num >=0) {
        L2 = insere4(L2,num);
        printf("Digite um num para L2:");
        scanf("%d", &num);
    }

    do {
        op = menu1();
        switch (op) {
            case 1:
                printf("\n\nIntersecao ");
                intersecao(L1,L2);
                break;
            case 2:
                printf("\n\nUniao ");
                uniao(L1,L2);
                break;
            case 3:
                printf("\n\nLista L1 ");
                imprime4(L1);
                printf("\n\nLista L2 ");
                imprime4(L2);
                break;
            case 4:
                printf("\nEm qual lista voce deseja checar a pertinencia: (0 == L1 e 1 == L2):");
                scanf("%d",&escolha);
                printf("\nDigite o elemento que voce quer encontrar:");
                scanf("%d",&elem);
                if (escolha)
                    resultado = pertinencia(L2, elem);
                else
                   resultado= pertinencia(L1, elem);

                if (resultado)
                    printf("O elemento %d pertence a lista.", elem);
                else
                    printf("O elemento %d nao pertence a lista.", elem);
                break;
            case 5:
                printf("\nVoce quer (A - B) = 1 ou (B - A) = 0: ");
                scanf("%d", &escolha);
                printf("\n\nDiferenca:");
                diferenca(L1,L2, escolha);
                break;
            case 6:
                printf("\nFim do programa\n");
                break;
            default:
                printf("\nOpcao invalida!\n");
        }
    } while (op != 6);

    return 0;
}