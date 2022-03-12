/*
 * Programa que faz a leitura das 4 notas de um aluno, calcula a sua média e mostra se o aluno foi aprovado
 * ou reprovado. Caso a nota do aluno seja menor do que 6, deverá inserir uma quinta nota para e fazer uma nova
 * média entre a média atual e a quinta nota. Caso essa nova média seja menor do que 5 o aluno sera reprovado,
 * caso a media inicial seja maior do que 6 o aluno sera aprovado. Se a media final do aluno com a quinta nota for
 * maior do que 5 o aluno será aprovado.
 */
#include <stdio.h>

int main(void) {

    float notas[4] = {0};
    float nota5 = 0;
    float total = 0;
    float media = 0;
    int i;

    ///Verificando as notas dos alunos///
    printf("Digite as quatro notas do Aluno:\n");
    for (i = 0; i < 4; i++) {
        scanf("%f", &notas[i]);
    }
    ///Fazendo o somatório das notas///
    for (i = 0; i < 4; i++) {
        total += notas[i];
    }

    ///Calculando a média do aluno///
    media = total / 4;
    printf("A média do Aluno é: %1.f\n", media);

    ///Verficando se o aluno será aprovado ou reprovado
    if (media >= 6) {
        printf("\nAprovado!\n");
    } else {
        printf("Digite a nota do exame do Aluno: ");
        scanf("%f", &nota5);
        media = (media + nota5) / 2;
        printf("\nMedia atual com a nota do exame: %1.f\n", media);

        if (media >= 5) {
            printf("\nAprovado!\n");
        } else {
            printf("\nReprovado!\n");
        }
    }
    return 0;
}