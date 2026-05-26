/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1168
Data        : 19/05/2026
Objetivo    : Quantidade de Leds 
Aprendizado : <<< Uso de de switch >>>
-------------------------------------------------------------------------- */
#include <stdio.h>
 
int main() {
    char X[1000];
    int i,j,N,soma=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%s",X);
        for(j=0;X[j]!='\0';j++){
            switch(X[j]){
                case '0':
                case '6':
                case '9':
                    soma=soma+6;
                    break;
                case '1':
                    soma=soma+2;
                    break;
                case '2':
                case '3':
                case '5':
                    soma=soma+5;
                    break;
                case '4':
                    soma=soma+4;
                    break;
                case '7':
                    soma=soma+3;
                    break;
                case '8':
                    soma=soma+7;
                    break;
            }
        }
        printf("%d leds\n",soma);
        soma=0;
    }
 
   
 
    return 0;
}
