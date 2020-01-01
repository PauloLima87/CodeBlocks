#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>



int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR

int a = 10; //cria variavel A
int *pA; //cria um ponteiro pra A
     pA = &a; //aponta o endere�o do ponteiro (pA) para enrede�o de memoria de A

int x = 20;
int *pX = &x; //aponta o valor do ponteiro (*pX) para o endere�o de memoria de X, ou seja
// dentro de *pX tera o valor do endere�o de X

double y = 20.50;
double *pY = &y;

char z = 'a';
char *pZ = &z;

double soma = *pX + *pY;

int *resultado; //
resultado = &x;

int *resultadoM; //
resultadoM = 6356696; //MANIPULANDO O VALOR DO ESPA��O DE MEMORIA DE X MANUALENTE AFIM DE OBTER O MESMO RESULTADO

printf("ENDERE�OS E VALORES\n");
printf("Endere�o X: %i Valor X: %i \n", pX, *pX);
printf("Endere�o Y: %i Valor Y: %d \n", pY, *pY);
printf("Endere�o Z: %i Valor Z: %c \n", pZ, *pZ);

printf("\nSoma dos valores dos ponteiros: %f\n", soma);

printf("\nPONTEIRO RESULTADO\n");
printf("Endere�o de X: %i\n", resultado);
printf("VALOR de X: %i\n", *resultado);

printf("\nMANIPULANDO MANUALMENTE\n");
printf("Endere�o de X: %i\n", resultadoM);
printf("VALOR de X: %i\n", *resultadoM);



getchar(); //desnecess�rio para o CODE BLOCKS.
return 0;
}


