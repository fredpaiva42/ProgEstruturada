/*
 * Programa 5 da lista
 */

# include <stdio.h>
# include <stdlib.h>

struct NO {
    int num;
    int tempo;
    struct NO *prox;
}; typedef struct NO fila;

void insereProc(fila **inicio, fila **final, int n, int tempoExec){
    fila *el;

    el = (fila *) malloc(sizeof(fila));
    el -> num = n;
    el -> tempo = tempoExec;
    el -> prox = NULL;

    if ((*inicio) == NULL)
        (*inicio) = el;
    else
        (*final) -> prox = el;
    (*final) = el;
}

fila *removeProc (fila *inicio){
    fila *lixo;

    if (inicio != NULL){
        lixo = inicio;
        inicio = inicio->prox;
        free(lixo);
    }
    return inicio;
}

void execute(fila *inicio, fila *final){
    while (inicio != NULL){
        if ((inicio -> tempo) > 2){
            printf("\nExecutando o Processo #P%d - 2ut\n", inicio ->num);
            inicio -> tempo = (inicio -> tempo) - 2;
            insereProc(&inicio, &final, inicio ->num, inicio -> tempo);
        }else {
            printf("\nExecutando o Processo #P%d - %dut\n", inicio->num, inicio->tempo);
        }
        inicio = removeProc(inicio);
    }
    printf("\n---Os processos foram Concluidos---");
}

int ex01Aula13(void){
    int numProc, tempoProc, qtd;
    fila *inicio, *final;
    inicio = NULL;
    final = NULL;

    printf("\nDigite quantos processos deverao ser executados:");
    scanf("%d", &qtd);

    for (int i = 0; i < qtd; i++){
        printf("Digite o numero do processo:");
        scanf("%d", &numProc);
        printf("Digite seu tempo de execucao:");
        scanf("%d", &tempoProc);

        insereProc(&inicio, &final, numProc, tempoProc);
    }

    execute(inicio, final);
    return 0;
}