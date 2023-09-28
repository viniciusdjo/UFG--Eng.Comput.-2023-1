
#include <stdio.h>
#include <math.h>

int main() {
    float a = 0;
    float b = 0;
    float c = 0;
    float x1 = 0;
    float x2 = 0;
    float delta = 0;
    
    printf("a: ");
    scanf("%f", &a);
    
    printf("b: ");
    scanf("%f", &b);
    
    printf("c: ");
    scanf("%f", &c);
    
    delta = pow(b,2) - 4 * a * c;
    
    x1 = (-b - sqrt(delta))/(2*a);
    printf("x1 = %f \n", x1);
    
    x2 = (-b + sqrt(delta))/(2*a);
    printf("x2 = %f", x2);
    

    return 0;
}