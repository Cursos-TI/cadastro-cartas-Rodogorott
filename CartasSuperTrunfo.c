#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
        
    // Área para definição das variáveis para armazenar

    char estado;
    char codigo[4];
    char nomedacidade[20];
    int populacao;
    float area;
    float pib;
    int numerodepontosturisticos;

    // Área para entrada de dados

    printf("Digite uma letra de A a H, representando o primeiro estado: \n");
    scanf("%c", &estado);

    printf("Digite a letra do primeiro estado e um código de 01 a 04:\n");
    scanf("%s", codigo);

    printf("Digite o nome da primeira cidade: \n");
    scanf("%s", nomedacidade);

    printf("Digite o número de habitantes da primeira cidade: \n");
    scanf("%d", &populacao);

    printf("Digite quantos quilômetros quadrados tem a primeira cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da primeira cidade: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos da primeira cidade: \n");
    scanf("%d", &numerodepontosturisticos);

    // Área para exibição dos dados da cidade

    printf("Carta 1: \n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da cidade: %s \n", nomedacidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f \n", area);
    printf("PIB: %.2f \n", pib);
    printf("Número de pontos Turísticos: %d \n", numerodepontosturisticos);

    return 0;


    }