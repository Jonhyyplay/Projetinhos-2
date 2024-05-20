#include <stdio.h>
int main(){

int A, B, C;
// Definir valores às variáveis:

printf ("Defina o valor de A: ");
scanf ("%d", &A);

printf ("Defina o valor de B: ");
scanf ("%d", &B);

printf ("Defina o valor de C: ");
scanf ("%d", &C);
// Ordenar os valores em ordem crescente

if (A <= B && A <= C) {
    if (B <= C) {
        printf("Valores em ordem crescente: %d, %d, %d\n", A, B, C);
    } else {
        printf("Valores em ordem crescente: %d, %d, %d\n", A, C, B);
    }
} else if (B <= A && B <= C) {
    if (A <= C) {
        printf("Valores em ordem crescente: %d, %d, %d\n", B, A, C);
    } else {
        printf("Valores em ordem crescente: %d, %d, %d\n", B, C, A);
    }
} else {
    if (A <= B) {
        printf("Valores em ordem crescente: %d, %d, %d\n", C, A, B);
    } else {
        printf("Valores em ordem crescente: %d, %d, %d\n", C, B, A);
    }
}
//Finalização

    return 0;
}