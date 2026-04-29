/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1003
Data        : 09/04/2026
Objetivo    : Fazer somas simples
Aprendizado : <<< Fazer Somas em C >>>
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,MaiorAB,MaiorFinal;
    
    scanf("%d %d %d",&a,&b,&c);
    
    MaiorAB=(a+b+abs(a-b))/2;
    
    MaiorFinal=(MaiorAB+c+abs(MaiorAB-c))/2;
    
printf("%d eh o maior\n",MaiorFinal);

    return 0;
}
