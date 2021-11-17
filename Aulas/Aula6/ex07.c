/*  Fazer um programa que leia códigos e preços dos
produtos de uma loja e que escreva ao final o código do
produto mais caro.
• Considere que o código é uma cadeia de 3 caracteres.
 */

# include <stdio.h>
# include <string.h>

int ex07Aula6(void) {
    char codigo[3], produtoMaisCaro[4], str[] = "XXX";
    float preco, maior = 0;

    do{
        printf("nome produto e preco:");
        scanf("%s %f", codigo, &preco);

        if (preco > maior){
            maior = preco;
            strcpy(produtoMaisCaro, codigo); // atribui o nome do produto a variável produtoMaisCaro
        }
    }while (strcmp(str, codigo) != 0); // enquanto o nome do produto for diferente de XXX pede o nome do próximo produto

    printf("O produto mais caro: %s", produtoMaisCaro);

    return 0;
}