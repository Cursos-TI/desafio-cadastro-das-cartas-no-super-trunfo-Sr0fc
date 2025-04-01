#include <stdio.h>

int main() {
    // Estrutura de dados para duas cartas
    char estado[2][3];     // Estado como string (ex: "SP")
    int codigocarta[2];    // Código numérico da carta
    char cidade[2][50];    // Nome da cidade
    unsigned long int populacao[2]; // Número da população
    float area[2];         // Área da cidade
    float pib[2];          // PIB da cidade
    int turisticos[2];     // Número de pontos turísticos
    float densidadepopulacional[2];   // Densidade populacional
    float pibper[2];       // PIB per capita
    float superPoder[2];   // Super Poder

    // Cadastro das duas cartas
    for (int i = 0; i < 2; i++) {
        printf("\nCadastro da Carta %d:\n", i + 1);
        printf("Digite a sigla do estado (ex: SP, RJ): ");
        scanf("%2s", estado[i]);

        printf("Digite o código da carta: ");
        scanf("%d", &codigocarta[i]);
        getchar(); // Limpa o buffer do Enter após o scanf anterior

        printf("Digite o nome da cidade: ");
        fgets(cidade[i], 50, stdin);

        printf("Digite o número da população: ");
        scanf("%lu", &populacao[i]);

        printf("Informe a área (km²): ");
        scanf("%f", &area[i]);

        printf("Informe o PIB (em bilhões): ");
        scanf("%f", &pib[i]);

        printf("Quantidade de pontos turísticos: ");
        scanf("%d", &turisticos[i]);
    }

    // Cálculo dos atributos derivados
    for (int i = 0; i < 2; i++) {
        densidadepopulacional[i] = (area[i] > 0) ? (populacao[i] / area[i]) : 0;
        pibper[i] = (populacao[i] > 0) ? (pib[i] * 1e9) / populacao[i] : 0;
        superPoder[i] = populacao[i] + area[i] + (pib[i] * 1e9) + turisticos[i] + pibper[i] + (1.0 / (densidadepopulacional[i] + 1));
    }

    // Comparação dos atributos e exibição dos resultados
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", (populacao[0] > populacao[1]) ? 1 : 2, (populacao[0] > populacao[1]));
    printf("Área: Carta %d venceu (%d)\n", (area[0] > area[1]) ? 1 : 2, (area[0] > area[1]));
    printf("PIB: Carta %d venceu (%d)\n", (pib[0] > pib[1]) ? 1 : 2, (pib[0] > pib[1]));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (turisticos[0] > turisticos[1]) ? 1 : 2, (turisticos[0] > turisticos[1]));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadepopulacional[0] < densidadepopulacional[1]) ? 1 : 2, (densidadepopulacional[0] < densidadepopulacional[1]));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibper[0] > pibper[1]) ? 1 : 2, (pibper[0] > pibper[1]));
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder[0] > superPoder[1]) ? 1 : 2, (superPoder[0] > superPoder[1]));
    
    return 0;
}
