#include <stdio.h>

// desafio super trunfo  - Matheus 
//tema 1 nivel (novato)
// Definindo a estrutura Cidade


int main() {
  char estado_01[50];
  char nomeCidade_01[50];
  char codigo_01[10];
  float area_01;
  float pib_01;
  float densidade_1;
  float pib_per_capita_1;
  float superPoder_1;
  int pontoTuristicos_01,populacao_01;
  int opcao;


    // Lendo os dados da cidade_
    printf("Digite o estado 'EXEMPLO A a H':");
    scanf("%s",estado_01);
    printf("\n");

    printf("Digite o codigo da cidade 'EXEMPLO A01,B02':");
    scanf("%s",codigo_01);
    printf("\n");

    printf("Digite o nome da cidade:");
    scanf("%s",nomeCidade_01);
    printf("\n");

    printf("Digite a populaçao da cidade:");
    scanf("%d",&populacao_01);
    printf("\n");

    printf("Digite a area da cidade:");
    scanf("%f",&area_01);
    printf("\n");

    printf("Digite o PIB da cidade:");
    scanf("%f",&pib_01);
    printf("\n");

    printf("Digite o numero de pontos turisticos da cidade:");
    scanf("%d",&pontoTuristicos_01);
    printf("\n");

    // tema 1 nivel (MESTRE) CARTA 01

    superPoder_1 = pontoTuristicos_01 + area_01 + pib_per_capita_1 + pontoTuristicos_01 + densidade_1 + pib_per_capita_1;

    printf("\n");

  // tema 1----------NIVEL (aventureiro)

    //cálculo da densidade populaciona carta 1
    
    densidade_1 = populacao_01 / area_01;

    // calculo de PIB per Capita da carta 1

    pib_per_capita_1 = pib_01 / populacao_01;

  //CALCULANDO O SUPER PODER DA CARTA 1 -------------NIVEL (MESTRE)

    superPoder_1 = pontoTuristicos_01 + area_01 + pib_per_capita_1 + pontoTuristicos_01 + densidade_1 + pib_per_capita_1;

  // COMPARAÇAO DA CARTA 1

  printf("comparaçao da carta 1:\n");

  printf("\n");

  printf("Se o resultado for 1, quem vence carta 1, Se for resultado 0, quem vence carta 2");
  printf("\n");

     // Imprimindo os dados da cidade 1
  printf("Dados da Cidade:");
  printf("\n");
  printf("estado:%s",estado_01);
    printf("\n");
  printf("codigo:%s",codigo_01);
    printf("\n");
  printf("nome da cidade:%s",nomeCidade_01); 
    printf("\n");
  printf("populacao: %d",populacao_01);
    printf("\n");
  printf("area: %.2f km2",area_01);
    printf("\n");
  printf("pIB: %.2f bilhoes",pib_01);
    printf("\n");
  printf("pontos Turisticos: %d",pontoTuristicos_01);
    printf("\n");
  printf("Densidade Populacional: %.2f",densidade_1);
    printf("\n");
  printf(" PIB per Capita: %.2f", pib_per_capita_1);
    printf("\n");
  printf("superPoder_1: %.2f",pontoTuristicos_01 + area_01 + pib_per_capita_1 + pontoTuristicos_01 + densidade_1 + pib_per_capita_1);
    printf("\n");
  

  // DADOS DA SEGUNDA CARTA 

    char estado_2[50];
    char nomeCidade_2[50];
    char codigo_2[10];
    float area_2;
    float pib_2;
    float densidade_2;
    float pib_per_capita_2;
    float superPoder_2;
    int pontoTuristicos_2,populacao_2;

  printf("Digite o estado 'EXEMPLO A a H'");
  scanf("%s",estado_2);
  printf("\n");

  printf("Digite o codigo da cidade 'EXEMPLO A01,B02':");
  scanf("%s",codigo_2);
  printf("\n");

  printf("Digite o nome da cidade:");
  scanf("%s",nomeCidade_2);
  printf("\n");

  printf("Digite a populaçao da cidade:");
  scanf("%d",&populacao_2);
  printf("\n");

  printf("Digite a area da cidade:");
  scanf("%f",&area_2);
  printf("\n");

  printf("Digite o PIB da cidade:");
  scanf("%f",&pib_2);
  printf("\n");

  printf("Digite o numero de pontos turisticos da cidade:");
  scanf("%d",&pontoTuristicos_2);
  printf("\n");


 // cálculo da densidade populaciona carta 2

 densidade_2 = populacao_2 / area_2;

 // calculo de PIB per Capita da carta 1

    pib_per_capita_2 = pib_2 / populacao_2;

    // CALCULANDO O SUPER PODER CARTA 2

  superPoder_2 = pontoTuristicos_2 + area_2 + pib_per_capita_2 + pontoTuristicos_2 + densidade_2 + pib_per_capita_2;
 
    printf("\n");

   // Imprimindo os dados da cidade 2
   
  printf("Dados da Cidade 2:");
    printf("\n");

  printf("estado:%s",estado_2);
    printf("\n");

  printf("codigo:%s",codigo_2);
    printf("\n");

  printf("nome da cidade:%s",nomeCidade_2); 
    printf("\n");

  printf("populacao: %d",populacao_2);
    printf("\n");

  printf("area: %.2f km2",area_2);
    printf("\n");

  printf("pIB: %.2f bilhoes",pib_2);  
    printf("\n");

  printf("pontos turisticos: %d",pontoTuristicos_2);
    printf("\n");

  printf("Densidade Populacional: %.2f",densidade_2);
    printf("\n");

  printf(" PIB per Capita: %.2f", pib_per_capita_2);
    printf("\n");

  printf("superPoder_2: %.2f",pontoTuristicos_2 + area_2 + pib_per_capita_2 + pontoTuristicos_2 + densidade_2 + pib_per_capita_2);
  printf("\n");
  
  // COMPARAÇAO DA CARTA 1 E CARTA 2

   printf("comparaçao da carta 1 E carta2:\n");

   printf("\n");
 
   printf("Se o resultado for 1, quem vence carta 1, Se for resultado 0, quem vence carta 2");
   printf("\n");

   printf("populaçao:%d",pontoTuristicos_01 > pontoTuristicos_2);
     printf("\n");

   printf("Area: %d", area_01 > area_2);
     printf("\n");

   printf("Pib: %d", pib_per_capita_1 > pib_per_capita_2);
    printf("\n");

   printf("Ponto Turistico: %d", pontoTuristicos_01 > pontoTuristicos_2);
     printf("\n");

   printf("densidade populacional: %d", densidade_1 < densidade_2);
     printf("\n");

   printf("pib per capita: %d", pib_per_capita_1 > pib_per_capita_2);
     printf("\n");
     
   printf("super poder: %d", superPoder_1 > superPoder_2);
    printf("\n");

  // TEMA 2 SELECIONE A OPÇAO NO MENU

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
    scanf("%d",&opcao);
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
   printf("carta 1: %d",pib_per_capita_1);
   printf("\n");
   printf("carta 2: %d",pib_per_capita_2);
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
