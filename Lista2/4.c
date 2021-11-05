/*4. Faça um programa que leia 2 números inteiros positivos, A e B, e que calcule a soma de todos os
    números múltiplos de 4 compreendidos entre eles. Os valores A e B não devem ser considerados
    no somatório. Caso A seja maior do que B deve ser enviada uma mensagem para o usuário
    informando que a soma não será realizada
 */

# include <stdio.h>
int ex4L4 (void) {
    int i, a, b, somaMultiplos = 0;

    printf("Digite um valor para A e outro para B:");
    scanf("%d %d", &a, &b);

    if (a < b) {
        for (i = a; i<b; i++){
            if (i % 4 == 0){
                somaMultiplos += i;
            }
        }
        printf("A soma dos multiplos de 4, entre %d e %d: %d",a,b, somaMultiplos);

    }else {
        printf("A soma não sera realizada! A eh maior que B");
    }
    return 0;
}
