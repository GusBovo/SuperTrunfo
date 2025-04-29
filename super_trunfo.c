#include <stdio.h>

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
  printf("Adicione as informações da Carta 1 à seguir\n\
  (Carta 1) Informe o Estado:\n");
  scanf("%c", &estado);

  printf("(Carta 1) Informe o Código da Carta:\n");
  scanf("%s", codigo_carta);

  printf("(Carta 1) Informe o Nome da Cidade:\n");
  scanf("%s", nome_cidade);

  printf("(Carta 1) Informe a População total:\n");
  scanf("%d", &populacao);

  printf("(Carta 1) Informe a Área total:\n");
  scanf("%f", &area);

  printf("(Carta 1) Informe o PIB:\n");
  scanf("%f", &pib);

  printf("(Carta 1) Informe o Número de Pontos Turísticos:\n");
  scanf("%d", &num_pts_turisticos);

  // -- Entrada de dados - Carta 2 --
  printf("\nAgora, adicione as informações da Carta 2 à seguir\n\
  (Carta 2) Informe o Estado:\n");
  scanf("%c", &estado2);

  printf("(Carta 2) Informe o Código da Carta:\n");
  scanf("%s", codigo_carta2);

  printf("(Carta 2) Informe o Nome da Cidade:\n");
  scanf("%s", nome_cidade2);

  printf("(Carta 2) Informe a População total:\n");
  scanf("%d", &populacao2);

  printf("(Carta 2) Informe a Área total:\n");
  scanf("%f", &area2);

  printf("(Carta 2) Informe o PIB:\n");
  scanf("%f", &pib2);

  printf("(Carta 2) Informe o Número de Pontos Turísticos:\n");
  scanf("%d", &num_pts_turisticos2);

  // -- Imprime Carta 1 --
  printf("\nCarta 1:\n"
    "Estado: %c\n"
    "Código: %s\n"
    "Nome da Cidade: %s\n"
    "População: %d\n"
    "Área (em km²): %f\n"
    "PIB: %f\n"
    "Número de Pontos Turísticos: %d\n",
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
    "Código: %s\n"
    "Nome da Cidade: %s\n"
    "População: %d\n"
    "Área (em km²): %f\n"
    "PIB: %f\n"
    "Número de Pontos Turísticos: %d\n",
    estado2,
    codigo_carta2,
    nome_cidade2,
    populacao2,
    area2,
    pib2,
    num_pts_turisticos2);


  return 1;
}
