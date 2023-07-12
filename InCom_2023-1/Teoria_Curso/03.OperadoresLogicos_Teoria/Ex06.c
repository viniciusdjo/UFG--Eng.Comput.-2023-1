/*Fazer  um  programa  que  ler  o  preço  de  um  produto.  
Se  esse  preço  for  maior que  100
o  valor  é  inflacionado  em  10%
e  em  20%  se  ele  for  menor  ou  igual a   100.
Não Pode usar IF*/

#include <stdio.h>

int main() {
    float preco, precoInflacionado;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    precoInflacionado = preco > 100 ? preco * 1.1 : preco * 1.2;

    printf("O novo preco do produto e: %.2f\n", precoInflacionado);

    return 0;
}

