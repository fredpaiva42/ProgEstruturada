# include <stdio.h>

int maiorN (void) {
    int a, b, c;
    int maior;

    printf("Digite três valores diferentes: \n");
    scanf("%d %d %d", &a,&b,&c);

    if (a > b && a > c){
        printf("\no Maior é: %d", a);
    } else if (b > a && b > c){
        printf("\no Maior é: %d", b);
    } else {
        printf("\no Maior é: %d", c);
    }

    return 0;
}
