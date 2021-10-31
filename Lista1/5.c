/*
 * 5. Faça um programa que leia a altura e o sexo de uma pessoa e escreva o seu peso ideal, utilizando as
seguintes fórmulas:
• para homens: (72,7 * altura) – 58,0
• para mulheres: (62,1 * altura) – 44,7
 */

# include <stdio.h>
# include <locale.h>


int cinco(void) {
   float altura, pesoIdeal; char sexo;

   printf("Digite a sua altura:");
   scanf("%f", &altura);

   printf("Digite o seu sexo:");
   scanf(" %c", &sexo);


   if (sexo == 'F' || sexo == 'f'){
       pesoIdeal = altura * 62.1 - 44.7;
       printf("O seu peso ideal: %.1f", pesoIdeal);
   }else {
       pesoIdeal = altura * 72.7 - 58.0;
       printf("O seu peso ideal: %.1f", pesoIdeal);
   }
    return 0;
}