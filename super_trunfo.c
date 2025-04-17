#include <stdio.h>

int main() {
    // Variáveis para a cidade de Recife
    int codigo1;
    char estado1[100];
    char nome1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis para a cidade de Salvador
    int codigo2;
    char estado2[100];
    char nome2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro da cidade Recife
    printf("=== Cadastro Carta 1 ===\n");

    printf("Estado: ");
    scanf("%s", estado1);
   
    printf("Código: ");
    scanf("%d", &codigo1);

    printf("Nome: ");
    scanf(" %s", nome1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da cidade Salvador
    printf("\n=== Cadastro Carta 2 ===\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código: ");
    scanf("%d", &codigo2);

    printf("Nome: ");
    scanf(" %s", nome2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %d\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n=== Carta 2===\n");
    printf("Código: %d\n", codigo2);
    printf("Estado: %s\n", estado1);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}