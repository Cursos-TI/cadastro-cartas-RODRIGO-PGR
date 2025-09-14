#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para primeira carta
  char estado1;
  char codigo1[4];
  char cidade1[20];
  int populacao1;
  float area1;
  float pib1;
  int pontosturisticos1;

  // Área para definiçao das variáveis da segunda carta
  char estado2;
  char codigo2[4];
  char cidade2[20];
  int populacao2;
  float area2;
  float pib2;
  int pontosturisticos2;

  // Área para entrada de dados primeira carta 
  printf ("DESAFIO SUPER TRUNFO DE PAISES \n");
  printf ("==cadastro da carta 1 ==\n");
  printf ("estado (A-H): ");
  scanf (" %c", &estado1);

  printf ("codigo da carta (ex:A01): ");
  scanf ("%s", codigo1);

  printf ("nome da cidade: ");
  scanf (" %[^\n]", cidade1);

  printf ("populacao: ");
  scanf ("%d", &populacao1);

  printf ("area(km²): ");
  scanf ("%f", &area1);

  printf ("pib: ");
  scanf ("%f", &pib1);
   
  printf ("numero de pontos turisticos: ");
  scanf ("%d", &pontosturisticos1);

  //Área para entrada de dados da segunda carta
  printf ("DESAFIO SUPER TRUNFO DE PAISES \n");
  printf ("\n==cadastro da carta 2 ==\n");
  printf ("estado (A-H): ");
  scanf (" %c", &estado2);

  printf ("codigo da carta (ex:B02): ");
  scanf ("%s", codigo2);

  printf ("nome da cidade:");
  scanf (" %[^\n]", cidade2);

  printf ("populacao: ");
  scanf ("%d", &populacao2);

  printf ("area (km²) ");
  scanf ("%f", &area2);
   
  printf ("pib: ");
  scanf ("%f", &pib2);

  printf("numero de pontos turisticos: ");
  scanf ("%d", &pontosturisticos2);

  // Área para exibição dos dados da cidade
  printf ("\n-------------------\n");
  printf ("== carta 1 ==\n");
  printf ("estado: %c\n", estado1);
  printf ("codigo: %s\n", codigo1);
  printf ("cidade: %s\n", cidade1);
  printf ("populacao: %d\n", populacao1);
  printf ("area: %.2f km²\n", area1);
  printf ("pib: %.2f\n", pib1);
  printf ("pontos turisticos: %d\n", pontosturisticos1);

  printf("\n----------------\n");
  printf ("== carta 2 ==\n");
  printf ("estado: %c\n", estado2);
  printf ("codigo: %s\n", codigo2);
  printf ("cidade: %s\n", cidade2);
  printf ("populacao: %d\n", populacao2);
  printf ("area: %.2f km²\n",area2);
  printf ("pib: %.2f\n", pib2);
  printf ("pontos turisticos: %d\n", pontosturisticos2);

return 0;
} 
