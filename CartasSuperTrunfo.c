#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
        
    // Área para definição das variáveis para armazenar
    
    // cidade 1
  
    char estado1;
    char codigo1[4];
    char nomedacidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int numerodepontosturisticos1;

    // cidade 2

    char estado2;
    char codigo2[4];
    char nomedacidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int numerodepontosturisticos2;

    // Área para entrada de dados

    // Cidade 1

    printf("Digite uma letra de A a H, representando o primeiro estado: \n");
    scanf("%c", &estado1);

    printf("Digite a letra do primeiro estado e um código de 01 a 04:\n");
    scanf("%s", codigo1);

    printf("Digite o nome da primeira cidade: \n");
    scanf("%s", nomedacidade1);

    printf("Digite o número de habitantes da primeira cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite quantos quilômetros quadrados tem a primeira cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da primeira cidade: \n");
    scanf("%d", &numerodepontosturisticos1);

    // Comentário para separar as entradas de dados entre as cidades.

    printf("\n");
    printf("Ok, agora vamos para a segunda cidade! \n");
    printf("\n");
    
    // Cidade 2

    printf("Digite uma letra de A a H, representando o segundo estado: \n");
    scanf(" %c", &estado2);

    printf("Digite a letra do segundo estado e um código de 01 a 04:\n");
    scanf("%s", codigo2);

    printf("Digite o nome da segunda cidade: \n");
    scanf("%s", nomedacidade2);

    printf("Digite o número de habitantes da segunda cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite quantos quilômetros quadrados tem a segunda cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da segunda cidade: \n");
    scanf("%d", &numerodepontosturisticos2);

    // Área para exibição dos dados da cidade

    // Cidade 1

    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", nomedacidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de pontos Turísticos: %d \n", numerodepontosturisticos1);

    // Cidade 2
    printf("\n");
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nomedacidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de pontos Turísticos: %d \n", numerodepontosturisticos2);

    return 0;


    }