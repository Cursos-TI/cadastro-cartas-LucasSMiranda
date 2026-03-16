#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[50], cod[50], cidade[50];
  int populacao;
  float area, pib;
  int p_turis;

  // Área para entrada de dados")

  printf("Digite o estado: \n");
  scanf("%s", &estado);

  printf("Digite o código da carta: \n");
  scanf("%s", &cod);

  printf("Digite o nome da cidade: \n");
  scanf("%s", &cidade);

  printf("Digite a população: \n");
  scanf(%d", &populacao);

  printf("Digite a area: \n");
  scanf("%f", &area);

  printf("Digite o pib, \n");
  scanf("%f", &pib);

  printf(Digite o ponto turistico: \n);
  scanf("%d", &p_turis);



      // Área para exibição dos dados da cidade

      printf("Nome estado: %s \n", estado);

      return 0;
}