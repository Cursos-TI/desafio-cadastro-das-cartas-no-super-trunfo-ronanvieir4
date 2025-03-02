#include <stdio.h>

int main() {
    //Variáveis carta 01:
    char estado1, codigoCarta1[4], nomeCidade1[20];
    unsigned int populacao1;
    short int pontosTuristicos1;
    double area1, pib1, densidadePopulacional1, pibPerCapita1;

    //Variáveis carta 02:
    char estado2, codigoCarta2[4], nomeCidade2[20];
    unsigned int populacao2;
    short int pontosTuristicos2;
    double area2, pib2, densidadePopulacional2, pibPerCapita2;

    //Entrada de dados carta 01:
    printf("Insira os dados da primeira carta:\n");
    printf("Letra de 'A' a 'H' para representar o Estado: ");
    scanf(" %c", &estado1);
    printf("A letra do Estado seguida de um número de 01 a 04: ");
    scanf("%3s", codigoCarta1);
    getchar();
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("O número de habitantes da cidade: ");
    scanf("%u", &populacao1);
    printf("A área da cidade em quilômetros quadrados: ");
    scanf("%lf", &area1);
    printf("O Produto Interno Bruto da cidade: ");
    scanf("%lf", &pib1);
    printf("Quantidade de pontos turísticos: ");
    scanf("%hd", &pontosTuristicos1);

    printf(" \n");

    //Entrada de dados carta 02:
    printf("Insira os dados da segunda carta:\n");
    printf("Letra de 'A' a 'H' para representar o Estado: ");
    scanf(" %c", &estado2);
    printf("A letra do Estado seguida de um número de 01 a 04: ");
    scanf("%3s", codigoCarta2);
    getchar();
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("O número de habitantes da cidade: ");
    scanf("%u", &populacao2);
    printf("A área da cidade em quilômetros quadrados: ");
    scanf("%lf", &area2);
    printf("O Produto Interno Bruto da cidade: ");
    scanf("%lf", &pib2);
    printf("Quantidade de pontos turísticos: ");
    scanf("%hd", &pontosTuristicos2);

    printf("\n");

    //Exibição de dados da carta 01:
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %u\n", populacao1);
    printf("Área: %.2lf km²\n", area1);
    printf("PIB: %.2lf bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %hd\n", pontosTuristicos1);
    //Calculo e exibição da densidade populacional e PIB per capita
    densidadePopulacional1 = populacao1 / area1;
    printf("Densidade Populacional: %.2lf hab/km²\n", densidadePopulacional1);
    pibPerCapita1 = (pib1 * 1e9) / populacao1;
    printf("PIB per Capita: %.2lf reais\n", pibPerCapita1);

    printf("\n");

    //Exibição de dados da carta 02:
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2lf km²\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %hd\n", pontosTuristicos2);
    //Calculo e exibição da densidade populacional e PIB per capita
    densidadePopulacional2 = populacao2 / area2;
    printf("Densidade Populacional: %.2lf hab/km²\n", densidadePopulacional2);
    pibPerCapita2 = (pib2 * 1e9) / populacao2;
    printf("PIB per Capita: %.2lf reais\n", pibPerCapita2);

    printf("\n");

    //Calculo do Super Poder
    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 - densidadePopulacional1;
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 - densidadePopulacional2;

    //Comparação das cartas
    short int resultadoPopulacao = populacao1 > populacao2;
    short int resultadoArea = area1 > area2;
    short int resultadoPIB = pib1 > pib2;
    short int resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    short int resultadoPibPerCapita = pibPerCapita1 > pibPerCapita2;
    short int resultadoDensidadePopulacional = densidadePopulacional1 < densidadePopulacional2;
    short int resultadoSuperPoder = superPoder1 > superPoder2;

    printf("Comparação de cartas:\n");
    printf("População: Carta %hd venceu (%hd)\n", (2 - resultadoPopulacao), resultadoPopulacao);
    printf("Área: Carta %hd venceu (%hd)\n", (2 - resultadoArea), resultadoArea);
    printf("PIB: Carta %hd venceu (%hd)\n", (2 - resultadoPIB), resultadoPIB);
    printf("Pontos Turísticos: Carta %hd venceu (%hd)\n", (2 - resultadoPontosTuristicos), resultadoPontosTuristicos);
    printf("Densidade Populacional: Carta %hd venceu (%hd)\n", (2 - resultadoDensidadePopulacional), resultadoDensidadePopulacional);
    printf("PIB per Capita: Carta %hd venceu (%hd)\n", (2 - resultadoPibPerCapita), resultadoPibPerCapita);
    printf("Super Poder: Carta %hd venceu (%hd)\n", (2 - resultadoSuperPoder), resultadoSuperPoder);

    return 0;
}
