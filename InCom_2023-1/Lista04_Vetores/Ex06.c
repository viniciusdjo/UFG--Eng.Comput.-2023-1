/*Elabore um programa que armazene N valores em um vetor, e depois imprima a
soma de todos os elementos inseridos*/

#include <stdio.h>

int main()
{
    int soma, n;

    //Definir o tamanho do vetor
    printf("Quantidade de numeros a serem somados: ");
        scanf("%d", &n);
    int vetor[n];

    //Definir o vetor
    for (int i = 0; i < n; i++)
    {
        printf("Insira o numero %d º: ", i+1);
            scanf("%d", &vetor[i]);
    }

    //Soma dos termos
    for (int i = 0; i < n; i++)
    {
        soma = soma + vetor[i];
    }

    printf("\nResultado da soma dos numeros = %d", soma);

    return 0;
}