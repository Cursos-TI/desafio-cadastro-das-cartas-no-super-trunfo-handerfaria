#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    //declarando as variáveis da primeira carta!
    
    char estado1, codigoDaCarta1[4], nomeDaCidade1[50];
    int populacao1, numeroDePontosTuristicos1;
    float areaEmKm1, pib1;
    
    //declarando as variáveis da segunda carta!
    char estado2, codigoDaCarta2[4],nomeDaCidade2[50] ;
    int populacao2, numeroDePontosTuristicos2;
    float areaEmKm2, pib2;
      
    // Entrada de dados carta 1:
        printf("Digite o estado da primeira carta:\n");
        scanf("%c", &estado1 );
        printf("Digite o código da carta 1:\n");
        scanf("%s", codigoDaCarta1);
        printf("Nome da cidade1:\n");
        scanf("%s", nomeDaCidade1 );
        printf("População:\n");
        scanf("%d", &populacao1);
        printf("Área em Km²:\n");
        scanf("%f", &areaEmKm1);
        printf("Informe o PIB:\n");
        scanf("%f", &pib1);
        printf("Número de pontos turísticos:\n");
        scanf("%d", &numeroDePontosTuristicos1);
        
        //Exibindo os dados da carta 1
        printf("\nCarta1:\n");
        printf("Estado1: %c\n", estado1);
        printf("Código carta 1: %s\n", codigoDaCarta1);
        printf("Nome cidade 1: %s\n", nomeDaCidade1);
        printf("População: %d\n", populacao1);
        printf("Área em Km²: %.2f\n", areaEmKm1);
        printf("PIB: %.2f bilhões de R$\n", pib1);
        printf("Pontos turísticos: %d\n", numeroDePontosTuristicos1);
        
        // Entrada de dados carta 2:
        printf("Digite o estado da segunda carta:\n");
        scanf("%c", &estado2 );
        printf("Código da carta 2:\n");
        scanf("%s", codigoDaCarta2);
        printf("Nome da cidade2:\n");
        scanf("%s", nomeDaCidade2 );
        printf("População:\n");
        scanf("%d", &populacao2);
        printf("Área em Km²:\n");
        scanf("%f", &areaEmKm2);
        printf("Informe o PIB:\n");
        scanf("%f", &pib2);
        printf("Número de pontos turísticos:\n");
        scanf("%d", &numeroDePontosTuristicos2);
        
        //Exibindo os dados da carta 2
        printf("\nCarta2:\n");
        printf("Estado: %c\n", estado2);
        printf("Código carta 2: %s\n", codigoDaCarta2);
        printf("Nome cidade 2: %s\n", nomeDaCidade2);
        printf("População: %d\n", populacao2);
        printf("Área em Km²: %.2f\n", areaEmKm2);
        printf("PIB: %.2f bilhões de R$\n", pib2);
        printf("Pontos turísticos: %d\n", numeroDePontosTuristicos2);
        
        return 0;
    }

        
    
    
    
    
    
  
    
    
    
        
    
     
    

    
