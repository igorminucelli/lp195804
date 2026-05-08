/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 07/05/2026
Objetivo    : Criptografia
Aprendizado : <<< Uso da biblioteca string.h >>>
-------------------------------------------------------------------------- */
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int i,posi,N,tamanho,j,metade,k,l;
    char X[10000],Y[10000];
    
    scanf("%d",&N);
    
    if(N>10000||N<1){
        return 0;
    }
     for(l=0; l < N; l++){
        scanf(" %[^\n]", X);
        
        for(i=0;X[i]!='\0';i++){
            posi=3;
            if(isupper(X[i])){
                X[i]=X[i]+posi;
            }
            if(islower(X[i])){
                X[i]=X[i]+posi;
            }
        
        }
        
        tamanho=strlen(X);
        j=tamanho-1;
        for(i=0;i<tamanho;i++){
            Y[i]=X[j];
            j--;
        }
        Y[tamanho] = '\0';
        metade=strlen(Y);
        k=(metade/2);
        for(i=0;i<tamanho;i++){
            if(i>=k){
                Y[i]=Y[i]-1;
            }
        }
        printf("%s\n",Y);
    }

    return 0;
}
