#include <stdio.h>

struct Card {
    int card;
    char state[2];
    char code[3];
    char name[100];
    int population;
    float area;
    float PIB;
    int points;
    float pibPerCapta;
    float densidadePopulacional;
    float power;
};

int main() {

    struct Card card1, card2;

    printf("======= Super Trunfo =======\n\n");

    printf("Cadastre as suas cartas \n\n");

    printf("======= Carta 01 =======\n\n");

    printf("Insira um dos estados entre A e H:\n");
    scanf(" %s", card1.state);

    printf("Insira o codigo da carta entre 01 e 04: \n");
    scanf(" %s", card1.code);

    printf("Insira o nome da cidade: \n");
    scanf(" %s", card1.name);

    printf("Insira o numero de habitantes da cidade: \n");
    scanf(" %d", &card1.population);

    printf("Insira a area da cidade em KM: \n");
    scanf("  %f", &card1.area);

    printf("Insira o PIB( Produto Interno Bruto) da cidade: \n");
    scanf("  %f", &card1.PIB);

    printf("Insira a quantidade de pontos turisticos que ha na cidade: \n");
    scanf("  %d", &card1.points);

    card1.pibPerCapta = card1.PIB / (float)card1.population;
    card1.densidadePopulacional = (float)card1.population / card1.area;
    card1.power = (float)card1.population + card1.area + card1.PIB + (float)card1.points + card1.pibPerCapta + (card1.area / (float)card1.population);

    printf("Carta 01");
    printf("Estado: %s \n", card1.state);
    printf("Codigo: %s%s \n", card1.state, card1.code);
    printf("Nome: %s \n", card1.name);
    printf("Populacao: %d \n", card1.population);
    printf("Area: %.2f Km \n", card1.area);
    printf("PIB: %.2f Bilhoes de reais \n", card1.PIB);
    printf("Numero de Pontos Turisticos: %d \n", card1.points);
    printf("Densidade Populacional: %.2f \n", card1.densidadePopulacional);
    printf("PIB per capita: %.2f \n", card1.pibPerCapta);

    //Cadastro Carta 2

    printf("======= Carta 02 =======\n\n");

    printf("Cadastre as suas cartas \n\n");

    printf("Insira um dos estados entre A e H:\n");
    scanf(" %s", card2.state);

    printf("Insira o codigo da carta entre 01 e 04: \n");
    scanf(" %s", card2.code);

    printf("Insira o nome da cidade: \n");
    scanf(" %s", card2.name);

    printf("Insira o numero de habitantes da cidade: \n");
    scanf(" %d", &card2.population);

    printf("Insira a area da cidade em KM: \n");
    scanf("  %f", &card2.area);

    printf("Insira o PIB( Produto Interno Bruto) da cidade: \n");
    scanf("  %f", &card2.PIB);

    printf("Insira a quantidade de pontos turisticos que ha na cidade: \n");
    scanf("  %d", &card2.points);

    card2.pibPerCapta = card2.PIB / (float)card2.population;
    card2.densidadePopulacional = (float)card2.population / card2.area;
    card2.power = (float)card2.population + card2.area + card2.PIB + (float)card2.points + card2.pibPerCapta + (card2.area / (float)card2.population);


    printf("Carta Cadastrada com sucesso!");

    printf("Carta 01");
    printf("Estado: %s \n", card2.state);
    printf("Codigo: %s%s \n", card2.state, card2.code);
    printf("Nome: %s \n", card2.name);
    printf("Populacao: %d \n", card2.population);
    printf("Area: %.2f Km \n", card2.area);
    printf("PIB: %.2f Bilhoes de reais \n", card2.PIB);
    printf("Numero de Pontos Turisticos: %d \n", card2.points);
    printf("Densidade Populacional: %.2f \n", card2.densidadePopulacional);
    printf("PIB per capita: %.2f \n", card2.pibPerCapta);

    printf("Deseja cadastrar outra carta? S/N ");

    printf("===================================\n");
    printf("Comparacao de Cartas:\n");
    printf("===================================\n");

    if (card1.population > card2.population) {
        printf("População: Carta 01 Venceu \n");
    } else {
        printf("População: Carta 02 Venceu \n");
    }

    if (card1.area > card2.area) {
        printf("Area: Carta 01 Venceu \n");
    } else {
        printf("Area: Carta 02 Venceu \n");
    }

    if (card1.PIB > card2.PIB) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else {
        printf("PIB: Carta 2 venceu (0)\n");
    }

    if (card1.points > card2.points) {
        printf("Pontos Turisticos: Carta 1 venceu (1)\n");
    } else {
        printf("Pontos Turisticos: Carta 2 venceu (0)\n");
    }

    if (card1.densidadePopulacional < card1.densidadePopulacional) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }

    if (card1.pibPerCapta > card2.pibPerCapta) {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    }

    if (card1.power > card2.power) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }

    return 0;
}
