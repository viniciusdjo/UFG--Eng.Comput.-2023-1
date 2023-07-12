/*Escreva  um  programa  em  C  que  realiza  a  soma  de  vários  números.  A 
quantidade  de  números  a  serem  somados  
não  é  conhecida  a  priori  e  nem 
fornecida pelo usuário  explicitamente. 
O programa deve começar lendo do usuário um número. 
Em seguida, o programa deve perguntar ao usuário se 
mais algum número vai ser digitado; 
se o usuário digitar 1, o programa deve ler mais um número 
e então novamente perguntar se mais algum número vai 
ser digitado; 
quando o usuário finalmente digitar um número diferente de 1, 
o  programa  deve  imprimir  na  tela  a  soma  de  todos  os  números  que  foram 
digitados  (não  incluindo,  porém,  os  números  digitados  como  resposta  à 
pergunta sobre se mais algum número deve ser digitado).*/

#include <stdio.h> 
int main()
{
    int num,soma,aux;

    soma = 0;
    aux = 1;

    while(aux){
        printf("\nEscreva um numero: ");
            scanf("%d", &num);
        soma = soma+num;

        printf("\nTem mais algum numero: (1)Sim (0)Nao/ Resposta: ");
            scanf("%d", &num);
        if(num != 1)
            aux = 0; 
    }
    printf("\n Soma = %d", soma);


    return 0;
}
