/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2552
Data        : 16/06/2026
Objetivo    : Determinar o tabuleiro do jogo.
Aprendizado : <<<Exerciatr matrizes>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include<stdio.h>
int main(){
    int M, N, pao = 0;
    
    while (scanf("%d %d", &N, &M) != EOF){
        int X[N][M];
        int resultado[N][M];
        for(int i = 0; i < N; i++ ){
            for(int j = 0; j < M; j++){
                scanf("%d",&X[i][j]);
            }
        }
        
        for(int i = 0; i < N; i++ ){
            for(int j = 0; j < M; j++){
                if(X[i][j] == 1){
                    resultado[i][j] = 9;
                }
                if(X[i][j] == 0){
                    pao = 0;
                    if(i > 0 && X[i - 1][j] == 1){
                        pao = pao + 1;
                    }
                    if(i < (N - 1) && X[i + 1][j] == 1){
                        pao = pao + 1;
                    }
                    if(j > 0 && X[i][j - 1] == 1){
                        pao = pao + 1;
                    }
                    if(j < (M - 1) && X[i][j + 1] == 1){
                        pao = pao + 1;
                    }
                    resultado[i][j] = pao;
                }
            }
        }
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                printf("%d", resultado[i][j]);
            }
            printf("\n");
        }
    }    
    
    
    return 0;
}
