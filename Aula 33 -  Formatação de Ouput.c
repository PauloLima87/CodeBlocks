#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//declara��o de variavel global
//ela se comporta como static
int gVariavelGlobal =2;//G minusculo no inicio por boas praticas deve existir em variaveis globais

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR
  void teste(void);

  teste();
  teste();
  teste();

  printf("Variavel Global Chamada pelo MAIN : %i\n", gVariavelGlobal);

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

  //GLOBAL SE COMPORTA COMO STATIC
  gVariavelGlobal*=2;

  printf("Variavel Autom�tica: %i\n", variavelLocalAutomatica);
  printf("Variavel Est�tica: %i\n", variavelLocalEstatica);

  printf("Variavel Global Chamada pela FUN��O : %i\n", gVariavelGlobal);

}
