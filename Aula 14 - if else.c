#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR
  int idade;

  printf("Favor informar idade: ");
  scanf("%i", &idade);
  if (idade>=18)
    printf("Maior de idade, Bebidas alco�licas liberadas\n\n");
  else
    printf("Menor de idade. Bebidas alco�licas n�o liberadas\n\n");


  system("PAUSE");
return 0;
}
