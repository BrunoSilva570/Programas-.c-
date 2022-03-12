/*
 * O programa deve fazer a união dos dois primeiros vetores dados pelo usuário e imprimir um terceiro vetor com
 * a exibição da união realizada
 */
#include <stdio.h>

int main() {

    int conjt1[50];
    int conjt2[50];
    int total[100];
    int i, j, x, n;

    printf("Quantos elementos você deseja unir?\n");
    scanf("%d", &n);

    //Declrando os conjunto 1
    for (i = 0; i < n; i++) {
        printf("Escolha o valor que deseja para o elemento %d do conjunto  1:\t", i);
        scanf("%d", &conjt1[i]);
        total[i] = conjt1[i];
    }
    printf("Conjunto 1: \n");
    for (i = 0; i < n; i++) {
        printf("%d, ", conjt1[i]);
    }
    //Declarando conjunto 2
    for (i = 0; i < n; i++) {
        printf("\nEscolha o valor que deseja para o elemento %d do conjunto 2:\t", i);
        scanf("%d", &conjt2[i]);
        total[i + n] = conjt2[i];
    }
    printf("Conjunto 2: \n");
    for (i = 0; i < n; i++) {
        printf("%d, \n", conjt2[i]);
    }

    //Processo de união dos vetores 1 e 2
    for (i = 0; i < n; i++) {
        total[i] = conjt1[i];
    }
    for (j = 0; j < n; j++) {
        total[i] = conjt2[j];
        total[j + n] = conjt2[j];
        i++;
    }
    //Para retirar os valores repetidos da união
    for (i = 0; i < 2 * n; i++) {
        for (j = i + 1; j < n; j++) {
            if (conjt1[i] == conjt2[j]) {
                conjt2[j] = 0;
            }
        }
    }
    printf("União dos conjunto 1 e 2:,\n");
    for (x = 0; x < 2 * n; x++) {
        printf("%d, ", total[x]);
    }

    return 0;
}
