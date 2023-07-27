/*Faça um programa que receba as notas de três provas e calcule a média. Para o
cálculo, escreva uma função. O programa deve imprimir a média ao final.*/

#include <stdio.h>

//Função que calcula a media
int media (int *notas){
    int soma = 0;

    for (int i = 0; i < 3; i++){
        soma = soma + notas[i];
    }

    return soma / 3;

}

int main() {

    int i, notas[3];

    printf("Coloque as notas: \n");

    //Coleta 
    for(i = 0; i < 3; i++){
        printf("\nNota da prova %d: ", i+1);
        scanf("%d", notas+i);
    }    
    //Chamada da função media
    printf("Media = %d",media(notas));

    return 0;
}