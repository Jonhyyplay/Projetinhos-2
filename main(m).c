#include <stdio.h>
#include <ctype.h>
int main(){
char NOME[100];
char SEXO;

printf("Digite o nome: ");
fgets(NOME, sizeof(NOME), stdin);

printf("Digite o sexo (M/m ou F/f): ");
scanf("%c", &SEXO);
SEXO = toupper(SEXO);

if (SEXO == 'M' || SEXO == 'm') {
    printf("\nIlmo. Sr. %s\n", NOME);
} else if (SEXO == 'F' || SEXO == 'f') {
    printf("\nIlma. Sra. %s\n", NOME);
} else {
    printf("\nSexo informado invalido");
}
//Finalização

   return 0;
}