# include <stdio.h>

int somaInteirosPositivos(int A, int B) {
    if (A == B){
        return A;
    }else {
        return(A + somaInteirosPositivos(A+1, B));
    }
}

int ex02Aula5(void) {
    int a, b;

    do {
        printf("Digite um valor para A e B:");
        scanf("%d %d", &a, &b);
    } while(a < 0);
    printf("A soma dos numeros compreendidos entre %d e %d: %d", a,b,somaInteirosPositivos(a,b));
    return 0;
}