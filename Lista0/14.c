/*
 * 14. Fazer um programa que leia dois números inteiros A e B, e que troque seus valores. Escrever os
valores antes e depois da troca.
Exemplo: (Antes) A = 5 B = 8
(Depois) A = 8 B = 5
 */

# include <stdio.h>
# include <locale.h>

int catorze (void) {
    setlocale(LC_ALL, "Portuguese");
    int a, b;

    scanf ("%d %d",&a, &b);


    wprintf(L"(Antes) A = %d B = %d\n", a, b);
    wprintf(L"(Depois) A = %d B = %d", b, a);
    return 0;
}