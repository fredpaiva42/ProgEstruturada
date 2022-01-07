#include <stdio.h>

void troca (int *x, int *y){
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int exemplo1AAula7(void){
    int A = 3;
    int B = 9;

    troca (&A,&B); // isso é passar parâmetros por referência
    printf("%d %d", A, B);
    return 0;
}