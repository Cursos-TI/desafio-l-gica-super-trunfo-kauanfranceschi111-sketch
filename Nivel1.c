#include <stdio.h>

    int main(){

        char estado1 [10], cidade1 [20], codigo1 [10];
        char estado2 [10], cidade2 [20], codigo2 [10];
        unsigned int populacao1, populacao2, turisticos1, turisticos2;
        double pib1, pib2, area1, area2;

        printf("Digite o Estado da Carta 1 (em sigla):\n");
        scanf("%s", estado1);
        printf("Digite a Cidade da Carta 1:\n");
        scanf(" %[^\n]", cidade1);
        printf("Digite o Código da Carta 1:\n");
        scanf("%s", codigo1);
        printf("Digite a Quantidade de População da Carta 1:\n");
        scanf("%u", &populacao1);
        printf("Digite a Quantidade de Pontos Turísticos da Carta 1:\n");
        scanf("%u", &turisticos1);
        printf("Digite Quanto de PIB tem a Carta 1 (em reais):\n");
        scanf("%lf", &pib1);
        printf("Digite a Área da Carta 1 (em km2):\n");
        scanf("%lf", &area1);

        printf("Digite o Estado da Carta 2 (em sigla):\n");
        scanf("%s", estado2);
        printf("Digite a Cidade da Carta 2:\n");
        scanf(" %[^\n]", cidade2);
        printf("Digite o Código da Carta 2:\n");
        scanf("%s", codigo2);
        printf("Digite a Quantidade de População da Carta 2:\n");
        scanf("%u", &populacao2);
        printf("Digite a Quantidade de Pontos Turísticos da Carta 2:\n");
        scanf("%u", &turisticos2);
        printf("Digite Quanto de PIB tem a Carta 2 (em reais):\n");
        scanf("%lf", &pib2);
        printf("Digite a Área da Carta 2 (em km2):\n");
        scanf("%lf", &area2);

        float densidade_populacional1 = (float) populacao1 / area1;
        float pib_per_capita1 = pib1 *1000000000 / populacao1;

        float densidade_populacional2 = (float) populacao2 / area2;
        float pib_per_capita2 = pib2 *1000000000 / populacao2;

        printf("\n--- Carta 1 ---\n");
        printf("Estado: %s\n", estado1);
        printf("Cidade: %s\n", cidade1);
        printf("Código: %s\n", codigo1);
        printf("População: %u\n", populacao1);
        printf("Pontos Turísticos: %u\n", turisticos1);
        printf("PIB: %.2f Bilhões de Reais\n", pib1);
        printf("Área: %.2f km2\n", area1);
        printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional1);
        printf("Pib Per Capita: %.2f\n", pib_per_capita1);

        printf("\n--- Carta 2 ---\n");
        printf("Estado: %s\n", estado2);
        printf("Cidade: %s\n", cidade2);
        printf("Código: %s\n", codigo2);
        printf("População: %u\n", populacao2);
        printf("Pontos Turísticos: %u\n", turisticos2);
        printf("PIB: %.2f Bilhões de Reais\n", pib2);
        printf("Área: %.2f km2\n", area2);
        printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
        printf("Pib Per Capita: %.2f\n", pib_per_capita2);


        printf("\n--- Comparação de Cartas (Atributo PIB Per capita) ---\n");
        printf("Carta 1 - %s, %s: %.2f\n", estado1, cidade1, pib_per_capita1);
        printf("Carta 2 - %s, %s: %.2f\n", estado2, cidade2, pib_per_capita2);

        
        if (pib_per_capita1 > pib_per_capita2){
        printf("Carta 1 Venceu!!!\n");
        } else if (pib_per_capita2 > pib_per_capita1){
        printf("Carta 2 Venceu!!!\n");
        } else {
        printf("Empate entre as duas Cartas\n");
        }


}



       
       

    

