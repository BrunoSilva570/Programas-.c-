#include <stdio.h>

int main() {
    int i,n, acu;

    printf("Digite o número que deseja fatorar\n");

    scanf("%d", &n);
    acu=1;
    for(i=1; i<=n; i++){

        acu=acu*i;
    }
        printf("Fatorial de %d e: %d\n", n, acu);

    return 0;
}
