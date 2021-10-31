/*12. O presidente de um país sul-americano quer investir em saúde, educação, habitação, segurança e
previdência, que são as cinco metas de seu governo. Assim, o presidente decide criar mais um
imposto, o ISSS (Imposto Sobre Seu Saldo), que é calculado sobre o saldo médio da contacorrente, segundo a tabela abaixo:
• Saldo < 100: isento
• 100 ≤ Saldo < 1000: imposto devido é 1% sobre o saldo
• 1000 ≤ Saldo < 10000: imposto devido é de 2% sobre o saldo
• 10000 ≤ Saldo < 100000: imposto devido é de 3% sobre o saldo
• Saldo ≥ 100000: imposto devido é de 5% sobre o saldo
Faça um programa que permita ao usuário informar seu saldo bancário e que escreva o
ISSS devido.
 */

# include <stdio.h>

int decimoSegundo (void) {
    float saldo, imposto;

    printf("Informe seu saldo bancario:");
    scanf("%f", &saldo);

    if (saldo < 100) {
        printf("Voce esta isento de ISSS");
    }else if (saldo >= 100 && saldo < 1000) {
        imposto = saldo * 0.01;
        printf("Voce deve pagar R$ %.2f de ISSS", imposto);
    }else if (saldo >= 1000 && saldo < 10000){
        imposto = saldo * 0.02;
        printf("Voce deve pagar R$ %.2f de ISSS", imposto);
    }else if (saldo >= 10000 && saldo < 100000) {
        imposto = saldo * 0.03;
        printf("Voce deve pagar R$ %.2f de ISSS", imposto);
    }else {
        imposto = saldo * 0.05;
        printf("Voce deve pagar R$ %.2f de ISSS", imposto);
    }
    return 0;
}