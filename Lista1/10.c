/*
 * 10. Existem números de 4 dígitos (entre 1000 e 9999) que obedecem à seguinte característica: se
dividirmos o número em dois números de dois dígitos, um composto pela dezena e pela unidade, e
outro pelo milhar e pela centena, se somarmos estes dois novos números gerando um terceiro, o
quadrado deste terceiro número é exatamente o número original de quatro dígitos.
Por exemplo: 2025 -> dividindo: 20 e 25 -> somando temos 45 -> 452 = 2025.
Escreva um programa para ler um número e verificar se ele obedece a esta característica.
 */
# include <stdio.h>
# include <math.h>

int decimo (void) {
    int num, parte1, parte2, soma, quadrado;

    printf("Informe um numero entre 1000 e 9999:");
    scanf("%d", &num);

    parte1 = num /100;
    parte2 = num % 100;

    soma = parte1 + parte2;
    printf("%d\n", soma);

    quadrado = soma * soma;


    if (quadrado == num){
        printf("%d obedece a esta caracteristica", num);
    }else {
        printf("%d nao obedece a esta caracteristica", num);
    }

    return 0;
}