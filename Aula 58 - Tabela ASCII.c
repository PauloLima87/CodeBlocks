#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

int x = 128;
printf("%i \n", x );
printf("%c \n", x ); //apesar de x ser inteiro ao chamar com o %c (caractere)
                        //ele entra como correspondente da ASCII do numero 97, ou seja "a"

getchar(); //desnecessário para o CODE BLOCKS.

return 0;
}
