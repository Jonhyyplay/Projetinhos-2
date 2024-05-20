#include <stdio.h>
int main(){
int A;
//Definir valor à variável:

printf ("Digite um valor para A: ");
scanf ("%d", &A);
// Decisão:

if (!(A > 3)){
    printf ("\nSeu valor dentro da faixa: %d", A);
}
//Finalização

    return 0;
}