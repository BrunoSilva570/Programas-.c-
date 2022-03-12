#include <stdio.h>
/*
 * Exercicío 1
 * Para n=6
 * 1
 * 1 2
 * 1 2 3
 * 1 2 3 4
 * 1 2 3 4 5
 * 1 2 3 4 5 6
 */

int main() {
    int n, linha,coluna;

    printf("Escolha um número para N\n");
    scanf("%d", &n);
    printf("Você escolheu o número %d\n", n);

    for(linha=1; linha <=n; linha++ ){
        for(coluna=1; coluna<=linha; coluna++){
            printf("%d ", coluna);
        }
        printf("\n");

    }


    return 0;
}
