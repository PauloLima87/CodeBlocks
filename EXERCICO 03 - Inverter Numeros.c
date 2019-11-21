#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//Escreva um programa que inverta as cifras de um número INTEIRO POSITIVO digitado pelo usuário.
//Exemplo: Se o usuário digitar 1234 o programa deve retornar na tela 4321.

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR
  int num1, num2, res;
  printf("Digite o primeiro valor: ");
  scanf("%i", &num1);
  printf("Digite o segundo valor: ");
  scanf("%i", &num2);
  res = num1 % num2;

  if (res==0)
    printf("O Numero %i É divisível por %i", num1, num2);
  else
    printf("O Numero %i NÃO É divisível por %i", num1, num2);

  printf("\nNumero 1: %i \nNumero 2: %i\n\n", num1, num2);

  system("PAUSE");
return 0;
}
