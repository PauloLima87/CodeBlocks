#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR
  for (int i=1; i<=10;++i){ //preenchimento de matriz
    printf("\n**VOLTA %i**\n\n", i);
    for (int j=1;j<=10 ;j++ ){
      printf("_Ponto %i_", j);
    };
    printf("\n\n");
  };


  system("PAUSE");
return 0;
}
