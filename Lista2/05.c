/*5. Faça um programa que calcule a área total de uma casa (sala, cozinha, quartos, banheiros, etc).
    Considere que todos os cômodos são retangulares. O usuário deve entrar com a largura e o
    comprimento de cada cômodo da casa. O final da leitura será detectado quando for digitado um
    número negativo.
 *
 */

# include <stdio.h>

int ex5L2 (void) {
    float largura, comprimento, areaTotal = 0;
    int contador = 0;

    printf("Informe a largura e comprimento de cada comodo:");
    scanf("%f %f", &largura, &comprimento);

    while (largura > 0 && comprimento > 0) {
        contador += 1;
        largura = largura;
        comprimento = comprimento;
        areaTotal += (largura * comprimento);
        printf("Informe a largura e comprimento de cada comodo:");
        scanf("%f %f", &largura, &comprimento);
    }
    areaTotal += (largura * comprimento);
    printf("A area total da casa: %.0f m", areaTotal);
    return 0;
}

