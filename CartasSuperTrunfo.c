#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Nível Mestre
// Tema 3 - Nível Mestre

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades

    // Primeira carta
    char estado01[20], nome_cidade01[50];
    unsigned int populacao01;
    double pib01;
    int num_ponto_turistico01, codigo01;
    float area01, densidade01, pib_per_capita01, super_poder01, valor1_carta1, valor1_carta2, soma1;

    // Segunda carta
    char estado02[20], nome_cidade02[50];
    unsigned int populacao02;
    double pib02;
    int num_ponto_turistico02, codigo02;
    float area02, densidade02, pib_per_capita02, super_poder02, valor2_carta1, valor2_carta2, soma2;

    // MENU
    int atributo1,atributo2;

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

	//Calculo super poder
	super_poder01 = populacao01 + area01 + pib01 + num_ponto_turistico01 + pib_per_capita01 + densidade01;
	super_poder02 = populacao02 + area02 + pib02 + num_ponto_turistico02 + pib_per_capita02 + densidade02;

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

    printf("\n==== ESCOLHA O PRIMEIRO ATRIBUTO ====\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
	printf("6 - Super Poder\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &atributo1);

	printf("\n==== ESCOLHA O SEGUNDO ATRIBUTO ====\n");
	printf("1 - Populacao\n");
	printf("2 - Area\n");
	printf("3 - PIB\n");
	printf("4 - Pontos Turisticos\n");
	printf("5 - Densidade Demografica\n");
	printf("6 - Super Poder\n");
	printf("Escolha o atributo para comparar: ");
	scanf("%d", &atributo2);

	if(atributo1 == atributo2)
	{
		printf("Voce nao pode escolher o mesmo atributo duas vezes!\n");
	}

    //Primeiro atributo
	switch(atributo1)
	{
	case 1:
		valor1_carta1 = populacao01;
		valor1_carta2 = populacao02;
		break;

	case 2:
		valor1_carta1 = area01;
		valor1_carta2 = area02;
		break;

	case 3:
		valor1_carta1 = pib01;
		valor1_carta2 = pib02;
		break;

	case 4:
		valor1_carta1 = num_ponto_turistico01;
		valor1_carta2 = num_ponto_turistico02;
		break;

	case 5:
		valor1_carta1 = densidade01;
		valor1_carta2 = densidade02;
		break;

	case 6:
		valor1_carta1 = super_poder01;
		valor1_carta2 = super_poder02;
		break;
	}
	//Segundo atributo
	switch(atributo2)
	{
	case 1:
		valor2_carta1 = populacao01;
		valor2_carta2 = populacao02;
		break;

	case 2:
		valor2_carta1 = area01;
		valor2_carta2 = area02;
		break;

	case 3:
		valor2_carta1 = pib01;
		valor2_carta2 = pib02;
		break;

	case 4:
		valor2_carta1 = num_ponto_turistico01;
		valor2_carta2 = num_ponto_turistico02;
		break;

	case 5:
		valor2_carta1 = densidade01;
		valor2_carta2 = densidade02;
		break;

	case 6:
		valor2_carta1 = super_poder01;
		valor2_carta2 = super_poder02;
		break;
	}
	//soma final
	soma1 = valor1_carta1 + valor2_carta1;
	soma2 = valor1_carta2 + valor2_carta2;

	//Resultado
	printf("\nSoma Carta 1: %.2f\n", soma1);
	printf("Soma Carta 2: %.2f\n", soma2);

	if(soma1 == soma2)
		printf("Empate!\n");
	else
		printf("Vencedor: %s\n", soma1 > soma2 ? "Carta 1" : "Carta 2");

    return 0;
}
