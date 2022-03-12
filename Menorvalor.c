/*
 * Esse programa faz a leitura de 10 números interios escolhido pelo usuário e dentre eles mostra
 * O menor valor dos números
 * Calcula o quadrado de cada item
 * E nos mostra a quantidade de números pares
 */
#include <stdio.h>

int main() {
    int vetor[10];
    int quadrado[10];
    int menorValor;
    int par = 0;
    int i;

    ///Identificando os números que o usuário deseja///
    for (i = 0; i < 10; i++) {
        printf("Digite um número inteiro para a posição %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    ///Verificando o menor valor do vetor que o usuário digitou///
    menorValor = vetor[0];
    for (i = 1; i < 10; i++) {
        if (vetor[i] < menorValor) {
            menorValor = vetor[i];
        }
    }

    ///Calculando o quadrado de cada valor inserido pelo usuário///
    for (i = 0; i < 10; i++) {
        quadrado[i] = vetor[i] * vetor[i];
    }

    ///Verificando a quantidade de números pares que o usuário digitou///
    for (i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            par++;
        }
    }

    ///Imprimindo os valores///
    printf("\nMenor valor: %d\n", menorValor);
    printf("O valor ao quadrado dos números digitados é: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", quadrado[i]);
    }
    printf("\nQuantidade de Números Pares: %d\n", par);

    return 0;
}
