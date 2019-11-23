#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

  int matriz[3][3] = {{1,2,3}, //MATRIZ [LINHA] [COLUNA]
                      {4,5,6},
                      {7,8,9}};
  int matriz2[3][3] ={1,2,3,4,5,6,7,8,9}; //declaração sem separação de linhas

  printf("%i", matriz[1][5]);
return 0;
}
