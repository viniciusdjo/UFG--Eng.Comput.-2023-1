/*Escreva um programa para armazenar N valores inteiros em um vetor, fornecidos
pelo usuário. Feita a leitura dos dados, imprima-os na ordem inversa a qual foram
lidos.*/

#include <stdio.h>

int main()
{
    int n, i;

    printf("Informe o tamanho do Vetor: ");
        scanf("%d", &n);
    
    int vetor[n];

    for (i = 0; i < n; i++)
    {
        printf("Informe o numero %d: \n", i+1);
            scanf("%d", &vetor[i]);
    }
    for ( i = i; i > -1; i--)
    {
        printf("%d \t", vetor[i]);
    }

/*Na saida do meu cod, ele ta mostrando um 0 ou o endereço da memoria.
Mas quando eu uso o Debug, ele mostra apenas 5 elementos no vetor. Não sei como tirar esse 0 do início.*/
    return 1;
}