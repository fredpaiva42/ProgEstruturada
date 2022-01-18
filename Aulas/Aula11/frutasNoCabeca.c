/*
 * Faça um programa que:
    Crie uma lista encadeada L com nomes de frutas
    Os nomes devem ser inseridos na lista em ordem crescente até que o usuário digite a palavra ‘fim’
    A lista não deve possuir nomes repetidos
    Ao final do programa, imprima a lista
    Faça funções para inserir um elemento e imprimir a lista

    Após preencher a lista crie um MENU com as opções:
    1 – Insere elemento
    2 – Remove elemento
    3 – Mostra lista
    4 – Informa a quantidade de nós
    5 – Fim do programa
    Além das funções já criadas, crie funções para remover um
    elemento, apresentar o menu na tela e uma função
    recursiva para contar os nós da lista
 */

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

struct NO {
    char conteudo[10];
    struct NO *prox;
}; typedef struct NO lista;

int menu11(){
    int op;

    printf("\n\nEscolha uma operacao:\n");
    printf("1: Insere\n");
    printf("2: Remove\n");
    printf("3: Mostra\n");
    printf("4: Conta elementos\n");
    printf("5: FIM\n");
    printf("--> ");
    scanf("%d",&op);

    return op;
}

int busca11 (lista *L, char *fruta, lista **pre){
    lista *aux, *preL;
    aux = L -> prox;
    preL = L;
    while ((aux!= NULL) && (strcmp(fruta,aux->conteudo) > 0)){
        preL = aux;
        aux = aux -> prox;
    }
    (*pre) = preL;
    if ((aux!= NULL) && (strcmp(fruta,aux -> conteudo) == 0))
        return 1;
    return 0;
}

void insere11 (lista *L, char *fruta){
    lista *pre, *el;
    if (!busca11(L, fruta, &pre)){
        el = (lista *)malloc(sizeof(lista));
        strcpy(el-> conteudo, fruta);
        el -> prox = pre -> prox;
        pre -> prox = el;
    } else
        printf("-> Elemento ja existe\n");
}

void remove11(lista *L, char *fruta) {
    lista *pre, *lixo;
    if (busca11(L,fruta,&pre)) {
        lixo = pre->prox;
        pre->prox = lixo->prox;
        free(lixo);
    } else
        printf("\nElemento %s nao existe\n", fruta);
}

int contaNo11(lista *L) {

    if (L != NULL)
        return(contaNo11(L->prox) + 1);
    else
        return 0;

}

void imprime11 (lista *L){
    if (L != NULL){
        printf("-> %s ", L -> conteudo);
        imprime11(L-> prox);
    }
}

int exAula11(void) {
    lista *L;
    char fruta[10];
    int op;

    L = (lista *)malloc(sizeof(lista));
    L -> prox = NULL;
    printf("Digite uma fruta:");
    scanf(" %s", fruta);
    while(strcmp(fruta, "fim") != 0){
        insere11(L, fruta);
        printf("Digite uma fruta:");
        scanf(" %s", fruta);
    }
    do {
        op = menu11();
        switch (op) {
            case 1:
                printf("\nDigite um elemento para inserir: ");
                scanf("%s", fruta);
                insere11(L,fruta);
                break;
            case 2:
                printf("\nEscolha um elemento para remover: ");
                scanf("%s", fruta);
                remove11(L,fruta);
                break;
            case 3:
                printf("\nLista  ");
                imprime11(L->prox);
                break;
            case 4:
                printf("\nA lista possui %d elementos", contaNo11(L->prox));
                break;
            case 5:
                printf("\nFim do programa\n");
                break;
            default:
                printf("\nOpção inválida!\n");
        }
    } while (op != 5);
    return 0;
}