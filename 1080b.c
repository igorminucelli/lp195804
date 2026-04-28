/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 19/04/2026
Objetivo    : Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.
Aprendizado : <<<Aprendemos o uso do vetor >>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main(){
    int X[100],Maior=-1,Posicao=-1,i;
    
    for(i=0; i<100; i++){
        scanf("%d", &X[i]);
        
        if(X[i]<0){
            return 0;
        }
        
        if(X[i]>Maior){
            Maior=X[i];
            Posicao=i+1;
        }
    }
    
    printf("%d\n", Maior);
    printf("%d\n", Posicao);
    
    return 0;
}
