#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>



int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

    short x = 2147483647; //overflow
    //int x = 2147483647;
    short y = -2147483648; //underflow
    //int y = -2147483648;

    printf("%i\n" , x);
    printf("%i\n" , y);



getchar(); //desnecessário para o CODE BLOCKS.
return 0;
}


