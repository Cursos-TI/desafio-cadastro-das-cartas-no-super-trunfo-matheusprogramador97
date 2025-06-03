#include <stdio.h>

int main () {
 
    int opcao;
    char carta1;          
    char estado_01[50];
    char nomeCidade_01[50];
    char codigo_01[10];
    float area_01 = 1.523;
    float pib_01 = 35.711;
    int pontoTuristicos_01 = 40;
    int populacao_01 = 11450550;
    float densidade_1 = populacao_01 / area_01;
    float pib_per_capita_1 = pib_01 / populacao_01;

    char carta2;
    char estado_2[50];
    char nomeCidade_2[50];
    char codigo_2[10];
    float area_2  = 1.200;
    float pib_2 = 359.64;
    int pontoTuristicos_2 = 50;
    int populacao_2 = 6211630;
    float densidade_2 = populacao_2 / area_2;
    float pib_per_capita_2 = pib_2  / populacao_2;


    printf("1.area");
    printf("\n");
    printf("2.pib");
    printf("\n");
    printf("3.populaçao");
    printf("\n");
    printf("4.pontos turisticos");
    printf("\n");
    printf("5.desidade demografica");
    printf("\n");
    printf("6.pib per capita");
    printf("\n");
    scanf("%d", &opcao);
    printf("\n");

   switch (opcao)
   {
   case 1:
   printf("carta 1: %f ",area_01);
   printf("\n");
   printf("carta 2: %f ",area_2);
   printf("\n");
   if (area_01 > area_2) {

      printf(" carta 1 venceu!! cidade de sao paulo \n");
   
   } else if(area_2 > area_01) {

      printf("carta 2 venceu!! cidade do rio de janeiro \n");
   }
  
      break;

   case 2:

   printf("carta 1: %f",pib_01);
   printf("\n");
   printf("carta 2: %f",pib_2);
   printf("\n");
  
   if(pib_01 > pib_2){

      printf("carta 1 venceu ! \n");
   
   }else if(pib_2 > pib_01){

      printf("carta 2 venceu!! cidade do rio de janeiro \n ");
   }

   break;

   case 3:
   printf("carta 1: %d",populacao_01);
   printf("\n");
   printf("carta 2: %d",populacao_2);
   printf("\n");

   if(populacao_01 > populacao_2){

      printf("carta 1 venceu!! cidade de sao paulo \n");
   
   }else if (populacao_2 > populacao_01){

      printf("a carta 2 venceu !! cidade do rio de janeiro \n");
   
   }

   break;

   case 4:
   printf("carta 1: %d",pontoTuristicos_01);
   printf("\n");
   printf("carta 2: %d",pontoTuristicos_2);
   printf("\n");

   if(pontoTuristicos_01 > pontoTuristicos_2){

      printf("a carta 1 venceu!! cidade de sao paulo \n");

   }else if(pontoTuristicos_2 > pontoTuristicos_01){

      printf("a carta 2 venceu!! cidade do rio de janeiro \n");
   
   }
   

   break;
   
   case 5:
   printf("carta 1: %f",densidade_1);
   printf("\n");
   printf("carta 2: %f",densidade_2);
   printf("\n");

   if(densidade_1 > densidade_2){

      printf("a carta 1 venceu!!! cidade de sao paulo");
      printf("\n");
   
   }else if(densidade_2 > densidade_1){

      printf("a carta 2 venceu!!! cidade do rio de janeiro");
      printf("\n");
   
   }

   break;

   case 6:
   printf("carta 1: %f",pib_per_capita_1);
   printf("\n");
   printf("carta 2: %f",pib_per_capita_2);
   printf("\n");

   if(pib_per_capita_1 > pib_per_capita_2){

      printf("a carta 1 venceu!!! cidade de sao paulo");
      printf("\n");
   
   }else if(densidade_2 > densidade_1){

      printf("a carta 2 venceu!!! cidade do rio de janeiro");
      printf("\n");
   }

   default:

   printf("opçao invalida");
   printf("\n");

  break;
   }
   return 0;
}