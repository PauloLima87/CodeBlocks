#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR

  int x = 16, y =3, z =13, w=2;

  //limita��o da linguagem, duas vari�veis inteiras dao como resultado uma inteira, perdendo a parte fracionada
  float resultado = x/y;

  //utilizando casting � poss�vel for�ar duas variaveis inteiras a resultar em um float sem perder parte fracionada
  float resultado2 = (float) z/w;

  printf("Sem Casting %f\n", resultado);
  printf("Com Casting %f\n\n", resultado2);

  return 0;
}

