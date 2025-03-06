#include <stdio.h>

int main()
{
    
   // CARTA A
    
    char estadoA = 'A';
    char codigoA[5] = "A01";
    char Nome_da_cidadeA[20] = "Sao paulo";
    int populacaoA = 12325000;
    float area_kmA = 1521.11;
    float pib_A = 699.28;
    int numero_de_pontos_turistico_A = 50;
    float densidade_populacional_A = populacaoA / area_kmA;
    float PIB_per_Capita_A = pib_A / populacaoA;
    
    
    printf("Estado: %c\n", estadoA);
    printf("Codigo: %s\n", codigoA);
    printf("Nome da cidade: %s\n", Nome_da_cidadeA);
    printf("Populacao: %i\n", populacaoA);
    printf("Area km²: %f\n", area_kmA);
    printf("PIB: %f\n", pib_A);
    printf("Pontos turisticos: %i\n", numero_de_pontos_turistico_A);
    printf("Densidade Populacional: %.2f\n", densidade_populacional_A);
    printf("PIB per capita: %.2f\n\n", PIB_per_Capita_A);
    
    // CARTA B
    
    char estadoB = 'B';
    char codigoB[5] = "B02";
    char nome_da_cidadeB[20] = "Rio de janeiro";
    int populacaoB = 6748000;
    float area_kmB = 1200.25;
    float pib_B = 300.50;
    int numero_de_pontos_turistico_B = 30;
    float Densidade_Populacional_B = populacaoB / area_kmB;
    float PIB_per_Capita_B = pib_B / populacaoB;
   
    printf("Estado: %c\n", estadoB);
    printf("Codigo: %s\n", codigoB);
    printf("Nome da cidade: %s\n", nome_da_cidadeB);
    printf("Populacao: %i\n", populacaoB);
    printf("Area km²: %f\n,", area_kmB);
    printf("PIB: %f\n", pib_B);
    printf("Pontos turisticos: %i\n", numero_de_pontos_turistico_B);
    printf("Densidade Populacional: %.2f\n", Densidade_Populacional_B);
    printf("PIB per capita: %.2f\n", PIB_per_Capita_B);
    
    
    
    return 0;
}