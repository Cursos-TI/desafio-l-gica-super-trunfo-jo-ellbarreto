#include <stdio.h>

int main() {
    // Declaração das Variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Mensagem inicial
    printf("=== Cadastro de Cartas - Super Trunfo ===\n\n");

    // ---- Entrada de dados da Carta 1 ----
    printf("--- Inserindo dados da Carta 1 ---\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a Area (em km2): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCarta 1 cadastrada com sucesso!\n\n");

    // ---- Entrada de dados da Carta 2 ----
    printf("--- Inserindo dados da Carta 2 ---\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\nCarta 2 cadastrada com sucesso!\n\n");

    // ---- Cálculos ----
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pibPerCapita1 = pib1 * 1000000000 / populacao1; // converte PIB para reais
    float pibPerCapita2 = pib2 * 1000000000 / populacao2;

    // ---- Exibição das cartas ----
    printf("=== Cartas Cadastradas ===\n\n");
    printf("Carta 1 - %s (%c)\n", nomeCidade1, estado1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita1);

    printf("Carta 2 - %s (%c)\n", nomeCidade2, estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita2);

    // ---- Comparação das cartas ----
    printf("=== Comparacao de Cartas ===\n");

    // Escolha do atributo fixo para comparação:
    // (Você pode alterar para: populacao1, area1, pib1, densidade1, etc.)
    // Exemplo: vamos comparar o PIB per capita.
    printf("Atributo escolhido: PIB per Capita\n\n");

    if (pibPerCapita1 > pibPerCapita2) {
        printf("Carta 1 venceu!\n");
        printf("%s (%.2f) > %s (%.2f)\n", nomeCidade1, pibPerCapita1, nomeCidade2, pibPerCapita2);
    } 
    else if (pibPerCapita2 > pibPerCapita1) {
        printf("Carta 2 venceu!\n");
        printf("%s (%.2f) > %s (%.2f)\n", nomeCidade2, pibPerCapita2, nomeCidade1, pibPerCapita1);
    } 
    else {
        printf("Empate! Ambas as cidades possuem o mesmo PIB per capita (%.2f).\n", pibPerCapita1);
    }

    return 0;
}
