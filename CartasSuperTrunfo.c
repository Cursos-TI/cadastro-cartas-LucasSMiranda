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

  printf("Digite o estado: \n");
  scanf(" %[^\n]", estado);

  printf("Digite o código da carta: \n");
  scanf("%s", &cod);

  printf("Digite o nome da cidade: \n");
  scanf(" %[^\n]", cidade);

  printf("Digite a população: \n");
  scanf("%d", &populacao);

  printf("Digite a area: \n");
  scanf("%f", &area);

  printf("Digite o pib: \n");
  scanf("%f", &pib);

  printf("Digite o ponto turistico: \n");
  scanf("%d", &p_turis);



      // Área para exibição dos dados da cidade

      printf("Nome estado: %s \n", estado);

      return 0;
}