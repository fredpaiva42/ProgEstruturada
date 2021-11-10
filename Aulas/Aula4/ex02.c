/*2. Faça um programa imprima na tela um Menu que permita o
usuário escolher as seguintes operações: +, -, /, *.

 Se um operador inválido for digitado deve ser impresso um erro
 Se o usuário digitar! O programa deve ser finalizado
 Se o usuário escolher uma das quatro operações, o programa deve
ler dois números reais e efetua-los
 Faça funções para escrever o Menu, realizar a operação e verificar se o operador é valido.
 */

# include <stdio.h>

char menu(){
    char operacao;

    printf("Escolha uma operacao:\n");
    printf("+: adicao\n");
    printf("-: subtracao\n");
    printf("/: divisao\n");
    printf("*: multiplicacao\n");
    printf("^: potenciacao\n");
    printf("%%: resto\n");
    printf("!: FIM\n");
    printf("==> ");
    scanf(" %c",&operacao);
    return operacao;
}

int potenciacao(int A, int B) {
    int i, resultado = 1;
    for (i = 0; i < B; i++) {
        resultado *= A;
    }
    return resultado;
}

void operacao(int A, int B, char op){
    switch (op) {
        case '+':
            printf("\nA soma eh: %d\n", A+B);
            break;
        case '-':
            printf("\nA subtracao eh: %d\n", A-B);
            break;
        case '*':
            printf("\nA multiplicacao eh: %d\n", A*B);
            break;
        case '/':
            if (B != 0){
                printf("\nA divisao eh: %.2f\n", (A*1.0)/B);
            }else{
                printf("\nA divisao nao pode ser realizada!\n");
            }
            break;
        case '%':
            if (B != 0){
                printf("\nO resto eh: %d\n", A%B);
            }else{
                printf("\nA divisao nao pode ser realizada!\n");
            }
            break;
        case '^':
            printf("\nA potencia eh: %d\n", potenciacao(A,B));
            break;
    }
}

int main (void) {
    char op;
    int A,B;

    op = menu();

    while (op != '!') {
        if (op == '+' || op == '-' || op == '/' || op == '*' || op == '%' || op == '^'){
            printf("Digite um valor para A: ");
            scanf("%d", &A);
            printf("Digite um valor para B: ");
            scanf("%d", &B);
            operacao(A, B, op);
        } else {
            printf("\n\nEsta operacao nao existe!");
        }
        op = menu();
    }
    return 0;
}