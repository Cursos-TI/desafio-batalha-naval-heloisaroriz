#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Nível Novato - Posicionamento dos Navios

int main() {

//Define o tamanho do tabuleiro
    int tabuleiro[10] [10]; 
// Inicializar o tabuleiro com 0 (água)
     for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }
//Define o valor 3 aos navios    
    int navioh[3] = {3,3,3}; 
    int naviov[3] = {3,3,3};

// Tamanho dos navios fixo
int tamanhonavio = 3;

 // Coordenadas iniciais dos navios
 int linhahorizontal = 0;
 int colunahorizontal = 4;
 int linhavertical = 2;
 int colunavertical = 7;

 //Verificando posições

    if (linhahorizontal + tamanhonavio <= 10 && linhavertical + tamanhonavio <= 10){
           for (int i = 0; i < tamanhonavio; i++){
            tabuleiro[linhahorizontal][colunahorizontal + i] = navioh[i];
           }
           for (int i = 0; i < tamanhonavio; i++){
            if(tabuleiro[linhavertical + i][colunavertical] != 0) {
               printf("Erro: Navios se sobrepoem!\n");
               return 1;
           }
           tabuleiro[linhavertical + i][colunavertical] = naviov[i];
    }

    } else {
        printf("Coordenada incompatível com o tabuleiro\n");
        return 1;
    }

    printf("\nTabuleiro de Batalha Naval\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
