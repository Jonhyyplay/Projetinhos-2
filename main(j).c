#include <stdio.h>
int main(){
int X;
//Definir valores à variável:

printf ("Defina o valor de X: ");
scanf ("%d", &X);
//Cálculo:

int result = X / 2;
//Decisão:

if (X % 2 == 0){
    printf ("\nO valor escolhido: par!");
} else {
    printf ("\nO valor escolhido: impar!");
}    
//Finalização

    return 0;
}