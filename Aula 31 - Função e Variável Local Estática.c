#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR
  void teste(void);

  teste();
  teste();
  teste();



return 0;
}
void teste(void)
{
  //variavel nao sofrerá alterações com multiplas chamadas, sendo sempre zerada com novas chamadas
  int variavelLocalAutomatica = 4;
  variavelLocalAutomatica *= variavelLocalAutomatica;

  //Váriavel NÂO VAI ZERAR, sofrendo alterações a cada chamada,
  //onde seu valor sera o ultimo estabelecido, podendo ser incrementado
  //programa não recria ela a cada vez que é chamada
  static int variavelLocalEstatica = 4;
  variavelLocalEstatica *= variavelLocalEstatica;

  printf("Variavel Automática: %i\n", variavelLocalAutomatica);
  printf("Variavel Estática: %i\n", variavelLocalEstatica);
}
