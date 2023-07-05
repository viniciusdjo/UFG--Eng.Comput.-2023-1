/*Considere um vetor de tamanho N e um número inteiro K. Leia os valores de N e K
passados pelo usuário e em seguida, leia os N números do vetor. Ao final,
contabilize quantos elementos do vetor são maiores ou iguais ao inteiro K.*/

#include <stdio.h>

int main()
{
    int c,i,k,soma;

    printf("Informe o tamanho do Vetor: \n");
        scanf("%d", &i);

    int n[i];

    printf("Informe um numero: \n");
        scanf("%d", &k);

    printf("\n Informe os N numeros do vetor: \n");
        for (c = 0; c < i; c++)
        {
            printf("Numero: \n");
            scanf("%d", &n[c]);
        }
    //Rescrever os numero maiores como 1 e menores como 0. A soma será a quantidade dos maiores
    for ( i = 0; i < 10; i++)
    {
        if (n[i] >= k)
        {
            n[i] = 1;
        }
        else {
            n[i] = 0;
        }
    }
    
    for ( i = 0; i < 10; i++)
    {
        soma = soma + n[i];
    }
    printf("Quantidade de numeros maiores que %d = %d", k, soma);
    









    return 0;
}
