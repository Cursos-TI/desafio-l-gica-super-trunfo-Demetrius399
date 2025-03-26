#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // cabeçalho do jogo
    printf("*==========================================\n");
    printf("*==========================================\n");
    printf("*    Bem Vindo Ao Jogo Super Trunfo!!!    *\n");
    printf("*==========================================\n");
    printf("*==========================================\n");

    //Dados para cadastrar a carta 01
    char codigoCarta1[04], estado1[50], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Solicitando dados para cadastro carta 01
    printf("Digite o código da carta 01!\n");
    scanf("%3s",codigoCarta1);
    getchar();   // Limpar o buffer do teclado

    printf("Digite o nome do Estado:\n");
    fgets(estado1, 50, stdin);

    printf("Digite o Nome da Cidade:\n");
    fgets(nomeCidade1, 50, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;// Removendo o \n do final da string

    printf("Digite a População do Estado:\n");
    scanf("%d", &populacao1);

    printf("Digite a Área em Km²:\n");
    scanf("%f", &area1);


    printf("Digite o PIB:\n");
    scanf("%f", &pib1);


    printf("Digite a Quantidade de pontos turisticos no seu Estado:\n");
    scanf("%d", &pontosTuristicos1);

    // calculando a densidade populacional e o PIB per capita da carta 01
    float densdadePopulacional1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

           // Exibindo os dados cadastrados
           printf("\n=== CARTA 01 ===\n");
           printf("Código: %s\n", codigoCarta1);
           printf("Estado: %s\n", estado1);
           printf("Cidade: %s\n", nomeCidade1);
           printf("População: %d\n", populacao1);
           printf("Área: %.2f km²\n", area1);
           printf("PIB: R$ %.2f\n", pib1);
           printf("Pontos turísticos: %d\n", pontosTuristicos1);


              //Dados para cadastrar a carta 02
    char codigoCarta2[04], estado2[50], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Solicitando dados para cadastro carta 02
    printf("Digite o código da carta 02:\n");
    scanf("%3s",codigoCarta2);
    getchar();   // Limpar o buffer do teclado

    printf("Digite o nome do Estado:\n");
    fgets(estado2, 50, stdin);

    printf("Digite o Nome da Cidade:\n");
    fgets(nomeCidade2, 50, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;// Removendo o \n do final da string

    printf("Digite a População do Estado:\n");
    scanf("%d", &populacao2);

    printf("Digite a Área em Km²:\n");
    scanf("%f", &area2);


    printf("Digite o PIB:\n");
    scanf("%f", &pib2);


    printf("Digite a Quantidade de pontos turisticos no seu Estado:\n");
    scanf("%i", &pontosTuristicos2);

    // calculando a densidade populacional e o PIB per capita da carta 02
    float densdadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

           // Exibindo os dados cadastrados
           printf("\n=== CARTA 02 ===\n");
           printf("Código: %s\n", codigoCarta2);
           printf("Estado: %s\n", estado2);
           printf("Cidade: %s\n", nomeCidade2);
           printf("População: %d\n", populacao2);
           printf("Área: %.2f km²\n", area2);
           printf("PIB: R$ %.2f\n", pib2);
           printf("Pontos turísticos: %d\n", pontosTuristicos2);

           if (populacao1 > populacao2) {

            printf("\nCarta 01 venceu pela maior população!\n");

        } else if (populacao1 < populacao2) {
            
            printf("\nCarta 02 venceu pela maior população!\n");
        } else {
            printf("\nEmpate na população!\n");
        }
           
           
    
    


    return 0;
}
