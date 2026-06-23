/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1031
Data        : 22/06/2026
Objetivo    : Ler uma quantidade de linhas e indicar o menor m para as regiões.
Aprendizado : <<< >>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include<stdio.h>
int main(){
    int N;
    while(scanf("%d", &N) && N != 0){
        for(int m = 1; ; m++){
            int posi = 0;
            for(int i = 2; i < N; i++){
                posi = (posi + m) % i;
            }
            if(posi == 11){
                printf("%d\n",m);
                break;
            }
        }
    }

    return 0;
}
