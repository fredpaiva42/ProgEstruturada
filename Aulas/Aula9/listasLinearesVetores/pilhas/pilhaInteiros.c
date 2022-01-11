# include <stdio.h>

# define MAX 5

struct PILHA {
    int dado[MAX];
    int topo;
}; typedef struct PILHA pilha;

// função que insere um elemento no topo da pilha:
void pushPilhas(pilha *P, int num){
    if (P -> topo < MAX-1) {
        P -> topo++;
        P -> dado[P -> topo] = num;
    }
}

// função para remover um elemento no topo da pilha
int popPilhas(pilha *P) {
    int num;
    if (P -> topo >= 0){
        num = P -> dado[P -> topo];
        P -> topo--;
    }
    return num;
}

int pilhasVetores(void) {
    pilha P;
    int n;
    P.topo = -1; // inicia com menos 1, pois a pilha ainda está vazia.

    for (int i = 0; i < MAX; i++) {
        printf("Digite um numero:");
        scanf("%d", &n);

        pushPilhas(&P, n);
    }

    printf("\nPilha ");
    while (P.topo >= 0){
        n = popPilhas(&P);
        printf("-> %d ", n);
    }

    return 0;
}