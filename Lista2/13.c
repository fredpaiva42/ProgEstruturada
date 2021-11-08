/*13. Faça um programa que leia os nomes e os preços dos produtos de uma loja e que escreva o nome
do produto mais caro. Considere que o final da lista é marcado pelo produto ‘XXX’ e que não
existem preços repetidos
 *
 */

# include <stdio.h>
# include <string.h>

int ex13L2(void) {
    char nomeProduto[21], produtoMaisCaro[22], str[] = "XXX";
    float preco, maior = 0;
    int length;

    do{
        printf("nome produto e preco:");
        scanf("%s %f", nomeProduto, &preco);

        if (preco > maior){
            maior = preco;
            length = sizeof(produtoMaisCaro) / sizeof(produtoMaisCaro[0]); // define o tamanho da string
            strncpy(produtoMaisCaro, nomeProduto, length); // atribui o nome do produto a variável produtoMaisCaro
        }
    }while (strcmp(str, nomeProduto) != 0); // enquanto o nome do produto for diferente de XXX pede o nome do próximo produto

    printf("O produto mais caro: %s", produtoMaisCaro);

    return 0;
}