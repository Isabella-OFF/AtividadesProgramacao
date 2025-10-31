#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das cartas
    char pais1[60], pais2[60];
    unsigned long int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2, densidade1, densidade2;

    // Cadastro da primeira carta
    printf("DADOS da CARTA 1\n");
    printf("Qual o país?\n");
    scanf(" %[^\n]", pais1);

    printf("Qual o número de habitantes do país?\n");
    scanf("%lu", &populacao1);

    printf("Qual a área em km² do país?\n");
    scanf("%f", &area1);

    printf("Qual o PIB do país (em bilhões)?\n");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos o país possui?\n");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da segunda carta
    printf("\nDADOS da CARTA 2\n");
    printf("Qual o país?\n");
    scanf(" %[^\n]", pais2);

    printf("Qual o número de habitantes do país?\n");
    scanf("%lu", &populacao2);

    printf("Qual a área em km² do país?\n");
    scanf("%f", &area2);

    printf("Qual o PIB do país (em bilhões)?\n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos o país possui?\n");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade demográfica
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // Menu interativo para escolha do atributo
    int opcao;
    printf("\nEscolha o atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    int vitoriaCarta1 = 0, vitoriaCarta2 = 0;

    // Comparação usando switch
    switch(opcao) {
        case 1: // População
            printf("\nComparando População:\n");
            printf("%s: %lu habitantes\n", pais1, populacao1);
            printf("%s: %lu habitantes\n", pais2, populacao2);

            if (populacao1 > populacao2) vitoriaCarta1 = 1;
            else if (populacao2 > populacao1) vitoriaCarta2 = 1;
            break;

        case 2: // Área
            printf("\nComparando Área:\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);

            if (area1 > area2) vitoriaCarta1 = 1;
            else if (area2 > area1) vitoriaCarta2 = 1;
            break;

        case 3: // PIB
            printf("\nComparando PIB:\n");
            printf("%s: %.2f bilhões\n", pais1, pib1);
            printf("%s: %.2f bilhões\n", pais2, pib2);

            if (pib1 > pib2) vitoriaCarta1 = 1;
            else if (pib2 > pib1) vitoriaCarta2 = 1;
            break;

        case 4: // Pontos turísticos
            printf("\nComparando Pontos Turísticos:\n");
            printf("%s: %d pontos\n", pais1, pontosTuristicos1);
            printf("%s: %d pontos\n", pais2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) vitoriaCarta1 = 1;
            else if (pontosTuristicos2 > pontosTuristicos1) vitoriaCarta2 = 1;
            break;

        case 5: // Densidade demográfica (menor vence)
            printf("\nComparando Densidade Demográfica (menor vence):\n");
            printf("%s: %.2f hab/km²\n", pais1, densidade1);
            printf("%s: %.2f hab/km²\n", pais2, densidade2);

            if (densidade1 < densidade2) vitoriaCarta1 = 1;
            else if (densidade2 < densidade1) vitoriaCarta2 = 1;
            break;

        default:
            printf("Opção inválida! Comparação não realizada.\n");
            return 0;
    }

    // Exibição do resultado
    if (vitoriaCarta1) {
        printf("\nCarta 1 (%s) venceu!\n", pais1);
    } else if (vitoriaCarta2) {
        printf("\nCarta 2 (%s) venceu!\n", pais2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
