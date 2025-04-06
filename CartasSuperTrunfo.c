#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main(){

    //declarando as variáveis do tipo "CHAR"(somente caracteres)
    char carta[10];
    char estado;
    char codigo[10];
    //declarando variáveis do tipo "INT"(sem ponto oou virgula, somente numeros)
    int populacao, turismo;
    //delcarando variáveis do tipo "FLOAT"(com ponto flutuante)
    float area, pib;
    char nomecidade[50];

    //O usuário irá fornecer os dados da primeira carta e ele fara isso inserindo um dado por vez .
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

    //os dados fornecidos pelo usuário srão exibidos após a execução.
    printf("Carta: %s\n", carta);
    printf("Estado: %c\n", estado);
    printf("codigo: %c%s\n", estado,codigo);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);

    //aqui os dados da segunda carta serão fornecidos pelo usuário, o mesmo precisara foneceser cadas um deles.
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


    //e
    printf("Carta: %s\n", carta);
    printf("Estado: %c\n", estado);
    printf("codigo: %c%s\n", estado,codigo);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);


    return 0;
 }
