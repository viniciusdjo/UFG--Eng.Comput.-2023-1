/*Receba um número do usuário e em seguida printe na tela, 
utilizando uma estrutura de repetição, o seguinte formato: 
NÚMERO x 1 = RESULTADO 
NÚMERO x 2 = RESULTADO 
... 
NÚMERO x 10 = RESULTADO 
 
No local de NÚMERO deve aparecer o valor digitado pelo usuário.*/

#include <stdio.h>

int main(){
    int n;

    printf("Digite um numero para ter a tabuada dele: ");
        scanf("%d", &n);

    for(int i = 1; i < 11; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }



    return 0;
}