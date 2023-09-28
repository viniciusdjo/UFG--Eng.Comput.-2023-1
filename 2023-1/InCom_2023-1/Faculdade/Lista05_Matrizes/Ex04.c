/*Construa um programa que armazene dados em uma matriz 4 x 4 e imprima todos
os elementos com números ímpares*/

#include <stdio.h>

int main(){

    int i, j, impar[4][4];

    //Coleta
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite o elemtento da linha %d e coluna %d: ", i+1, j+1);
                scanf("%d", &impar[i][j]);
        }
    }

    //Impressão
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(impar[i][j] % 2 != 0){
                printf("[%d]x[%d] = %d\n", i+1, j+1, impar[i][j]);
            }
        }
    }

    return 0;
}