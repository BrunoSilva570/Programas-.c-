#include <stdio.h>
#include <string.h>

int main() {
    char Senha[100];
    int numero = 0;
    int i;

    printf("Digite sua senha com pelo menos 8 Caracteres:\n(Deve conter pelo menos uma Letra Maiuscula, uma letra minuscula,\n um número, deve conter pelo menos um desses caracteres !, ?,#,@,$,\n não pode ser um palindromo e não pode conter nenhuma palavra reservada do dicionário)\n");
    scanf("%s", Senha);

    if (Senha > 8) {
        while (i < strlen(Senha) && numero == 0) {
            if (Senha[i] >= '0' && Senha[i] <= '9')
                numero = 0;
            else
                numero = 1;
            i++;
        }
    } else if (Senha < 8) {
        printf("A senha deve conter pelo menos 8 caracteres!");
    }
    return 0;
}
