#include <stdio.h>

struct Carta {
    char estado[15];
    char cidade[25];
    char codigo[11]; // até 10 letras
    int populacao;
    int pontos;
    float area;
    float pib;
};

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
    scanf("%d", &carta1.populacao);

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
    scanf("%d", &carta2.populacao);

    printf("Area (em KM2): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &carta2.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontos);

    // EXIBIR
    printf("\n===== DADOS DAS CARTAS =====\n");

    printf("\n--- CARTA 1 ---\n");
    printf("Estado                : %s\n", carta1.estado);
    printf("Codigo                : %s\n", carta1.codigo);
    printf("Cidade                : %s\n", carta1.cidade);
    printf("Populacao             : %d\n", carta1.populacao);
    printf("Area (KM2)            : %.2f\n", carta1.area);
    printf("PIB (bilhoes R$)      : %.2f\n", carta1.pib);
    printf("Pontos turisticos     : %d\n", carta1.pontos);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado                : %s\n", carta2.estado);
    printf("Codigo                : %s\n", carta2.codigo);
    printf("Cidade                : %s\n", carta2.cidade);
    printf("Populacao             : %d\n", carta2.populacao);
    printf("Area (KM2)            : %.2f\n", carta2.area);
    printf("PIB (bilhoes R$)      : %.2f\n", carta2.pib);
    printf("Pontos turisticos     : %d\n", carta2.pontos);

    printf("\n===== FIM DO JOGO PRESSIONE ENTER =====\n");

    // Aguarda ENTER para encerrar
    getchar();
    getchar();

    return 0;
}