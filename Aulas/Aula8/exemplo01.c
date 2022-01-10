#include <stdio.h>

struct tipoPonto {
    int x;
    int y;
}; typedef struct tipoPonto tPonto;

tPonto somaPonto(tPonto M, tPonto N){
    tPonto K;
    K.x = M.x + N.x;
    K.y = M.y + N.y;
    return K;
}

int exemplo01Aula8(void) {
    tPonto A, B, C;
    A.x = 1;
    A.y = 2;
    B.x = 3;
    B.y = 4;
    C = somaPonto(A, B);
    printf("(%d,%d)", C.x, C.y);

    return 0;
}