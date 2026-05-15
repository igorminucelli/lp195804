/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1015
Data        : 14/05/2026
Objetivo    : Matriz 123
Aprendizado : <<< Uso de funções >>>
-------------------------------------------------------------------------- */
#include<stdio.h>
#include<math.h>
float funcao(float *x1,float *y1,float *x2,float *y2){
    float dist1=*x2-*x1;
    float dist2=*y2-*y1;
    return sqrt(pow(dist1,2)+pow(dist2,2));
}
int main(){
    float x1,x2,y1,y2,distancia;
    scanf("%f %f",&x1,&y1);
    scanf("%f %f",&x2,&y2);
    distancia=funcao(&x1,&y1,&x2,&y2);
    printf("%.4f\n",distancia);
    
    return 0;
}
