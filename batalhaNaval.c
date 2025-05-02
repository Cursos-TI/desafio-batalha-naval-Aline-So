#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
     
    int linha[linhas];
    char coluna[colunas];
    int tabuleiro[linhas][colunas];
    int navioHorizontal[NAVIO];
    int navioVertical[NAVIO];
    int navioDiagonalPri[NAVIO];
    int navioDiagonalSec[NAVIO];
   
    #define linhas 10
    #define colunas 10
    #define NAVIO 3
    #define MAR 0
    
     printf("*** Bem Vindo ao Jogo 'BATALHA NAVAL' ***\n");
    
     for(int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++){
          tabuleiro[i][j] = MAR;
        }
     }
    
       int coordenadaX = 2;
       int coordenadaY = 3;
       
       for (int i = 0; i < NAVIO; i++) {
        navioHorizontal[i] = NAVIO;       
        tabuleiro[coordenadaX][coordenadaY] = navioHorizontal[i];
        coordenadaX++;
      }
       
  coordenadaX = 5;
  coordenadaY = 7;

  for (int j = 0; j < NAVIO; j++){
   navioVertical[j] = NAVIO;
   tabuleiro[coordenadaX][coordenadaY] = navioVertical[j];
   coordenadaX++;

  }

    int diagonalX = 1;

    for (int i = 0; i < NAVIO; i++){

   navioDiagonalPri[i]= NAVIO;
   tabuleiro[diagonalX][diagonalX] = navioDiagonalPri;
   diagonalX++;   
    }

    int diagonalSecX = 0;
    
    for (int i = 0; i < NAVIO; i++){
     navioDiagonalSec[i] = NAVIO;
     tabuleiro[diagonalSecX] [9 - diagonalSecX] = navioDiagonalSec[i];
     diagonalSecX++;

    }
    
    for (int i = 0; i < linhas; i++){
      linhas[i] = + 1;
    
    }

    for (int i = 0; < colunas; i++){
      colunas[i] = 'A' + 1;

    }
    
     printf ("\n");

     printf("**TABULEIRO BATALHA - NAVAL**\n");
     printf("  ");

     for(int i = 0; i < colunas; i++){
      printf("%c ", colunas[i]);

     }
     
      printf("\n");

      for ( int i = 0; i < linhas; i++){
       printf("%2d", linhas[i]);
       for (int j =0; j < colunas; j++){
        printf("%2d", tabuleiro[i][j]);
       }
      printf("\n;")
      }
     printf("\n");


    return 0;
}
