/*
Exercício
SWITCH
Faça um programa que leia 2 valores inteiros A e B e escreva o resultado da operação escolhida pelo usuário
*/

# include <stdio.h>

int x (void) {
    int a, b;
    char operacao;

    printf("Digite dois valores: ");
    scanf("%d %d", &a, &b);
    printf("Digite a operação que você quer: ");
    scanf(" %c", &operacao);

    switch (operacao){
        case '+':
            printf("resultado: %d", a+b);
            break;
        case '-':
            printf("resulstado: %d", a-b);
            break;
        case '/':
            printf("resulstado: %d", a/b);
            break;
        case '*':
            printf("resulstado: %d", a*b);
            break;
    }
    return 0;
}