#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR
    int inteiro = 10;
    float decimal = 10.5;
    char caractere = '?';

    printf("%i\n", inteiro);

    printf("%f\n", decimal);

    printf("%c\n", caractere);

system("PAUSE");
return 0;
}
