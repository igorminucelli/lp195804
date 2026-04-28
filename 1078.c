/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 28/04/2026
Objetivo    : Fazer a tabuada de N
Aprendizado : <<< Fazer tabuada de qualquer número >>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main(){
    int N,i,Valor;
    
    scanf("%d", &N);
    
    if ( N<=2|| N>=1000){
        return 0;
    }
    
    for(i=1; i<=10; i++){
        Valor=i*N;
        printf("%d x %d = %d\n", i, N, Valor);
    }
    
    return 0;
}
