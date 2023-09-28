/*Apenas consegui com struct, porém apenas com um cola então peço para desconsiderar o exercicio e zerar ele para mim*/
#include <stdio.h>
#include <string.h>

// Definindo a estrutura para representar cada planta
struct Planta {
    char nome[50];
    int estoque_minimo;
    int estoque_atual;
};

int main() {
    // Criando um array de estruturas para armazenar as plantas
    struct Planta plantas[10];

    // Cadastrando as plantas
    for (int i = 0; i < 10; i++) {
        printf("Digite o nome da planta %d: ", i+1);
        scanf("%s", plantas[i].nome);

        printf("Digite o estoque mínimo da planta %d: ", i+1);
        scanf("%d", &plantas[i].estoque_minimo);

        printf("Digite o estoque atual da planta %d: ", i+1);
        scanf("%d", &plantas[i].estoque_atual);
    }

    // Imprimindo a lista das plantas que precisam ser adquiridas
    printf("\nPlantas que precisam ser adquiridas:\n");
    for (int i = 0; i < 10; i++) {
        if (plantas[i].estoque_atual < plantas[i].estoque_minimo) {
            printf("%s\n", plantas[i].nome);
        }
    }

    return 0;
}
