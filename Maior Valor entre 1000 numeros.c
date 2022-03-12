/*
 * Crie um código que faça a leitura de 1000 números e que dentre esses mil números mostre o maior
 */
#include <stdio.h>

int main() {
    int a, maior = 0;
    float Num[1000];

    ////Fazendo a leitura dos dados////
    printf("Digite 1000 números que deseja positivos:\n");
    for (a = 0; a < 1000; a++) {
        printf("Valor %d : ", a + 1);
        scanf("%f", &Num[a]);
    }
    ////Verificação do maior valor////
    for (a = 0; a < 1000; a++) {
        if (Num[a] > maior) {
            maior = Num[a];
        }
    }
    ////Mostrando para o usuário o maior valor////
    printf("o maior valor é %d", maior);

    return 0;
}
