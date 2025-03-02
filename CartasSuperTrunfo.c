#include <stdio.h>

int main() {
    //Variáveis carta 01:
    char estado1, codigo_carta1[4], nome_cidade1[20];
    unsigned int populacao1;
    short int pontos_turisticos1;
    double area1, pib1, densidade_populacional1, pib_per_capita1;

    //Variáveis carta 02:
    char estado2, codigo_carta2[4], nome_cidade2[20];
    unsigned int populacao2;
    short int pontos_turisticos2;
    double area2, pib2, densidade_populacional2, pib_per_capita2;

    //Entrada de dados carta 01:
    printf("Insira os dados da primeira carta:\n");
    printf("Letra de 'A' a 'H' para representar o Estado: ");
    scanf(" %c", &estado1);
    printf("A letra do Estado seguida de um número de 01 a 04: ");
    scanf("%3s", codigo_carta1);
    getchar();
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1);
    printf("O número de habitantes da cidade: ");
    scanf("%u", &populacao1);
    printf("A área da cidade em quilômetros quadrados: ");
    scanf("%lf", &area1);
    printf("O Produto Interno Bruto da cidade: ");
    scanf("%lf", &pib1);
    printf("Quantidade de pontos turísticos: ");
    scanf("%hd", &pontos_turisticos1);

    printf(" \n");

    //Entrada de dados carta 02:
    printf("Insira os dados da segunda carta:\n");
    printf("Letra de 'A' a 'H' para representar o Estado: ");
    scanf(" %c", &estado2);
    printf("A letra do Estado seguida de um número de 01 a 04: ");
    scanf("%3s", codigo_carta2);
    getchar();
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);
    printf("O número de habitantes da cidade: ");
    scanf("%u", &populacao2);
    printf("A área da cidade em quilômetros quadrados: ");
    scanf("%lf", &area2);
    printf("O Produto Interno Bruto da cidade: ");
    scanf("%lf", &pib2);
    printf("Quantidade de pontos turísticos: ");
    scanf("%hd", &pontos_turisticos2);

    printf("\n");

    //Exibição de dados da carta 01:
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %u\n", populacao1);
    printf("Área: %.2lf km²\n", area1);
    printf("PIB: %.2lf bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %hd\n", pontos_turisticos1);
    //Calculo e exibição da densidade populacional e PIB per capita
    densidade_populacional1 = populacao1 / area1;
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade_populacional1);
    pib_per_capita1 = (pib1 * 1e9) / populacao1;
    printf("PIB per Capita: %.2lf reais\n", pib_per_capita1);

    printf("\n");

    //Exibição de dados da carta 02:
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2lf km²\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %hd\n", pontos_turisticos2);
    //Calculo e exibição da densidade populacional e PIB per capita
    densidade_populacional2 = populacao2 / area2;
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade_populacional2);
    pib_per_capita2 = (pib2 * 1e9) / populacao2;
    printf("PIB per Capita: %.2lf reais\n", pib_per_capita2);

    return 0;
}
