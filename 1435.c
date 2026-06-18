/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1435
Data        : 17/06/2026
Objetivo    : Imprimir uma matriz quadrada de um número inteiro.
Aprendizado : <<<Exerciatr matrizes>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
 
int main() {
 
    int N;
    scanf("%d",&N);
    
    while( N != 0 ){
        if(N == 0){
            return 0;
        }
        int M[N][N];
        for(int l = 0; l < N; l++){
            for(int c = 0; c < N; c++){
                int menor = l;
                if(c < menor){
                    menor = c;
                }
                if((N - 1)-l < menor){
                    menor = (N - 1)-l;
                }
                if((N-1)-c < menor){
                    menor = (N - 1)-c;
                }
                M[l][c] = menor + 1;
            }
        }
        for(int l = 0; l < N; l++){
            for(int c = 0; c  < N; c++){
                if(c == 0){
                    printf ("%3d", M[l][c]);
                }
                else{
                    printf (" %3d", M[l][c]);
                }    
            }
            printf("\n");
        }
        printf("\n");
        scanf("%d",&N);
    }
 
    return 0;
}
