/*8. Faça um programa que calcule o valor total que um edifício garagem arrecadou em um dia de
    operação, no qual 200 carros utilizaram o estacionamento. O algoritmo deve ler o horário de
    entrada (hora e minuto) assim como o de saída. Sabe-se que o valor mínimo cobrado é de 4 reais
    por um período 2 horas. A partir daí, cobra-se 1 real por hora adicional.
 *
 */

# include <stdio.h>

int ex8L2 (void) {
    int i,horaI, minutoI, horaF, minutoF, tempoTotal, valorMinimo = 4, minutos, horas, horasAdicionais;
    float totalArrecadado = 0.0f;

    for (i=1; i<=5; i++){
        printf("Informe a hora de entrada e de saida junto com os minutos:");
        scanf("%d %d %d %d", &horaI, &minutoI, &horaF, &minutoF);

        tempoTotal = (horaF * 60 + minutoF) - (horaI * 60 + minutoI);
        horas = tempoTotal /60;
        tempoTotal = tempoTotal %60;
        minutos = tempoTotal%60;

        if (horas >= 2 & horas < 3){
            totalArrecadado += valorMinimo;
        }else if(horas >= 3){
            horasAdicionais = horas - 2;
            totalArrecadado += valorMinimo + horasAdicionais;
        }
        else{
            printf("\n");
            printf("Voce nao precisa pagar!\n");
        }
        printf("Carro %02d\n", i);
        printf("O tempo em que voce ficou no estacionamento: %02d:%02d\n", horas, minutos);
        printf("\n");
    }

    printf("Total arrecadado: R$ %.2f", totalArrecadado);
    return 0;
}