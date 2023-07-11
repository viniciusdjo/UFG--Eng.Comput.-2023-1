/*Faça um programa que leia uma String de no máximo 30 caracteres, contendo
apenas caracteres romanos para letras. Mostre uma versão modificada desta String,
onde toda letra minúscula foi convertida para letra maiúscula e toda letra maiúscula
foi convertida em letras minúsculas. Dica: pesquise sobre a tabela ASCII para ver
como os caracteres podem ser interpretados como número. Olhando a tabela, você
verá por que operações como 'a' + 1 == 'b' funcionam*/

#include <stdio.h>

int main()
{
    char s[30];

    //Maiúscula para minúscula = +32

    printf("Coloque no maximo 30 caracteres Romanos (Maiusculo ou minusculo): \n");
        scanf("%s", s);

    //Verificação de Maiúsculas e minúsculas
     for (int i = 0; i < 30; i++)
    {
        //Verificacao de minuscula
        if (s[i] >= 97 && s[i] <= 122)
        {
            s[i] = s[i] - 32;
        }
        //Verificacao de maiuscula
        else if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] = s[i] + 32;
        }
        
    }

    printf("\nNova String: %s", s);
    

    return 0;
}