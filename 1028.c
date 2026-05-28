/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1028
Data        : 26/05/2026
Objetivo    : Ler dois valores inteiros e mostrar a soma.
Aprendizado : <<<Determinar figurinhas que podem ser trocados>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include<stdio.h>
int calcularMdc(int F1,int F2){
    if(F2==0){
        return F1;
    }
    return calcularMdc(F2, F1%F2);
}
int main(){
    int N, F1, F2, i, pilha;
    scanf("%d",&N);
    for(i=0;i<N;i++){
      scanf("%d %d", &F1, &F2);
      pilha=calcularMdc(F1, F2);
      printf("%d\n",pilha);
    }
    return 0;
}
