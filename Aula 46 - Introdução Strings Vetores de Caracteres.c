#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR

  char teste[] = {'B','R','A','S','I','L'};

  for (int i = 0;i < 6 ; i++)
      {
        printf("%c", teste[i]);
      };

  return 0;
}
