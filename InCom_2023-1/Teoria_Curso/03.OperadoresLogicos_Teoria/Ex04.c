/*Receber   um   número   e   indicar   se   ele   é   par */
#include <stdio.h>

int main(){

    int n, par;

    printf("Digite um numero: ");
        scanf("%d", &n);
    
    par = n%2;

    switch (par){
        case 0:
            printf("O numero %d é par", n);
        break;
        default:
            printf("O numero %d é impar", n);
    }

    return 0;
}