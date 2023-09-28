/*Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na tela os valores lidos na ordem inversa*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[6] = {0, 0, 0, 0, 0, 0};

    //Colect
        printf("Write 6 integer values: \n");
            for (int i = 0; i < 6; i++)
            {
                printf("%d: ", i+1);
                scanf("%d", &array[i]);
            }
    
    //Invert
        int temp;

        for (int i = 0; i < 3; i++)
        {
            temp = array[i];
            array[i] = array[5-i];
            array[5-i] = temp;
        }

    //Print
        for (int i = 0; i < 6; i++)
        {
            printf("\t %d", array[i]);
        }
        printf("\n");
    
    return 0;
}
