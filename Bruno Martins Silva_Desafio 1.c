#include <stdio.h>

int main(void) {
  printf("Bruno Martins Silva\n Trabalho Algoritimo\n Programa para calcular a circunferencia de um planeta de acordo com o matemático Erastóstones de Cirene\n");
  
  float A, A2, C, D, Ce, CKM;
  // A seria o Angulo do triangulo formado por duas cidades.
  // A2 seria a circunferencia inteira.
  // C seria a distantancia entre as cidades em estadios.
  // D seria o valor de cada estadio em metros.
  // Ce Seria a circuferencia total em estadios.
  // CKm Seria a circuferencia total em KM.

  ///////// Declaração de valores para cálculo /////////
  printf("Você pode alterar o valor do numero de estadios e do angulo de acordo com o planeta que você deseja saber a circuferencia em estadios e em Kilometros\n ");

  printf("Escreva o valor em Estadios da distancia que deseja para criar o seu planeta\n");
  scanf("%f", &C);
  printf("A distancia que você escolheu foi %.1f\n", C);
  printf("Escreva o valor do angulo entre as cidades que você deseja\n");
  scanf("%f", &A);
  printf("O valor do angulo que você escolheu foi %.1f\n", A);
 
  A2 = 360; // VALOR DA CIRCUFERENCIA INTEIRA
  D = 176.4; // VALOR DO ESTADIO EM METROS

  ///////// Calculo de acordo com o matematico /////////
  Ce = C * A2 / A ;// CALCULO PARA SABER O TAMANHO DO PLANETA EM ESTADIOS
  printf("O resultado da circuferencia do planeta em estadios seria de %.1f estadios\n", Ce);
  CKM = Ce * D / 1000;// CALCULO PARA SABER O TAMANHO DO PLANETA EM KILOMETROS
  printf("O resultado em Kilometros da circufencia do planeta seria de %.1f Km", CKM);

  return 0;
}