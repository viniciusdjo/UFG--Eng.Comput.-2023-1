/*Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na tela os valores lidos*/

#include <stdio.h>

int main()
{
    int num[6];

//Coleta
    printf("Escreva 6 seis numeros inteiros: \n");
    for (int i = 0; i < 6; i++)
    {
        printf("\nNumero %d: ", i+1);
            scanf("%d", &num[i]);
    }

//Impressão
    printf("Impressao do vetor: \n");
    for (int i = 0; i < 6; i++)
    {
        printf("\t%d", num[i]);
    }

    return 0;
}
