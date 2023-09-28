#include <stdio.h> 
 
int main ( ) 
{ 
 int A,B,C; 
 
A = 3; 
B = 4; 
C = 1; 
 
B*=B+1; 
C/=B+3; 
A-=C; 
 
printf("A, B e C sao: %d %d %d",A,B,C); 
} 