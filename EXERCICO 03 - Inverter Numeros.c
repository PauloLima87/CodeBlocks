#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//Escreva um programa que inverta as cifras de um n�mero INTEIRO POSITIVO digitado pelo usu�rio.
//Exemplo: Se o usu�rio digitar 1234 o programa deve retornar na tela 4321.

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR
  int num1, num2, res;
  printf("Digite o primeiro valor: ");
  scanf("%i", &num1);
  printf("Digite o segundo valor: ");
  scanf("%i", &num2);
  res = num1 % num2;

  if (res==0)
    printf("O Numero %i � divis�vel por %i", num1, num2);
  else
    printf("O Numero %i N�O � divis�vel por %i", num1, num2);

  printf("\nNumero 1: %i \nNumero 2: %i\n\n", num1, num2);

  system("PAUSE");
return 0;
}
