/*Escreva um programa que armazene dados inteiros em uma matriz 5 x 3 e imprima:
Todos os elementos que se encontram em posições cuja linha mais coluna formam
um número par.*/

#include <stdio.h>

int main(){
    
    int i, j, soma, matriz[5][3];

    //Coleta 
    for(i = 0; i < 5; i++){
        for(j = 0; j < 3; j++ ){
            printf("Digite o elemento da linha %d e coluna %d: ", i+1, j+1);
                scanf("%d", &matriz[i][j]);
        }
    }

    //Impressão (i + j % 2 = 0)
    for(i = 0; i < 5; i++){
        for(j = 0; j < 3; j++ ){
          soma = i + j;
          if(soma % 2 == 0){
            printf("[%d]x[%d] = %d\n", i+1, j+1, matriz[i][j]);
          }  
        }
    }


    return 0;
}