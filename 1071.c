/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 21/04/2026
Objetivo    : Soma de impares consecutivos
Aprendizado : <<< Uso do For >>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int X,Y,menor,maior,Soma=0;
    
    scanf("%d %d",&X,&Y);
    
    if(X < Y){
        menor = X;
        maior = Y;
    }
    else{
        menor = Y;
        maior = X;
    }
    
    int i;
    for(i = menor+1; i < maior; i++){
        if( i % 2 != 0){
            Soma = Soma+i;
        }
    }
    printf("%d\n",Soma);
    return 0;
}
