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

    int atributo1 = 0, atributo2 = 0;

    // Menu dinâmico para escolha do primeiro atributo
    printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\n");
    printf("Opção: ");
    scanf("%d", &atributo1);

    // Verificação para garantir que a opção seja válida
    if (atributo1 < 1 || atributo1 > 5) {
        printf("Opção inválida! Encerrando...\n");
        return 0;
    }

    // Menu dinâmico para escolha do segundo atributo (não repetir o primeiro)
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != atributo1) {
            printf("%d - ", i);
            switch (i) {
                case 1:
                    printf("População\n");
                    break;
                case 2:
                    printf("Área\n");
                    break;
                case 3:
                    printf("PIB\n");
                    break;
                case 4:
                    printf("Pontos turísticos\n");
                    break;
                case 5:
                    printf("Densidade demográfica\n");
                    break;
            }
        }
    }

    // Leitura da segunda escolha de atributo
    printf("Opção: ");
    scanf("%d", &atributo2);

    // Garantir que o segundo atributo seja válido e diferente do primeiro
    if (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1) {
        printf("Opção inválida ou atributo repetido! Encerrando...\n");
        return 0;
    }

    // Comparação dos atributos selecionados
    int vencedor1 = 0, vencedor2 = 0;

    // Função para comparar os atributos
    switch (atributo1) {
        case 1: // População
            vencedor1 = (populacao1 > populacao2) ? 1 : (populacao1 < populacao2) ? 2 : 0;
            break;
        case 2: // Área
            vencedor1 = (area1 > area2) ? 1 : (area1 < area2) ? 2 : 0;
            break;
        case 3: // PIB
            vencedor1 = (pib1 > pib2) ? 1 : (pib1 < pib2) ? 2 : 0;
            break;
        case 4: // Pontos turísticos
            vencedor1 = (pontosTuristicos1 > pontosTuristicos2) ? 1 : (pontosTuristicos1 < pontosTuristicos2) ? 2 : 0;
            break;
        case 5: // Densidade demográfica
            vencedor1 = (densidade1 < densidade2) ? 1 : (densidade1 > densidade2) ? 2 : 0;
            break;
    }

    // Exibindo resultado da comparação do primeiro atributo
    printf("\nResultado da comparação do primeiro atributo:\n");
    printf("%s: ", pais1);
    switch (atributo1) {
        case 1: printf("%lu habitantes\n", populacao1); break;
        case 2: printf("%.2f km²\n", area1); break;
        case 3: printf("%.2f bilhões\n", pib1); break;
        case 4: printf("%d pontos turísticos\n", pontosTuristicos1); break;
        case 5: printf("%.2f habitantes/km²\n", densidade1); break;
    }
    
    printf("%s: ", pais2);
    switch (atributo1) {
        case 1: printf("%lu habitantes\n", populacao2); break;
        case 2: printf("%.2f km²\n", area2); break;
        case 3: printf("%.2f bilhões\n", pib2); break;
        case 4: printf("%d pontos turísticos\n", pontosTuristicos2); break;
        case 5: printf("%.2f habitantes/km²\n", densidade2); break;
    }
    if (vencedor1 == 1) {
        printf("Vencedor: %s\n", pais1);
    } else if (vencedor1 == 2) {
        printf("Vencedor: %s\n", pais2);
    } else {
        printf("Empate\n");
    }
    // Comparação do segundo atributo
    switch (atributo2) {
        case 1: // População
            vencedor2 = (populacao1 > populacao2) ? 1 : (populacao1 < populacao2) ? 2 : 0;
            break;
        case 2: // Área
            vencedor2 = (area1 > area2) ? 1 : (area1 < area2) ? 2 : 0;
            break;
        case 3: // PIB
            vencedor2 = (pib1 > pib2) ? 1 : (pib1 < pib2) ? 2 : 0;
            break;
        case 4: // Pontos turísticos
            vencedor2 = (pontosTuristicos1 > pontosTuristicos2) ? 1 : (pontosTuristicos1 < pontosTuristicos2) ? 2 : 0;
            break;
        case 5: // Densidade demográfica
            vencedor2 = (densidade1 < densidade2) ? 1 : (densidade1 > densidade2) ? 2 : 0;
            break;
    }

    // Exibindo resultado da comparação do segundo atributo
    printf("\nResultado da comparação do segundo atributo:\n");
    printf("%s: ", pais1);
    switch (atributo2) {
        case 1: printf("%lu habitantes\n", populacao1); break;
        case 2: printf("%.2f km²\n", area1); break;
        case 3: printf("%.2f bilhões\n", pib1); break;
        case 4: printf("%d pontos turísticos\n", pontosTuristicos1); break;
        case 5: printf("%.2f habitantes/km²\n", densidade1); break;
    }
    
    printf("%s: ", pais2);
    switch (atributo2) {
        case 1: printf("%lu habitantes\n", populacao2); break;
        case 2: printf("%.2f km²\n", area2); break;
        case 3: printf("%.2f bilhões\n", pib2); break;
        case 4: printf("%d pontos turísticos\n", pontosTuristicos2); break;
        case 5: printf("%.2f habitantes/km²\n", densidade2); break;
    }
        if (vencedor2 == 1) {
        printf("Vencedor: %s\n", pais1);
    } else if (vencedor2 == 2) {
        printf("Vencedor: %s\n", pais2);
    } else {
        printf("Empate\n");
    }

    // Soma dos atributos
    float soma1 = 0, soma2 = 0;

    // Soma dos valores para cada carta
    switch (atributo1) {
        case 1: soma1 += populacao1; soma2 += populacao2; break;
        case 2: soma1 += area1; soma2 += area2; break;
        case 3: soma1 += pib1; soma2 += pib2; break;
        case 4: soma1 += pontosTuristicos1; soma2 += pontosTuristicos2; break;
        case 5: soma1 += densidade1; soma2 += densidade2; break;
    }

    switch (atributo2) {
        case 1: soma1 += populacao1; soma2 += populacao2; break;
        case 2: soma1 += area1; soma2 += area2; break;
        case 3: soma1 += pib1; soma2 += pib2; break;
        case 4: soma1 += pontosTuristicos1; soma2 += pontosTuristicos2; break;
        case 5: soma1 += densidade1; soma2 += densidade2; break;
    }

    // Exibição da soma dos atributos para cada carta
    printf("\nSoma dos Atributos:\n");
    printf("%s: %.2f\n", pais1, soma1);
    printf("%s: %.2f\n", pais2, soma2);

    // Determinando o vencedor final
    if (soma1 > soma2) {
        printf("\nVencedor da rodada: %s\n", pais1);
    } else if (soma2 > soma1) {
        printf("\nVencedor da rodada: %s\n", pais2);
    } else {
        printf("\nEmpate na rodada!\n");
    }

    return 0;  
}
