/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1234
Data        : 29/04/2026
Objetivo    : Sentença Dançante
Aprendizado : <<< Uso de String >>>
-------------------------------------------------------------------------- */
#include<stdio.h>
#include<ctype.h>
int main(){
    char palavra[51];
    
    while(fgets(palavra,51,stdin)){
        int i=0, maiuscula=1;
        
        while(palavra[i]!='\0'){
            if(isalpha(palavra[i])){
                
                if(maiuscula==1){
                    palavra[i]=toupper(palavra[i]);
                    maiuscula=0;
                }
                else{
                    palavra[i]=tolower(palavra[i]);
                    maiuscula=1;
                }
            }
        i++;
        }
    printf("%s",palavra);
    }
    
    return 0;

}
