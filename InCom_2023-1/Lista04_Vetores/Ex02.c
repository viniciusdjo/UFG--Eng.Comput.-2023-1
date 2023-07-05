/*Faça um programa que receba um vetor com 10 números inteiros e posteriormente
receba um número inteiro X. Percorra então o vetor, substituindo valores maiores
que X por 1 e menores que X por 0.*/

#include <stdio.h>

int main()
{
    int num[10], x, i;

    printf("Coloque 10 numeros: \n");

    for (i = 0; i < 10; i++)
    {
        printf("\n Numero: ");
        scanf("%d", &num[i]);
    }

     printf("Informe um numero: ");
    scanf("%d", &x);

    for ( i = 0; i < 10; i++)
    {
        if (num[i] >= x)
        {
            num[i] = 1;
        }
        else {
            num[i] = 0;
        }
        
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d \n", num[i]);
    }
    
    

    return 0;
}