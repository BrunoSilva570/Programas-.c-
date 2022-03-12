#include <stdio.h>

int main() {
    int vetor1[5], vetor2[5];
    int i, j, umEmComum;

    for (i = 0; i < 5; i++) {
        printf("Entre com valor da posição %d para vetor 1:", i);
        scanf("%d", &vetor1[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("Entre com valor da posição %d para vetor 2:", i);
        scanf("%d", &vetor2[i]);
    }
    umEmComum = 0; //Assumimos que n~ao hajam elementos comuns
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            if (vetor1[i] == vetor2[j]) {
                umEmComum = 1; //Descobrimos que h´a elemento comum
                printf("Posicao %d do vetor1 igual a posição %d do vetor2.\n", i, j);
            }
    if (!umEmComum)
        printf("Nenhum elemento em comum!\n");


    return 0;
}
