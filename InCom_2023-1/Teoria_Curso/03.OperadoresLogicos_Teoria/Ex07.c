/*Receba   três   números:   A,B   e   C.  
Depois   printe   na   tela   eles   em   ordem                          
crescente.  */

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b, c;

    printf("Digite tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    // Ordena os numeros em ordem crescente
    if (a > b) {
        swap(&a, &b);
    }
    if (a > c) {
        swap(&a, &c);
    }
    if (b > c) {
        swap(&b, &c);
    }

    // Imprime os numeros em ordem crescente
    printf("Numeros em ordem crescente: %d %d %d\n", a, b, c);

    return 0;
}
