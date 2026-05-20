/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1017
Data        : 19/05/2026
Objetivo    : Gasto de Combustível
Aprendizado : <<< Exercitar uso de funções >>>
-------------------------------------------------------------------------- */
#include<stdio.h>
float calcularLitros(int tempo,int velocidade){
    return (velocidade*tempo)/12.0;
}
int main(){
    int tempo,velocidade;
    float litros,distancia;
    scanf("%d",&tempo);
    scanf("%d",&velocidade);
    distancia=calcularLitros(tempo,velocidade);
    printf("%.3f\n",distancia);
    
    return 0;
}
