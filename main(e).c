#include <stdio.h>
#include <math.h>
int main(){

float A, B, C, X, X1, X2;
int  delta;
// Definição de valores às variáveis:

printf ("Defina o valor de A: ");
scanf ("%f", &A);

printf ("Defina o valor de B: ");
scanf ("%f", &B);
    
printf ("Defina o valor de C: ");
scanf ("%f", &C);

// Cálculo do delta:

delta = (pow(B,2) - 4*A*C);
// Decisão:

if (delta < 0){
    printf ("\nNao existe raiz real.");
} else if (delta == 0) {
    X = (-B + sqrt(delta)) / (2*A);
    printf ("\nO valor da raiz e: %f", X);
} else if (delta > 0) {
    X1 = (-B + sqrt(delta)) / (2*A);
    X2 = (-B - sqrt(delta)) / (2*A);
    printf ("\nO valor da raiz 1 e: %f", X1);
    printf ("\nO valor da raiz 2 e: %f", X2);
}
//Finalização   
      
    return 0;
} 