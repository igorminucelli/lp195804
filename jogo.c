/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Igor Aparecido Minucelli Pinto>>>
Linguagem   : C
Problema    : Jogo Sudoku
Data        : 22/06/2026
Objetivo    : Criar um jogo interativo de sudoku, onde o jogador tenta resolver a matriz preenchendo as lacunas, não repetindo os valores nas linhas, colunas e blocos.
Aprendizado : <<<Desenvolvemos o projeto usando a maioria ddos conceitos que aprendemos durante o curso, além do uso de arquivos>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
int sudoku[9][9];

int verificar(int num[9]){
    int ver[10] = {0};
    for(int i = 0; i < 9; i++){
        int valor = num[i];
        if(valor == 0){
            continue;
        }
        if(valor < 1 || valor > 9 || ver[valor]){
            return 0;
        }
        ver[valor] = 1;
    }
    return 1;
}
int validar(int matriz[9][9], int lin, int col){
    int blz = 1;
    int lin2[9];
    for(int j = 0; j < 9; j++){
        lin2[j] = matriz[lin][j];
    }
    if(!verificar(lin2)){
        blz = 0;
    }
    int col2[9];
    for(int k = 0; k < 9; k++){
        col2[k]= matriz[k][col];
    }
    if(!verificar(col2)){
        blz = 0;
    }
    if(lin <= 2 && col <= 2){
        int bloco[9], x = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                bloco[x++] = matriz[i][j];
            }
        }
        if(!verificar(bloco)){
            blz = 0;
        }
    }
    else if(lin <= 2 && col >= 3 && col <= 5){
        int bloco[9], x = 0;
        for(int i = 0; i < 3; i++){
            for(int k = 0; k < 3; k++){
                bloco[x++] = matriz[i][k + 3];
            }
        }
        if(!verificar(bloco)){
            blz = 0;
        }
    }
    else if(lin <= 2 && col >= 6 && col <= 8){
        int bloco[9], x = 0;
        for(int i = 0; i < 3; i++){
            for(int k = 0; k < 3; k++){
                bloco[x++] = matriz[i][k + 6];
            }
        }
        if(!verificar(bloco)){
            blz = 0;
        }
    }
    else if(lin > 2 && lin <= 5 && col <= 2){
        int bloco[9], x = 0;
        for(int i = 0; i < 3; i++){
            for(int k = 0; k < 3; k++){
                bloco[x++] = matriz[i + 3][k];
            }
        }
        if(!verificar(bloco)){
            blz = 0;
        }
    }
    else if(lin > 2 && lin <= 5 && col > 2 && col <= 5){
        int bloco[9], x = 0;
        for(int i = 0; i < 3; i++){
            for(int k = 0; k < 3; k++){
                bloco[x++] = matriz[i + 3][k + 3];
            }
        }
        if(!verificar(bloco)){
            blz = 0;
        }
    }
    else if(lin > 2 && lin <= 5 && col > 5 && col <= 8){
        int bloco[9], x = 0;
        for(int i = 0; i < 3; i++){
            for(int k = 0; k < 3; k++){
                bloco[x++] = matriz[i + 3][k + 6];
            }
        }
        if(!verificar(bloco)){
            blz = 0;
        }
    }
    else if(lin > 5 && lin <= 8 && col <= 2){
        int bloco[9], x = 0;
        for(int i = 0; i < 3; i++){
            for(int k = 0; k < 3; k++){
                bloco[x++] = matriz[i + 6][k];
            }
        }
        if(!verificar(bloco)){
            blz = 0;
        }
    }
    else if(lin > 5 && lin <= 8 && col >2 && col <= 5){
        int bloco[9], x = 0;
        for(int i = 0; i < 3; i++){
            for(int k = 0; k < 3; k++){
                bloco[x++] = matriz[i + 6][k + 3];
            }
        }
        if(!verificar(bloco)){
            blz = 0;
        }
    }
    else if(lin > 5 && lin <= 8 && col > 5 && col <= 8){
        int bloco[9], x = 0;
        for(int i = 0; i < 3; i++){
            for(int k = 0; k < 3; k++){
                bloco[x++] = matriz[i + 6][k + 6];
            }
        }
        if(!verificar(bloco)){
            blz = 0;
        }
    }
    return blz;
}

int main(int argc, char *argv[]){
    int x, linha, coluna, resul, blz = 0, correto = 0, valor;

    if(argc >= 2){
        FILE *arq = fopen(argv[1], "r");
        if(arq == NULL){
            printf("Erro ao tentar abrir o arquivo\n");
            return 1; 
        }
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                fscanf(arq, "%d", &sudoku[i][j]);
            }
        }
        fclose(arq);
    }
    else{
        printf("Digite o sudoku que deseja jogar: \n");
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                scanf("%d", &sudoku[i][j]);
            }
        }
    }
    printf("\nO objetivo do jogo é preencher as lacunas com valores, de modo que não se possa repetir nenhum valor na mesma linha, coluna ou bloco de 3x3, até que toda a grade esteja preenchida e respeite as regras.\n");
    
    while(blz == 0){
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(sudoku[i][j] == 0){
                    printf("_ ");
                }
                else{
                    printf("%d ", sudoku[i][j]);
                }   
                if( j == 2 || j == 5){
                    printf(" | ");
                }
            }
            printf("\n");
            if(i == 2 || i == 5){
                printf("________________________");
                printf("\n");
            }
        }
        printf("\n");

        printf("Escolha a linha e a coluna para a sua jogada\n");
        printf("Linha: ");
        scanf("%d", &linha);
        printf("Coluna: ");
        scanf("%d", &coluna);
        printf("Valor: ");
        scanf("%d", &valor);
        printf("\n");
        linha = linha- 1;
        coluna = coluna - 1;
        int valorantes = sudoku[linha][coluna];
        sudoku[linha][coluna] = valor;
        correto = validar(sudoku, linha, coluna);

        if(correto){
            for(int i = 0; i < 9; i++){
                int linh[9];
                for(int j = 0; j < 9; j++){
                    linh[j] = sudoku[i][j];
                }
                if(!verificar(linh)){
                    correto = 0;
                }
            }
            for(int l = 0; l < 9; l++){
                int colun[9];
                for(int c = 0; c < 9; c++){
                    colun[c] = sudoku[c][l];
                }
                if(!verificar(colun)){
                    correto = 0;
                }
            }
            for(int l = 0; l < 9; l = l + 3){
                for(int c = 0; c < 9; c = c + 3){
                    int bloco[9], x = 0;
                    for(int bloL = 0; bloL < 3; bloL++){
                        for(int bloC = 0; bloC  < 3; bloC++){
                            bloco[x++] = sudoku[l + bloL][c + bloC];
                        }
                    }
                    if(!verificar(bloco)){
                        correto = 0;
                    }
                }
            }
        }
        int sudC = 1;
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(sudoku[i][j] == 0){
                    sudC = 0;
                }
            }
        }
        if(sudC && correto){
            blz = 1;
        }
        else if(!correto){
            printf("Tente novamente \n");
            sudoku[linha][coluna] = valorantes;
        }
    }
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(sudoku[i][j] == 0){
                printf("_ ");
            }
            else{
                printf("%d ", sudoku[i][j]);
            }
            if(j == 2 || j == 5){
                printf("| ");
            }
        }
        printf("\n");
        if(i == 2 || i == 5){
            printf("________________________\n");
        }
    }
    printf("Parabéns você venceu!!!");
    return 0;
}
