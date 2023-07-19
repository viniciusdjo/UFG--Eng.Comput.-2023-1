/*Escreva um programa que leia uma matriz 4 X 5 de inteiros, calcule e imprima a
soma de todos os seus elementos.*/

#include <stdio.h>

int main()
{
    int i, j, matriz[4][5];

    //coleta
    for (i = 0; i < 4; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("Digite o numero da linha %d e coluna %d: ", i+1, j+1);
                scanf("%d", &matriz[i][j]);
        }
        
    }

    //Soma
    int soma = 0;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            soma = soma + matriz[i][j];
        }
        
    }
    
    //Impressão
    printf("Soma da matriz = %d", soma);
    


    return 0;
}