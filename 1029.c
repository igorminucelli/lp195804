/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1029
Data        : 26/05/2026
Objetivo    : Usar a função fibonacci e contar quantas vezes ela é usada na recursividade.
Aprendizado : <<<Uso de recursividade>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
int num_calls = 0;
int fibonacci(int n){
    num_calls = num_calls +1;
    
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(){
    int N, X, result, i; 
    scanf("%d",&N);
    for(i = 0; i < N; i++){
        scanf("%d",&X);
        num_calls = 0;
        result = fibonacci(X);
        
        printf("fib(%d) = %d calls = %d\n", X, num_calls - 1, result);
    }
    
    return 0;
}
