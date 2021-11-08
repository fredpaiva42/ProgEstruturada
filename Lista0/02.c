/*2. Faça um programa que escreva quanto um consumidor deverá pagar na sua conta de luz. Os
dados de entrada do algoritmo devem ser: o nome do consumidor, o seu consumo mensal em
quilowatts, e o preço equivalente a um quilowatt.*/

# include <stdio.h>

int dois (void){
    float conta, consumoMensal, precoKw;
    char consumidor[60];

    printf("Informe seu nome para gerarmos sua conta: ");
    scanf("%s", &consumidor);
    printf("\nInforme seu consumo mensal em Kw: ");
    scanf("%f", &consumoMensal);
    printf("\nInforme o preco por cada Kw: ");
    scanf("%f", &precoKw);

    conta = consumoMensal * precoKw;

    printf("\nSenhor(a): %s, sua conta esse mes e de R$ %.2f", consumidor, conta);
    return 0;
}