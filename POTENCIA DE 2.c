#include <stdio.h>

int main() {

    int i, potencia, base;
    printf("Digite a potência que deseja\n");
    scanf("%d", &potencia);

    base=1;
    i=0;
    for(i=0; i<=potencia; i++ ){
        printf("2.%d = %d\n", i, base);
        base=base*2;

    }

    return 0;
}
