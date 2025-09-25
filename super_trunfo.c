#include <stdio.h>

int main() {
    int card = 1;
    char state[2];
    char code[3];
    char name[100];
    int population = 0;
    float area = 0;
    float PIB = 0;
    int points = 0;
    float pibPerCapta;
    float densidadePopulacional;

    printf("======= Super Trunfo =======\n\n");

    printf("Cadastre as suas cartas \n\n");

    printf("Insira um dos estados entre A e H:\n");
    scanf(" %s", state);

    printf("Insira o codigo da carta entre 01 e 04: \n");
    scanf(" %s", code);

    printf("Insira o nome da cidade: \n");
    scanf(" %s", name);

    printf("Insira o numero de habitantes da cidade: \n");
    scanf(" %d", &population);

    printf("Insira a area da cidade em KM: \n");
    scanf("  %f", &area);

    printf("Insira o PIB( Produto Interno Bruto) da cidade: \n");
    scanf("  %f", &PIB);

    printf("Insira a quantidade de pontos turisticos que ha na cidade: \n");
    scanf("  %d", &points);

    pibPerCapta = PIB / population;
    densidadePopulacional = population / area;

    printf("Carta Cadastrada com sucesso!");

    printf("Carta %d \n", card);
    printf("Estado: %s \n", state);
    printf("Codigo: %s%s \n", state, code);
    printf("Nome: %s \n", name);
    printf("Populacao: %d \n", population);
    printf("Area: %.2f Km \n", area);
    printf("PIB: %.2f Bilhoes de reais \n", PIB);
    printf("Numero de Pontos Turisticos: %d \n", points);
    printf("Densidade Populacional: %.2f \n", densidadePopulacional);
    printf("PIB per capita: %.2f \n", pibPerCapta);

    printf("Deseja cadastrar outra carta? S/N ");

    return 0;
}
