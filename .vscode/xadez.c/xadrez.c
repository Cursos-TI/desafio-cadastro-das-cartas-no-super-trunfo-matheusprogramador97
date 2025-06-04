#include <stdio.h>

void moverTorre(int casa) {
  if(casa > 0) {
    printf("DIREITA\n");       //MOVIMENTO DA TORRE (SENTIDO Á DIREITA)
    moverTorre (casa - 1);
  }
}
 
void moverBispo (int casa) {
  if(casa > 0){
    printf("CIMA E DIREITA\n");   // MOVIMENTO DO BISPO (SENTIDO CIMA E DIREITA)
    moverBispo (casa - 1);
  }
}

void moverRainha (int casa){
  if (casa > 0){
    printf("ESQUERDA\n");       // MOVIMENTO DA RAINHA (SENTIDO Á ESQUERDA)
    moverRainha( casa - 1);
  }
}

int main ()  {

  printf("MOVIMENTO DO CAVALO\n");        //QUANTIDADE DE MOVIMENTO DO CAVALO (3)

  for (int c = 0; c < 1; c++)
  { 
    printf("DIREITA\n");                   //MOVIMENTO DO CAVALO (1ª SENTIDO Á DIREITA)
   {
   for (int d = 0; d < 2; d++)
   {
   printf("CIMA\n");                        // MOVIMENTO DO CAVALO (2ª SENTIDO PARA CIMA )
       }
    }
  }
  
  printf("\n");

  printf("MOVIMENTO DA TORRE\n");
  moverTorre (5);                   //QUANTIDADE DE MOVIMENTO DA TORRE (5 SENTIDO Á DIREITA)
  printf("\n");
  printf("MOVIMENTO DO BISPO\n");
  moverBispo (8);                  //QUANTIDADE DE MOVIMENTO DO BISPO (8 SENTIDO PARA CIMA É DIREITA)
  printf("\n");
  printf("MOVIMENTO DA RAINHA\n");
  moverRainha (8);                 //QUNATIDADE DE MOVIMENTO DA RAINHA (8 SENTIDO Á ESQUERDA)

  return 0;
}