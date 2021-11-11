# include <stdio.h>

int calculaX(int X, int N) {
    if (N == 0){
        return 1;
    } else {
        return(X * calculaX(X,N-1));
    }

}

int ex01Aula5 (void) {
    int n, x;
    printf("Digite um valor para X:");
    scanf("%d",&x);
    do {
        printf("Digite um numero para N:");
        scanf("%d", &n);
    } while (n < 0);

    printf("\nO resultado de %d elevado a %d eh: %d", x, n, calculaX(x, n));
    return 0;
}