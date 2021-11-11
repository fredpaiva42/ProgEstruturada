# include <stdio.h>

int calculaQuociente(int A, int B){
    if (A < B){
        return 0;
    }else{
        return(1 + calculaQuociente(A-B, B));
    }
}

int ex03Aula5(void) {
    int a, b;
    do {
        printf("Digite o valor de A:");
        scanf("%d",&a);
    }while (a < 0);
    do {
        printf("Digite o valor de B:");
        scanf("%d",&b);
    }while (b <= 0);

    printf("O quociente entre %d e %d eh: %d", a, b, calculaQuociente(a,b));
    return 0;
}
