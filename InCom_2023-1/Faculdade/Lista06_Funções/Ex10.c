/*Implemente um programa que leia uma mensagem e um caractere. Após a leitura, o
programa deve, por meio de função, retirar todas as ocorrências do caractere
informado na mensagem colocando * em seu lugar. A função deve também retornar
o total de caracteres retirados. Ao final, o programa deve imprimir a frase ajustada e
a quantidade de caracteres substituídos*/
#include <stdio.h>

//Função de substiuição
int substuir(char *mes, char alvo) {
    int count = 0;
    for (int i = 0; mes[i] != '\0'; i++) {
        if (mes[i] == alvo) {
            mes[i] = '*';
            count++;
        }
    }
    return count;
}

int main() {
    char mes[100];
    char alvo;

    // Leitura da mensagem e caractere alvo
    printf("Digite a mensagem: ");
    fgets(mes, sizeof(mes), stdin);

    printf("Digite o caractere a ser substituído: ");
    scanf("%c", &alvo);

    // Remover o caractere alvo e obter a quantidade de substituições
    int contador = substuir(mes, alvo);

    // Imprimir a mensagem ajustada e a quantidade de substituições
    printf("Mensagem ajustada: %s", mes);
    printf("Total de caracteres substituídos: %d\n", contador);

    return 0;
}
