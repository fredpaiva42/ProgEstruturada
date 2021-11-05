/*
 * Somar os 10 primeiros números naturais
 */

# include <stdio.h>

int exemploFor (void) {
    int soma = 0, i;

    for (i = 1; i <= 10; i++){
        soma += i;
    }
    printf("%d\n", soma);
    return 0;
}