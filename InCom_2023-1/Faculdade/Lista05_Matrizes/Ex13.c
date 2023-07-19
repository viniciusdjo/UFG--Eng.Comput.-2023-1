/*Faça um programa que leia uma matriz 5 X 5 e apresente uma determinada linha da
matriz, solicitada via teclado*/

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

    //Requisição
    int escolha;
    printf("Qual linha vizualizar (1 a 5): ");
        scanf("%d", &escolha);
    
    switch (escolha)
    {
    case 1:
        printf("Linha 1: \n");
        for ( j = 0; j < 5; j++)
        {
            printf("\t %d", matriz[0][j]);
        }
        break;
    case 2:
        printf("Linha 2: \n");
        for ( j = 0; j < 5; j++)
        {
            printf("\t %d", matriz[1][j]);
        }
        break;
    case 3:
        printf("Linha 3: \n");
        for ( j = 0; j < 5; j++)
        {
            printf("\t %d", matriz[2][j]);
        }
        break;
    case 4:
        printf("Linha 4: \n");
        for ( j = 0; j < 5; j++)
        {
            printf("\t %d", matriz[3][j]);
        }
        break;
    case 5:
        printf("Linha 5: \n");
        for ( j = 0; j < 5; j++)
        {
            printf("\t %d", matriz[4][j]);
        }
        break;
    default:
        printf("A linha pedida nao existe");
        break;
    }
    return 0;
}