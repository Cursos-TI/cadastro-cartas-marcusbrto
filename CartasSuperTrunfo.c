#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Nível mestre

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades

    // Primeira carta
    char estado01[20], nome_cidade01[50];
    unsigned int populacao01;
    double pib01;
    int num_ponto_turistico01, codigo01;
    float area01, densidade01, pib_per_capita01;

    // Segunda carta
    char estado02[20], nome_cidade02[50];
    unsigned int populacao02;
    double pib02;
    int num_ponto_turistico02, codigo02;
    float area02, densidade02, pib_per_capita02;

    //Resultados
    int resultado_populacao,resultado_area,resultado_pib,resultado_pontos,resultado_densidade,resultado_pib_per_capita;

    float superpoder01, superpoder02;
    int resultado_super_poder;

    // Área para entrada de dados

    printf("==== PRIMEIRA CARTA ====\n");

    printf("Digite o estado: ");
    scanf(" %[^\n]", estado01);

    printf("Digite o codigo da carta: ");
    scanf("%d", &codigo01);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade01);

    printf("Digite a populacao: ");
    scanf("%d", &populacao01);

    printf("Digite a area em km2: ");
    scanf("%f", &area01);

    printf("Digite o PIB: ");
    scanf("%f", &pib01);

    printf("Digite numero de pontos turisticos: ");
    scanf("%d", &num_ponto_turistico01);


    printf("\n==== SEGUNDA CARTA ====\n");

    printf("Digite o estado: ");
    scanf(" %[^\n]", estado02);

    printf("Digite o codigo da carta: ");
    scanf("%d", &codigo02);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade02);

    printf("Digite a populacao: ");
    scanf("%d", &populacao02);

    printf("Digite a area em km2: ");
    scanf("%f", &area02);

    printf("Digite o PIB: ");
    scanf("%f", &pib02);

    printf("Digite numero de pontos turisticos: ");
    scanf("%d", &num_ponto_turistico02);
    //Calculos

    densidade01 = populacao01 / area01;
    densidade02 = populacao02 / area02;
    pib_per_capita01 = pib01 / populacao01;
    pib_per_capita02 = pib02 / populacao02;

    superpoder01 = populacao01 + area01 + pib01 + num_ponto_turistico01 + densidade01 + pib_per_capita01;
    superpoder02 = populacao02 + area02 + pib02 + num_ponto_turistico02 + densidade02 + pib_per_capita02;

    // Área para exibição dos dados da cidade

    printf("\n==== PRIMEIRA CARTA ====\n");
    printf("Estado: %s\n", estado01);
    printf("Codigo: %d\n", codigo01);
    printf("Nome da cidade: %s\n", nome_cidade01);
    printf("Populacao: %d\n", populacao01);
    printf("Area: %.2f km2\n", area01);
    printf("PIB: %.2f\n", pib01);
    printf("Pontos turisticos: %d\n", num_ponto_turistico01);
    printf("Densidade populacional: %f\n",densidade01);
    printf("PIB per capita: %f\n",pib_per_capita01);


    printf("\n==== SEGUNDA CARTA ====\n");
    printf("Estado: %s\n", estado02);
    printf("Codigo: %d\n", codigo02);
    printf("Nome da cidade: %s\n", nome_cidade02);
    printf("Populacao: %d\n", populacao02);
    printf("Area: %.2f km2\n", area02);
    printf("PIB: %.2f\n", pib02);
    printf("Pontos turisticos: %d\n", num_ponto_turistico02);
    printf("Densidade populacional: %f\n",densidade02);
    printf("PIB per capita: %f\n",pib_per_capita02);

    //Comparando as cartas
    resultado_populacao = populacao01 > populacao02;
    resultado_area = area01 > area02;
    resultado_pib = pib01 > pib02;
    resultado_pontos = num_ponto_turistico01 > num_ponto_turistico02;
    /* densidade é o contrário: menor vence */
    resultado_densidade = densidade01 < densidade02;
    resultado_pib_per_capita = pib_per_capita01 > pib_per_capita02;
    resultado_super_poder = superpoder01 > superpoder02;

    printf("\n==== RESULTADO DAS COMPARACOES ====\n");

    printf("Populacao (Carta 1 venceu?): %d\n", resultado_populacao);
    printf("Area (Carta 1 venceu?): %d\n", resultado_area);
    printf("PIB (Carta 1 venceu?): %d\n", resultado_pib);
    printf("Pontos Turisticos (Carta 1 venceu?): %d\n", resultado_pontos);
    printf("Densidade Populacional (Carta 1 venceu?): %d\n", resultado_densidade);
    printf("PIB per capita (Carta 1 venceu?): %d\n", resultado_pib_per_capita);

    printf("\nSuper Poder Carta 1: %f\n", superpoder01);
    printf("Super Poder Carta 2: %f\n", superpoder02);

    printf("Super Poder (Carta 1 venceu?): %d\n", resultado_super_poder);



    return 0;
}
