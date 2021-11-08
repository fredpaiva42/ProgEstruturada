/*
 * 6. Faça um programa que leia um valor inteiro e que informe se este valor é par ou ímpar.
 */

# include <stdio.h>
# include <locale.h>

int sexto (void) {
    setlocale(LC_ALL, "Portuguese");
    int num;

    wprintf(L"Digite um número:");
    scanf("%d", &num);

    if (num % 2 == 0){
        wprintf(L"%d é par", num);
    }else {
        wprintf(L"%d é ímpar", num);
    }
    return 0;
}