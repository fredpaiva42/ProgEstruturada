/*
 * 4. Faça um programa que leia o preço de um produto, calcule o seu aumento e mostre a sua
classificação.
• Se o preço for menor ou igual a 50, o produto receberá um aumento de 5%
• Se o preço for maior do que 50 e menor ou igual a 100, o aumento será de 10%
• Se o preço for maior do que 100, o aumento será de 15%
A classificação do produto deve ser:
• Barato: até 80 reais (inclusive)
• Normal: entre 80 reais e 120 reais (inclusive)
• Caro: entre 120 reais e 200 reais (inclusive)
• Muito Caro: maior do que 200 reais
 */

#include <stdio.h>
#include <locale.h>

int quarto (void) {
    setlocale(LC_ALL, "Portuguese");
    float preco;

    wprintf(L"Digite o preço do produto:");
    scanf("%f", &preco);

    if (preco <= 50){
        preco *= 1.05;
    }else if (preco > 50  && preco <= 100){
        preco *= 1.10;
    }else {
        preco *= 1.15;
    }

    if (preco <= 80) {
        wprintf(L"Este produto está barato e custa R$ %.2f", preco);
    }else if (preco > 80 && preco <= 120) {
        wprintf(L"Este produto está com preço normal e custa R$ %.2f", preco);
    }else if (preco > 120 && preco <= 200) {
        wprintf(L"Este produto está caro e custa R$ %.2f", preco);
    }else {
        wprintf(L"Este produto está muito caro e custa R$ %.2f", preco);
    }
    return 0;
}