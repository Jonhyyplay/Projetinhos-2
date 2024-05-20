#include <stdio.h>
int main(){
int A, B, C, D, E, maior, menor;
//Definir valores às variáveis:
 
printf ("Defina o valor de A: ");
scanf ("%d", &A);

printf ("Defina do valor de B: ");
scanf ("%d", &B);

printf ("Defina do valor de C: ");
scanf ("%d", &C);

printf ("Defina do valor de D: ");
scanf ("%d", &D);

printf ("Defina o valor de E: ");
scanf ("%d", &E);
//Decisão:

maior = A;
if (B > maior){
    maior = B;
}
if (C > maior){
    maior = C;
}
if (D > maior){
    maior = D;
}
if (E > maior)
{
    maior = E;
}
menor = A;
if (B < menor){
    menor = B;
}
if (C < menor){
    menor = C;
}
if (D < menor){
    menor = D;
}
if (E < menor){
    menor = E;
}
printf ("\nO maior encontrado: %d", maior);
printf ("\nO menor encontrado: %d", menor);


if (A == B && B == C && C == D && D == E){
    printf ("\nTodos os valores iguais");    
}
//Finalização

   return 0;
}