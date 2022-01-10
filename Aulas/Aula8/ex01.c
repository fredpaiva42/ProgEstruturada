/*
 *  1. Faça um programa que leia o quadro de cargos e salários de uma empresa e que calcule a média salarial/
 *  — Crie uma estrutura com os campos cargo e salário.
 *  — Serão lidos N cargos e salários.
 *  — Ao final do programa escreva os cargos que estão acima da média calculada.
 */

#include <stdio.h>

struct tipoFuncionario {
    char cargo[20];
    float salario;
}; typedef struct tipoFuncionario tFuncionario;

void preencheTabelaFuncionarios (tFuncionario *vet, int tam){
    int i;
    for (i=0; i < tam; i++){
        printf("Informe o seu cargo:");
        scanf("  %20[^\n]", vet[i].cargo);
        printf("Informe o seu salario:");
        scanf("%f", &vet[i].salario);
    }
}

void mediaSalarial (tFuncionario *vet, int tam){
    float mediaSalarial = 0;

    for(int i = 0; i < tam; i++){
        mediaSalarial += vet[i].salario;
    }
    mediaSalarial /=  (float) tam;

    printf("\nCargos que possuem salario acima da media: R$ %.2f \n\n", mediaSalarial);
    for (int i = 0; i < tam; i++){
        if (vet[i].salario > mediaSalarial){

            printf("Cargo: %s, salario: R$ %.2f\n", vet[i].cargo, vet[i].salario);
        }
    }

}

int main(void) {
    int tam;

    printf("Quantos funcionarios a empresa possui?\n");
    scanf("%d", &tam);

    tFuncionario vetorFunc[tam];

    preencheTabelaFuncionarios(vetorFunc, tam);
    mediaSalarial(vetorFunc, tam);

    return 0;
}