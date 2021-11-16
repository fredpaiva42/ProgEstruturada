/*2. Ler N notas dos alunos de uma turma e calcular a média.
Ao final imprimir a quantidade de alunos que ficou acima
da média calculada.
 */

# include <stdio.h>

float calulaMediaNotas(int *v, int tam){
    int i, soma = 0;

    for (i = 0; i < tam; i++){
        soma += v[i];
    }
    return (soma/tam*1.0);
}

int ex02Aula6 (void) {
    int i, tam, contador = 0;
    float media;

    printf("Digite a quantidade de alunos da turma:");
    scanf("%d", &tam);
    int notas[tam];

    for (i = 0; i < tam; i++) {
        printf("Digite a nota do aluno:");
        scanf("%d", &notas[i]);
    }

    media = calulaMediaNotas(notas, tam);

    for (i = 0; i < tam; i++) {
        if (notas[i] > media){
            contador += 1;
        }
    }
    printf("\n\n%d alunos ficaram acima da media!", contador);

    return 0;
}