/*
 * Armazenar 10 valores inteiros num vetor e depois calcular a sua média
 */

# include <stdio.h>


float calculaMedia1(int *v, int tam){
    int i, soma = 0;
    for(i = 0; i <tam; i ++) {
        soma += v[i];
    }
    return (soma/(tam*1.0));
}


int exemploPedindoOtamanho (void) {
    int i, tam;
    float media;

    printf("Diigte o tamanho do vetor:");
    scanf("%d", &tam);
    int vetor[tam];

    for (i = 0; i < tam; i++){
        printf("Digite um numero:");
        scanf("%d", &vetor[i]);
    }

    media = calculaMedia1(vetor, tam);
    printf("A media eh: %.2f", media);
    return 0;

}

