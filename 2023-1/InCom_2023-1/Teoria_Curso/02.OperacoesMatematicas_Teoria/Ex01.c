/*Receber dois números digitados pelo usuário e imprimir a soma, subtração, 
multiplicação, divisão e resto da divisão desses números*/

#include <stdio.h>

int main(){
    int n1, n2;

    printf("Digite um número: ");
        scanf("%d", &n1);
    printf("Digite outro número: ");
        scanf("%d", &n2);

    printf("A soma é: %d\n", n1 + n2);
    printf("A subtração é: %d\n", n1 - n2);
    printf("A multiplicação é: %d\n", n1 * n2);
    printf("A divisão é: %d\n", n1 / n2);
    printf("O resto da divisão é: %d\n", n1 % n2);


    return 0;
}