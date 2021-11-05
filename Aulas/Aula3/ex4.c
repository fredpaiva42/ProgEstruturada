#pragma clang diagnostic push
#pragma ide diagnostic ignored "cppcoreguidelines-narrowing-conversions"
/*
 * 4. Faça um programa que calcule o valor de E
 * E = 1 + 1/(1!) +1/(2!) + 1/(3!) + ...+ 1/(n!)
 */

# include <stdio.h>

int aula3Ex4 (void) {
    int i, n;
    int fatorial = 1;
    float e = 1.0f;

    printf("Digite um valor para N:");
    scanf("%d",&n);

    for (i = 1; i <= n; i++){
        fatorial *= i;
        e += 1.0/fatorial;
    }
    printf("O valor de E para %d: %3f",n,e);
    return 0;
}
