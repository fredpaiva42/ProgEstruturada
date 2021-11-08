/*16. Faça um programa que calcule o valor de E segundo a expressão abaixo:
E = 2^1 + 2^2 + 2^3 + ... + 2^N-1 + 2^N */

# include <stdio.h>
# include <math.h>

int ex16L2(void) {
    int e = 0, i, n;

    printf("digite quantos termos voce quer ver:");
    scanf("%d",&n);

    printf("E = ");
    for (i = 1; i <= n; i++){
        e += pow(2, i);
        printf("2^%d + ", i);
    }
    printf("= %d",e);
    return 0;
}
