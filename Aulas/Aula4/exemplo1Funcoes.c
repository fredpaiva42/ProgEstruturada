# include <stdio.h>

int soma(int a, int b) {
    return(a + b);
}

int exemploFuncaoSoma (void) {
    int n1, n2, resultado;
    printf("Digite dois valores inteiros:");
    scanf("%d %d", &n1, &n2);
    resultado = soma(n1,n2);
    printf("O resultado eh: %d", resultado);
    return 0;
}

/*int main (void) {
    int n1, n2, resultado;
    printf("Digite dois valores inteiros:");
    scanf("%d %d", &n1, &n2);
    printf("O resultado eh: %d", soma(n1, n2));
    return 0;
}
 */