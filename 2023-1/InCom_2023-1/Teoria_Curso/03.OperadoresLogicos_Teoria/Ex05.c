/*Ler   uma   data   (no   formato   ddmmaaaa)
e   imprimir   se   a   data   é   válida*/

#include <stdio.h>

int main(){

    int d, m, a;

    printf("Digite uma data (no formato ddmmaaaaa): ");
        scanf("%2d%2d%4d", &d, &m, &a);
    
    //Verificação de validade
        if(d > 31 || m > 12){
            printf("A data é invalida");
            return 0;
        }
    //Verificação de validade para anos bisextos
        int bisexto; //0 = não e 1 = sim;
            bisexto = a % 4;
            if (bisexto == 0){
                //O ano é bisexto
                bisexto = 1;
            }
            else {
                //O ano não é bisexto
                bisexto = 0;
            }
    //Verificação de Fevereiro
        if(m == 2){
            if(d > 30){
                printf("Data invalida");
                return 0;
            }
            else if (d > 28 && bisexto == 0){
                printf("Data invalida");
                return 0;
            }
        }
    //Impressão de data
        printf("Data: %d/%d/%d", d, m, a);


    return 0;
}