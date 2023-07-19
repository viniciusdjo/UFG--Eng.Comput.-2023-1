/*Desafio: Crie um programa que leia e armazene os elementos de uma matriz inteira com
tamanho 5 X 5 e imprimi-la. Troque, a seguir:
● a segunda linha pela quinta, e imprima a matriz;
● a terceira coluna pela quinta, e imprima a matriz;
● a diagonal principal pela diagonal secundária, e imprima a matriz.*/

#include <stdio.h>

int main()
{
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

    //Primeira Troca
    int aux = 0;
    printf("Permutacao da linha 2 pela linha 5: \n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++ ){
            if (i == 2){
                aux = matriz[2][j];
                matriz[2][j] = matriz[5][j];
                matriz[5][j] = aux;
            }
        }
    }
     //Impressão da Nova Matriz
        for(i = 0; i < 5; i++){
            for(j = 0; j < 5; j++ ){
                printf("\t%d", matriz[i][j]);
            }
            printf("\n");
        }
    return 0;
}