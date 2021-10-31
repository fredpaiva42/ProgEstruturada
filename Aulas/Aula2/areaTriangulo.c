# include <stdio.h>

int areaTriangulo (void) {
    float base, altura, area;

    printf("Digite a base: ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    area = (base * altura)/2.0;

    printf("Area: %.2f", area);
    return 0;
}