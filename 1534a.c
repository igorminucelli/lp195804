/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 13/05/2026
Objetivo    : Matriz 123
Aprendizado : <<< Uso de matriz >>>
-------------------------------------------------------------------------- */
#include <stdio.h>
int main(){
    int i,j,N;
    
    while(scanf("%d",&N)!=EOF){
        if(N<3 || N>70){
            return 0;
        }
        int matriz[N][N];
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                if(i+j==N-1){
                    matriz[i][j]=2;
                }
                else if(i==j){
                    matriz[i][j]=1;
                }
                else{
                    matriz[i][j]=3;
                }
            }
        }
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
               printf("%d",matriz[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
