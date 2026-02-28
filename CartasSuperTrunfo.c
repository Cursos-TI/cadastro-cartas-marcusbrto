#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Nível mestre
// Tema 3 - Nível aventureiro

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

    // MENU
    int opcao;

    // Área para entrada de dados

    printf("==== PRIMEIRA CARTA ====\n");

    printf("Digite o estado: ");
    scanf(" %[^\n]", estado01);

    printf("Digite o codigo da carta: ");
    scanf("%d", &codigo01);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade01);

    printf("Digite a populacao: ");
    scanf("%u", &populacao01);

    printf("Digite a area em km2: ");
    scanf("%f", &area01);

    printf("Digite o PIB: ");
    scanf("%lf", &pib01);

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
    scanf("%u", &populacao02);

    printf("Digite a area em km2: ");
    scanf("%f", &area02);

    printf("Digite o PIB: ");
    scanf("%lf", &pib02);

    printf("Digite numero de pontos turisticos: ");
    scanf("%d", &num_ponto_turistico02);
    //Calculos

    densidade01 = populacao01 / area01;
    densidade02 = populacao02 / area02;
    pib_per_capita01 = pib01 / populacao01;
    pib_per_capita02 = pib02 / populacao02;

    // Área para exibição dos dados da cidade

    printf("\n==== PRIMEIRA CARTA ====\n");
    printf("Estado: %s\n", estado01);
    printf("Codigo: %d\n", codigo01);
    printf("Nome da cidade: %s\n", nome_cidade01);
    printf("Populacao: %u\n", populacao01);
    printf("Area: %.2f km2\n", area01);
    printf("PIB: %.2f\n", pib01);
    printf("Pontos turisticos: %d\n", num_ponto_turistico01);
    printf("Densidade populacional: %f\n",densidade01);
    printf("PIB per capita: %f\n",pib_per_capita01);


    printf("\n==== SEGUNDA CARTA ====\n");
    printf("Estado: %s\n", estado02);
    printf("Codigo: %d\n", codigo02);
    printf("Nome da cidade: %s\n", nome_cidade02);
    printf("Populacao: %u\n", populacao02);
    printf("Area: %.2f km2\n", area02);
    printf("PIB: %.2f\n", pib02);
    printf("Pontos turisticos: %d\n", num_ponto_turistico02);
    printf("Densidade populacional: %f\n",densidade02);
    printf("PIB per capita: %f\n",pib_per_capita02);

    printf("\n==== MENU DE COMPARACAO ====\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &opcao);

    //Comparando as populacoes das cartas
    switch (opcao)
    {
    case 1:

    	printf("\nComparacao por Populacao\n");
    	printf("%s: %d\n", nome_cidade01, populacao01);
    	printf("%s: %d\n", nome_cidade02, populacao02);

    	if(populacao01 > populacao02)
    	{
    		printf("Resultado: Carta 1 venceu!\n");
    	}
    	else if(populacao02 > populacao01)
    	{
    		printf("Resultado: Carta 2 venceu!\n");
    	}
    	else
    	{
    		printf("Empate!\n");
    	}

    	break;
    case 2:

    	printf("\nComparacao por Area\n");
    	printf("%s: %.2f\n", nome_cidade01, area01);
    	printf("%s: %.2f\n", nome_cidade02, area02);

    	if(area01 > area02)
    	{
    		printf("Resultado: Carta 1 venceu!\n");
    	}
    	else if(area02 > area01)
    	{
    		printf("Resultado: Carta 2 venceu!\n");
    	}
    	else
    	{
    		printf("Empate!\n");
    	}
    	break;
    case 3:

    	printf("\nComparacao por PIB\n");
    	printf("%s: %.2f\n", nome_cidade01, pib01);
    	printf("%s: %.2f\n", nome_cidade02, pib02);

    	if(pib01 > pib02)
    	{
    		printf("Resultado: Carta 1 venceu!\n");
    	}
    	else if(pib02 > pib01)
    	{
    		printf("Resultado: Carta 2 venceu!\n");
    	}
    	else
    	{
    		printf("Empate!\n");
    	}

    	break;
    case 4:

    	printf("\nComparacao por Pontos Turisticos\n");
    	printf("%s: %d\n", nome_cidade01, num_ponto_turistico01);
    	printf("%s: %d\n", nome_cidade02, num_ponto_turistico02);

    	if(num_ponto_turistico01 > num_ponto_turistico02)
    	{
    		printf("Resultado: Carta 1 venceu!\n");
    	}
    	else if(num_ponto_turistico02 > num_ponto_turistico01)
    	{
    		printf("Resultado: Carta 2 venceu!\n");
    	}
    	else
    	{
    		printf("Empate!\n");
    	}

    	break;
    case 5:

    	printf("\nComparacao por Densidade Demografica\n");
    	printf("%s: %f\n", nome_cidade01, densidade01);
    	printf("%s: %f\n", nome_cidade02, densidade02);

    	if(densidade01 < densidade02)
    	{
    		printf("Resultado: Carta 1 venceu!\n");
    	}
    	else if(densidade02 < densidade01)
    	{
    		printf("Resultado: Carta 2 venceu!\n");
    	}
    	else
    	{
    		printf("Empate!\n");
    	}

    	break;
    default:
    	printf("Opcao invalida!\n");
    }
    return 0;
}
