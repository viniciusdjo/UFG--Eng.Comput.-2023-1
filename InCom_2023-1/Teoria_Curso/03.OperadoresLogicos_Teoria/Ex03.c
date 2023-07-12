/*Receber  dois  valores  do  usuário:  ALTURA  e  PESO.  A  partir  deles  calcular                        
o   IMC. A   partir   do   cálculo   do   IMC   indique  ao  usuário  a  SITUAÇÃO  para  uma                          
pessoa   com   essa   ALTURA   e   PESO*/

#include <stdio.h>

int main (){
    float imc, h, w;

    printf("Digite a sua altura (em m): ");
        scanf("%f", &h);
    printf("Digite seu peso (em kg): ");
        scanf("%f", &w);

    h = h * h;
    imc = w / h;

    if (imc < 20){
        printf("A pessoa esta dentro da faixa de Abaixo do Peso.");
    }
    else if (imc >= 20 && imc < 25){
        printf("A pessoa esta dentro da faixa de Peso Normal");
    }

    else if (imc >= 25 && imc < 30){
        printf("A pessoa esta dentro da faixa de Sobre Peso");
    }
    else if (imc >= 30 && imc < 40){
        printf("A pessoa esta dentro da faixa de Obeso");
    }
    else {
        printf("A pessoa esta dentro da faixa de Obesidade Morbida");
    }

    return 0;
}