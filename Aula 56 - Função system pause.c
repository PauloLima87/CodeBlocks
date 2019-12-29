#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

    printf("TESTANDO GETCHAR E SYSTEM PAUSE");

getchar(); //desnecessário para o CODE BLOCKS.
system("PAUSE"); //desnecessário para o CODE BLOCKS. Comando WIN

return 0;
}
