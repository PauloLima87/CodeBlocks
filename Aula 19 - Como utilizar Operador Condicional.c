#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//Escreva um programa que inverta as cifras de um n�mero INTEIRO POSITIVO digitado pelo usu�rio.
//Exemplo: Se o usu�rio digitar 1234 o programa deve retornar na tela 4321.

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR
  int numero, invertido;
  int num1 = 1, num2 = 2;
  printf("Entre com o valor %i : ", num1);
  scanf("%i", &num1);
  printf("Entre com o valor %i : ", num2);
  scanf("%i", &num2);

  num1 > num2 ? printf(" SIM Valor 1 maior que Valor 2\n"):printf(" N�o Valor 1 n�o � maior que Valor 2\n");
  system("PAUSE");
return 0;
}
