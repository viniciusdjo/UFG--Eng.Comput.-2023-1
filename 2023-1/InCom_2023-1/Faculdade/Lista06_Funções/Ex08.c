/*Os comerciantes estão procurando aumentar suas vendas oferecendo desconto.
Faça um programa que permita entrar com o valor de um produto e o percentual de
desconto e imprimir o novo valor com base no percentual informado. Para fazer o
cálculo, implemente uma função*/

#include <stdio.h>

float calculo(float v, float d){
    int resultado;

    resultado = v - (v*d);

    return resultado;
}

int main(){

    float valor, desconto;

    //Leitura
    printf("Digite o valor do produto: ");
        scanf("%f", &valor);
    printf("Digite o valor do desconto (em porcentagem): ");
        scanf("%f", &desconto);
    desconto = desconto / 100;

    //Chamada da função
    printf("Novo valor = R$ %2.2f", calculo(valor,desconto));

    return 0;
}