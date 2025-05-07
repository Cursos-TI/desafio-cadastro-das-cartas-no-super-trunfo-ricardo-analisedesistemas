#include<stdio.h>
int main(int argc, char const *argv[])
{
     char estado1; //char sem um array de bytes
     char codigocarta1[6];
     char nomecidade1[50];
     int populacao1;
     float area1;
     float pib1;
     int pontotur1;
     float densdemo1;
     float rendper1;

     char estado2;
     char codigocarta2[6];
     char nomecidade2[50];
     int populacao2;
     float area2;
     float pib2;
     int pontotur2;
     float densdemo2;
     float rendper2;


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

     densdemo1 = populacao1 / area1;
     rendper1 = pib1 / populacao1;
     
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
     printf("Quantos pontos turisticos existem nessa cidade?: ");
     scanf("%d",&pontotur2);

     densdemo2 = populacao2 / area2;//calculo para densidade demografica
     rendper2 = pib2 / populacao2;//calculo para renda per capita

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Densidade Demográfica: %.2f hab/km²\n", densdemo1);
    printf("Renda Per Capita: R$ %.2f\n", rendper1);
    printf("Número de Pontos Turísticos: %d\n", pontotur1);
    
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Densidade Demográfica: %.2f hab/km²\n", densdemo2);
    printf("Renda Per Capita: R$ %.2f\n", rendper2);
    printf("Número de Pontos Turísticos: %d\n", pontotur2);
    
    while (getchar() != '\n');
    
    printf("\n");
    printf("******CADASTRO REALIZADO COM SUCESSO!!******\n");
    printf("\n");
    printf("******Escolha, Compare e Vença!******");
    printf("\n");
    printf("            SUPER TRUNFO      \n");
    return 0;
}
