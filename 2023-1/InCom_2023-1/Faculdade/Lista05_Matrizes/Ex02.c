/*Escreva um programa que leia os elementos de uma matriz do tipo inteiro com
tamanho 3 X 3 e imprima todos os elementos multiplicando por 2*/

#include <stdio.h>

int main(){
    int i, j, matriz[3][3];

    //Coleta 
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++ ){
            printf("Digite o elemento da linha %d e coluna %d: ", i+1, j+1);
                scanf("%d", &matriz[i][j]);
        }
    }

    //Multiplicação
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++ ){
            matriz[i][j] = matriz[i][j] * 2;
        }
    }

    //Impressão
    printf("Nova Matriz: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++ ){
            printf("\t%d", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}