/*Faça um programa que leia uma matriz 5 X 5 e apresente uma determinada coluna
da matriz, solicitada via teclado*/

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
    printf("Qual coluna vizualizar (1 a 5): ");
        scanf("%d", &escolha);
    
    switch (escolha)
    {
    case 1:
        printf("Coluna 1: \n");
        for ( i = 0; i < 5; i++)
        {
            printf("%d \n", matriz[i][0]);
        }
        break;
    case 2:
        printf("Coluna 2: \n");
        for ( i = 0; i < 5; i++)
        {
            printf(" %d \n", matriz[i][1]);
        }
        break;
    case 3:
        printf("Coluna 3: \n");
        for ( i = 0; i < 5; i++)
        {
            printf("%d \n", matriz[i][2]);
        }
        break;
    case 4:
        printf("Coluna 4: \n");
        for ( i = 0; i < 5; i++)
        {
            printf("%d \n", matriz[i][3]);
        }
        break;
    case 5:
        printf("Coluna 5: \n");
        for ( i = 0; i < 5; i++)
        {
            printf("%d \n", matriz[i][4]);
        }
        break;
    default:
        printf("A coluna pedida nao existe");
        break;
    }
    return 0;
}