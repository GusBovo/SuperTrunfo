#include <stdio.h>

#define CLEAR_INPUT_BUFFER() scanf("%*[^\n]"); getchar()

int main()
{

  // --- Declaração de variáveis da Carta 1 ---
  char estado, codigo_carta[3], nome_cidade[30];
  int populacao, num_pts_turisticos;
  float area, pib, den_pop, pib_pc;

  // --- Declaração de variáveis da Carta 2 ---
  char estado2, codigo_carta2[3], nome_cidade2[30];
  int populacao2, num_pts_turisticos2;
  float area2, pib2, den_pop2, pib_pc2;

  // --- Entrada de dados para a Carta 1 ---
  printf("Adicione as informações da Carta 1:\n");

  printf("Estado: ");
  scanf("%c", &estado);
  CLEAR_INPUT_BUFFER();

  printf("Código da Carta (2 letras): ");
  scanf("%2s", codigo_carta);
  CLEAR_INPUT_BUFFER();

  printf("Nome da Cidade: ");
  scanf("%[^\n]", nome_cidade);
  CLEAR_INPUT_BUFFER();

  printf("População: ");
  scanf("%d", &populacao);
  CLEAR_INPUT_BUFFER();

  printf("Área (km²): ");
  scanf("%f", &area);
  CLEAR_INPUT_BUFFER();

  printf("PIB (em bilhões): ");
  scanf("%f", &pib);
  CLEAR_INPUT_BUFFER();

  printf("Número de Pontos Turísticos: ");
  scanf("%d", &num_pts_turisticos);
  CLEAR_INPUT_BUFFER();

  // --- Cálculo da densidade populacional e PIB per capita para Carta 1 ---
  den_pop = populacao / area;
  pib_pc = (pib * 1000000000) / populacao;

  // --- Entrada de dados para a Carta 2 ---
  printf("\nAdicione as informações da Carta 2:\n");

  printf("Estado: ");
  scanf("%c", &estado2);
  CLEAR_INPUT_BUFFER();

  printf("Código da Carta (2 letras): ");
  scanf("%2s", codigo_carta2);
  CLEAR_INPUT_BUFFER();

  printf("Nome da Cidade: ");
  scanf("%[^\n]", nome_cidade2);
  CLEAR_INPUT_BUFFER();

  printf("População: ");
  scanf("%d", &populacao2);
  CLEAR_INPUT_BUFFER();

  printf("Área (km²): ");
  scanf("%f", &area2);
  CLEAR_INPUT_BUFFER();

  printf("PIB (em bilhões): ");
  scanf("%f", &pib2);
  CLEAR_INPUT_BUFFER();

  printf("Número de Pontos Turísticos: ");
  scanf("%d", &num_pts_turisticos2);
  CLEAR_INPUT_BUFFER();

  // --- Cálculo da densidade populacional e PIB per capita para Carta 2 ---
  den_pop2 = populacao2 / area2;
  pib_pc2 = (pib2 * 1000000000) / populacao2;

  // --- Exibição dos dados da Carta 1 ---
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado);
  printf("Código: %s\n", codigo_carta);
  printf("Nome da Cidade: %s\n", nome_cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões\n", pib);
  printf("Pontos Turísticos: %d\n", num_pts_turisticos);
  printf("Densidade Populacional: %.2f hab/km²\n", den_pop);
  printf("PIB per capita: %.2f reais\n", pib_pc);

  // --- Exibição dos dados da Carta 2 ---
  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo_carta2);
  printf("Nome da Cidade: %s\n", nome_cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões\n", pib2);
  printf("Pontos Turísticos: %d\n", num_pts_turisticos2);
  printf("Densidade Populacional: %.2f hab/km²\n", den_pop2);
  printf("PIB per capita: %.2f reais\n", pib_pc2);

  return 0;

}
