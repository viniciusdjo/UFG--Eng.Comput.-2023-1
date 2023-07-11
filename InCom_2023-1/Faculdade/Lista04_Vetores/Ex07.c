/*Faça um programa que receba um vetor de 20 números inteiros, onde cada número
está no intervalo de 0 a 10. Ao final da leitura dos dados, informe qual a frequência
de cada número no vetor, ou seja, quantas vezes 0 apareceu, quantas vezes 1
apareceu, etc, até o 10*/

#include <stdio.h>

int main() {
    int vetor[20];
    int frequencia[11] = {0};

    printf("Digite os 20 números inteiros (entre 0 e 10):\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);

        // Verifica se o número está no intervalo válido
        if (vetor[i] < 0 || vetor[i] > 10) {
            printf("Número inválido. Digite novamente.\n");
            i--; 
        }
    }

    // Cálculo da frequência
    for (int i = 0; i < 20; i++) {
        frequencia[vetor[i]]++;
    }

    printf("Frequência dos números:\n");
    for (int i = 0; i <= 10; i++) {
        printf("%d: %d\n", i, frequencia[i]);
    }

    return 0;
}
