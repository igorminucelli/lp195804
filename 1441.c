/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1441
Data        : 22/06/2026
Objetivo    : Ler casos de testes e imprimir o maior inteiro na sequência de Granizo.
Aprendizado : <<<Exercitar uso de funções recursivas>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include<stdio.h>
int grani(int H) {
	int maior = H;
	while(H != 1) {
		if(H % 2 == 0) {
			H = H/2;
		}
		else {
			H = (H*3) + 1;
		}
		if(H > maior ) {
			maior = H;
		}
	}
	return maior;
}
int main() {
	int H, inteiro;
	while(scanf("%d",&H) && H != 0) {
		inteiro = grani(H);
		printf("%d\n", inteiro);
	}
	return 0;
}
