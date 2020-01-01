#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>



int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

int x = 10;
int y = x;

x  = 30;

int *ponteiro; //"*ponteiro" mostra valor, "ponteiro" mostra endereço de memoria.
//com "*" acessa valor , sem "*" acessa endereço de memoria

ponteiro = &x; //definindo o endereço de memoria que o ponteiro apontará
//em variáveis, com "&" acessa endereço de memoria, sem "&" acessa valor da variável, ou seja,
//"&x" acessa o endereço de memoria de x, com "x" acessa o valor dentro do endereço separado para x
printf("ponteiro = %i *ponteiro = %i\n", ponteiro, *ponteiro );

int z = 20; //valor de z definido como 20
*ponteiro = z; //valor do ponteiro (*ponteiro) aponta para o valor de Z
printf("ponteiro = %i *ponteiro = %i\n", ponteiro, *ponteiro );

printf("TESTE 1: Com Variável\n");
printf("%i\n", x ); //acessando valor
printf("%i\n", &x); //acessando endereço de memoria

printf("\nTESTE 2: Com Ponteiro\n");
printf("%i\n", *ponteiro);//acessando valor
printf("%i\n", ponteiro);//acessando endereço de memoria

printf("\nTESTE 3: Alterando valores\n");
printf("X = %i , Y = %i ponteiro = %i *ponteiro = %i\n",x, y, ponteiro, *ponteiro );

printf("\nTESTE 4: Alterando valores com ponteiros\n");
printf("X = %i , Y = %i ponteiro = %i *ponteiro = %i\n",x, z, ponteiro, *ponteiro );

getchar(); //desnecessário para o CODE BLOCKS.
return 0;
}


