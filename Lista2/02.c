/*2. Faça um programa que leia a quantidade e o preço de 50 produtos que foram comprados por uma
    empresa. Ao final deve ser escrito o total gasto pela empresa.
 *
 */

# include <stdio.h>

int ex2L2 (void) {
    int qtdProdutos, i;
    float preco, precoTotal;

    for (i = 50; i > 0; i--) {
        printf("Informa a quantidade de cada produto e seu preco:");
        scanf("%d %f",&qtdProdutos, &preco);

        precoTotal += qtdProdutos * preco;
    }
    printf("A empresa pagara no total R$ %.2f", precoTotal);
    return 0;
}