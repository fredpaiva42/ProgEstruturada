/*
 * 9. Faça um programa que leia um número K e escreva os termos da série de Fibonacci menores ou
    iguais a K. Faça a validação para que o valor de K seja maior do que 0
 */
# include <stdio.h>

int ex9L2 (void) {
    int i,k, fibonacci, aux = 0, aux1 = 1;

    do {
        printf("Digite um valor para positivo para N:");
        scanf("%d", &k);
    } while (k <= 0);
    printf("0,1,");
    fibonacci = aux + aux1;
    for (i = 1 ; fibonacci < k; i++){
        printf("%d,", fibonacci);
        aux = aux1;
        aux1 = fibonacci;
        fibonacci = aux +aux1;
    }
    return 0;
}