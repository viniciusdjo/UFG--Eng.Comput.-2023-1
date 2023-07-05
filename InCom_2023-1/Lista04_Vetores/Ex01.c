//Faça um programa que receba um vetor com 10 números inteiros e posteriormente receba um número inteiro verifique se ele está ou não no vetor

#include <stdio.h>

int main()
{
    int num[10], n, i, r;

    printf("Coloque 10 numeros: \n");

    for (i = 0; i < 10; i++)
    {
        printf("\n Numero: ");
        scanf("%d", &num[i]);
    }

    printf("Informe um numero: \n");
    scanf("%d", &n);

    for ( i = 0; i < 10; i++)
    {
        if (num[i] == n)
        {
            r = 1;
        }
        
    }
    
    if (r == 1)
    {
        printf("%d esta no vetor", n);
    }
    else {
        printf("%d nao esta no vetor", n);
    }
    
    




    return 0;
}