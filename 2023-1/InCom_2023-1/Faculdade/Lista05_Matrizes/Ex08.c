/*Construa um programa em C que leia valores inteiros para a matriz 3 x 5. Gerar e
imprimir o vetor somaColunas[5], em que cada elemento é a soma dos elementos de
uma linha da matriz A. Faça o trecho que gera o vetor separado da entrada e da
saída*/

#include <stdio.h>

int main (){
    
    int matriz[3][5], i, j;

    //Coleta 
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++ ){
            printf("Digite o elemento da linha %d e coluna %d: ", i+1, j+1);
                scanf("%d", &matriz[i][j]);
        }
    }

    //Soma
    int somaColunas[5] = {0, 0, 0, 0, 0};
    int soma;

    for(j = 0; j < 5; j++){
        soma = 0;
        for(i = 0; i < 3; i++ ){
            soma = soma + matriz[i][j];
        }
        somaColunas[j]= soma;
    }    

    //Impressão
    printf("Soma das Colunas: \n");
    for ( i = 0; i < 5; i++)
    {
        printf("\t %d", somaColunas[i]);
    }

    return 0;
}