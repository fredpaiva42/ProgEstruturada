/*
 * 2. Faça um programa para somar os múltiplos de N maiores do que 100 e menores que 200
 */

# include <stdio.h>

int aula3Ex2 (void) {
    int n, soma = 0, multiplo;

    printf("Digite um numero:");
    scanf("%d",&n);
    multiplo = 100 + (n - (100 % n));

    while (multiplo > 100 && multiplo < 200) {
        soma += multiplo;
        multiplo += n;
    }
    printf("Soma: %d", soma);
    return 0;
}