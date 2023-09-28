/*Faça um programa que verifique quantas vezes um número é divisível por outro. A
função deve receber dois parâmetros, o dividendo e o divisor. Ao ler o divisor, é
importante verificar se ele é menor que o dividendo. Ao final imprima o resultado.*/

#include <stdio.h>

int contador (int div, int dev){
    int count = 0;

    while (dev > div || dev == div){
        if(dev%div != 0){ //Caso o numero n seja divisivel, a função vai retornar quantas vezes ele foi
            return count;
        }
        else{
            dev = dev / div; //A cada divisão, é contabilizada em um contador ate que
                             //dividendo seja menor que o divisor ou não possa mais ser dividido
            count++;
        }
    }

    return count;
}

int main (){
    
    int divisor, dividendo;

    //Para que o programa entre no while sem problemas, eu inicializei dessa forma
    divisor = 2;
    dividendo = 1;

    //O programa vai se manter ai até que a condição seja atendida
    while (divisor > dividendo){

    //Leitura 
    printf("Digite o dividendo (o numero a ser dividido): ");
        scanf("%d", &dividendo);
    printf("Obs: O programa vai voltar a requisao caso divisor > dividendo");
    printf("\nDigite o divisor (o numero que ira dividir): ");
        scanf("%d", &divisor);

    }
    //Chamada da função
    printf("O %d é %d vezes divisível por %d", dividendo, contador(divisor, dividendo), divisor);

    
    return 0;
}