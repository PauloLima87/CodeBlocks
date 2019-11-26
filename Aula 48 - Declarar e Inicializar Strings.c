#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

  //modos de declaração
  char palavra1[6] = {'B','R', 'A', 'S','I','L' }; //METODO LUSITADO
                                                  // \0 caractere nulo não inserido
  char palavra2[] = {'B','R', 'A', 'S','I','L' }; //DEFINIÇÃO AUTOMÁTICA DE TAMANHO
  char palavra3[7] = {"BRASIL"};
  char palavra4[] = {"BRASIL"}; //DEFINIÇÃO AUTOMÁTICA DE TAMANHO
  char palavra5[] = "BRASIL"; //6 caracteres que o compilador ve como 7

  //printar
  printf("%s\n", palavra1); //sem necessidade de ciclo for
  printf("%s\n", palavra2); //sem necessidade de ciclo for
  printf("%s\n", palavra3); //sem necessidade de ciclo for
  printf("%s\n", palavra4); //sem necessidade de ciclo for
  printf("%s\n", palavra5); //sem necessidade de ciclo for
  return 0;
}
