#include <stdio.h>

int main() {
 int A, B, R;
// Definir valores às variáveis:

 printf ("Defina o valor de A: ");
 scanf ("%d", &A);   
    
 printf ("Defina o valor de B: ");   
 scanf ("%d", &B);   
// Decisão para cálculo:    
    
 if (A > B) {
    R = A - B;
 printf ("A subtracao do maior pelo menor e: %d\n", R);
} 
 else {
    R = B - A;
 printf ("A subtracao do maior pelo menor e: %d\n", R);    
 } 

 return 0; 
}
