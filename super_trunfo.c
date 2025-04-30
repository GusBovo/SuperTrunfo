#include <stdio.h>

#define CLEAR_INPUT_BUFFER() scanf("%*[^\n]"); getchar()

int main()
{

  char estado, estado2;
  char codigo_carta[3], codigo_carta2[3];
  char nome_cidade[30], nome_cidade2[30];
  int populacao, populacao2;
  float area, area2;
  float pib, pib2;
  int num_pts_turisticos, num_pts_turisticos2;

  // -- Entrada de dados - Carta 1 --
  printf("Adicione as informações da Carta 1 à seguir\n"
  "(Carta 1) Informe o Estado:\n");
  scanf("%c", &estado);
  CLEAR_INPUT_BUFFER();

  printf("(Carta 1) Informe o Código da Carta:\n");
  scanf("%2s", codigo_carta);
  CLEAR_INPUT_BUFFER();

  printf("(Carta 1) Informe o Nome da Cidade:\n");
  scanf("%[^\n]", nome_cidade);
  CLEAR_INPUT_BUFFER();

  printf("(Carta 1) Informe a População total:\n");
  scanf("%d", &populacao);
  CLEAR_INPUT_BUFFER();

  printf("(Carta 1) Informe a Área total:\n");
  scanf("%f", &area);
  CLEAR_INPUT_BUFFER();

  printf("(Carta 1) Informe o PIB:\n");
  scanf("%f", &pib);
  CLEAR_INPUT_BUFFER();

  printf("(Carta 1) Informe o Número de Pontos Turísticos:\n");
  scanf("%d", &num_pts_turisticos);
  CLEAR_INPUT_BUFFER();

  // -- Entrada de dados - Carta 2 --
  printf("\nAgora, adicione as informações da Carta 2 à seguir\n"
  "(Carta 2) Informe o Estado:\n");
  scanf("%c", &estado2);
  CLEAR_INPUT_BUFFER();

  printf("(Carta 2) Informe o Código da Carta:\n");
  scanf("%2s", codigo_carta2);
  CLEAR_INPUT_BUFFER();

  printf("(Carta 2) Informe o Nome da Cidade:\n");
  scanf("%[^\n]", nome_cidade2);
  CLEAR_INPUT_BUFFER();

  printf("(Carta 2) Informe a População total:\n");
  scanf("%d", &populacao2);
  CLEAR_INPUT_BUFFER();

  printf("(Carta 2) Informe a Área total:\n");
  scanf("%f", &area2);
  CLEAR_INPUT_BUFFER();

  printf("(Carta 2) Informe o PIB:\n");
  scanf("%f", &pib2);
  CLEAR_INPUT_BUFFER();

  printf("(Carta 2) Informe o Número de Pontos Turísticos:\n");
  scanf("%d", &num_pts_turisticos2);
  CLEAR_INPUT_BUFFER();

  // -- Imprime Carta 1 --
  printf("\nCarta 1:\n"
    "Estado: %c\n"
    "Código: %c%s\n"
    "Nome da Cidade: %s\n"
    "População: %d\n"
    "Área (em km²): %.2f\n"
    "PIB: %.2f\n"
    "Número de Pontos Turísticos: %d\n",
    estado,
    estado,
    codigo_carta,
    nome_cidade,
    populacao,
    area,
    pib,
    num_pts_turisticos);

  // -- Imprime Carta 2 --
  printf("\nCarta 2:\n"
    "Estado: %c\n"
    "Código: %c%s\n"
    "Nome da Cidade: %s\n"
    "População: %d\n"
    "Área (em km²): %.2f\n"
    "PIB: %.2f\n"
    "Número de Pontos Turísticos: %d\n",
    estado2,
    estado2,
    codigo_carta2,
    nome_cidade2,
    populacao2,
    area2,
    pib2,
    num_pts_turisticos2);

  return 1;
}
