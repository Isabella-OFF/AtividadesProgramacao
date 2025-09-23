#include <stdio.h>

int main() {

char letraestado1, letraestado2;
char codigodacarta1[4], codigodacarta2[4], nomecidade1[60], nomecidade2[60];
int populacao1, populacao2, pontoturistico1, pontoturistico2;
float area1, area2, pib1, pib2, densidadepop1, densidadepop2, pibpercapita1, pibpercapita2;

printf("DADOS da CARTA 1\n");

printf("\nQual letra representa o Estado? \n");
scanf(" %c", &letraestado1);

printf("Qual o Código da Carta? \n");
scanf("%s", codigodacarta1);

printf("Qual o nome da cidade? \n");
scanf("%s", nomecidade1);

printf("Qual o número de habitantes da cidade?\n");
scanf("%d", &populacao1);

printf("Qual a área em km² da cidade?\n");
scanf("%f", &area1);

printf("Qual o PIB da cidade?\n");
scanf("%f", &pib1);

printf("Quantos pontos turísticos a cidade possui?\n");
scanf("%d", &pontoturistico1);


printf("\nDADOS da CARTA 2\n");

printf("\nQual letra representa o Estado? \n");
scanf(" %c", &letraestado2);

printf("Qual o Código da Carta? \n");
scanf("%s", codigodacarta2);

printf("Qual o nome da cidade? \n");
scanf("%s", nomecidade2);

printf("Qual o número de habitantes da cidade?\n");
scanf("%d", &populacao2);

printf("Qual a área em km² da cidade?\n");
scanf("%f", &area2);

printf("Qual o PIB da cidade?\n");
scanf("%f", &pib2);

printf("Quantos pontos turísticos a cidade possui?\n");
scanf("%d", &pontoturistico2);

densidadepop1 = populacao1 / area1;
densidadepop2 = populacao2 / area2;

pibpercapita1 = pib1 / populacao1;
pibpercapita1 = pib2 / populacao2;


printf("CARTA 1:\n");
printf("Estado: %c\n", letraestado1);
printf("Código: %s\n", codigodacarta1);
printf("Nome da Cidade: %s\n", nomecidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f Km²\n", area1);
printf("PIB: %f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontoturistico1);
printf("Densidade Populacional: %2.f hab/km²\n", densidadepop1);
printf("PIB per capita: %.2f reais\n", pibpercapita1);



printf("\nCARTA 2:\n");
printf("Estado: %c\n", letraestado2);
printf("Código: %s\n", codigodacarta2);
printf("Nome da Cidade: %s\n", nomecidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f Km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontoturistico2);
printf("Densidade Populacional: %2.f hab/km²\n", densidadepop2);
printf("PIB per capita: %.2f reais\n", pibpercapita1);


return 0;
}
