/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1253
Data        : 29/04/2026
Objetivo    : Fazer o processo inverso da cifra de César
Aprendizado : <<< Uso de String >>>
-------------------------------------------------------------------------- */
#include<stdio.h>
int main(){
    char palavra[100];
    int casos,posi,i,f;
    
    scanf("%d",&casos);
    for(i=0;i<casos;i++){
        scanf("%s",palavra);
        scanf("%d",&posi);
        f=0;
        while(palavra[f]!='\0'){
            palavra[f]=palavra[f]-posi;
            
            if(palavra[f]<'A'){
                palavra[f]=palavra[f]+26;
            }
            f++;
        }
        printf("%s\n",palavra);
    }
    return 0;
}
