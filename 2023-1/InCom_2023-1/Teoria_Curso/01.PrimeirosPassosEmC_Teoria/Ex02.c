/*Fazer um programa que mostre um cardápio ao usuário, enumerado. 
E permita o usuário escolher um dos itens.*/

#include <stdio.h>

int main () {

    int escolha;

    printf("Cardapio ao usuário: \n");
        printf("1 - Batata\n");
        printf("2 - Cenoura\n");
        printf("3 - Espresso\n");
        printf("4 - Refrigerante\n");
        printf("5 - Suco\n");
        printf("0 - Sair\n");

    printf("Escolha: ");
        scanf("%d", &escolha);
    switch (escolha) {
        case 1:
            printf("Batata\n");
            break;
        case 2:
            printf("Cenoura\n");
            break;
        case 3:
            printf("Espresso\n");
            break;
        case 4:
            printf("Refrigerante\n");
            break;
        case 5:
            printf("Suco\n");
            break;
        case 0:
            printf("Sair\n");
            break;
        default:
            printf("Opção inválida\n");
            break;
    }

    return 0;
}