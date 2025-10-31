#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das cartas
    char letraestado1, letraestado2;
    char codigodacarta1[4], codigodacarta2[4], nomecidade1[60], nomecidade2[60];
    unsigned long int populacao1, populacao2;
    int pontoturistico1, pontoturistico2;
    float area1, area2, pib1, pib2, densidadepop1, densidadepop2, pibpercapita1, pibpercapita2;

    // Cadastro da primeira carta
    printf("DADOS da CARTA 1\n");
    printf("\nQual letra representa o Estado? \n");
    scanf(" %c", &letraestado1);
    printf("Qual o Código da Carta? \n");
    scanf("%s", codigodacarta1);
    printf("Qual o nome da cidade? \n");
    scanf("%s", nomecidade1);
    printf("Qual o número de habitantes da cidade?\n");
    scanf("%lu", &populacao1);
    printf("Qual a área em km² da cidade?\n");
    scanf("%f", &area1);
    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib1);
    printf("Quantos pontos turísticos a cidade possui?\n");
    scanf("%d", &pontoturistico1);

    // Cadastro da segunda carta
    printf("\nDADOS da CARTA 2\n");
    printf("\nQual letra representa o Estado? \n");
    scanf(" %c", &letraestado2);
    printf("Qual o Código da Carta? \n");
    scanf("%s", codigodacarta2);
    printf("Qual o nome da cidade? \n");
    scanf("%s", nomecidade2);
    printf("Qual o número de habitantes da cidade?\n");
    scanf("%lu", &populacao2);
    printf("Qual a área em km² da cidade?\n");
    scanf("%f", &area2);
    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib2);
    printf("Quantos pontos turísticos a cidade possui?\n");
    scanf("%d", &pontoturistico2);

    // Cálculos de densidade populacional e PIB per capita
    densidadepop1 = populacao1 / area1;
    densidadepop2 = populacao2 / area2;
    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;

    // Menu interativo para escolha do atributo de comparação
    int opcao;
    printf("\nEscolha o atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha uma opção (1-5): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: // Comparando População
            printf("\nComparação de Cartas (Atributo: População):\n");
            printf("Carta 1 - %s (%c): %lu habitantes\n", nomecidade1, letraestado1, populacao1);
            printf("Carta 2 - %s (%c): %lu habitantes\n", nomecidade2, letraestado2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Comparando Área
            printf("\nComparação de Cartas (Atributo: Área):\n");
            printf("Carta 1 - %s (%c): %.2f Km²\n", nomecidade1, letraestado1, area1);
            printf("Carta 2 - %s (%c): %.2f Km²\n", nomecidade2, letraestado2, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // Comparando PIB
            printf("\nComparação de Cartas (Atributo: PIB):\n");
            printf("Carta 1 - %s (%c): %.2f bilhões de reais\n", nomecidade1, letraestado1, pib1);
            printf("Carta 2 - %s (%c): %.2f bilhões de reais\n", nomecidade2, letraestado2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Comparando Pontos Turísticos
            printf("\nComparação de Cartas (Atributo: Pontos Turísticos):\n");
            printf("Carta 1 - %s (%c): %d pontos turísticos\n", nomecidade1, letraestado1, pontoturistico1);
            printf("Carta 2 - %s (%c): %d pontos turísticos\n", nomecidade2, letraestado2, pontoturistico2);
            if (pontoturistico1 > pontoturistico2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
            } else if (pontoturistico2 > pontoturistico1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Comparando Densidade Demográfica
            printf("\nComparação de Cartas (Atributo: Densidade Demográfica):\n");
            printf("Carta 1 - %s (%c): %.2f hab/km²\n", nomecidade1, letraestado1, densidadepop1);
            printf("Carta 2 - %s (%c): %.2f hab/km²\n", nomecidade2, letraestado2, densidadepop2);
            if (densidadepop1 < densidadepop2) { // Menor densidade vence
                printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
            } else if (densidadepop2 < densidadepop1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida. Escolha um número entre 1 e 5.\n");
            break;
    }

    return 0;
}
