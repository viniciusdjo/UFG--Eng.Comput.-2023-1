/*Faça um programa em C que leia três números e, para cada um, imprimir o dobro. O
cálculo deverá ser realizado por uma função e o resultado impresso ao final do
programa.*/
#include <stdio.h>

//Função que dobra
int dobro (int* x){
    *x = 2*(*x);

    return *x;
}

int main (){

    //A escolha de um vetor é para evitar a criação de várias variáveis do mesmo tipo
    int n[3];
    printf("Escreva 3 numeros para dobrar: ");
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", n+i); //Coleta dos dados
            dobro(n+i); //Dobrando cada elemento 
        }
    //Impressão
        for (int i = 0; i < 3; i++)
        {
            printf("\nNumero %d: %d", i+1, n[i]);
        }
        
    

    return 0;
}
