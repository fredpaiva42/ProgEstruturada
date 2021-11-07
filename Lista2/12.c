/*12. Faça um programa que leia uma quantidade não determinada de números inteiros. O programa
deve calcular e escrever a quantidade de números pares e ímpares, a média aritmética dos
números pares e a divisão do somatório dos números pares pelo somatório dos números ímpares.
O número que encerrará a leitura será zero, que não deve ser considerado*/

# include <stdio.h>

int ex12L2 (void) {
    int n, qtdPares = 0, qtdImpares = 0, somaPares = 0, somaImpares = 0;
    float mediaPares = 0, divisao;

    printf("Digite um numero maior que 0:");
    scanf("%d", &n);

    while (n > 0) {
        if (n % 2 == 0){
            qtdPares += 1;
            somaPares += n;
        }else {
            qtdImpares += 1;
            somaImpares += n;
        }
        printf("Digite um numero maior que 0:");
        scanf("%d", &n);
    }
    mediaPares = (float) somaPares / (float) qtdPares;
    divisao = (float) somaPares / (float) somaImpares;

    printf("Quantidade de numeros pares: %d\n", qtdPares);
    printf("Quantidade de numeros impares: %d\n", qtdImpares);
    printf("Media de numeros pares: %.2f\n",mediaPares);
    printf("Soma dos pares: %d\n",somaPares);
    printf("Soma dos impares: %d\n",somaImpares);
    printf("Divisao dos soma numeros pares/ soma numeros impares: %.2f", divisao);
    return 0;
}