#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR

  //DECLARA��O DE FUN��ES. n�o deu erro ao ocultar a declara��o
  void teste(int x);
  void teste2(void);

  //variavel utilizada dentro n�o � incrementada com multiplos usos aqui
  printf("Passando par�metro\n");
  teste(5);
  teste(3);
  teste(48);
  printf("Sem passar par�metro\n");
  teste2();
  teste2();
  teste2();


return 0;
}
void teste(int x)
{
  int variavelLocal = x;
  variavelLocal *= variavelLocal;

  printf("%i\n", variavelLocal);
}

void teste2(void)
{
  int variavelLocal = 2;
  variavelLocal *= variavelLocal;

  printf("%i\n", variavelLocal);
}
