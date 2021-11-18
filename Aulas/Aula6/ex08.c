/*Faça um programa que leia uma cadeia de caracteres
em formato de data: DD/MM/AAAA
• Crie uma função que receba esta data como parâmetro e que
retorne o ano em uma variável inteira.
• Crie um a função que receba o ano como parâmetro e retorne
se a data caiu em um ano bissexto
 */

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int convertToInt (char *data){
    char dataA[5]; int ano;

    data = &data[6];
    strncpy (dataA, data, 4);
    dataA[4] = '\0';
    ano = atoi(dataA);
    return (ano);
}

void verificaAnoBissexto (int ano){
    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0) ) {
        printf("O ano %d eh um ano bissexto!", ano);
    }else {
        printf("O ano %d nao eh um ano bissexto!", ano);
    }
}

int ex08Aula6(void) {
    char data[10]; int ano;

    printf("Digite uma data (DD/MM/AAAA):\n");
    scanf(" %s",data);

    ano = convertToInt(data);
    verificaAnoBissexto(ano);

    return 0;
}