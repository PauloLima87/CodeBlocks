#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR
  int i=0;

  do
  {
      printf("Teste 2\n");
  } while (i!=0);

  while (i!=0){
    printf("Teste 1\n");
  };

  system("PAUSE");
return 0;
}
