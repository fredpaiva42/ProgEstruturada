/*
 * 14. Faça um programa que leia um número inteiro positivo N e calcule o valor da expressão abaixo.
Caso o usuário digite um valor menor ou igual a zero, o algoritmo deve escrever uma mensagem
informando que a expressão não pode ser calculada.

 E = 1/N + 1/n-1 ... +1
 */

# include <stdio.h>

int ex14L2 (void) {
    int n, i;
    float e, resultado = 0;

    printf("Digite um numero N maior que 0:");
    scanf("%d",&n);
    if (n <= 0){
        printf("A expressao nao pode ser calculada!");
    }else {
        for (i=0; i<n; i++){
            e = (n-i);
            resultado += 1/e;
        }
        printf("E = %.2f", resultado);
    }
    return 0;
}