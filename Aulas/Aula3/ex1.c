/*
 * 1 - Faça um programa para somar os múltiplos de N menores que 200.
 */

# include <stdio.h>

int aula3Ex1 (void) {
    int n, soma = 0, multiplo;

    printf("Digite um numero: ");
    scanf("%d", &n);
    multiplo = n;

    while (multiplo < 200) {
        soma += multiplo;
        multiplo +=  n;
    }
    printf("Soma: %d", soma);
    return 0;
}