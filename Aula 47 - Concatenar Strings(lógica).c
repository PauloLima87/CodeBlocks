#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

  char palavra1[] = {'P','Ã','O',' '};
  char palavra2[] = {'M','O','R','T','A','D','E','L','A'};
  char novaPalavra[13];

  for (int i = 0;i < 13 ; i++)
      {
        printf("%c", novaPalavra[i]);
      };

  return 0;
}
