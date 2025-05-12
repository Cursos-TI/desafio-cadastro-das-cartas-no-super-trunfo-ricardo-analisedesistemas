#include<stdio.h>

/*struct carta{
  char  estado1;       //variaveis declaradas para campos da carta1
     char  codigocarta1[6];
     char  nomecidade1[50];
     int   populacao;
     float area;
     float pib1;
     int   pontotur;
     float densdemo;
     float rendper;
     long int  superpower;//variavel declarada para somatorio dos parametros das cartas
     double inversodensdemo;

};*/

float calculo_densidade_demografica(int populacao, float area){

  float resultado = (float) populacao / area;
  return resultado;

}

double calculo_densidade_demografica_inversa(float area, int populacao){

    double resultado = (double) area / populacao;
    return resultado;

}




int main(int argc, char const *argv[])
{
    int populacao;
    float area;
    float densidade;
    double densidadeInversa;
    printf("Digite a area em km2: \n");
    scanf("%f",&area);
    printf("Digite o numero de habitantes: \n");
    scanf("%d", &populacao);
    
    //aplicando as funcoes para calcular
    densidade = calculo_densidade_demografica(populacao,area);
    printf("A densidade demografica é: %.2f\n",densidade);
    
    densidadeInversa = calculo_densidade_demografica_inversa(area,populacao);
    printf("A densidade inversa é: %.8f\n",densidadeInversa);
    
    
    return 0;
}
