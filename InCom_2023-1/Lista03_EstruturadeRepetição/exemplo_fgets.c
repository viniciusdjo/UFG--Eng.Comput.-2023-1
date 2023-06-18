/******************************************************************************

EXEMPLO DE EXERCÍCIO UTILIZANDO FGETS PARA LEITURA DE STRINGS

Faça umprograma em C que permita entrar com o nome, a idade e o sexo 
de 5 pessoas.O programa deve imprimir o nome da pessoa se ela for do 
sexo masculino e tiver mais de 21 anos.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char nome[100];
    int sexo, idade, i;

    for (i=0; i<5; i++) {
        printf("Digite o nome: ");
       
        fgets(nome, 100, stdin);
        printf("Digite a idade: ");
        
        scanf("%d", &idade);
        printf("Digite o sexo <1-M / 2-F>: ");
        
        scanf("%d", &sexo);
        if (sexo == 1 && idade > 21)
            printf("Nome: %s \n", nome);
            
        getchar();
    }
    
    
    return 0;
}
