#include <stdio.h>
int main() {
    char Estado[20] = "Ceara";
    char Codigo[30]= "A1";
    char Cidade[30] = "Aracatinga";
    double Area = 1229194;
    float Populacao = 75.113;
    float PIB = 22.63756;
    int Pontos = 21;
    
         printf("==========================================================\n");
         printf(" Bem-vindo ao Guia de cidades Turísticas do Brasil     \n");
         printf("========================================================\n\n");
          /*printf(''texto com formatação'', variavel1, variavel2, variavel13);*/
          /* Primeira Carta, Cidade de Aracatinga no Estado do Ceara*/

         printf("\n Digite seu Estado: \n");
         scanf("%19s", Estado);
         /* O nome do Estado*/
         /*.2 depois do % limita a 2 casas decimais */

         printf("\n Digite seu Codigo: \n");
         scanf("%29s", Codigo);
         /* O Codigo "A1 Corresponde a Cidade de Aracatinga (Ou deveria ser)*/
         printf("\n==================================================\n");
         printf("Resumo dos dados informados:\n");
         printf("Cidade: %s\n", Cidade);
         printf("Estado: %s\n", Estado);
         printf("Código: %s\n", Codigo);
         printf("===================================================\n\n");
         
          /*%d: Imprime um inteiro no formato decimal.
            %i: Equivalente a %d.
            %f: Imprime um número de ponto flutuante no formato padrão.
            %e: Imprime um número de ponto flutuante na notação científica.
            %c: Imprime um único caractere.
            %s: Imprime uma cadeia (string) de caracteres.
            */

         printf("A área total de %s é: %.2f km².\n", Cidade, Area);
         printf("O PIB de %s é: %.2f bilhões de reais.\n", Cidade, PIB);
         printf("A população total de %s é: %.2f mil pessoas.\n", Cidade, Populacao);
         printf("%s tem aproximadamente %d pontos turísticos.\n", Cidade, Pontos);

         /* Seguidos do: PIB, População, Numero de Pontos Turisticos*/
         /*Cada \n representa uma quebra de linha. 
         Use dois para deixar uma linha em branco entre as mensagens.*/

         printf("\n=======================================================\n");
         printf("        Obrigado por usar o nosso Guia!\n");
         printf("=========================================================\n");
         printf("\n\n");
            /*Imprime uma mensagem de agradecimento ao usuário*/
            /*Abaixo, uma mensagem de encerramento do programa*/
            /*Tentei para que ficasse mais amigavel ao Usuario*/

         printf("=========================================================\n");
         printf("         Fim do Guia de cidades Turísticas               \n"); 
         printf("=========================================================\n");
         printf("         Desenvolvido por: Samuel :)                     \n");
         printf("=========================================================\n");


    return 0;
    /*"return 0 "Usei para garantir que ocorreu tudo OK */
}