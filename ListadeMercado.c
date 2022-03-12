/*
Faça um programa que processe um pedido de venda por vez. Um pedido pode conter vários produtos
diferentes, identificado por seu código, e especificada a quantidade de unidades desejada. O pedido
termina quando o código -1 é inserido como código de um produto (condição de parada)
*/
//// Declarando váriaveis ////
#include <stdio.h>

int main(void)
{
    float   total;
    float   preço1 = 125.00;
    float   preço2 = 90.00;
    float   preço3 = 9.00;
    float   preço4 = 1.80;
    float   preço5 = 55.00;
    int     totalprodutos = 0;
    int     valor = 0;
    int     i=0;
    /////
    float   produto;
    float   produto1 = 0;
    float   produto2 = 0;
    float   produto3 = 0;
    float   produto4 = 0;
    float   produto5 = 0;
    /////
    float  cont;
    int    m,n,o,p,q; //// multiplicador ////
    int    cod;
    cod    = 1;
    cont   = 1;

    //// Comandos ////

    if( cont != -1)
    {
        while(cod == 1)
        {
            //// Mostrando para o cliente os produtos que temos desponiveis e seus respectivos valores ////
            printf("\nEscolha um item que deseja comprar \n 1.Torneira simples = R$125,00\n 2.Pia Banheiro = R$90,00\n 3.Banco Plástico = R$9,00 \n 4.Fita Adesiva = R$1,80 \n 5.Chave Inglesa = R$55,00  \n -1.Para finalizar o pedido\n\n");
            scanf("%d", &valor);
            ///// Ciclo para o cliente escolher qual produto ele deseja ///
            if ( valor == 1)
            {
                printf("\nVocê escolheu Torneira simples = R$ %3.f\n",preço1);
                printf("\nEscolha a quantidade do produto que deseja: \n");
                scanf ("%d", &m);
                produto1 = preço1*m;
                printf(">>>Total valor : %1.f<<<\n", produto1);
            }

            if (valor == 2)
            {
                printf("Você escolheu Pia Banheiro = R$ %3.f", preço2);
                produto2 = preço2 + produto2;
                printf("\nEscolha a quantidade do produto que deseja: \n");
                scanf ("%d", &n);
                produto2 = preço2*n;
                printf(">>>Total valor : %1.f<<<\n", produto2);
            }

            if (valor == 3)
            {
                printf("Você escolheu Banco Plástico = R$ %3.f",preço3);
                produto3 = preço3 + produto3;
                printf("\nEscolha a quantidade do produto que deseja: \n");
                scanf ("%d", &o);
                produto3 = preço3*o;
                printf(">>>Total valor : %1.f<<<\n", produto3);
            }

            if (valor == 4)
            {
                printf("Você escolheu Fita Adesiva = R$ %f",preço4);
                produto4 = preço4 + produto4;
                printf("\nEscolha a quantidade do produto que deseja: \n");
                scanf ("%d", &p);
                produto4 = preço4*p;
                printf(">>>Total valor : %f<<<\n", produto4);
            }

            if (valor == 5)
            {
                printf("Você escolheu Chave Inglesa = R$ %3.f", preço5);
                produto5 = preço5 + produto5;
                printf("\nEscolha a quantidade do produto que deseja: \n");
                scanf ("%d", &q);
                produto5 = preço5*q;
                printf(">>>Total valor : %1.f<<<\n", produto5);
            }

            if (valor == -1)
            {
                cont = -1;
                break;
            }

            total = produto1 + produto2 + produto3 + produto4 + produto5;//// Calculo para saber o valor total da compra do cliente ////
            printf("\n>>>O total de sua por enquanto é : %1.f<<<\n", total);
            valor = 0;
            totalprodutos = m+n+o+p+q; //// Calculo para saber a quantidade de produtos que o cliente comprou ///

        }
        //// Finalizando a compra mostra para o cliente o valor total e a quantidade de produtos que ele comrpou ////
        printf(">>>O valor total da sua compra é de : R$ %1.f reais<<<\n", total);
        printf(">>>A quantidade de produtos que você comprou foi de %d<<<\n", totalprodutos);
    }

    return 0;
}