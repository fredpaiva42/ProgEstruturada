/*3. Faça um programa que leia a idade de um nadador e que calcule e mostre a sua categoria seguindo
as regras:
• Categoria Baby: até 4 anos
• Categoria Infantil: 5 – 10 anos
• Categoria Juvenil: 11 – 17 anos
• Categoria Master: A partir de 18 anos
 */

# include <stdio.h>
# include <locale.h>

int terceiro (void) {
    setlocale(LC_ALL, "Portuguese");
    int idade;

    wprintf(L"Informe a idade do nadador:");
    scanf("%d", &idade);

    if (idade <= 4) {
        wprintf(L"Categoria Baby: até 4 anos");
    }else if (5 <= idade && idade <= 10) {
        wprintf(L"Categoria Infantil: 5 - 10 anos");
    } else if (11 <= idade && idade <= 17) {
        wprintf(L"Categoria Juvenil: 11 - 17 anos");
    }
    else {
        wprintf(L"Categoria Master: A partir de 18 anos");
    }
    return 0;
}