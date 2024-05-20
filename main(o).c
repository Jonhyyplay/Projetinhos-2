#include <stdio.h>
int main(){
int R, V;
//Definir valores às variáveis:

printf ("Defina o valor de V (ele vai ser multiplicado por 2): ");
scanf ("%d", &V);
//Cálculo:

R = V * 2;
//Decisão:

if (R > 30){
    printf ("%d", R);
}
//Finalização

    return 0;
}