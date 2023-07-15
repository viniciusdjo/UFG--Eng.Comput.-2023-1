/*Escreva um programa em C que leia os elementos de uma matriz do tipo inteiro com
tamanho 5 X 5. Ao final, imprima todos os elementos*/

#include <stdio.h>

int main(){

    int i, j, matriz[5][5];

    //Coleta 
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++ ){
            printf("Digite o elemento da linha %d e coluna %d: ", i+1, j+1);
                scanf("%d", &matriz[i][j]);
        }
    }
    //Impressão
    printf("Matriz: \n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++ ){
            printf("\t%d", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}