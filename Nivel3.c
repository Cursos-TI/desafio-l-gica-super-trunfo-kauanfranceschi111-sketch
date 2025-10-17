#include <stdio.h>

int main() {
    int atributo1, atributo2;

    
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

    printf("=== SUPER TRUNFO: NÍVEL MESTRE ===\n");
    printf("\nCarta 1: %s\nCarta 2: %s\n", nome1, nome2);

    
    printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha: ");
    scanf("%d", &atributo1);

    if (atributo1 < 1 || atributo1 > 5) {
        printf("Opção inválida! Encerrando.\n");
        return 0;
    }

    // Menu dinâmico para o segundo atributo (sem repetir o primeiro)
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    if (atributo1 != 1) printf("1. População\n");
    if (atributo1 != 2) printf("2. Área\n");
    if (atributo1 != 3) printf("3. PIB\n");
    if (atributo1 != 4) printf("4. Pontos Turísticos\n");
    if (atributo1 != 5) printf("5. Densidade Demográfica\n");
    printf("Escolha: ");
    scanf("%d", &atributo2);

    if (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1) {
        printf("Opção inválida! Você deve escolher um atributo diferente.\n");
        return 0;
    }

    
    float valor1_a, valor2_a, valor1_b, valor2_b;
    float soma1, soma2;

    
    switch (atributo1) {
        case 1: valor1_a = populacao1; valor2_a = populacao2; break;
        case 2: valor1_a = area1; valor2_a = area2; break;
        case 3: valor1_a = pib1; valor2_a = pib2; break;
        case 4: valor1_a = pontos1; valor2_a = pontos2; break;
        case 5: valor1_a = densidade1; valor2_a = densidade2; break;
    }

    
    switch (atributo2) {
        case 1: valor1_b = populacao1; valor2_b = populacao2; break;
        case 2: valor1_b = area1; valor2_b = area2; break;
        case 3: valor1_b = pib1; valor2_b = pib2; break;
        case 4: valor1_b = pontos1; valor2_b = pontos2; break;
        case 5: valor1_b = densidade1; valor2_b = densidade2; break;
    }

    
    printf("\nComparando %s x %s...\n\n", nome1, nome2);

    printf("Atributo 1: ");
    switch (atributo1) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
    }
    printf("%s: %.2f | %s: %.2f\n\n", nome1, valor1_a, nome2, valor2_a);

    printf("Atributo 2: ");
    switch (atributo2) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
    }
    printf("%s: %.2f | %s: %.2f\n\n", nome1, valor1_b, nome2, valor2_b);

   
    int resultado1, resultado2;

    
    resultado1 = (atributo1 == 5)
        ? (valor1_a < valor2_a ? 1 : (valor2_a < valor1_a ? 2 : 0))
        : (valor1_a > valor2_a ? 1 : (valor2_a > valor1_a ? 2 : 0));

    resultado2 = (atributo2 == 5)
        ? (valor1_b < valor2_b ? 1 : (valor2_b < valor1_b ? 2 : 0))
        : (valor1_b > valor2_b ? 1 : (valor2_b > valor1_b ? 2 : 0));

    
    soma1 = valor1_a + valor1_b;
    soma2 = valor2_a + valor2_b;

    printf("Soma total dos atributos:\n");
    printf("%s: %.2f\n", nome1, soma1);
    printf("%s: %.2f\n", nome2, soma2);

    
    if (soma1 == soma2) {
        printf("\nResultado final: Empate!\n");
    } else {
        printf("\nResultado final: %s venceu!\n", (soma1 > soma2) ? nome1 : nome2);
    }

    return 0;
}