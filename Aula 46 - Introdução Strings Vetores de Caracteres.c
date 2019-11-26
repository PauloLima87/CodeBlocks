#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//recuperado
int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR

  char teste[] = {'B','R','A','S','I','L'};//digitando caracteres

  for (int i = 0;i < 6 ; i++) //for para apresentação da cadeia
      {
        printf("%c", teste[i]); //print da cadeia
      };

  return 0;
}
