/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1175
Data        : 16/06/2026
Objetivo    : Preencher vetores, e trocar o ultimo com o primeiro.
Aprendizado : <<<Exerciatr vetores>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {

	int N[20], aux, opos;

	for(int i = 0; i < 20; i++) {
		scanf("%d",&N[i]);
	}
	for(int j = 0; j < 10; j++) {
	    opos = 19 - j;
		aux = N[j];
		N[j] = N[opos];
		N[opos] = aux;
	}
	for(int i = 0; i < 20; i++) {
		printf("N[%d] = %d\n",i, N[i]);
	}

	return 0;
}
