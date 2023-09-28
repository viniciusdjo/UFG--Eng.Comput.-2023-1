/*Faça um programa que leia os catetos (dois catetos) de um triângulo retângulo e
imprima a hipotenusa. Para fazer o cálculo, implemente uma função. Utilize a
fórmula a seguir
hipotenusa² = a² + b²*/
/*Faça um programa que leia a base e a altura de um retângulo e imprima o
perímetro, a área e a diagonal. Para fazer os cálculos, implemente três funções,
cada uma deve realizar um cálculo específico conforme solicitado. Utilize as
fórmulas a seguir.
perimetro = 2*(base + altura)
Area = base * altura
diagonal = (base² + altura²)^(1/2)
*/
#include <stdio.h>
#include <math.h>

//Função da hip
int hip (int b, int h){
    int hip, s2;
    s2 = pow(b,2) + pow(h,2);
    hip = sqrt(s2);
    return hip;
}

int main (){
    int b, h;

    //Coleta da base
    printf("Informe um cateto: ");
        scanf("%d", &b); 

    //Coleta da altura
    printf("\nInforme o outro cateto: ");
        scanf("%d", &h);

    //Chamada da função hip
        printf("\nHipotenusa = %d\n", hip(b,h));

    return 0;
}