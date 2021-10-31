#include <stdio.h>
# include <math.h>

int triangulo (void) {
    float x, y, z;
    float maior, meio, menor;

    scanf("%f %f %f", &x, &y, &z);

    if (x >= y + z || y >= x +z || z >= y + x){
        printf("Não forma triângulo");
    }else {
        if (x == y && x == z) {
            printf("triangulo equilatero");
        } else if(x==y || y==z){
            printf("triangulo isosceles");
        }else {
            printf("triangulo escaleno");
        }
    }
    return 0;
}