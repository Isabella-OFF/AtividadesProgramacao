#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das cartas
    char estado1[30], estado2[30];
    char codigodacarta1[4], codigodacarta2[4];
    char nomecidade1[60], nomecidade2[60];
    unsigned long int populacao1, populacao2;
    int pontoturistico1, pontoturistico2;
    float area1, area2, pib1, pib2, densidadepop1, densidadepop2, pibpercapita1, pibpercapita2;

    // Cadastro da primeira carta
    printf("DADOS da CARTA 1\n");

    printf("Qual o Estado? \n");
    scanf(" %[^\n]", estado1); 

    printf("Qual o Código da Carta? \n");
    scanf("%s", codigodacarta1);

    printf("Qual o nome da cidade? \n");
    scanf(" %[^\n]", nomecidade1); 

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

    printf("Qual o Estado? \n");
    scanf(" %[^\n]", estado2); 

    printf("Qual o Código da Carta? \n");
    scanf("%s", codigodacarta2);

    printf("Qual o nome da cidade? \n");
    scanf(" %[^\n]", nomecidade2);

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

    // Comparação de atributos - Escolha do atributo a ser comparado
    int atributo_escolhido = 1;  // 1 = População, 2 = Área, 3 = PIB, 4 = Densidade Populacional, 5 = PIB per Capita
    int vitoria_carta1 = 0, vitoria_carta2 = 0;

    printf("\nComparação de Cartas (Atributo: ");

    // Comparação
    if (atributo_escolhido == 1) {  // População
        printf("População):\n");
        printf("Carta 1 - %s (%s): %lu\n", nomecidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %lu\n", nomecidade2, estado2, populacao2);

        if (populacao1 > populacao2) vitoria_carta1 = 1;
        else if (populacao2 > populacao1) vitoria_carta2 = 1;

    } else if (atributo_escolhido == 2) {  // Área
        printf("Área):\n");
        printf("Carta 1 - %s (%s): %.2f Km²\n", nomecidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f Km²\n", nomecidade2, estado2, area2);

        if (area1 > area2) vitoria_carta1 = 1;
        else if (area2 > area1) vitoria_carta2 = 1;

    } else if (atributo_escolhido == 3) {  // PIB
        printf("PIB):\n");
        printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", nomecidade1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", nomecidade2, estado2, pib2);

        if (pib1 > pib2) vitoria_carta1 = 1;
        else if (pib2 > pib1) vitoria_carta2 = 1;

    } else if (atributo_escolhido == 4) {  // Densidade Populacional
        printf("Densidade Populacional):\n");
        printf("Carta 1 - %s (%s): %.2f hab/km²\n", nomecidade1, estado1, densidadepop1);
        printf("Carta 2 - %s (%s): %.2f hab/km²\n", nomecidade2, estado2, densidadepop2);

        if (densidadepop1 < densidadepop2) vitoria_carta1 = 1;
        else if (densidadepop2 < densidadepop1) vitoria_carta2 = 1;

    } else if (atributo_escolhido == 5) {  // PIB per capita
        printf("PIB per Capita):\n");
        printf("Carta 1 - %s (%s): %.2f reais\n", nomecidade1, estado1, pibpercapita1);
        printf("Carta 2 - %s (%s): %.2f reais\n", nomecidade2, estado2, pibpercapita2);

        if (pibpercapita1 > pibpercapita2) vitoria_carta1 = 1;
        else if (pibpercapita2 > pibpercapita1) vitoria_carta2 = 1;
    }

    // Exibe resultado final
    if (vitoria_carta1) {
        printf("\nCarta 1 (%s) venceu!\n", nomecidade1);
    } else if (vitoria_carta2) {
        printf("\nCarta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
