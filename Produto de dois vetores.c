#include <stdio.h>

int main() {
    double vetor1[5], vetor2[5], resultado;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Entre com o valor da posição %d para o vetor 1:", i);
        scanf("%lf\n\n", &vetor1[i]);
    }
    for (i = 0; i < 5; i++) {
        printf("Entre com o valor da posição %d para o vetor 2:", i);
        scanf("%lf\n\n", &vetor2[i]);
    }
    ////Calculando o produto interno////
    resultado = 0.0;
    for (i = 0; i < 5; i++) {
        resultado = resultado + (vetor1[i] * vetor2[i]);
    }
    printf("\n\n0 produto interno é: %1.lf\n", resultado);
    return 0;
}
