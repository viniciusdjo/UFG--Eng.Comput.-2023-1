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

//Função do perimetro
int perimetro (int b, int h){
    int p;
    p = b + h;
    return 2*p;
}

//Função da area
int area (int b, int h){
    int a;
    a = b*h;
    return a;
}

//Função da diagonal
int diag (int b, int h){
    int d, s2;
    s2 = pow(b,2) + pow(h,2);
    d = sqrt(s2);
    return d;
}

int main (){
    int b, h;

    //Coleta da base
    printf("Informe a base de um retangulo: ");
        scanf("%d", &b); 

    //Coleta da altura
    printf("\nInforme a altura do retangulo: ");
        scanf("%d", &h);

    //Chamada das funções
        //Perimetro
        printf("\nPerimetro = %d\n", perimetro(b,h));
        //Area
        printf("Area = %d\n", area(b,h));
        //Diagonal
        printf("Diagonal = %d\n", diag(b,h));

    return 0;
}