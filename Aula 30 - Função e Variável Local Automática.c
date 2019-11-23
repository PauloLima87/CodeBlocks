#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

  //DECLARAÇÂO DE FUNÇÔES. não deu erro ao ocultar a declaração
  void teste(int x);
  void teste2(void);

  //variavel utilizada dentro não é incrementada com multiplos usos aqui
  printf("Passando parâmetro\n");
  teste(5);
  teste(3);
  teste(48);
  printf("Sem passar parâmetro\n");
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
