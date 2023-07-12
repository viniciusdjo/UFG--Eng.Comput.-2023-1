/*Faça  um  programa  que  receba  dois  números  do  usuário  e  indique  qual  é  o                            
maior.*/

#include <stdio.h>

int main (){
    float x, y;

    printf("Digite um numero: ");
        scanf("%f", &x);
    printf("\nDigite outro numero para comparar: ");
        scanf("%f", &y);

    if(x > y){
        printf("\nO maior numero é: %.0f", x);
    }
    else if (y>x){
        printf("\nO maior numero é: %.0f", y);
    }
    else {
        printf("\nOs dois números são iguais");
    }
    return 0;
}