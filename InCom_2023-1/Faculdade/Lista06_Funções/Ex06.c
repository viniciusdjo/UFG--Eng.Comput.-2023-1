/*Faça um programa que leia o lado de um quadrado e imprima o perímetro, a área e
a diagonal. Para fazer o cálculo, implemente três funções, cada uma deve realizar
um cálculo específico conforme solicitado. Utilize as fórmulas a seguir.
Formulas do quadrado (perimetro, area e diagonal)*/
#include <stdio.h>
#include <math.h>

//Função do perimetro
float perimetro (float l){
    return 4*l;
}

//Função da area
float area (float l){
    return l*l;
}

//Função da diagonal
float diag (float l){
    float d;
    d = l * sqrt(2);
    return d;
}

int main (){
    float l;

    //Coleta da base
    printf("Informe o lado do um quadrado: ");
        scanf("%f", &l); 

    //Chamada das funções
        //Perimetro
        printf("\nPerimetro = %f\n", perimetro(l));
        //Area
        printf("Area = %f\n", area(l));
        //Diagonal
        printf("Diagonal = %f\n", diag(l));

    return 0;
}
