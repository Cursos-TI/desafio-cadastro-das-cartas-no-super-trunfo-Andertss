#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main(){

    char carta, estado, codigo;
    int populacao, turismo;
    float area, pib;
    char nomecidade[50];

    printf("Carta: \n");
    scanf("%d", &carta);

    printf("Digite inicial do estado: \n");
    scanf("%d", &estado);

    printf("Digite o cóldigo: \n");
    scanf("%d", &codigo);

    printf("Digite sua altura: \n");
    scanf("%d", &populacao);

    printf("Digite sua altura: \n");
    scanf("%d", &turismo);

    printf("Digite da cidade: \n");
    scanf("%s", &nomecidade);

    printf("Digite sua matrícula: \n");
    scanf("%f", &pib);

    printf("Digite sua matrícula: \n");
    scanf("%f", &area);


    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
