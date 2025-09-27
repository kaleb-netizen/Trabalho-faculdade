#include <stdio.h>

int main() {
    // Variáveis para as cartas
    char estado1, estado2;
    char codigo1[3], codigo2[3]; // Apenas números, ex: "01"
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float pib1_BRL, pib2_BRL;

    printf("--- Cadastro da Carta 1 ---\n");

    // Ler dados para a primeira carta
    printf("Digite uma letra para o estado (De A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da carta (apenas numeros de 01 a 04): ");
    scanf(" %2s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %50[^\n]", nomeCidade1);

    printf("Digite a populacao (em milhoes): ");
    scanf("%d", &populacao1);

    printf("Digite o PIB (em bilhões de BRL): ");
    scanf("%f", &pib1_BRL);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    //Ler dados para a segunda carta
    printf("\n--- Cadastro da Carta 2 ---\n");

    printf("Digite uma letra para o estado (De A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da carta (apenas numeros de 01 a 04): ");
    scanf(" %2s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %50[^\n]", nomeCidade2);

    printf("Digite a populacao (em milhoes): ");
    scanf("%d", &populacao2);

    printf("Digite o PIB (em bilhões de BRL): ");
    scanf("%f", &pib2_BRL);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Imprimir os dados das duas cartas
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da carta: %c%s\n", estado1, codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("Populacao: %d milhoes\n", populacao1);
    printf("PIB: %.2f bilhões BRL\n", pib1_BRL);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %c%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("Populacao: %d milhoes\n", populacao2);
    printf("PIB: %.2f bilhões BRL\n", pib2_BRL);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);

    // Calcular e imprimir a diferença entre as propriedades
    //printf("\n--- Diferenca entre as Cartas (Carta 1 - Carta 2) ---\n");
    //printf("Diferenca de Populacao: %d milhoes\n", populacao1 - populacao2);
    //printf("Diferenca de PIB: %.2f trilhoes BRL\n", pib1_BRL - pib2_BRL);
    //printf("Diferenca de Pontos Turisticos: %d\n", pontos_turisticos1 - pontos_turisticos2);

    return 0;
}

