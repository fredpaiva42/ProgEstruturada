# include <stdio.h>

int par (int N) {
    if (N % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}

int exemploFuncaoPar (void) {
    int n;
    printf("Digite um valor inteiro:");
    scanf("%d", &n);
    if (par(n)) {
        printf("O numero eh Par!");
    }else {
        printf("O numero eh Impar!");
    }
    return 0;
}
