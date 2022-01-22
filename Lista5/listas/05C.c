/*
 * Considere duas listas encadeadas L1 e L2, onde cada nó da lista possui duas partes: dado, que guarda um número inteiro e prox, que guarda o endereço do próximo nó. Para cada item abaixo, faça
    uma função que receba as duas listas como parâmetros e as concatene de acordo com as características especificadas.
    Para concatenar L1 com L2 basta juntar o final de L1 com o começo de L2, formando uma única lista com endereço inicial em L1

    c. L1 e L2 são simplesmente encadeadas, circulares e com nós cabeça;
 */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

struct NO {
    char conteudo[10];
    struct NO *prox;
}; typedef struct NO lista;

int busca5C (lista *L, char *fruta, lista **pre){
    lista *aux, *preL;
    aux = L -> prox;
    preL = L;
    while((aux != L) && (strcmp(fruta,aux -> conteudo) > 0)) {
        preL = aux;
        aux = aux -> prox;
    }
    (*pre) = preL;
    if((aux != L) && (strcmp(fruta, aux -> conteudo) == 0))
        return 1;
    return 0;
}

lista *insere5C (lista *L, char *fruta) {
    lista *pre, *el;
    if (!busca5C(L, fruta, &pre)){
        el = (lista *)malloc(sizeof(lista));
        strcpy(el->conteudo, fruta);
        el -> prox = pre -> prox;
        pre -> prox = el;
    }else
        printf("-> Elemento ja existe\n");
    return L;
}

void imprime5C (lista *L){
    lista *aux;
    aux = L -> prox;
    printf("-> %s ", L -> conteudo);
    while (aux != L){
        printf("-> %s ", aux -> conteudo);
        aux = aux -> prox;
    }
}

lista *concatena5C (lista *L1, lista *L2){
    lista *aux1, *aux2;

    if (L2 -> prox != L2){
        aux1 = L1;
        while (aux1 -> prox != L1){
            aux1 = aux1 -> prox;
        }
        aux1 -> prox = L2 -> prox;
        aux2 = L2;
        while (aux2 -> prox != L2)
            aux2 = aux2 -> prox;
        aux2 -> prox = L1;
    }
    free(L2);

    return L1;
}

int ex05CLista5(void){
    lista *L1, *L2;
    char fruta[10];

    L1 = (lista*) malloc(sizeof(lista));
    strcpy(L1 -> conteudo, "No_L1");
    L1 -> prox = L1;
    printf("\n------ CRIANDO L1 ------\n");
    printf("Digite uma fruta:");
    scanf(" %s", fruta);
    while (strcmp(fruta,"fim") != 0) {
        L1 = insere5C(L1,fruta);
        printf("Digite uma fruta:");
        scanf(" %s", fruta);
    }

    L2 = (lista*) malloc(sizeof(lista));
    strcpy(L2 -> conteudo, "No_L2");
    L2 -> prox = L2;
    printf("\n------ CRIANDO L2 ------\n");
    printf("Digite uma fruta:");
    scanf(" %s", fruta);
    while (strcmp(fruta,"fim") != 0) {
        L2 = insere5C(L2,fruta);
        printf("Digite uma fruta:");
        scanf(" %s", fruta);
    }

    printf("\n\nL1 ");
    imprime5C(L1);
    printf("\n\nL2 ");
    imprime5C(L2);

    L1 = concatena5C(L1, L2);
    printf("\n\n(L1 + L2) ");
    imprime5C(L1);
    return 0;
}