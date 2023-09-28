/*Faça um programa que leia o saldo e o reajuste (%) de uma aplicação financeira e
imprima o novo saldo após o reajuste. O cálculo deve ser feito por uma função*/
#include <stdio.h>

//Função de cálculo
//Como é uma aplicação, é melhor usar float
float calcularNovoSaldo(float saldo, float reajuste) {
    float novoSaldo = saldo + (saldo * reajuste / 100);
    return novoSaldo;
}

int main() {
    float saldo, reajuste;

    // Leitura do saldo e do percentual de reajuste
    printf("Digite o saldo da aplicação: ");
    scanf("%f", &saldo);

    printf("Digite o percentual de reajuste: ");
    scanf("%f", &reajuste);

    // Cálculo do novo saldo usando a função calcularNovoSaldo
    float novoSaldo = calcularNovoSaldo(saldo, reajuste);

    // Impressão do novo saldo após o reajuste
    printf("Novo saldo após o reajuste: %.2f\n", novoSaldo);

    return 0;
}
