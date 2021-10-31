/*13. Considere as viagens que são realizadas entre as cidades de Metrópolis e Gotham City. Sabendo
que todas as viagens entre estas cidades são feitas sempre dentro de um mesmo dia, elabore um
programa que permita que um usuário informe o momento exato (hora, minuto, segundo) da sua
partida e da sua chegada, e que calcule e escreva o tempo total da viagem (também em horas,
minutos e segundos).
 *
 */

# include <stdio.h>

int decimoTerceiro (void) {
    int horaI, minutoI, segundoI, horaF, minutoF, segundoF, tempoTotal, horas, minutos, segundos;

    printf("Informe o momento exato de partida:");
    scanf("%d:%d:%d", &horaI, &minutoI, &segundoI);
    printf("Informe o momento exato de chegada:");
    scanf("%d:%d:%d", &horaF,&minutoF, &segundoF);
    tempoTotal = ((horaF * 3600) + (minutoF * 60) + segundoF) - ((horaI *3600)+ (minutoI * 60) + segundoI);

    horas = tempoTotal / 3600;
    minutos = (tempoTotal - (horas * 3600)) / 60;
    segundos = tempoTotal % 60;

    printf("Sua viagem levou %d hora(s), %d minuto(s) e %d segundo(s)", horas, minutos, segundos);
    return 0;
}