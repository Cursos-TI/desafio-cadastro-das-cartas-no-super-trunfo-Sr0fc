#include <stdio.h>

int main(){

    // Definição da estrutura para armazenar dados das cartas
    char estado[3];     // Estado como string (ex: "SP")
    int codigocarta;    // Código numérico da carta
    char cidade[50];    // Nome da cidade
    int populacao;      // Número da população
    float area;         // Área da cidade
    float pib;          // PIB da cidade
    int turisticos;     // Número de pontos turísticos
    float densidade;    // Densidade populacional
    float pibper;       // PIB per Capta

    // Cadastro das cidades
    printf("Digite a sigla do estado (ex: SP, RJ): \n");
    scanf("%2s", &estado);

    printf("Digite o código da carta: \n");
    scanf("%d", &codigocarta);

    getchar(); // Limpa o buffer do Enter após o scanf anterior

    printf("Digite o nome da cidade: \n");
    fgets(cidade, 50, stdin); // Permite nomes compostos

    printf("Digite o número da população: \n");
    scanf(" %d", &populacao);

    printf("Informe a área: \n");
    scanf("%f", &area);

    printf("Informe o PIB: \n");
    scanf("%f", &pib);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &turisticos);

    // Exibição dos dados cadastrados
    printf("\n--- Dados da Carta ---\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %d\n", codigocarta);
    printf("Cidade: %s", cidade); // `fgets` já adiciona `\n`
    printf("População: %d\n", populacao);
    printf("Área: %2f km²\n", area);
    printf("PIB: %2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", turisticos);

    return 0;
}