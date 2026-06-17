/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1179
Data        : 16/06/2026
Objetivo    : Preencher vetores, verificando se é impar ou par.
Aprendizado : <<<Exerciatr vetores>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
int main() {

	int X[15], par[5], impar[5], l = 0, n = 0;

	for(int i = 0; i < 15; i++) {
		scanf("%d",&X[i]);
		if(X[i] % 2 == 0) {
			par[l] = X[i];
			l = l+1;
			if(l == 5) {
				for(int m = 0; m < 5; m++) {
					printf("par[%d] = %d\n",m, par[m]);
				}
				l = 0;
			}
		}
		if(X[i] % 2 != 0) {
			impar[n] = X[i];
			n = n+1;
			if(n == 5) {
				for(int z = 0; z < 5; z++){
					printf("impar[%d] = %d\n",z, impar[z]);
				}
			    n = 0;
			}
		}
	}
	for(int j = 0; j < n; j++) {
		printf("impar[%d] = %d\n", j, impar[j]);
	}
	for(int j = 0; j < l; j++) {
		printf("par[%d] = %d\n", j, par[j]);
	}

	return 0;
}
