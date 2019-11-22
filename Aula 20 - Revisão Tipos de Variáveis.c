#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <stdbool.h> //incluir para utilizar tipo bool
#include <math.h>


//Escreva um programa que inverta as cifras de um número INTEIRO POSITIVO digitado pelo usuário.
//Exemplo: Se o usuário digitar 1234 o programa deve retornar na tela 4321.

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

  char testachar='a';
  printf("Caractere %c\n", testachar);
  scanf("%c", &testachar); //espaço apenas para primeiro se digitar uma cadeia
  printf("Mostra novo Caractere: %c\n", testachar); //armazena apenas 1 caractere

  bool testaBooleano = false; //armazena apenas true (1) e false (0)
  printf("%i\n", testaBooleano);

  long int testint=1056478964;
  printf("Long Int %i\n", testint);
  scanf("%i", &testint);
  printf("Mostra novo Long INT: %i\n", testint); //armazena apenas 10 digitos

  unsigned const int pi = 3.14; //constante fixada, ou seja nao pode ser trocada durante o programa
  //unsigned utilizado para nao considerar sinal, somente positivos
  printf("CONST Int %i\n", pi);
  //pode ser utilizado para const Floar const Char

  float testFloat = 10.10;
  printf("Float %f\n", testFloat);
  scanf("%f", &testFloat);
  printf("Mostra novo Float: %f\n", testFloat); //armazena apenas 10 digitos


  double testDouble = 10.10;//maior precisao se conparado a float
  printf("%f\n", testDouble);
  scanf("%lf", &testDouble);
  printf("%f\n");

  system("PAUSE");
return 0;
}
