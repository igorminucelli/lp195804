/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1169
Data        : 29/05/2026
Objetivo    : Trigo no tabuleiro.
Aprendizado : <<<Melhor entendiemnto de funções recursivas >>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include<stdio.h>
unsigned long long calcasas(int casas) {
	if(casas == 1) {
		return 1;
	}
	return 2 * calcasas(casas-1);
}
int main() {

	int N, X, i;
	if(scanf("%d",&N)!=1){
	    return 0;
	}
	while (N>0) {
	    scanf("%d",&X);
	    unsigned long long soma=0;
	    
		for(i=1; i<=X; i++) {
			soma=soma+calcasas(i);
		}
		printf("%llu kg\n",soma/12000);
		N--;
	}
	return 0;
}
