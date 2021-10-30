/*
 * 12. Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual. Calcular e
escrever a idade dessa pessoa em anos, meses e semanas
 */

# include <stdio.h>
# include <locale.h>

int main (void) {
    setlocale(LC_ALL, "Portuguese");
    int anoI, anoF, anos, meses, semanas;

    wprintf(L"Digite o ano do seu nascimento:");
    scanf("%d", &anoI);
    wprintf(L"Digite o ano atual:");
    scanf("%d", &anoF);

    anos = anoF - anoI;
    meses = anos * 12;
    semanas = meses * 4;

    wprintf(L"Você tem %d anos!\n", anos);
    wprintf(L"Você tem %d meses!\n", meses);
    wprintf(L"Você tem %d semanas!", semanas);
    return 0;
}