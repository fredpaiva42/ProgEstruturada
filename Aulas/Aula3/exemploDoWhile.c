/*
 * Será executado enquanto número digitado não for > 0
 */

# include <stdio.h>

int exemploDoWhile (void) {
    int num;

    do {
        printf("Entre com um numero positivo:");
        scanf("%d",&num);
    } while (num <= 0);

    return 0;
}