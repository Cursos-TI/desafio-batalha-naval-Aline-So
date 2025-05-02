#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
     
    int linhas[10];
    char colunas[10];
    int tabuleiro[10][10];
    int navioHorizontal[3];
    int navioVertical[NAVIO];
    int navioDiagonalPri[NAVIO];
    int navioDiagonalSec[NAVIO];
   
    #define linha 10
    #define coluna 10
    #define NAVIO 3
    #define MAR 0
    
     printf("*** Bem Vindo ao Jogo 'BATALHA NAVAL' ***\n");
    
     for(int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++){
          tabuleiro[i][j] = 0;
        }
     }
    
       int coordenadaX = 2;
       int coordenadaY = 3;
       
       for (int i = 0; i < 3; i++) {
        navioHorizontal[i] = 3;       
        tabuleiro[2][3] = navioHorizontal[i];
        2++;
      }
       
  coordenadaX = 5;
  coordenadaY = 7;

  for (int j = 0; j < 3; j++){
   navioVertical[j] = 3;
   tabuleiro[5][7] = navioVertical[j];
   5++;

  }

    int diagonalX = 1;

    for (int i = 0; i < 3; i++){

   navioDiagonalPri[i]= 3;
   tabuleiro[1][1] = navioDiagonalPri;
   1++;   
    }

    int diagonalSecX = 0;
    
    for (int i = 0; i < 3; i++){
     navioDiagonalSec[i] = 3;
     tabuleiro[0] [9 - 0] = navioDiagonalSec[i];
     0++;

    }
    
    for (int i = 0; i < linhas; i++){
      linha[i] = + 1;
    
    }

    for (int i = 0; < colunas; i++){
      coluna[i] = 'A' + 1;

    }
    
     printf ("\n");

     printf("**TABULEIRO BATALHA - NAVAL**\n");
     printf("  ");

     for(int i = 0; i < 10; i++){
      printf("%c ", coluna [i]);

     }
     
      printf("\n");

      for ( int i = 0; i < 10; i++){
       printf("%2d", linha[i]);
       for (int j =0; j < colunas; j++){
        printf("%2d", tabuleiro[i][j]);
       }
      printf("\n;")
      
     printf("\n");


    return 0;
}
