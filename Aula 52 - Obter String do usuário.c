#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

  char string1[30];
  char string2[30];

  printf("Digite seu Nome\n");
  scanf("%s %s", &string1, &string2);
  printf("%s %s", string1, string2);
   return 0;
}
