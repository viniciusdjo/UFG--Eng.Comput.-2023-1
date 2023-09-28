/*Receber um número na tela e printar o cubo dele.*/

#include <stdio.h>

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("O cubo de %d é %d\n", num, num * num * num);

    return 0;
}