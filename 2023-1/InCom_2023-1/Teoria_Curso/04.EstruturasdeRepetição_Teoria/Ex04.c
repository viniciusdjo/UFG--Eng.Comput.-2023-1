/*Faça a tabuada de 1 ao 10*/

#include <stdio.h>

int main (){

    int n, i;

    for(n = 1; n < 11; n++){
        for(i = 1; i < 11; i++){
            printf("%d x %d = %d\n", n, i, n*i);
        }
    }

    return 0;
}