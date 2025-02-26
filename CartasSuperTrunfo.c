#include <stdio.h>

/*
Variáveis e tipos:
Estado de 'A' a 'H' - char
Código da carta de 01 a 04 (ex: A01, B03) - char[]
Nome da cidade - char[]
População - int
Área - float
PIB - float
Número de pontos turísticos - int 
*/

int main() {
    // Variáveis nomeadas com o número 1 serão usadas para a primeira carta e 2 para a segunda
    char estado1, estado2;
    char codigo_carta1[4], codigo_carta2[4], nome_cidade1[20], nome_cidade2[20];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;

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
    scanf("%d", &populacao1);
    printf("A área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);
    printf("O Produto Interno Bruto da cidade: ");
    scanf("%f", &pib1);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

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
    scanf("%d", &populacao2);
    printf("A área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);
    printf("O Produto Interno Bruto da cidade: ");
    scanf("%f", &pib2);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("\n");

    //Exibição de dados da carta 01:
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\n");

    //Exibição de dados da carta 02:
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
