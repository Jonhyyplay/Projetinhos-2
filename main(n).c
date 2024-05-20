#include <stdio.h>
int main(){
int A, B, C, X;
//Informar valores das variáveis:

printf ("Informe o valor de A: ");
scanf ("%d", &A);

printf ("Informe o valor de B: ");
scanf ("%d", &B);

printf ("Informe o valor de C: ");
scanf ("%d", &C);
//Cálculo:

 X = A + B + C;
//Decisão:

if (X >= 100){

    printf ("\n%d", X);
}
//Finalização

    return 0;
}