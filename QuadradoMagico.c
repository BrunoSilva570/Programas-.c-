/*
 * Algoritimo criado com o intuito de receber uma matriz quadrada que deve ser menor que 10x10
 * e determinar se essa Matriz é um quadrado mágico ou não
 */
#include <stdio.h>
#define VALOR 10

int main() {

    int MATRIZ[VALOR][VALOR];
    int i, j, n;
    int somaD1, somaD2; //Soma das diagonais
    int SomaL[n], SomaC[n]; //Soma das Linhas e colunas
    int testL = 1, testC = 1; //Para verificar as linhas e as colunas

    //Fazendo a leitura da Matriz que o usuário deseja
    printf("Dimensão da Matriz que deseja (max. 10):\t");
    scanf("%d", &n);
    printf("Coletando os dados que você deseja por em cada elemento da Matriz: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &MATRIZ[i][j]);

        }
    }
    printf("Matriz criada: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d \t", MATRIZ[i][j]);
        }
        printf("\n");
    }
    //Verificando se a Matriz que o usuário escreveu é um Quadrado Mágico
    somaD1 = 0;
    somaD2 = 0;

    //Somando a diagonal principal
    for (i = 0; i < n; i++) {
        somaD1 += MATRIZ[i][n - i - 1];
    }

    //Somando a diagonal secundária
    for (i = 0; i < n; i++) {
        somaD2 += MATRIZ[i][i];
    }

    //Somando as linhas da Matriz
    for (i = 0; i < n; i++) {
        SomaL[i] = 0;
        for (j = 0; j < n; j++) {
            SomaL[i] += MATRIZ[i][i];
        }
    }

    //Somando as colunas
    for (j = 0; j < n; j++) {
        SomaC[j] = 0;
        for (i = 0; i < n; i++) {
            SomaC[j] += MATRIZ[i][j];
        }
    }

    //Testes para saber se o Quadrado é mágico ou não
    for (i = 1; i < n; i++) {
        if (SomaL[i] != SomaL[i - 1]) {
            testL = 0;
            break;
        } else if (SomaC[i] != SomaC[i - 1]) {
            testC = 0;
            break;
        }
    }
    if (testL && testC && somaD1 == somaD2 && somaD1 == SomaL[0]) {
        printf("A Matriz que você digitou é um Quadrado mágico");
    } else {
        printf("A Matriz que você digitou Não é um Quadrado nao mágico");
    }
    return 0;
}


