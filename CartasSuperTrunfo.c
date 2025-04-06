#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main(){

    char carta[10];
    char estado;
    char codigo[10];
    int populacao, turismo;
    float area, pib;
    char nomecidade[50];


    printf("Carta: ");
    scanf("%s", &carta);

    printf("Digite a inicial do estado: ");
    scanf("%s", &estado);

    printf("Digite o cóldigo: ");
    scanf("%s", &codigo);

    printf("Digite a pupolaçõa: ");
    scanf("%d", &populacao);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &turismo);

    printf("Nome da cidade: ");
    scanf("%s", &nomecidade);

    printf("Informe a área: ");
    scanf("%f", &area);

    printf("Informe o PIB: ");
    scanf("%f", &pib);


    printf("Carta: ");
    scanf("%s", &carta);

    printf("Digite a inicial do estado: ");
    scanf("%s", &estado);

    printf("Digite o cóldigo: ");
    scanf("%s", &codigo);

    printf("Digite a pupolaçõa: ");
    scanf("%d", &populacao);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &turismo);

    printf("Nome da cidade: ");
    scanf("%s", &nomecidade);

    printf("Informe a área: ");
    scanf("%f", &area);

    printf("Informe o PIB: ");
    scanf("%f", &pib);


    printf("Carta: %s\n", carta);
    printf("Esatdo: %s", estado);
    printf("codigo: %s+%s", estado,carta);
    printf("População: %d", populacao);
    printf("Área: %.2f", area);
    printf("PIB: %.2f", pib);

    printf("Carta: %s\n", carta);
    printf("Esatdo: %s", estado);
    printf("codigo: %s+%s", estado,carta);
    printf("População: %d", populacao);
    printf("Área: %.2f", area);
    printf("PIB: %.2f", pib);


    return 0;
 }
