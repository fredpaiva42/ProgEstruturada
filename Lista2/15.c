/*
 * 15. Faça um programa que calcule o fatorial de um número N.
 */

# include <stdio.h>

int ex15L2 (void) {
    int n, fatorial, i;

    printf("Digite um numero n:");
    scanf("%d", &n);

    fatorial = n;
    printf("%d! = %d", n, n);
    for (i = n-1; i > 0; i--) {
        fatorial *= i;
        printf(" * %d", i);
    }
    printf(" = %d", fatorial);
}