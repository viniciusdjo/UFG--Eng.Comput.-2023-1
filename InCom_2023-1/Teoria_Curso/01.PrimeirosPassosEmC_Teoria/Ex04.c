/*Receber do usuário: 1 número inteiro, 1 número real e 1 letra. E depois printar os 3 elementos 
na tela. */

#include <stdio.h>

int main() {
    
    int i;
    float r;
    char l;

    printf("Digite um numero inteiro, um numero real e uma letra, respectivamente: ");
    scanf("%d %f %c", &i, &r, &l);

     printf("O numero inteiro digitado foi %d\n", i);
     printf("O numero real digitado foi %f\n", r);
     printf("A letra digitada foi ''%c''\n", l);
    return 0;
}
