/*3. Faça um programa que leia 2 números inteiros positivos, A e B, e que calcule a soma de todos os
    números compreendidos entre eles. Os valores A e B não devem ser considerados no somatório.
    Caso A seja maior do que B deve ser enviada uma mensagem para o usuário informando que a
    soma não será realizada
 */

# include <stdio.h>
int main (void) {
    int i, a, b, somaNum = 0;

    printf("Digite um valor para A e outro para B:");
    scanf("%d %d", &a, &b);

    if (a < b) {
        for (i = a + 1; i<b; i++){
            somaNum += i;
            printf("%d\n",i);
        }
        printf("A soma dos numeros entre %d e %d: %d",a,b, somaNum);
    }else {
        printf("A soma não sera realizada! A eh maior que B");
    }
    return 0;
}
