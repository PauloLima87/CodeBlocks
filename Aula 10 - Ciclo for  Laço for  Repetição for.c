#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR
  int contador, aux=1;
  int num =1;

  for (contador=1;contador<=10 ;contador++ ) //de 1 a 10 10x
  {
    printf("TESTE %i\n", contador);
    aux= aux++;
  };
          printf("\n\nFIM TESTE: %i\n Rodou %i vezes\n\n", contador, aux);

  for (contador=0;contador<=10 ;contador++ ) //de 0 a 10 11x
  {
    printf("TESTE %i\n", contador);
    aux= aux++;
  };

          printf("\n\nFIM TESTE: %i\n Rodou %i vezes\n\n", contador, aux);

  for (contador=1;contador<10 ;contador++ ) //de 1 a 9 9x
  {
    printf("TESTE %i\n", contador);
    aux= aux++;
  };

          printf("\n\nFIM TESTE: %i\n Rodou %i vezes\n\n", contador, aux);

  for (contador=0;contador<10 ;contador++ ) //de 0 a 9 10x
  {
    printf("TESTE %i\n", contador);
    aux= aux++;
  };
          printf("\n\nFIM TESTE: %i\n Rodou %i vezes\n\n", contador, aux);

system("PAUSE");
return 0;
}
