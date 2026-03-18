#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //carta1
  char estado1;
  char cod1[3];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int p_turis1;

  //carta2
  char estado2;
  char cod2[3];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int p_turis2;

  // Área para entrada de dados")

  //Cadastro carta 1:
  
  printf("Cadastro da carta 1  \n");
  printf("Digite o estado: \n");
  scanf(" %c", &estado1);

  printf("Digite o código da carta: \n");
  scanf("%s", &cod1);

  printf("Digite o nome da cidade: \n");
  scanf(" %[^\n]s", cidade1);

  printf("Digite a população: \n");
  scanf("%d", &populacao1);

  printf("Digite a area: \n");
  scanf("%f", &area1);

  printf("Digite o pib: \n");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turisticos: \n");
  scanf("%d", &p_turis1);

  //Cadastro carta 2:

  printf("Cadastro da carta 2  \n");
  printf("Digite o estado (A-H): \n");
  scanf(" %c", &estado2);

  printf("Digite o código da carta: \n");
  scanf("%s", &cod2);

  printf("Digite o nome da cidade: \n");
  scanf(" %[^\n]s", cidade2);

  printf("Digite a população: \n");
  scanf("%d", &populacao2);

  printf("Digite a area: \n");
  scanf("%f", &area2);

  printf("Digite o pib: \n");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turisticos: \n");
  scanf("%d", &p_turis2);



      // Área para exibição dos dados da cidade1
      printf("Carta 1:\n");
      printf("Nome estado: %c \n", estado1);
      printf("Código: %d \n", cod1);
      printf("Nome da cidade: %s \n", cidade1);
      printf("População %d \n", populacao1);
      printf("Área: %2.f km² \n", area1);
      printf("Pib: %2.f bilhões de Reais\n", pib1);
      printf("Número de pontos turísticos: %d \n", p_turis1);


      // Área para exibição dos dados da cidade2
      printf("Carta 2\n");
      printf("Nome estado: %c \n", estado2);
      printf("Código: %d \n", cod2);
      printf("Nome da cidade: %s \n", cidade2);
      printf("População %d \n", populacao2);
      printf("Área: %.2f km² \n", area2);
      printf("Pib: %.2f bilhões de Reais\n", pib2);
      printf("Número de pontos turísticos: %d \n", p_turis2);


      return 0;
}