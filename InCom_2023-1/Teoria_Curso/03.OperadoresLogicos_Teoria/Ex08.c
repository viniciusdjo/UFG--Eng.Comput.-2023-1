/*Desenvolva   o   jogo   par   ou   ímpar*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int NUM1,NUM2,jogador1;
        printf("JOGADOR 1: ESCOLHE PAR(1) OU IMPAR(0): ");
            scanf("%d",&jogador1);

    if(jogador1==1){
        printf("\nJOGADOR 1 --> PAR\nJOGADOR 2 --> IMPAR\n\n");

    system("pause");

    system("cls");

        printf("JOGADOR 1: DIGITE UM NUMERO --> ");
            scanf("%d",&NUM1);

    system("cls");

        printf("JOGADOR 2: DIGITE UM NUMERO --> ");
            scanf("%d",&NUM2);

    system("cls");

        printf("\nJOGADOR 1: %d\n\nJOGADOR 2: %d\n\n",NUM1,NUM2);

    if((NUM1+NUM2)%2==0){
        printf("JOGADOR 1 GANHOU!!!!!!!");
    }
    else
        printf("JOGADOR 2 GANHOU!!!!!!!");
    }
    else {
        printf("\nJOGADOR 1 --> IMPAR\nJOGADOR 2 --> PAR\n\n");

    system("pause");

    system("cls");

        printf("JOGADOR 1: DIGITE UM NUMERO --> ");
            scanf("%d",&NUM1);

    system("cls");

        printf("JOGADOR 2: DIGITE UM NUMERO --> ");
            scanf("%d",&NUM2);

    system("cls");

        printf("\nJOGADOR 1: %d\n\nJOGADOR 2: %d\n\n",NUM1,NUM2);

    if((NUM1+NUM2)%2!=0){
        printf("JOGADOR 1 GANHOU!!!!!!!");
    }
    else
        printf("JOGADOR 2 GANHOU!!!!!!!");
    }
    
    return 0;
}