/*
 * 11. Faça um programa que escreva os N primeiros termos de uma PA. O primeiro termo, a1, e a
    razão da PA devem ser lidos.
 */

# include <stdio.h>

int ex11L2 (void) {
    int primeiroTermo, razao, pa, n,i;

    printf("Digite o primeiro termo e a razao da PA e quantos termos quer:");
    scanf("%d %d %d", &primeiroTermo, &razao, &i);

    for (n = 1; n<=i; n++){
        pa = primeiroTermo + razao * (n-1);
        printf("%d ", pa);
    }
    return 0;
}