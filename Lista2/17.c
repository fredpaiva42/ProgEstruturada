/*17. Faça um programa que apure os votos de uma eleição presidencial onde concorreram três
candidatos. Os votos podem ser 1, 2, 3 e 4 e devem ser contados de acordo com a tabela
abaixo:
1 João da Silva
2 José Ramalho
3 Maria de Mattos
4 Voto em Branco
Outros Voto Nulo
Calcule e escreva o total de votos de cada candidato, o total de votos brancos, o total de
votos nulos e o nome do candidato que recebeu mais votos
 */

# include <stdio.h>
# include <string.h>

int ex17L2(void) {
    int voto, totalJoao = 0, totalJose = 0, totalMaria = 0, totalBranco = 0, totalNulo = 0;
    char vencedor[20], candidato1[] = "Joao",candidato2[] = "Jose", candidato3[] = "Maria";
    int length;

    printf("Digite seu voto:");
    scanf("%d", &voto);
    while (voto > 0){

        switch(voto){
            case 1:
                totalJoao += 1;
                break;
            case 2:
                totalJose += 1;
                break;
            case 3:
                totalMaria += 1;
                break;
            case 4:
                totalBranco += 1;
                break;
            default:
                totalNulo += 1;
                break;
        }

        if (totalJoao > totalJose && totalJoao > totalMaria) {
            length = sizeof(vencedor) / sizeof(vencedor[0]);
            strncpy(vencedor, candidato1, length);
        } else if (totalMaria > totalJoao && totalMaria > totalJose) {
            length = sizeof(vencedor) / sizeof(vencedor[0]);
            strncpy(vencedor, candidato3, length);
        }else{
            length = sizeof(vencedor) / sizeof(vencedor[0]);
            strncpy(vencedor, candidato2, length);
        }

        printf("Digite seu voto:");
        scanf("%d", &voto);
    }
    printf("Total de votos Joao: %d\n", totalJoao);
    printf("Total de votos Jose: %d\n", totalJose);
    printf("Total de votos Maria: %d\n", totalMaria);
    printf("Total de votos em Branco: %d\n", totalBranco);
    printf("Total de votos Nulo: %d\n", totalNulo);
    printf("Quem recebeu mais votos foi: %s", vencedor);
    return 0;
}