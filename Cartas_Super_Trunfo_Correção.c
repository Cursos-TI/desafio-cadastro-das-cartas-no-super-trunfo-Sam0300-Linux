#include <stdio.h>
    int main() {
     char Estado[20], Estado2[20];
     char Codigo[30], Codigo2[30];
     char Cidade[30], Cidade2[30];
     double Area1, Area2;
     unsigned long int Populacao1, Populacao2;
     float PIB1, PIB2;
     int Pontos1, Pontos2;

         printf("==========================================================\n");
         printf(" Bem-vindo ao Guia de cidades Turísticas do Brasil     \n");
         printf("========================================================\n\n");
          /*printf(''texto com formatação'', variavel1, variavel2, variavel13);*/
          /* Primeira Carta, Cidade de Aracatinga no Estado do Ceara*/

         printf("\n Digite seu Estado: \n");
         scanf("%19s", Estado);
         /* O nome do Estado*/
         /*.2 depois do % limita a 2 casas decimais */

         printf("\n Digite a sua Cidade: \n");
         scanf("%19s", Cidade); 
         /* O Codigo "A1 Corresponde a Cidade de Aracatinga (Ou deveria ser)*/

         printf("\n Digite seu Codigo: \n");
         scanf("%29s", Codigo);

         printf("\n Digite a Aréa Total da Cidade: \n");
         scanf("%lf", &Area1);

         printf("\n Digite a População da Cidade: \n");
         scanf("%lu", &Populacao1);

         printf("\n Digite o PIB da Cidade Escolhida: \n");
         scanf("%f", &PIB1);

         printf("\n Digite a quantidade de Pontos Turisticos: \n");
         scanf("%d", &Pontos1);

         printf("\n==================================================\n");
         printf("Resumo dos dados informados:\n");
         printf("Cidade: %s\n", Cidade);
         printf("Estado: %s\n", Estado);
         printf("Código: %s\n", Codigo);
         printf("===================================================\n\n");

          /*%d: Imprime um inteiro no formato decimal.
            %i: Equivalente a %d.
            %f: Imprime um número de ponto flutuante no formato padrão. ( %f para ler valores do tipo float )
            %e: Imprime um número de ponto flutuante na notação científica.
            %c: Imprime um único caractere.
            %s: Imprime uma cadeia (string) de caracteres.
            %lf: é usado para ler valores do tipo double.
            */
         printf("A área total de %s é: %.2f km².\n", Cidade, Area1);
         printf("O PIB de %s é: %.2f bilhões de reais.\n", Cidade, PIB1);
         printf("A população total de %s é: %.2f mil pessoas.\n", Cidade, Populacao1);
         printf("%s tem aproximadamente %d pontos turísticos.\n", Cidade, Pontos1);

         /* Seguidos do: PIB, População, Numero de Pontos Turisticos*/
         /*Cada \n representa uma quebra de linha. 
         Use dois para deixar uma linha em branco entre as mensagens.*/
         printf("===================================================\n\n");
         printf("=======================================================\n");
         
         printf("\n Digite seu Estado: \n");
         scanf("%19s", Estado2);
         /* O nome do Estado*/
         /*.2 depois do % limita a 2 casas decimais */

         printf("\n Digite a sua Cidade: \n");
         scanf("%19s", Cidade2); 
         /* O Codigo "A1 Corresponde a Cidade de Aracatinga (Ou deveria ser)*/

         printf("\n Digite seu Codigo: \n");
         scanf("%29s", Codigo2);

         printf("\n Digite a Aréa Total da Cidade: \n");
         scanf("%lf", &Area2);

         printf("\n Digite a População da Cidade: \n");
         scanf("%lu", &Populacao2);

         printf("\n Digite o PIB da Cidade Escolhida: \n");
         scanf("%f", &PIB2);

         printf("\n Digite a quantidade de Pontos Turisticos: \n");
         scanf("%d", &Pontos2);

         printf("\n==================================================\n");
         printf("Resumo dos dados informados:\n");
         printf("Cidade: %s\n", Cidade2);
         printf("Estado: %s\n", Estado2);
         printf("Código: %s\n", Codigo2);
         printf("===================================================\n\n");
         printf("\n=======================================================\n");
         printf("        Obrigado por usar o nosso Guia!\n");
         printf("=========================================================\n");
         printf("\n\n");

         printf("A área total de %s é: %.2f km².\n", Cidade2, Area2);
         printf("O PIB de %s é: %.2f bilhões de reais.\n", Cidade2, PIB2);
         printf("A população total de %s é: %.2f mil pessoas.\n", Cidade2, Populacao2);
         printf("%s tem aproximadamente %d pontos turísticos.\n", Cidade2, Pontos2);
            

         printf("=========================================================\n");
         printf("=========================================================\n\n");
         printf("         Fim do Guia de cidades Turísticas               \n\n"); 
         printf("=========================================================\n");
         printf("         Desenvolvido por: Samuel :)                     \n");
         printf("=========================================================\n");
         printf("========================================================== \n");
         printf("         Desenvolvido por: Samuel :)                       \n");
         printf("========================================================== \n");

            /*"printf" é usado para imprimir mensagens na tela*/
            /*"scanf" é usado para ler a entrada do usuário*/
            /*"scanf" lê a entrada do usuário e armazena nas variáveis correspondentes*/
            /*"Estado", "Cidade", "Codigo", "Area", "Populacao", "PIB" e "Pontos" são variáveis que armazenam os dados informados pelo usuário*/
            /*"Area", "Populacao", "PIB" e "Pontos" são variáveis que armazenam os dados informados pelo usuário*/
            /*"Cidade", "Estado", "Codigo" são strings que armazenam os dados informados pelo usuário*/
            


          /*"return 0 "Usei para garantir que ocorreu tudo OK */
         return 0;
    }