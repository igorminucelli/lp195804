/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1241
Data        : 07/05/2026
Objetivo    : Encaixa ou não
Aprendizado : <<< Uso de string com números >>>
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main() {
    int N, i, j, tamanhoA, tamanhoB, pulo, encaixa;
    char A[1001], B[1001];
    
    if (scanf("%d", &N) != 1) return 0;
    
    for (i = 0; i < N; i++) {
        scanf("%s %s", A, B);
        
        tamanhoA = strlen(A);
        tamanhoB = strlen(B); 
        encaixa = 1;
        
        if (tamanhoB > tamanhoA) {
            encaixa = 0;
        } else {
            pulo = tamanhoA - tamanhoB;
            for (j = 0; j < tamanhoB; j++) {
                if (A[pulo + j] != B[j]) {
                    encaixa = 0;
                    break;
                }
            }
        }
        if (encaixa == 1) {
            printf("encaixa\n");
        } else {
            printf("nao encaixa\n");
        }
    }
    return 0;
}
