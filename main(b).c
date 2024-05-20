#include <stdio.h>
int main(){
// Declaração de variáveis:
int R, N;
// Definição de valor à variável:

printf ("Defina o valor de N: ");
scanf ("%d", &N);
// Decisão: 
if (N > 0){
    R = N;
    printf ("\nO valor de R e: %d", R);
}
else{
    R = N * (-1);
    printf ("\nO valor de R e: %d", R);
}
// Finalização
  return 0;
}