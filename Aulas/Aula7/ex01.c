/*
 * Faça um programa que leia uma cadeia de caracteres em formato de data: DD/MM/AAAA...
 * - Crie uma função que receba esta data como parâmetro e que retorne o dia, mês e o ano em três variáveis inteiras distintas. Escreva os valores retornados no programa principal.
 *
 * - Crie uma função que receba o ano como parâmetro e que retorne se a data caiu em um ano bissexto.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void separaData (char *dataNasc, int *dia, int *mes, int *ano){
    char D[3], M[3], A[5];

    /* Maneira SIMPLES
     * D[0] = dataNasc[0];
     * D[1] = dataNasc[1];
     * M[0] = dataNasc[3];
     * M[1] = dataNasc[4];
     * A[0] = dataNasc[6];
     * A[1] = dataNasc[7];
     * A[2] = dataNasc[8];
     * A[3] = dataNasc[9];
     */

    strncpy(D, dataNasc, 2); // dataNasc = 23/06/2000 -> 23
    D[2] = '\0'; // D[3] = [2, 3, \0]
    dataNasc = &dataNasc[3]; // dataNasc = 06/2000

    strncpy(M, dataNasc, 2); // dataNasc = 06/2000 -> 06
    M[2] = '\0';
    dataNasc = &dataNasc[3]; // dataNasc = 2000

    strncpy(A, dataNasc, 4); // dataNasc = 2000
    A[4] = '\0';

    printf("\nD %s", D);
    printf("\nM %s", M);
    printf("\nA %s\n", A);

    *dia = atoi(D); // converte string pra int
    *mes = atoi(M);
    *ano = atoi(A);
}

int ehBissexto (int ano) {
    if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0))
        return 1;
    else
        return 0;
}

int ex01Aula7(void) {

    char dataNasc[10];
    int dia, mes, ano;

    printf("\nDigite a data de nascimento:\n");
    scanf(" %s", dataNasc);

    separaData(dataNasc, &dia, &mes, &ano);

    printf("\nA data de nascimento: %d - %d - %d", dia, mes, ano);
    if(ehBissexto(ano))
        printf("\n%d e um ano bissexto!", ano);
    else
        printf("\n%d nao e um ano bissexto!", ano);

    return 0;
}