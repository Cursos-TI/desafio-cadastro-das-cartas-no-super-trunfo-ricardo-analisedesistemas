#include <stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char idcarta[2]= "";//foi preferencia pessoal referenciar essa variavel ESTADO a um ID atribuido ao  campo ESTADO de cada carta cadastrada
    char codcarta[5]= "";
    char nomecidade[40];
    int  pop;
    float area;
    float pib;
    float densidade;
    float rendaper;
    
    int ponttur;

    printf("***********************************************\n");
    printf("****CADASTRO PARA CARTAS JOGO SUPER TRUNFO*****\n");
    printf("***********************************************\n");
       printf("Digite o ID do ESTADO: ");
       scanf("%1s",idcarta);
              
       printf("Digite o Codigo da Carta: ");                                      
       scanf("%4s",codcarta);
       while (getchar() != '\n');  //para limpar buffer antes da inicilização da var nomecidade
                                   //caso contrario  o printf a seguir nao aparece como proxima opção a ser digitada pelo usuário
       printf("Qual o nome da cidade?: ");
       fgets(nomecidade, sizeof(nomecidade), stdin);  //foi usado porque o desafio mostrou como exemplo de resultado de saída de dados "Nome da cidade" com string composta
       nomecidade[strcspn(nomecidade, "\n")] = '\0';  //comando colocado para que o sistema não de um espaço muito grande entre o campo atual e o proximo, a fim de que seja mostrada ao usuario linha a linha a informação
       
       printf("Qual o numero total de habitantes?: ");
       scanf("%d",&pop); //digitar uma valor inteiro sem casas decimais variavel int
       
       printf("Qual a extensao territorial?: ");
       scanf("%f",&area); //digitar a respectiva area podendo colocar . e até 2 casas decimais para entrar com km2 de forma precisa
       printf("Qual o PIB em Bilhoes de Reais?: ");
       scanf("%f",&pib); //para que o resultado do calculo seja o correto, deve-se representar integralmente o valor em todas as suas casas preenchendo com zeros
       
       printf("Quantos pontos turisticos ha?: ");
       scanf("%d",&ponttur);//não altera a formatação em relação ao desafio NOVATO
      
    printf("**********************************************\n");

         printf("ID-ESTADO: %s \n",idcarta);
         printf("Codigo da Carta: %s\n",codcarta);
         printf("Cidade: %s\n",nomecidade);
         printf("Populacao: %d habitantes\n",pop);
         printf("Extensao Territorial: %.2fkm2\n",area);
         printf("PIB: R$ %.f Bilhoes\n",pib);
         printf("Total de pontos turisticos: %d\n",ponttur);
         
         densidade = (float) pop / area;//calculo densidade demografica usando castting para calcular valores entre tipos diferentes de variaveis
         printf("Densidade demografica: %2.f\n",densidade);
         
         rendaper = (float) pib / pop; //calculo renda per capita
         printf("Renda per Capita: %2.f\n",rendaper);
         

    printf("**********************************************\n");   
    printf("***CADASTRO DA CARTA EFETUADO COM SUCESSO!**** \n");
    printf("**********************************************\n");
    printf("---------ESCOLHA, COMAPRE E VENCA!------------\n");
    printf("----------------------------------------------\n");
    printf("----------S U P E R---T R U N F O-------------\n");
    return 0;
}
