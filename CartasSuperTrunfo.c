#include <stdio.h>

int main() {

// Declara variaveis para armazenar os dados da carta

    int numero_carta;
    char letra_carta;
    char cidade[50];
    int populacao;

// Solicita ao usuario os dados da carta

printf("Digite o numero da carta: \n");
scanf("%d", &numero_carta);

printf("Digite a letra da carta: \n");
scanf(" %c", &letra_carta);

printf("Digite o nome da cidade: \n");
scanf(" %s", &cidade);

printf("Digite a populacao: \n");
scanf("%d", &populacao);

printf("Digite a area da cidade: \n");
float area;
scanf("%f", &area);

printf("Digite o PIB da cidade: \n");
float pib;
scanf("%f", &pib);

printf("Digite o numero de pontos turisticos: \n");
int pontos_turisticos;
scanf("%d", &pontos_turisticos);

// Exibe os dados da carta

printf("\n------------- Dados da Carta ------------- \n");

printf("Carta escolhida: %c%d - Cidade: %s\n", letra_carta, numero_carta, cidade);
printf("Populacao: %d\n", populacao);
printf("Area: %.2f km2\n", area);
printf("PIB: %.2f bilhoes de reais\n", pib);
printf("Pontos Turisticos: %d\n", pontos_turisticos);

    return 0;

}
