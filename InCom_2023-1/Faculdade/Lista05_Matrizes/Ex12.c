/*Faça um programa em C que possa armazenar os nomes e as alturas de 2 atletas
de três delegações que participarão dos jogos de inverno. Imprimir o nome e a altura
do maior atleta de cada delegação*/
#include <stdio.h>
#include <string.h>

#define NUM_DELEGACOES 3
#define NUM_ATLETAS 2

int main() {
    char nomes[NUM_DELEGACOES][NUM_ATLETAS][50];
    float alturas[NUM_DELEGACOES][NUM_ATLETAS];

    // Cadastro dos atletas
    for (int i = 0; i < NUM_DELEGACOES; i++) {
        printf("Delegacao %d:\n", i+1);
        for (int j = 0; j < NUM_ATLETAS; j++) {
            printf("Digite o nome do atleta %d: ", j+1);
            scanf("%s", nomes[i][j]);

            printf("Digite a altura do atleta %d: ", j+1);
            scanf("%f", &alturas[i][j]);
        }
    }

    // Encontrar o maior atleta de cada delegação e imprimir
    for (int i = 0; i < NUM_DELEGACOES; i++) {
        int indiceMaior = 0;
        for (int j = 1; j < NUM_ATLETAS; j++) {
            if (alturas[i][j] > alturas[i][indiceMaior]) {
                indiceMaior = j;
            }
        }

        printf("\nDelegacao %d - Maior atleta:\n", i+1);
        printf("Nome: %s\n", nomes[i][indiceMaior]);
        printf("Altura: %.2f\n", alturas[i][indiceMaior]);
    }

    return 0;
}
