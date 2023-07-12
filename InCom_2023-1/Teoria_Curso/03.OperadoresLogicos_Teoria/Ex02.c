/*Desenvolva   um   programa   que   apresente   o   seguinte   menu:  
 
1- SOMA  
2- SUBTRAÇÃO  
3- MULTIPLICAÇÃO  
4- DIVISÃO  
DIGITE   SUA   ESCOLHA:  
E  permita  o  usuário  digitar  um  número  escolhendo  um  dos  itens  listados  no                          
menu.  Para  cada  item  receba  dois  números  e  realize  a  operação  indicada,  ao  final                            
printar   na   tela   o   resultado*/

#include <stdio.h>

int main (){
    int escolha;
    float n1,n2;

    printf("Escolha uma operacao: \n");
        printf("\t1- Soma\n");
        printf("\t2- Subtracao\n");
        printf("\t3- Multiplicacao\n");
        printf("\t4- Divisao\n");
        printf("\tDigite a sua escolha (1 a 4): ");
            scanf("%d", &escolha);

    printf("\nDigite 2 numeros para fazer a operacao: ");
        printf("\nNumero 1: ");
            scanf("%f", &n1);
        printf("Numero 2: ");
            scanf("%f", &n2);

    switch (escolha){
        case 1:
            printf("A Soma de %.0f e %.0f tem resultado igual a %.0f", n1, n2, n1+n2);
            break;
        case 2:
            printf("A diferenca de %.0f e %.0f tem resultado igual a %.0f", n1, n2, n1-n2);
            break;
        case 3:
            printf("O produto de %.0f e %.0f tem resultado igual a %.0f", n1, n2, n1*n2);
            break;
        case 4:
            printf("A divisao de %.0f e %.0f tem resultado igual a %.2f", n1, n2, n1/n2);
            break;
        default:
            printf("Foi solicitado uma operacao que nao se pode fazer");

    }

    return 0;
}