/*
 * Programa para fazer a leitura de no máximo 10 número inteiros e um valor chave.
 * O programa deve buscar o valor chave no vetor de números inteiros,não necessáriamente ordenado
 * de tamanho n. O programa deve imprirmir o índice onde se encontra a primeira ocorrência do valor chave
 * ou a mensagem de "Valor não encontrado, caso o valor não esteja no vetor
 */
#include <stdio.h>

#define Vet 10

int main() {

    //Declaração de valores
    int valor[Vet], i, valorChave, n, elemento;
    printf("Digite de 0 a 10 a quantidade de elementos que deseja?:\t");
    scanf("%d", &n);
    printf("Escolha qual número você quer para o valor chave:\t");
    scanf("%d", &valorChave);

    // Declaração dos elementos que o usuário deseja usar
    for (i = 0; i < n; i++) {
        printf("\nEntre com o valor do elemento que deseja para posição %d:\t", i);
        scanf("%d", &valor[i]);
    }

    /*Linha de Busca onde o if vai fazer a verifição se ele encontra o valor chave que o usuário determinou
     *Caso ele encontre irá imprimir na tela em qual elemento esta o valorChave.
     *e caso ele não encontre ele irá imprimir valor não encontrado!
     */
    for (i = 0; i < n; i++) {
        if (valorChave == valor[i]) {
            printf("O valor chave se encontra na posição %d\n ", i);
            break;
        }
        if (valor[i] != valorChave) {
            printf("Não foi encontrado um valor chave!");
            break;
        }
    }
    return 0;
}
