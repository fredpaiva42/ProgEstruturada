# include <stdio.h>

int Fibonacci(int N) {
    if (N == 1){
        return 0;
    }else{
        if (N == 2){
            return 1;
        }else{
            return(Fibonacci(N-1)+ Fibonacci(N-2));
        }
    }
}

int ex05Aula5(void) {
    int n;

    printf("Digite o enesimo termo de Fibonacci que voce quer ver:");
    scanf("%d",&n);

    printf("O termo %d eh: %d",n, Fibonacci(n));
    return 0;
}

