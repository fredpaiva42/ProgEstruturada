/*
 *1. Faça um programa que leia 3 valores reais e que informe se eles formam um triângulo. Caso seja
possível formar o triângulo indique se este é equilátero, isósceles ou escaleno.
 */

#include <stdio.h>
# include <locale.h>

int primeiro (void) {
    setlocale(LC_ALL, "Portuguese");
    float x, y, z;
    float maior, meio, menor;

    scanf("%f %f %f", &x, &y, &z);

    if (x >= y + z || y >= x +z || z >= y + x){
        wprintf(L"Não forma triângulo");
    }else {
        if (x == y && x == z) {
            wprintf(L"triângulo equilátero");
        } else if(x==y || y==z){
            wprintf(L"triângulo isósceles");
        }else {
            wprintf(L"triângulo escaleno");
        }
    }
    return 0;
}