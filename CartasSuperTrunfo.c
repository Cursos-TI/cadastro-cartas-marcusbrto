#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades

    //Primeira carta
    char estado01[20],codigo01[5],nome_cidade01[50];
    int populacao01,num_ponto_turistico01;
    float area01, pib01;

    //Segunda carta
    char estado02[20],codigo02[5],nome_cidade02[50];
    int populacao02,num_ponto_turistico02;
    float area02, pib02;

    // Área para entrada de dados

    printf("==== PRIMEIRA CARTA ====\n");
    printf("Digite o estado: ");
    scanf("%s",&estado01);

    printf("Digite o codigo da carta: ");
    scanf("%s",codigo01);

    printf("Digite o nome cidade: ");
    scanf("%s",nome_cidade01);

    printf("Digite a populacao: ");
    scanf("%d",&populacao01);

    printf("Digite a area em km2: ");
    scanf("%f",&area01);

    printf("Digite o PIB: ");
    scanf("%f",&pib01);

    printf("Digite numero de ponto turistico: ");
    scanf("%d",&num_ponto_turistico01);

    printf("==== SEGUNDA CARTA ====\n");
    printf("Digite o estado: ");
    scanf("%s",&estado02);

    printf("Digite o codigo da carta: ");
    scanf("%s",codigo02);

    printf("Digite o nome cidade: ");
    scanf("%s",nome_cidade02);

    printf("Digite a populacao: ");
    scanf("%d",&populacao02);

    printf("Digite a area em km2: ");
    scanf("%f",&area02);

    printf("Digite o PIB: ");
    scanf("%f",&pib02);

    printf("Digite numero de ponto turistico: ");
    scanf("%d",&num_ponto_turistico02);

    // Área para exibição dos dados da cidade

    printf("\n==== PRIMEIRA CARTA ====\n");
    printf("Estado: %s\n",estado01);
    printf("Codigo: %s\n",codigo01);
    printf("Nome cidade: %s\n",nome_cidade01);
    printf("Populacao: %d\n",populacao01);
    printf("Area em km2: %.2f\n",area01);
    printf("PIB: %.2f\n",pib01);
    printf("Numero de pontos turisticos: %d\n",num_ponto_turistico01);

    printf("\n==== SEGUNDA CARTA ====\n");
    printf("Estado: %s\n",estado02);
    printf("Codigo: %s\n",codigo02);
    printf("Nome cidade: %s\n",nome_cidade02);
    printf("Populacao: %d\n",populacao02);
    printf("Area em km2: %.2f\n",area02);
    printf("PIB: %.2f\n",pib02);
    printf("Numero de pontos turisticos: %d\n",num_ponto_turistico02);

    return 0;
}
