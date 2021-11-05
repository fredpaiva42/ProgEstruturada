/**7. Em um cinema, cada espectador respondeu a uma pesquisa, que perguntava a sua idade e a sua
    opinião em relação a um filme (O – Ótimo; B – Bom; R – Regular; P – Péssimo). Faça um programa
    que informe a média de idade das pessoas que responderam o questionário e a porcentagem dada
    para cada uma das respostas. O programa deve terminar quando o usuário digitar uma idade
    negativa
 *
 */

# include <stdio.h>

int ex7L2 (void) {
    int mediaIdade = 0,idade, contador = 0;
    char opniao;
    float  otimoPercent = 0, bomPercent = 0, regularPercent = 0, pessimoPercent = 0;

    printf("Digite a sua opniao sobre o filme e sua idade:");
    scanf(" %c %d", &opniao, &idade);

    while (idade > 0){
        mediaIdade += idade;
        contador += 1;

        if (opniao == 'O' || opniao == 'o'){
            otimoPercent += 1;
        } else if (opniao == 'B'|| opniao == 'b'){
            bomPercent += 1;
        } else if (opniao == 'R' || opniao == 'r') {
            regularPercent += 1;
        }else{
            pessimoPercent += 1;
        }
        printf("Digite a sua opniao sobre o filme e sua idade:");
        scanf(" %c %d", &opniao, &idade);
    }
    mediaIdade = mediaIdade / contador;
    otimoPercent = (float) otimoPercent / contador;
    bomPercent = (float) bomPercent / contador;
    regularPercent = (float) regularPercent / contador;
    pessimoPercent = (float) pessimoPercent / contador;

    printf("A media de idade do publico eh: %d\n", mediaIdade);
    printf("Opinao do Publico:\n");
    printf("Otimo - %.2f%%\n", otimoPercent * 100);
    printf("Bom - %.2f%%\n", bomPercent * 100);
    printf("Regular - %.2f%%\n", regularPercent * 100);
    printf("Pessimo - %.2f%%\n", pessimoPercent * 100);

}