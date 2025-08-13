#include <stdio.h>
    int main() {
        char Estado[20], Codigo[30], Cidade[30];
        double Area, PIB;
        float PIBperCapita;
        unsigned long int Populacao;
        double Densidade;


    printf("\n\n ================================================================= \n");
    printf("           CADASTRO DE CARTA - SUPER TRUNFO nivel Aventureiro          \n");
    printf(" ================================================================= \n\n");
    printf("\n");
    printf("Estado é: \n"); 
    scanf("%19s", Estado);
    printf("\n");
    
    printf("Cidade é: \n"); 
    scanf("%19s", Cidade);
    printf("\n");
    
    printf("Código da Carta é: \n"); 
    scanf("%29s", Codigo);
    printf("\n");
    
    printf("Área (km²): \n"); 
    scanf("%lf", &Area);
    printf("\n");
    
    printf("População: \n"); 
    scanf("%lu", &Populacao);
    printf("\n");
    
    printf("PIB (bilhões): \n"); 
    scanf("%lf", &PIB);
    printf("\n");
    printf("\n ================================================================= \n");
    // Cálculos
    Densidade = (double)Populacao / Area;
    PIBperCapita = (double)PIB / Populacao; 


    
    // Resultados
    printf("\n ================================================================= \n");
    printf("=====     Resumo dos dados informados   ============================:\n");
    printf("Estado: %s\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("Codigo: %s\n", Codigo);
    printf("Área total: %.2f km²\n", Area);
    printf("PIB: %.2lf Milhões de reais\n", PIB);
    printf("População: %lu habitantes\n", Populacao);
    printf("Densidade populacional: %.2f hab/km²\n", Densidade);
    printf("PIB per Capita: R$ %.2lf por habitante\n", PIBperCapita);
    printf("\n ================================================================= \n");
    

    return 0;
}