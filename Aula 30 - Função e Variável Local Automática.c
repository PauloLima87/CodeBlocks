#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR
  void teste(int x);

  //variavel utilizada dentro n�o � incrementada com multiplos usos aqui
  teste(2);
  teste(3);
  teste(48);


return 0;
}
void teste(int x)
{
  int variavelLocal = x;
  variavelLocal *= variavelLocal;

  printf("%i\n", variavelLocal);
}
