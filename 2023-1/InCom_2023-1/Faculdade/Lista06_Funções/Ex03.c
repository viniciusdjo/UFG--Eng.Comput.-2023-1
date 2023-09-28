/*Faça um programa que verifique se um número é primo por meio de uma função. Ao
final imprima o resultado.*/

#include <stdio.h>

//Função de verificação de primo
int primo (int x){
    int i, p = 0;
    
    //Para cada resto 0, é incrementado 1 no p
    //Ou seja, se p > 2, então significa
    //que o numero é divisivel por outro numero alem dele mesmo e 1
    for (i = x; i > 0; i--){
        if (x%i == 0){
            p++;
        }
    }

    return p;
}

int main(){
    int num;

    //Coleta
    printf("Digite um numero para verificar se é primo: ");
        scanf("%d", &num);
    
    //Chamada da função primo
    if (primo(num) > 2){
        printf("\n%d não é primo\n", num);
    }
    else {
        printf("\n%d é primo\n", num);
    }

    return 0;
}