# include <stdio.h>

void numerosPares(int N){
    if(N != 0){
        printf("%d ", N);
        numerosPares(N-2);
    }
}

int ex04Aula5(void) {
    int n;

    printf("Digite um numero N:");
    scanf("%d",&n);
    printf("Os numeros pares menores ou iguais a %d sao: ", n);
    if (n % 2 != 0){
        n --;
    }
    numerosPares(n);
    return 0;
}
