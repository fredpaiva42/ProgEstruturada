/*
 * 5. Faça um programa que leia uma hora (uma variável para hora e outra para minutos) e que calcule
e mostre a hora convertida em minutos e em segundos.
 */

# include <stdio.h>

int quinto (void) {
    int horas, minutos, segundos;

    scanf("%d:%d", &horas, &minutos);

    minutos += horas *60 ;
    segundos = minutos * 60;

    printf("Isso equivale a %d minutos ou %d segundos", minutos, segundos);
    return 0;
}