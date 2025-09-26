#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    int populacao1, pontos_turisticos1;
    float pib1_BRL;

    // Variáveis para a segunda carta
    int populacao2, pontos_turisticos2;
    float pib2_BRL;

    printf("--- Cadastro da Carta 1 ---\n");

    // Ler dados para a primeira carta
    printf("Digite a populacao (em milhoes): ");
    scanf("%d", &populacao1);

    printf("Digite o PIB (em trilhoes de BRL): ");
    scanf("%f", &pib1_BRL);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n--- Cadastro da Carta 2 ---\n");

    // Ler dados para a segunda carta
    printf("Digite a populacao (em milhoes): ");
    scanf("%d", &populacao2);

    printf("Digite o PIB (em trilhoes de BRL): ");
    scanf("%f", &pib2_BRL);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Imprimir os dados das duas cartas
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Populacao: %d milhoes\n", populacao1);
    printf("PIB: %.2f trilhoes BRL\n", pib1_BRL);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Populacao: %d milhoes\n", populacao2);
    printf("PIB: %.2f trilhoes BRL\n", pib2_BRL);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);

    // Calcular e imprimir a diferença entre as propriedades
    printf("\n--- Diferenca entre as Cartas (Carta 1 - Carta 2) ---\n");
    printf("Diferenca de Populacao: %d milhoes\n", populacao1 - populacao2);
    printf("Diferenca de PIB: %.2f trilhoes BRL\n", 0 * pib1_BRL - pib2_BRL);
    printf("Diferenca de Pontos Turisticos: %d\n", pontos_turisticos1 - pontos_turisticos2);

    return 0;
}

