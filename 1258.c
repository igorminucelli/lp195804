/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1258
Data        : 22/06/2026
Objetivo    : Organizar as camisas por nome, cor e por tamanho.
Aprendizado : <<< Uso de struct >>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include<stdio.h>
#include<string.h>
typedef struct{
    char nome[50];
    char cor[20];
    char tamanho;
}camisa;

int main(){
    int N, caso = 1;
    while(scanf("%d", &N) && N != 0){
        getchar();
        camisa turma[60];

        for(int i = 0; i < N; i++){
            fgets(turma[i].nome,50,stdin);
            turma[i].nome[strcspn(turma[i].nome,"\n")]='\0';
            scanf("%s %c", turma[i].cor, &turma[i].tamanho);
            getchar();
        }
        for(int i = 0; i < N - 1; i++){
            for(int j = 0; j < N - 1; j++){
                int troca = 0;
                int camiCor = strcmp(turma[j].cor, turma[j + 1].cor);
                if(camiCor > 0){
                    troca = 1;
                }
                else if(camiCor == 0){
                    if(turma[j].tamanho != turma[j + 1].tamanho){
                        if(turma[j].tamanho == 'M' && turma[j + 1].tamanho == 'P' || turma[j].tamanho == 'G' && (turma[j + 1].tamanho == 'P' || turma[j + 1].tamanho == 'M')){
                            troca = 1;
                        }
                    }
                    else{
                        if(strcmp(turma[j].nome, turma[j + 1].nome) > 0){
                            troca = 1;
                        }
                    }
                }
                if(troca){
                    camisa aux = turma[j];
                    turma[j] = turma[j + 1];
                    turma[j + 1] = aux;
                }
            }
        }
        if(!caso){
            printf("\n");
        }
        caso = 0;
        for(int i = 0; i < N; i++){
            printf("%s %c %s\n", turma[i].cor, turma[i].tamanho, turma[i].nome);
        }
    }
    return 0;
}
