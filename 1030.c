/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 18/06/2026
Objetivo    : Ler uma quantidade de casos, de pessoas e saltos e dizer qual pessoa sobreviveu.
Aprendizado : <<< >>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include<stdio.h>
int main(){
    int NC, k , n;
    if(scanf("%d",&NC)!= 1){
        return 0;
    }
    for(int i = 0; i < NC; i++){
        scanf("%d",&n);
        scanf("%d",&k);
        int vivo = 0;

        for(int j = 2; j <= n; j++){
            vivo = (vivo + k) % j;
        }
        printf("Case %d: %d\n", i + 1, vivo + 1);
    }
    return 0;
}
