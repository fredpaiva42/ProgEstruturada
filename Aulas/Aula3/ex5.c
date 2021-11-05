/*
 * 5. Fazer um programa que escreva a série de Fibonacci, cujo o último termo seja menor ou igual a N. Obrigar o usário a digitar um valor positivo para N.
 * 0 1 1 2 4
 */

# include <stdio.h>

int aula3Ex5 (void) {
    int i,n, fibonacci, aux = 0, aux1 = 1;

    do {
        printf("Digite um valor para positivo para N:");
        scanf("%d", &n);
    } while (n <= 0);
    printf("0,1,");
    fibonacci = aux + aux1;
    for (i = 1 ; fibonacci < n; i++){
        printf("%d,", fibonacci);
        aux = aux1;
        aux1 = fibonacci;
        fibonacci = aux +aux1;
    }
    return 0;
}