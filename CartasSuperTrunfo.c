#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    //declarando as variáveis da primeira carta!
    
    char estado1;
    char codigo_da_carta1[4];
    char nome_da_cidade1[50];
    int populacao1;
    float area_em_km1;
    float pib1;
    int numero_de_pontos_turisticos1;
  
    //declarando as variáveis da segunda carta!
    
    char estado2;
    char codigo_da_carta2[4];
    char nome_da_cidade2[50];
    int populacao2;
    float area_em_km2;
    float pib2;
    int numero_de_pontos_turisticos2;

    // Entrada de dados carta 1:
    printf("Escolha sua carta:\n");
    printf("Digite o estado que deseja:\n");
    scanf("%c", &estado1 );
    printf("Código da carta A01:\n");
    scanf("%s", codigo_da_carta1);
    printf("Nome da cidade1:\n");
    scanf("%[^\n]%*c", nome_da_cidade1 );
    printf("População:\n");
    scanf("%d", &populacao1);
    printf("Área em Km²:\n");
    scanf("%f", &area_em_km1);
    printf("Informe o PIB:\n");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos:\n");
    scanf("%d", &numero_de_pontos_turisticos1);

    // Entrada de dados carta 2:
     
    printf("Escolha sua carta:\n");
    printf("Digite o estado que deseja:\n");
    scanf("%c", &estado2 );
    printf("Código da carta B02:\n");
    scanf("%s", codigo_da_carta2);
    printf("Nome da cidade2:\n");
    scanf("%[^\n]%*c", nome_da_cidade2 );
    printf("População:\n");
    scanf("%d", &populacao2);
    printf("Área em Km²:\n");
    scanf("%f", &area_em_km2);
    printf("Informe o PIB:\n");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos:\n");
    scanf("%d", &numero_de_pontos_turisticos2);
    
    //Exibindo os dados da carta 1
    printf("\nCarta1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código carta 1: %s\n", codigo_da_carta1);
    printf("Nome cidade 1: %s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em Km²: %.2f\n", area_em_km1);
    printf("PIB: %.2f bilhões de R$\n", pib1);
    printf("Pontos turísticos: %d", numero_de_pontos_turisticos1);
    
    //Exibindo os dados da carta 2
    printf("\nCarta2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código carta 2: %s\n", codigo_da_carta2);
    printf("Nome cidade 2: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em Km²: %.2f\n", area_em_km2);
    printf("PIB: %.2f bilhões de R$\n", pib2);
    printf("Pontos turísticos: %d", numero_de_pontos_turisticos2);

    
    return 0;

}
