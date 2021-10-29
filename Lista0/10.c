/*
 * Fazer um programa que leia uma temperatura em graus Celsius e transforme para Farenheit.
C = 5/9 (F-32)
 */

# include <stdio.h>

int main (void) {
    float celsius, fahrenheit;

    printf("Informe a temperatura em celsius:  ");
    scanf ("%f",&celsius);

    fahrenheit = (celsius * (9/5)) + 32;

    printf("Temperatura em celsius: %.1f ºC\n Temperatura em fahrenheit: %.1fºF", celsius, fahrenheit);
    return 0;
}