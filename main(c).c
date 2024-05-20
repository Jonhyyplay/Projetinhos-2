#include <stdio.h>
int main(){
float N1, N2, N3, N4, Md;
// Definição das notas:

printf ("Informe a nota 1: ");
scanf ("%f", &N1);

printf ("Informe a nota 2: ");
scanf ("%f", &N2);

printf ("Informe a nota 3: ");
scanf ("%f", &N3);

printf ("Informe a nota 4: ");
scanf ("%f", &N4);
// Cálculo da média das notas:

Md = (N1 + N2 + N3 + N4) / 4;
// Decisão:  
    
    if (Md >= 5){
        printf ("\nAprovado! Sua media foi: %.2f", Md);
    }
    else{
        printf ("\nReprovado! Sua media foi: %.2f", Md);
    }
// Finalização    
    
   return 0;
}