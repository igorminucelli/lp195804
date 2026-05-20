/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1046
Data        : 19/05/2026
Objetivo    : Tempo de Jogo
Aprendizado : <<< Exercitar uso de funções >>>
-------------------------------------------------------------------------- */
#include<stdio.h>
int calcularDuracao(int inicio,int fim){
    if(fim>inicio){
        return (fim-inicio);
    }
    if(inicio>fim){
        return((24-inicio)+fim);
    }
    if(fim==inicio){
        return 24;
    }
}
int main(){
    int inicio,fim,duracao;
    scanf("%d",&inicio);
    scanf("%d",&fim);
    duracao=calcularDuracao(inicio,fim);
    printf("O JOGO DUROU %d HORA(S)\n",duracao);
    return 0;
}
