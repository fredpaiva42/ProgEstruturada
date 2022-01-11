# include <stdio.h>

# define MAX 10

struct FILA {
    int dado[MAX]; // vetor que guarda os elementos da fila
    int inicio, fim, total;
}; typedef struct FILA fila;

void insertFila(fila *F, int num) {
    if (F -> total < MAX){
        F -> dado[F -> fim] = num;
        F -> fim++;
        F -> fim = F -> fim % MAX; // voltar para o inicio do vetor
        F -> total++;
    }
}

int removerFila(fila *F) {
    int num;
    if (F -> total > 0){
        num = F -> dado[F -> inicio];
        F -> inicio++;
        F -> inicio = F -> inicio % MAX;
        F -> total--;
    }
    return num;
}

int filaProcessos(void) {
    int i, N, X, processo;
    fila F;
    F.inicio = 0;
    F.fim = 0;
    F.total = 0;

    printf("\nDigite a quantidade de processos: ");
    scanf("%d", &N);
    for (i = 0; i < N; i++){
        printf("\nDigite o numero do processo que quer executar:");
        scanf("%d", &processo);

        insertFila(&F, processo);
    }

    printf("\nDigite a quantidade de processos que executou: ");
    scanf("%d", &X);

    printf("\n\nExecutando processos...\n");
    for (i = 0; i < X; i++){
        printf("\n[%d]", removerFila(&F));
    }

    printf("\n\nO proximo processo: %d", F.dado[F.inicio]);

    return 0;
}