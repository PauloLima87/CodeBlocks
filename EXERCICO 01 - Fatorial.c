#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//Escreva um programa capaz de calcular o fatorial de um n�mero. Exemplo: fatorial de 5 � 5 x 4 x 3 x 2 x 1 = 120.

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR
  int num, resultado=1;
  printf("Entre com um Valor para calcular Fatorial?");
  scanf("%i", &num);

  for (;num >= 1 ;--num){ //valor vai at� um 1, se colcoar 0 a conta final ser� x0 e sempre dar� 0
      resultado *= num;
      };

      printf("Resultado: %i", resultado);

      //5x4x3x2x1
  system("PAUSE");
return 0;
}
