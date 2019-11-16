#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR
  int contador=1;

  /*while (contador<5){ //enquanto contador menor que 5 ele roda, nao inclui 5
      printf("Valor contador: %i\n", contador);
      contador++;
  };*/


  /*while (contador<=5){ //enquanto contador menor ou igual a 5 ele roda, inclui 5
      printf("Valor contador: %i\n", contador);
      contador++;
  };*/


  while (contador != 5){ //enquanto contador menor que 5 ele roda, nao inclui 5
      printf("Valor contador: %i\n", contador);
      contador++;
  };
system("PAUSE");
return 0;
}
