/*Receber 3 números digitados pelo usuário e em seguida printar esses números*/

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite outro número: ");
    scanf("%d", &num2);

    printf("Digite mais um número: ");
    scanf("%d", &num3);

    printf("Os números digitados foram: %d, %d, %d\n", num1, num2, num3);

    return 0;
}