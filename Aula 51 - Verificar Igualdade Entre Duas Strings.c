#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR
  _Bool stringsIguais (char string1[], char string2[]);

   //compara��o utilizando if entre bool e int para compara��o
  if (stringsIguais("casa", "casa"))
    {
      printf("S�o iguais");
    }else
    {
      printf("S�o diferentes");
    }


   return 0;
}
_Bool stringsIguais (char string1[], char string2[])
{
  int i=0;
  while (string1[i]==string2[i] && string1[i] !='\0' && string2[i] !='\0' )
      i++;
  if (string1[i]=='\0' &&string2[i]=='\0')
    {
      return 1;
    }else
      return 0;
}
