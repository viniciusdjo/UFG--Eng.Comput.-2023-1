/*Construa um programa que carregue uma matriz 12 X 4 com os valores das vendas
de uma loja, em cada linha represente um mês do ano, e cada coluna, uma semana
do mês. Calcule e imprima:
● total vendido em cada mês do ano;
● total vendido em cada semana ao longo de todo o ano;
● total vendido no ano.*/

#include <stdio.h>

int main(){

    int matriz[12][4], i, j;
    //linha = mês / Coluna = Semana
    //Total no mês = SomaLinha / Total na semana = SomaColuna / Total do ano = SomaMatriz

    //Coleta 
    for(i = 0; i < 12; i++){
        for(j = 0; j < 4; j++ ){
            printf("Digite o elemento da mês %d e semana %d: ", i+1, j+1);
                scanf("%d", &matriz[i][j]);
        }
    }

    //Vendido no mes
    int somaLinhas[12];
    int somaMes = 0;

    for(i = 0; i < 12; i++){
        somaMes = 0;
        for(j = 0; j < 4; j++ ){
            
            somaMes = somaMes + matriz[i][j]; 
        }
        somaLinhas[i] = somaMes;
    }
    //Vendido na semana
    int somaColunas[4];
    int somaSemana;

    for(j = 0; j < 4; j++){
        somaSemana = 0;
        for(i = 0; i < 12; i++ ){
            somaSemana = somaSemana + matriz[i][j];
        }
        somaColunas[j]= somaSemana;
    }    
    //Vendido no ano
    int somaAno = 0;
    for ( i = 0; i < 12; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            somaAno = somaAno + matriz[i][j];
        }
        
    }
    //Impressões

        //Impressão Mensal
        printf("Total Vendido em cada mês: \n");
        for ( i = 0; i < 12; i++)
        {
            printf("\tMes %d: %d\n", i+1, somaLinhas[i]);
        }

        //Impressão Semanal
        printf("Total Vendido em cada semana: \n");
        for ( j = 0; j < 4; j++)
        {
            printf("\tSemana %d: %d\n", j+1, somaColunas[j]);
        }

        //Impressão Anual
        printf("Total Vendido no ano: %d", somaAno);


    return 0;
}