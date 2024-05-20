#include <stdio.h>
int main(){
int A, B, C, D;
// Definir valores às variáveis:

printf("Digite o valor de A: ");
scanf("%d", &A);

printf("Digite o valor de B: ");
scanf("%d", &B);

printf("Digite o valor de C: ");
scanf("%d", &C);

printf("Digite o valor de D: ");
scanf("%d", &D);
// Decisão:

if ((A % 2 == 0 ) && (A % 3 == 0)){
    printf ("\nO valor de A e divisivel por 2 e 3");
} else{
    printf ("\nO valor de A nao e divisivel por 2 e 3");
}
if ((B % 2 == 0) && (B % 3 == 0)){
    printf ("\nO valor de B e divisivel por 2 e 3");
} else{
    printf ("\nO valor de B nao e divisivel por 2 e 3");
}
if ((C % 2 == 0) && (C % 3 == 0)){
    printf ("\nO valor de C e divisivel por 2 e 3");
} else{
    printf ("\nO valor de C nao e divisivel por 2 e 3");
}
if ((D % 2 == 0) && (D % 3 == 0)){
    printf ("\nO valor de D e divisivel por 2 e 3");
} else{
    printf ("\nO valor de D nao e divisivel por 2 e 3");
}
// Finalização

   return 0;
}