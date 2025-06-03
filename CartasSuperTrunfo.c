#include <stdio.h>

struct Carta {
    char estado[15];
    char cidade[25];
    char codigo[11]; // até 10 letras
    unsigned long int populacao;
    int pontos;
    float area;
    float pib;
    float densidade;
    float pib_per_capita;
    float super_poder;
};

float calcularSuperPoder(struct Carta c) {
    float inverso_densidade = 1.0 / c.densidade;
    return (float)c.populacao + c.area + c.pib + c.pontos + c.pib_per_capita + inverso_densidade;
}

int main() {
    struct Carta carta1, carta2;

    printf("\n===== BEM VINDO AO SUPER TRUNFO =====\n\n");

    // CARTA 1
    printf(">> Digite os dados da Carta 1:\n");
    printf("Estado (ex: Acre): ");
    scanf(" %[^\n]", carta1.estado);
    printf("Codigo (ex: A01): ");
    scanf(" %10s", carta1.codigo);
    printf("Cidade ( ex: Rio Branco): ");
    scanf(" %[^\n]", carta1.cidade);
    printf("Populacao: ");
    scanf("%lu", &carta1.populacao);
    printf("Area (em KM2): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &carta1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontos);
    printf("\n");

    // CARTA 2
    printf(">> Digite os dados da Carta 2:\n");
    printf("Estado (ex: Bahia): ");
    scanf(" %[^\n]", carta2.estado);
    printf("Codigo (ex: B02): ");
    scanf(" %10s", carta2.codigo);
    printf("Cidade ( ex: Salvador): ");
    scanf(" %[^\n]", carta2.cidade);
    printf("Populacao: ");
    scanf("%lu", &carta2.populacao);
    printf("Area (em KM2): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &carta2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontos);

    // CÁLCULOS
    carta1.densidade = (float)carta1.populacao / carta1.area;
    carta2.densidade = (float)carta2.populacao / carta2.area;

    carta1.pib_per_capita = carta1.pib / (float)carta1.populacao;
    carta2.pib_per_capita = carta2.pib / (float)carta2.populacao;

    carta1.super_poder = calcularSuperPoder(carta1);
    carta2.super_poder = calcularSuperPoder(carta2);

    // EXIBIÇÃO DOS DADOS
    printf("\n===== DADOS DAS CARTAS =====\n");
    printf("\n--- CARTA 1 ---\n");
    printf("Estado                : %s\n", carta1.estado);
    printf("Codigo                : %s\n", carta1.codigo);
    printf("Cidade                : %s\n", carta1.cidade);
    printf("Populacao             : %lu\n", carta1.populacao);
    printf("Area (KM2)            : %.2f\n", carta1.area);
    printf("PIB (bilhoes R$)      : %.2f\n", carta1.pib);
    printf("Pontos turisticos     : %d\n", carta1.pontos);
    printf("Densidade Populacional: %.2f\n", carta1.densidade);
    printf("PIB per Capita        : %.6f\n", carta1.pib_per_capita);
    printf("Super Poder           : %.2f\n", carta1.super_poder);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado                : %s\n", carta2.estado);
    printf("Codigo                : %s\n", carta2.codigo);
    printf("Cidade                : %s\n", carta2.cidade);
    printf("Populacao             : %lu\n", carta2.populacao);
    printf("Area (KM2)            : %.2f\n", carta2.area);
    printf("PIB (bilhoes R$)      : %.2f\n", carta2.pib);
    printf("Pontos turisticos     : %d\n", carta2.pontos);
    printf("Densidade Populacional: %.2f\n", carta2.densidade);
    printf("PIB per Capita        : %.6f\n", carta2.pib_per_capita);
    printf("Super Poder           : %.2f\n", carta2.super_poder);

    // COMPARAÇÕES
    printf("\n===== Comparação de Cartas =====\n");

    printf("Populacao: Carta 1 venceu (%d)\n", carta1.populacao > carta2.populacao);
    printf("Area: Carta 1 venceu (%d)\n", carta1.area > carta2.area);
    printf("PIB: Carta 1 venceu (%d)\n", carta1.pib > carta2.pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", carta1.pontos > carta2.pontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", carta1.densidade < carta2.densidade); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", carta1.pib_per_capita > carta2.pib_per_capita);
    printf("Super Poder: Carta 1 venceu (%d)\n", carta1.super_poder > carta2.super_poder);

    printf("\n===== FIM DO JOGO, PRESSIONE ENTER PARA SAIR =====\n");
    getchar();
    getchar();

    return 0;
}
