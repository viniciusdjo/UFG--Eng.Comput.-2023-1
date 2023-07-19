/*Construa um programa em C que leia valores inteiros para a matriz 5 x 3. Gerar e
imprimir o vetor somaLinhas[5], em que cada elemento é a soma dos elementos de
uma linha da matriz A. Faça o trecho que gera o vetor separado da entrada e da
saída.*/

#include <stdio.h>

int main()
{
    int i, j, matriz[5][3];

    //Coleta 
    for(i = 0; i < 5; i++){
        for(j = 0; j < 3; j++ ){
            printf("Digite o elemento da linha %d e coluna %d: ", i+1, j+1);
                scanf("%d", &matriz[i][j]);
        }
    }

    //Soma
    int somaLinhas[5] = {0, 0, 0, 0, 0};
    int soma = 0;

    for(i = 0; i < 5; i++){
        soma = 0;
        for(j = 0; j < 3; j++ ){
            
            soma = soma + matriz[i][j]; 
        }
        somaLinhas[i] = soma;
    }

    //Impressão
    printf("Soma das linhas: \n");
    for ( i = 0; i < 5; i++)
    {
        printf("\t %d", somaLinhas[i]);
    }
    
    return 0;
}