/*Entrar com valores para uma matriz 2 x 3. Gerar e imprimir a C 3 x 2 (transposta). A
matriz transposta é gerada trocando linha por coluna*/

#include <stdio.h>

int main()
{
    int i, j;
    int mo[2][3];// = {{0, 0, 0}, {0, 0, 0}};
    int mt[3][2];// = {{0, 0}, {0, 0}, {0, 0}};
    
    //Coleta
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Digite o numero da linha %d e coluna %d: ", i+1, j+1);
                scanf("%d", &mo[i][j]);
        }
        
    }
    
    //Transportar
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            mt[i][j] = mo[j][i];
        }
        
    }
    //Impressão
    printf("Matriz Original: \n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j <3; j++)
        {
            printf("\t %d", mo[i][j]);
        }
        printf("\n");
    }

    printf("Matriz Transposta: \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j <2; j++)
        {
            printf("\t %d", mt[i][j]);
        }
        printf("\n");
    }


    return 0;
}