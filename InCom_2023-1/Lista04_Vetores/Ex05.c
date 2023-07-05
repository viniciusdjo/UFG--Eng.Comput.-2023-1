/*Faça um programa que receba um vetor com 10 números inteiros. Mostre, após as
leituras dos dados, qual o maior elemento passado e em qual índice do vetor ele se
encontra.*/

#include <stdio.h>

int main()
{
    int vetor[10], ind;

    for (int i = 0; i < 10; i++)
    {
        printf("Informe o numero: ");
            scanf("%d", &vetor[i]);
    }

    int maior = vetor[0];

    for (int i = 0; i < 10; i++)
    {
        if (maior < vetor[i+1])
        {
            maior = vetor[i+1];
            ind = i + 1;
        }
        
    }
    
    printf("Maior numero do vetor = %d \n", maior);
    printf("Indice do vetor = %d", ind);

    return 0;
}