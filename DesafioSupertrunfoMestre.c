#include <stdio.h>

int main() {

  /* Declaração das variáveis */  
  /* Nova variável adicionada, super poder. Mudança da variável população, antes int, agora unsigned long int */
 
char letraestado1, letraestado2;
char codigodacarta1[4], codigodacarta2[4], nomecidade1[60], nomecidade2[60];
unsigned long int populacao1, populacao2;
int pontoturistico1, pontoturistico2;
float area1, area2, pib1, pib2, densidadepop1, densidadepop2, pibpercapita1, pibpercapita2, superpoder1, superpoder2;

/* Uso do printf para interagir com o usuário e uso do scanf para receber os dados da carta 1 */
 
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

 /* Uso do printf para interagir com o usuário e uso do scanf para receber os dados da carta 2 */

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

/* Uso de operadores de divisão para o cálculo da densidade populacional e PIB per capita */
 
densidadepop1 = populacao1 / area1;
densidadepop2 = populacao2 / area2;

pibpercapita1 = pib1 / populacao1;
pibpercapita2 = pib2 / populacao2;

/* Uso de operadores de soma para o cálculo do Super Poder */
 
superpoder1 = populacao1 + area1 + pib1 + pontoturistico1 + pibpercapita1 + (1 / densidadepop1);
superpoder2 = populacao2 + area2 + pib2 + pontoturistico2 + pibpercapita2 + (1 / densidadepop2);

/* Saída dos dados da Carta 1 */
 
printf("CARTA 1:\n");
printf("Estado: %c\n", letraestado1);
printf("Código: %s\n", codigodacarta1);
printf("Nome da Cidade: %s\n", nomecidade1);
printf("População: %lu\n", populacao1);
printf("Área: %.2f Km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontoturistico1);
printf("Densidade Populacional: %.2f hab/km²\n", densidadepop1);
printf("PIB per capita: %.2f reais\n", pibpercapita1);
printf("Super Poder: %.2f\n", superpoder1);

/* Saída dos dados da Carta 2 */
 
printf("\nCARTA 2:\n");
printf("Estado: %c\n", letraestado2);
printf("Código: %s\n", codigodacarta2);
printf("Nome da Cidade: %s\n", nomecidade2);
printf("População: %lu\n", populacao2);
printf("Área: %.2f Km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontoturistico2);
printf("Densidade Populacional: %.2f hab/km²\n", densidadepop2);
printf("PIB per capita: %.2f reais\n", pibpercapita2);
printf("Super Poder: %.2f\n", superpoder2);

 /* Saída dos dados da comparação entre Carta 1 e Carta 2 */
  
printf("\nComparação de Cartas:\n");
printf("População: %s venceu (%d)\n", populacao1 > populacao2 ? "Carta 1" : "Carta 2", populacao1 > populacao2 ? 1 : 0);
printf("Área: %s venceu (%d)\n", area1 > area2 ? "Carta 1" : "Carta 2", area1 > area2 ? 1 : 0);
printf("PIB: %s venceu (%d)\n", pib1 > pib2 ? "Carta 1" : "Carta 2", pib1 > pib2 ? 1 : 0);
printf("Pontos Turísticos: %s venceu (%d)\n", pontoturistico1 > pontoturistico2 ? "Carta 1" : "Carta 2", pontoturistico1 > pontoturistico2 ? 1 : 0);
printf("Densidade Populacional: %s venceu (%d)\n", densidadepop1 < densidadepop2 ? "Carta 1" : "Carta 2", densidadepop1 < densidadepop2 ? 1 : 0);
printf("PIB per Capita: %s venceu (%d)\n", pibpercapita1 > pibpercapita2 ? "Carta 1" : "Carta 2", pibpercapita1 > pibpercapita2 ? 1 : 0);
printf("Super Poder: %s venceu (%d)\n", superpoder1 > superpoder2 ? "Carta 1" : "Carta 2", superpoder1 > superpoder2 ? 1 : 0);


return 0;
}
