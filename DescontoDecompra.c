#include <stdio.h>

int main()
    {
        int   cliente;
        int   total15 = 0;
        float total = 0;
        float comprou;
        float media;

        //// Verificando o cliente ////

        for(cliente=1; cliente <=3; cliente++)//// Para testar altere na condiçao um valor de 100 ////
        {
            printf("\n\nDigite o valor da ultima compra que o cliente %d fez:  \n", cliente);
            scanf("%f", &comprou);

            total = total + comprou; //// operação para somar todos os dados que o usuário informar o  total da soma de produtos dos clientes ////

            if (comprou > 1000)
            { //// Operação para saber quanto de desconto o     cliente irá ganhar ////
                printf("O cliente recebeu um desconto de 15 por cento na próxima compra");
                comprou=comprou*0.15;
                printf("O cliente recebeu R$ %2.f Reais de desconto na próxima compra", comprou);
                total15 = total15 + 1; //// Calcula a quantidade de clientes que receberam um desconto de 15 por cento////
            }


            else if (comprou <= 1000)
            { //// operação para saber o quanto de desconto o   cliente irá ganhar ////
                printf("\nO cliente recebeu um desconto de 10 por cento na próxima compra");
                comprou=comprou*0.10;
                printf("\nO cliente recebeu R$ %2.f  Reais de desconto na próxima compra", comprou);
            }

        }
        //// Operção para calcular a média ////
        media = total / 3; //// Para testar altere aqui o valor para o mesmo valor da condição no For ////
        printf("\n\nA média anual dos clientes é de %2.f reais", media);
        printf("\n\nA quantidade de pessoas que receberam desconto de 15 por cento foi de %2.d clientes",total15);

        return 0;

    }


