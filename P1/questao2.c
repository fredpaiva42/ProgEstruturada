#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 2

struct aluno{
    char mat[9];
    char nome[40];
    float CR;
    int trancados;
}; typedef struct aluno taluno;

void preencherVetor(taluno *vet){
    int i;
    for (i=0; i<N; i++){
        printf("Digite a matricula do aluno %d: \n", i + 1);
        scanf(" %s", vet[i].mat);
        printf("Digite o CR do aluno %d: \n", i + 1);
        scanf("%f", &vet[i].CR);
        printf("Digite o nome do aluno %d: \n", i + 1);
        scanf("  %40[^\n]", vet[i].nome);
        printf("Digite a quantidade de periodos trancados do aluno %d: \n", i + 1);
        scanf("%d", &vet[i].trancados);
    }
}

void ordenaVetor(taluno *vet){

    int i, j, troca, menorPos;
    char semi, semj, anoi[3], anoj[3], insci[4], inscj[4];
    taluno temp;

    for (i = 0; i < N; i++){
        for (j = i+1; j < N; j++){
            troca = 0;
            if (vet[j].CR < vet[i].CR){
                menorPos = j;
                troca = 1;
            } else { // Empate de nota
                if (vet[j].CR == vet[i].CR) { // Desempatar por ano
                    anoi[0] = vet[i].mat[1];
                    anoi[1] = vet[i].mat[2];
                    anoi[2] = '\0';
                    anoj[0] = vet[j].mat[1];
                    anoj[1] = vet[j].mat[2];
                    anoj[2] = '\0';

                    if (strcmp(anoj,anoi) < 0){
                        menorPos = j;
                        troca = 1;
                    } else { // Empate de ano
                        if (strcmp(anoj,anoi) == 0) {
                            semj = vet[j].mat[0];
                            semi = vet[i].mat[0];
                            if (semj < semi){ // Desempatar por inscrição
                                insci[0] = vet[i].mat[4];
                                insci[1] = vet[i].mat[5];
                                insci[2] = vet[i].mat[6];
                                insci[3] = '\0';
                                inscj[0] = vet[j].mat[4];
                                inscj[1] = vet[j].mat[5];
                                inscj[2] = vet[j].mat[6];
                                inscj[3] = '\0';
                                if (strcmp(inscj, insci) < 0){
                                    menorPos = j;
                                    troca = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (troca) {
            temp = vet[i];
            vet[i] = vet[menorPos];
            vet[menorPos] = temp;
        }
    }
}

void imprimirVetor(taluno *vet){
    for(int i =0;i<N;i++){
        printf("\nO nome do aluno(a): %s\n", vet[i].nome);
        printf("\nO CR do aluno(a): %f\n", vet[i].CR);
        printf("\nA matricula do aluno(a): %s\n", vet[i].mat);
        printf("\nO numero de peridos trancados do aluno(a): %d\n", vet[i].trancados);
    }
}

int jubila(taluno *vet){
    int i, semAtual, anoAtual, quant=0, contSem, semCursados, ano, sem;
    char anoc[3];

    printf("\n Digite o ano atual:");
    scanf("%d", &anoAtual);
    printf("\n Digite o sem atual:");
    scanf("%d", &semAtual);

    for (i = 0; i < N; i++) {
        anoc[0] = vet[i].mat[1];
        anoc[1] = vet[i].mat[2];
        anoc[2] = '\0';
        ano = atoi(anoc);
        sem = vet[i].mat[0] - '0';
        printf("Sem:%d", sem);
        semCursados = (anoAtual - ano)*2 - vet[i].trancados;
    }

    // ajuste sem contar o sem atual
    if (semAtual > sem)
        semCursados++;
    else
        semCursados--;

    printf("\n\n (MAT: %s) Semestres cursados: %d\n", vet[i].mat, semCursados);
    if (semCursados > 10){
        quant++;
    }
    return quant;
}

int questao2(void) {
    taluno vetor[N];
    preencherVetor(vetor);
    ordenaVetor(vetor);
    printf("\n\n Dados ordenados \n");
    imprimirVetor(vetor);

    printf("\n\n Alunos em jubilamento %d \n", jubila(vetor));

    return 0;
}