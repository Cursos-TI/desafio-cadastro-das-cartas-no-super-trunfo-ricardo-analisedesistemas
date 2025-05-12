#include<stdio.h>
int main(int argc, char const *argv[])
{
     //variaveis declaradas para campos da carta1
     char  estado1;       
     char  codigocarta1[6];
     char  nomecidade1[50];
     int   populacao1;
     float area1;
     float pib1;
     int   pontotur1;
     float densdemo1;
     float rendper1;
     long int  superpower1;//variavel declarada para ARMAZENAR somatorio dos parametros das cartas
     double inversodensdemo1;//variavel declarada para ARMAZENAR calculo inverso de densidader demografica
     
     //variaveis delaradas para carta 2
     char  estado2;      
     char  codigocarta2[6];
     char  nomecidade2[50];
     int   populacao2;
     float area2;
     float pib2;
     int   pontotur2;
     float densdemo2;
     float rendper2;
     long int superpower2;//variavel declarada para somatorio dos parametros das cartas
     double inversodensdemo2;//variavel declarada para calculo inverso de densidade demografica


     printf("********CADASTRO DAS CARTAS JOGO SUPER TRUNFO********\n"); 
     printf("\n");
     
     printf("Entre com a letra de identificacao (de A ate H): ");
     scanf("%c",&estado1); //usei o modificador %c para caractere numa variavel tipo char sem array
     printf("Digite o codigo da carta: ");
     scanf("%4s",codigocarta1);
     printf("Entre com o nome da cidade: ");//só adicionei esse recurso porque estava dando muito estouro enquanto eu testava o codigo
     scanf(" %49[^\n]",nomecidade1); //para que possa ser digitado um nome composto com ate 49 caracteres antes da quebra
     printf("Qual o total de habitantes?: ");
     scanf("%d",&populacao1);
     printf("Qual a area(em km2)?: ");
     scanf("%f",&area1);
     printf("Qual o PIB?: ");
     scanf("%f",&pib1);
     printf("Quantos pontos turisticos existem nessa cidade?: ");
     scanf("%d",&pontotur1);

     //CALCULOS PARA CARTA 1: DENSIDADE DEMOGRAFICA POR KM2, INVERSO DA DENSIDADE E RENDA PER CAPITA
     densdemo1 = (float) populacao1 / area1;
     inversodensdemo1 = (double) 1/ densdemo1;
     rendper1 = (float) pib1 / populacao1;
     
     while (getchar() != '\n');//limpeza de buffer caso contraraio os dois primeiros campos se concatenam e não épossivel digitat a letra para o Estado
     
     printf("\n");
     printf("******Pronto para cadastrar a segunda carta?******\n");
     printf("\n");
     
     printf("Entre com a letra de identificacao (de A ate H): ");
     scanf("%c",&estado2); //usei o modificador %c para caractere
     printf("Digite o codigo da carta: ");
     scanf("%4s",codigocarta2);
     printf("Entre com o nome da cidade: ");//só adicionei esse recurso porque estava dando muito estouro enquanto eu testava o codigo
     scanf(" %49[^\n]",nomecidade2); //para que possa ser digitado um nome composto com ate 49 caracteres antes da quebra
     printf("Qual o total de habitantes?: ");
     scanf("%d",&populacao2);
     printf("Qual a area(em km2)?: ");
     scanf("%f",&area2);
     printf("Qual o PIB?: ");
     scanf("%f",&pib2);
     printf("Quantos pontos turisticos existem nessa cidade?: \n");
     scanf("%d",&pontotur2);
     
     printf("\n");
    
     //CALCULOS PARA CARTA 2 DENSIDADE DEMOGRAFICA POR KM2, DENSIDADE INVERSA, RENDA PER CAPITA e SUPER PODER
     densdemo2 = (float)populacao2 / area2;
     inversodensdemo1 = (double) 1 /densdemo2;
     rendper2 =  (float) pib2 / populacao2;
     superpower1 = (int) populacao1 + area1 + pib1 + pontotur1 + inversodensdemo1 + rendper1;//NAO FOI SOMADO AO CALCULO DO SUPER PODER A DENSIDADE DEMOGRAFICA MAS SIM O RESULTADO INVERSO
    
     //COMAPRAÇOES
     
     
     while (getchar() != '\n');
    
    printf("\n");
    printf("\n");
    printf("******Escolha, Compare e Vença!******\n");
    printf("\n");
    printf("!!!!!!!!!!!SUPER TRUNFO!!!!!!!!!!!!!!!\n");
    return 0;
}
