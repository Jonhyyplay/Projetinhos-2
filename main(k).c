#include <stdio.h>
int main(){
int A;
//Definir valor à variável:

printf ("Defina o valor de A: ");
scanf ("%d", &A);
//Decisão:

if (A >= 1 && A <= 9){
    printf ("\nO valor escolhido na faixa permitida!");
} else {
    printf ("\nO valor escolhido fora da faixa permitida!");
}
//Finalização

    return 0;
}