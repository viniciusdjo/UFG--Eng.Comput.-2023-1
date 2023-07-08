/*Elabore um programa que conte o número total de elementos únicos em um vetor de
números inteiros, sendo o tamanho do vetor informado pelo usuário*/
#include <stdio.h>

int main() {
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    int contador = 0;

    for (int i = 0; i < tamanho; i++) {
        int unico = 1;  // Assume que o elemento é único

        // Verifica se o elemento já foi encontrado anteriormente
        for (int j = 0; j < i; j++) {
            if (vetor[i] == vetor[j]) {
                unico = 0;  // Elemento não é único
                break;
            }
        }

        if (unico) {
            contador++;  // Incrementa o contador de elementos únicos
        }
    }

    printf("O vetor possui %d elemento(s) unico(s).\n", contador);

    return 0;
}
