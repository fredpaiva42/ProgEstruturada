/*
 * Considere uma lista onde cada nó é composto pelo código, nome e preço de um produto. A lista está ordenada por ordem crescente do código do produto.
    a. Considerando alocação sequencial estática, faça a declaração desta estrutura e uma função
    que receba esta lista como parâmetro e que escreva os dados de todos os produtos contidos
    na lista.
    b. Considerando uma lista simplesmente encadeada dinâmica, faça a declaração desta
    estrutura e uma função que calcule e retorne a média de preços
 */

# include <stdio.h>
# include <string.h>

# define MAX 3

typedef struct {
    int info;
    char nome[40];
    float valor;
}produto;

typedef struct {
    produto dado[MAX];
    int total;
}lista;

int buscaA(lista *L, int num, int *pos){
    int i = 0;

    while (i < L->total && num > L->dado[i].info)
        i++;
    (*pos) = i;

    if (L -> total == i)
        return 0;
    else {
        if (num == L -> dado[i].info)
            return 1;
        else
            return 0;
    }
}

void insereA (lista *L, int num, float valor, char *nome) {
    int pos, achou, i;

    achou = (buscaA(L, num, &pos));

    if (!achou){
        for (i = L -> total; i > pos; i--){
            L -> dado[i].info = L -> dado[i - 1].info;
            L -> dado[i].valor = L -> dado[i - 1].valor;
            strcpy(L -> dado[i].nome, L -> dado[i - 1].nome);
        }

        L -> dado[i].info = num;
        L -> dado[i].valor = valor;
        strcpy(L -> dado[i].nome, nome);

        L -> total++;
    }
}

void imprimeA (lista * L){
    int i;

    for (i=0; i<L->total; i++) {
        printf("produto %d: nome - %s, valor - R$ %.2f\n", L->dado[i].info, L->dado[i].nome, L->dado[i].valor);
    }
}

int ex02ALista5(void) {
    lista L;
    int num;
    char nome[40];
    float valor;

    L.total = 0;

    for (int i = 0; i < MAX; i++){
        printf("\nDigite o codigo do produto:");
        scanf("%d", &num);

        printf("Digite o nome do produto:");
        scanf(" %[^\n]s", nome);

        printf("Digite o valor do produto:");
        scanf("%f", &valor);

        insereA(&L, num, valor, nome);
    }

    printf("\nSua lista:\n");
    imprimeA(&L);

    return 0;
}