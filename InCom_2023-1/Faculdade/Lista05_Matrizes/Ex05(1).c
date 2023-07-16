/*Crie um programa que leia valores inteiros em uma matriz A[2][2] e em uma matriz
B[2][2]. Gerar e imprimir a matriz SOMA[2][2]*/

#include <stdio.h>

int main(){
    int i, j, A[2][2], B[2][2], soma[2][2];

    //Coleta Matriz A
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Matriz A = Digite o elemento da linha %d e coluna %d: ", i+1, j+1);
                scanf("%d", &A[2][2]);
        }
    }

    //Coleta Matriz B
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Matriz B = Digite o elemento da linha %d e coluna %d: ", i+1, j+1);
                scanf("%d", &B[2][2]);
        }
    }

    //A + B
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            soma[i][j] = A[i][j] + B[i][j];
        }
    }

    //Impressão
    printf("Nova Matriz: \n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("\t %d", soma[i][j]);
        }
        printf("\n");
    }

    return 1;
}