/*Uma floricultura conhecedora de sua clientela gostaria de fazer um programa que
pudesse controlar sempre um estoque mínimo de determinadas plantas, pois todo
dia, pela manhã, o dono faz novas aquisições. Criar um programa que deixe
cadastrar 10 plantas, nome, estoque mínimo, estoque atual. Imprimir ao final do
programa uma lista das plantas que devem ser adquiridas*/
#include <stdio.h>

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
