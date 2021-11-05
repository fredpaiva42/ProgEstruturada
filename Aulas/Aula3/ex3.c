/*
 * 3. Faça um programa que calcule o fatorial de N.
 */

// !4 = 4 * (n-1) * (n-2)

# include <stdio.h>

int aula3Ex3 (void) {
    int n, i;
    long long int fatorial;

    printf("Digite um numero:");
    scanf("%d", &n);

    fatorial = n;
    printf("%d! : ", n);
    for (i = n-1; i > 0; i--){
        fatorial *= i;
        printf("%d * ", i+1);
    }
    printf("1 = %lld", fatorial);
    return 0;
}