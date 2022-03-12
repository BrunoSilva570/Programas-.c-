#include <stdio.h>
/*
 Para n=4
 * * * *
 * * * *
 * * * *
 * * * *
 */
int main() {
    int n, linha,coluna;

    printf("Escolha um número para N\n");
    scanf("%d", &n);
    printf("Você escolheu o número %d\n", n);

    for(linha=1; linha <=n; linha++ )
    {
        for (coluna = 1; coluna <= n; coluna++)
        {
            printf("* ", coluna);
        }
        printf("\n");
    }


    return 0;
}