/*
 * Faça um programa que leia N números naturais e que escreva o somatório dos números pares e a média dos múltiplos de 3
 */

# include <stdio.h>

int aula3Ex6 (void) {
    int n, num,somaPares = 0, contador = 0;
    int somaMultiplos = 0;
    float mediaMultiplos;

    printf("Digite a quantidade de numeros que voce quer:");
    scanf("%d", &n);

    while (n > 0) {
        printf("Digite numeros maiores ou iguais a 0:");
        scanf("%d", &num);

        if (num % 2 == 0) {
            somaPares += num;
        }

        if (num % 3 == 0) {
            contador += 1;
            somaMultiplos += num;
        }
        n--;
    }
    mediaMultiplos = (float) somaMultiplos / contador;

    printf("A soma dos numeros pares foi %d\nA media dos numeros multiplos de 3 foi %.1f", somaPares, mediaMultiplos);
    return 0;
}