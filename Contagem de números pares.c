/*Leia um valor n do usuário e imprima os n primeiros números pares comecando do número 1.
 * Por exemplo, para n=3 teremos a saida "2,4,6"
 */
#include <stdio.h>

int main() {
     int n, i;
     int numero=1;

     printf("Digite a quantidade de numeros pares: ");
     scanf("%d", &n);

     i = 1; // quantidade de números pares na tela
     while(i <= n){
         // testes para ver se a variavel é par
         if(numero % 2 == 0){
             printf("%d \t", numero);
             i++;
         }
         numero++;
     }



    return 0;
}
