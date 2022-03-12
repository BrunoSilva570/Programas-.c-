// Menu de um restaurante//

#include <stdio.h>

int main() {
    int opcao;

    printf("Menu Restaurante Algoritimos\n");
    printf("1 - Pizza de queijo\n");
    printf("2 - Bolinho de chuva\n");
    printf("3 - Pizza de Calabresa\n");
    printf("4 - Pastel\n");

    printf("Escolha uma opção:\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\n\nPizza de queijo");
            break;
        case 2:
            printf("\n\nBolinho de chuva");
            break;
        case 3:
            printf("\n\nPizza de Calabresa");
            break;
        case 4:
            printf("\n\nPastel");
            break;
    }
    return 0;
}
