/*10. A prefeitura de uma cidade resolveu fazer uma pesquisa entre os seus trabalhadores. Para isso
ela coletou alguns dados como idade, sexo (M ou F) e salário. Faça um programa que leia estes
dados e que escreva ao final:
• a média salarial dos homens
• a média salarial das mulheres
• o maior salário encontrado entre as pessoas abaixo de 30 anos.
Obs: O final da leitura de dados é marcado por uma idade negativa*/

# include <stdio.h>

int main (void) {
    int contadorM=0, contadorF=0, idade;
    float salario, mediaSalarioM = 0, mediaSalarioF = 0, maiorSalario = 0;
    char sexo;

    printf("Diga sua idade, sexo e salario:");
    scanf("%d %c %f", &idade, &sexo, &salario);

    while (idade > 0) {
        if (sexo == 'M' || sexo == 'm') {
            contadorM += 1;
            mediaSalarioM += salario;
            if (idade < 30) {
                if (salario > maiorSalario){
                    maiorSalario = salario;
                }
            }
        } else {
            contadorF += 1;
            mediaSalarioF += salario;
            if (idade < 30) {
                if (salario > maiorSalario){
                    maiorSalario = salario;
                }
            }
        }
        printf("Diga sua idade, sexo e salario:");
        scanf("%d %c %f", &idade, &sexo, &salario);
    }
    printf("\nA media salarial dos Homens: R$ %.2f\n", mediaSalarioM/contadorM);
    printf("A media salarial das Mulheres: R$ %.2f\n", mediaSalarioF/contadorF);
    printf("O maior salario entre as pessoas abaixo de 30 anos: R$ %.2f", maiorSalario);
    return 0;
}