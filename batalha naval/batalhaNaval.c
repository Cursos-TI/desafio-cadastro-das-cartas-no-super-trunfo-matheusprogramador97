#include <stdio.h>

// exibir o tabuleiro
void mostrarTabuleiro(int tabuleiro[10][10]) {
    char colunas[] = {'A','B','C','D','E','F','G','H','I','J'};  // COMANDO DA COLUNA (A até J)
 int i, j;
    
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf(" %c ", colunas[j]);
    }
    printf("\n");

    int linha[] = {1,2,3,4,5,6,7,8,9,10};          // COMANDO DA LINHA (1 até 10)                                        

    for (int i = 0; i < 10; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com água (0)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // POSICIONAMENTO DO NAVIO (POSIÇAO HORIZONTAL)
                 // O NAVIO REPRESENTA O NUMERO 3

    tabuleiro[0][0] = 3;  
    tabuleiro[0][1] = 3;  
    tabuleiro[0][2] = 3;  

    //POSICIONAMENTO DO NAVIO (POSIÇAO VERTICAL)
         // O NAVIO REPRESENTA O NUMERO 3

    tabuleiro[2][0] = 3;
    tabuleiro[3][0] = 3;
    tabuleiro[4][0] = 3;

    //POSICIONAMENTO DO NAVIO PRIMARIO (DIAGONAL)
           // O NAVIO REPRESENTA O NUMERO 2

    tabuleiro[2][2] = 2;
    tabuleiro[3][3] = 2;
    tabuleiro [4][4] = 2;

    //POSICIONAMENTO DO NAVIO SEGUNDARIO (DIAGONAL)
              // O NAVIO REPRESENTA O NUMERO 2

    tabuleiro[3][5] = 2;
    tabuleiro[2][6] = 2;
    tabuleiro [1][7]= 2;      

    // POSICIONAMENTO DO NAVIO FORMATO CONE (TRIANGULO)
           // O NAVIO REPRESENTA O NUMERO 7

    tabuleiro [7][2] = 7;
    
    // LINHA 8 COLUNA 1 ATÉ 3
for (int j = 1; j<= 3; j++)
{
    tabuleiro [8][j] = 7;
}
     // LINHA 9 COLUNA 0 ATÉ 4
for (int j = 0; j <= 4; j++)
{
    tabuleiro [9][j] = 7;
} 

   // POSICIONAMENTO DO NAVIO FORMATO (CRUZ) 
         // O NAVIO REPRESENTA O NUMERO 4

      // LINHA 8 COLUNA 5 ATÉ 9 
for(int j = 5; j <= 9; j++)
{
tabuleiro [7][j] = 4;
}
   tabuleiro [6][7] = 4;
   tabuleiro [8][7] = 4;

   // POSICIONAMENTO DO NAVIO FORMATO (octaedro)
         // O NAVIO REPRESENTA O NUMERO 5

   tabuleiro [3][8] = 5;

      // LINHA  4 COLUNA 7 ATÉ 9
   for(int j = 7; j <= 9; j++)
   {
       tabuleiro [4][j] = 5;
   }

   tabuleiro [5][8] = 5;
                                                                    
    // Exibe o tabuleiro                                        
    mostrarTabuleiro(tabuleiro);

    printf("REPRESENTAÇAO DOS NUMEROS REPECTIVOS NAVIOS ");
    printf("\n");

    printf("POSICIONAMENTO DO NAVIO HORIZONTAL REPRESENTADO NUMERO 3");
    printf("\n");

    printf("POSICIONAMENTO DO NAVIO VERTICAL REPRESENTADO NUMERO 3");
    printf("\n");

    printf("POSICIONAMENTO DO NAVIO DIAGONAL PRIMARIA É SEGUNDARIA REPRESENTADO NUMERO 2");
    printf("\n");

    printf("POSICIONAMENTO DO NAVIO CONE REPRESENTADO NUMERO 7");
    printf("\n");

    printf("POSICIONAMENTO DO NAVIO CRUZ REPRESENTADO NUMERO 4");
    printf("\n");
    
    printf("POSICIONAMENTO DO NAVIO OCTAEDRO REPRESENTADO NUMERO 5");
    printf("\n");

    return 0;
}