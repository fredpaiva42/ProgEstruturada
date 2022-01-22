/*
 * Considere uma lista onde cada nó é composto pelo código, nome e preço de um produto. A lista está ordenada por ordem crescente do código do produto.
    a. Considerando alocação sequencial estática, faça a declaração desta estrutura e uma função
    que receba esta lista como parâmetro e que escreva os dados de todos os produtos contidos
    na lista.
    b. Considerando uma lista simplesmente encadeada dinâmica, faça a declaração desta
    estrutura e uma função que calcule e retorne a média de preços
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NO {
    int conteudo;
    char nome[40];
    float valor;
    struct NO *prox;
}; typedef struct NO lista;

int buscaB (lista *L, int elem, lista **pre){
    lista *aux, *preL;
    aux = L;
    preL = NULL;

    while((aux != NULL) && (elem > aux -> conteudo)){
        preL = aux;
        aux = aux -> prox;
    }
    (*pre) = preL;
    if ((aux != NULL) && (elem > aux -> conteudo))
        return 1;
    return 0;
}

lista *insereB (lista *L, int elem, char *nome, float valor){
    lista *pre, *el;

    if (!buscaB(L, elem, &pre)){
        el = (lista *)malloc(sizeof(lista));
        el -> conteudo = elem;
        strcpy(el ->nome, nome);
        el -> valor = valor;

        if (L == NULL || pre == NULL){
            el -> prox = L;
            L = el;
        } else{
            el -> prox = pre -> prox;
            pre -> prox = el;
        }
    }else
        printf("-> Elemento ja existe\n");
    return L;
}

int qtdProdutos (lista *L){
    lista *aux;
    aux = L;

    if (aux == NULL)
        return 0;
    else
        return(1 + (qtdProdutos(aux -> prox)));
}


int ex02BLista5 (void) {
    lista *L;
    int num, qtd;
    char nome[40];
    float valor, media = 0;
    L = NULL;

    printf("Digite o codigo do produto:");
    scanf("%d", &num);

    while (num >= 0) {
        printf("Digite o nome do produto:");
        scanf(" %[^\n]s", nome);

        printf("Digite o valor do produto:");
        scanf(" %f", &valor);

        media += valor;

        L = insereB(L, num, nome, valor);

        printf("Digite o codigo do produto:");
        scanf("%d", &num);
    }

    qtd = qtdProdutos(L);
    printf("A media dos valores dos produtos: R$ %.2f", media/(qtd*1.0));

    return 0;
}
