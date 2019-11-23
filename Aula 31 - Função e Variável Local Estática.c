#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR
  void teste(void);

  teste();
  teste();
  teste();



return 0;
}
void teste(void)
{
  //variavel nao sofrer� altera��es com multiplas chamadas, sendo sempre zerada com novas chamadas
  int variavelLocalAutomatica = 4;
  variavelLocalAutomatica *= variavelLocalAutomatica;

  //V�riavel N�O VAI ZERAR, sofrendo altera��es a cada chamada,
  //onde seu valor sera o ultimo estabelecido, podendo ser incrementado
  //programa n�o recria ela a cada vez que � chamada
  static int variavelLocalEstatica = 4;
  variavelLocalEstatica *= variavelLocalEstatica;

  printf("Variavel Autom�tica: %i\n", variavelLocalAutomatica);
  printf("Variavel Est�tica: %i\n", variavelLocalEstatica);
}
