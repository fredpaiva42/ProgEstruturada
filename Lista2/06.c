/*6. Faça um programa que apresente a tabuada de um número N, que será informado pelo usuário. O
    programa deve garantir que o valor digitado para N esteja entre 0 e 9
 *
 */

# include <stdio.h>

int ex6L2 (void) {
    int n, i, resultado;

    printf("Digite qual tabuada voce quer:");
    scanf("%d",&n);

    for (i = 1; i<=10; i++){
        resultado = n * i;
        printf("%d x %d = %d\n", n, i, resultado);
    }
    return 0;
}