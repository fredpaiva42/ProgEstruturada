/*1. Ler 20 números inteiros e depois imprimí-los na ordem
 * contrária em que foram lidos.
 */

# include <stdio.h>
# include <string.h>

# define TAM 20

int ex01Aula6(void) {
    int i, vetor[TAM];

    for (i = 0; i < TAM; i++){
        printf("Digite um numero inteiro:");
        scanf("%d", &vetor[i]);
    }

    for (i = TAM - 1; i >= 0; i--){
        printf("%d ", vetor[i]);
    }
    return 0;
}