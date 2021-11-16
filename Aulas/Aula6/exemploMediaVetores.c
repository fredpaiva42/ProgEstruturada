/*
 * Armazenar 10 valores inteiros num vetor e depois calcular a sua média
 */

# include <stdio.h>
#define TAM 10

float calculaMedia(int *v){
    int i, soma = 0;
    for(i = 0; i <TAM; i ++) {
        soma += v[i];
    }
    return (soma/(TAM*1.0));
}


int mediaUsandoVetores (void) {
    int i, vetor[TAM];
    float media;

    for (i = 0; i < TAM; i++){
        printf("Digite um numero:");
        scanf("%d", &vetor[i]);
    }

    media = calculaMedia(vetor);
    printf("A media eh: %.2f", media);
    return 0;

}