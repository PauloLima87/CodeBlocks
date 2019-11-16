#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

  int a,aux=1;
  printf("VALOR: ");
  scanf("%i", &a);

  for (;a>=1 ;a-- ){
      aux*=a;
      };
    //5*4*3*2*1
    printf("O numero fatorial é: %i\n\n", aux);
system("PAUSE");
return 0;
}
