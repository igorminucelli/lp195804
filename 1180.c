/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 17/06/2026
Objetivo    : Preencher vetores, dizer qual é o menor e a posição.
Aprendizado : <<<Exerciatr vetores>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
int main (){
    int N, posi = 0, menor;
    scanf("%d",&N);
    int X[N];
    for(int i = 0; i < N; i++){
        scanf("%d",&X[i]);
    }
    menor = X[0];
    for(int j = 0; j < N; j++){
        if(menor > X[j]){
            menor = X[j] ;
            posi = j;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posi);


    return 0;
}
