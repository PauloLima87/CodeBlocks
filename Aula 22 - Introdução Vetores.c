#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

  int nota[5]; //indices de 0 a 4, foi criado 5 espaços indexados de 0 a 4.

  nota[0] = 10;
  nota[1] = 5;
  nota[2] = 4;
  nota[3] = 2;
  nota[4] = 7;

  printf("%i\n", nota[4]);
return 0;
}
