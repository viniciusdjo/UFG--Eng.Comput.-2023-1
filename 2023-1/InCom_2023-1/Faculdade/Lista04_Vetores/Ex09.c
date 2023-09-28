#include <stdio.h>

int main()
{
    int vetor[10], i, j, aux;

    printf("Coloque 10 numeros:\n");

    for (i = 0; i < 10; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    printf("Valores em ordem crescente:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}