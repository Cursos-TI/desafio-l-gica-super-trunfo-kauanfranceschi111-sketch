#include <stdio.h>

int main() {
    int escolha;
    
    
    char nome1[] = "Brasil";
    int populacao1 = 211000000;
    float area1 = 8515767.0;
    float pib1 = 2200000.0;
    int pontos1 = 15;
    float densidade1 = populacao1 / area1;

    
    char nome2[] = "Argentina";
    int populacao2 = 45000000;
    float area2 = 2780400.0;
    float pib2 = 500000.0;
    int pontos2 = 12;
    float densidade2 = populacao2 / area2;

    printf("=== SUPER TRUNFO: PAÍSES ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    printf("\nComparando %s x %s...\n", nome1, nome2);

    switch (escolha) {
        case 1:
            printf("População:\n");
            printf("%s: %d\n", nome1, populacao1);
            printf("%s: %d\n", nome2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Área:\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", nome1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("PIB:\n");
            printf("%s: %.2f bilhões USD\n", nome1, pib1);
            printf("%s: %.2f bilhões USD\n", nome2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nome1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Pontos Turísticos:\n");
            printf("%s: %d\n", nome1, pontos1);
            printf("%s: %d\n", nome2, pontos2);
            if (pontos1 > pontos2) {
                printf("Vencedor: %s\n", nome1);
            } else if (pontos2 > pontos1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Densidade Demográfica:\n");
            printf("%s: %.2f hab/km²\n", nome1, densidade1);
            printf("%s: %.2f hab/km²\n", nome2, densidade2);
            if (densidade1 < densidade2) {
                printf("Vencedor: %s (menor densidade vence)\n", nome1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s (menor densidade vence)\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}