/*14. O síndico do condomínio Praias Oceânicas, que possui 4 blocos, instituiu uma nova forma de
cobrança. Os condôminos dos blocos Itaipu e Itacoatiara pagam 10% a mais que os moradores dos
blocos Camboinhas e Piratininga. Os moradores da cobertura pagam uma taxa extra fixa relativa a
1% do total do condomínio. Supondo que cada bloco possui 20 apartamentos simples e 4 coberturas,
faça um programa que leia a taxa condominial básica e que informe o total arrecadado pelo síndico
no mês, especificando também os valores diferenciados de cada condomínio.
 */

# include <stdio.h>

int main (void) {
    float taxaBasica, coberturaI, coberturaCP, simplesCP, simplesI, total;

    printf("Informe taxa condominal basica:");
    scanf("%f", &taxaBasica);

    simplesCP = 40 * taxaBasica;
    simplesI = 40 * (taxaBasica +((taxaBasica)*0.1));
    coberturaCP = 8 * (taxaBasica + ((taxaBasica) * 0.01));
    coberturaI = 8 * (taxaBasica + ((taxaBasica) * 0.1) + ((taxaBasica) * 0.01));
    total = simplesI + simplesCP + coberturaCP + coberturaI;

    printf("\nTotal arrecadado pelo sindico no mes: R$ %.2f\n", total);
    printf("Os blocos Itaipu e Itacoatiara pagam: R$ %.2f\n", simplesI + coberturaI);
    printf("Os blocos Camboinhas e Piratininga pagam: R$ %.2f", simplesCP + coberturaCP);
    return 0;
}