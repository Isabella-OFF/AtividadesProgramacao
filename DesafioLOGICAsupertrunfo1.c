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

    // Comparação de atributos - Escolha do atributo a ser comparado
    // Neste exemplo é "População", mas pode ser alterado para qualquer outro atributo de 1 a 5.
    int atributo_escolhido = 1;  // 1 = População, 2 = Área, 3 = PIB, 4 = Densidade Populacional, 5 = PIB per Capita
    int vitoria_carta1 = 0, vitoria_carta2 = 0;

    printf("\nComparação de Cartas (Atributo: ");

    // Exibe o atributo escolhido e realiza a comparação
    if (atributo_escolhido == 1) {  // Comparando População
        printf("População):\n");
        printf("Carta 1 - %s (%c): %lu\n", nomecidade1, letraestado1, populacao1);
        printf("Carta 2 - %s (%c): %lu\n", nomecidade2, letraestado2, populacao2);

        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
            vitoria_carta1 = 1;
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
            vitoria_carta2 = 1;
        }

    } else if (atributo_escolhido == 2) {  // Comparando Área
        printf("Área):\n");
        printf("Carta 1 - %s (%c): %.2f Km²\n", nomecidade1, letraestado1, area1);
        printf("Carta 2 - %s (%c): %.2f Km²\n", nomecidade2, letraestado2, area2);

        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
            vitoria_carta1 = 1;
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
            vitoria_carta2 = 1;
        }

    } else if (atributo_escolhido == 3) {  // Comparando PIB
        printf("PIB):\n");
        printf("Carta 1 - %s (%c): %.2f bilhões de reais\n", nomecidade1, letraestado1, pib1);
        printf("Carta 2 - %s (%c): %.2f bilhões de reais\n", nomecidade2, letraestado2, pib2);

        if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
            vitoria_carta1 = 1;
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
            vitoria_carta2 = 1;
        }

    } else if (atributo_escolhido == 4) {  // Comparando Densidade Populacional
        printf("Densidade Populacional):\n");
        printf("Carta 1 - %s (%c): %.2f hab/km²\n", nomecidade1, letraestado1, densidadepop1);
        printf("Carta 2 - %s (%c): %.2f hab/km²\n", nomecidade2, letraestado2, densidadepop2);

        if (densidadepop1 < densidadepop2) {  // Menor densidade populacional vence
            printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
            vitoria_carta1 = 1;
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
            vitoria_carta2 = 1;
        }

    } else if (atributo_escolhido == 5) {  // Comparando PIB per capita
        printf("PIB per Capita):\n");
        printf("Carta 1 - %s (%c): %.2f reais\n", nomecidade1, letraestado1, pibpercapita1);
        printf("Carta 2 - %s (%c): %.2f reais\n", nomecidade2, letraestado2, pibpercapita2);

        if (pibpercapita1 > pibpercapita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
            vitoria_carta1 = 1;
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
            vitoria_carta2 = 1;
        }
    }

    // Exibe qual carta venceu a rodada
    if (vitoria_carta1) {
        printf("\nCarta 1 (%s) venceu!\n", nomecidade1);
    } else if (vitoria_carta2) {
        printf("\nCarta 2 (%s) venceu!\n", nomecidade2);
    }

    return 0;
}
