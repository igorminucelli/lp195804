/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 13/05/2026
Objetivo    : Matriz 123
Aprendizado : <<< Uso de matriz >>>
-------------------------------------------------------------------------- */
#include<stdio.h>
int main(){
    int N,i,j;
   
    while(scanf("%d",&N)!=EOF){
        
        if(N<3 || N>70){
        return 0;
        }
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                if(i+j==N-1){
                    printf("2");
                }
                else if(i==j){
                    printf("1");
                }
                else{
                    printf("3");
                }
            }
        printf("\n");
        }
    }
    return 0;
}
