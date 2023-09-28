#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int soma = 0;
    
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    
    soma = a + b;
    
    if (soma > 10) {
        printf("soma: %d", soma);
    }
    
    return 0;
}


