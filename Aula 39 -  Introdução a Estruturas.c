#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR

  //capaz de armazenar multiplos tipos de vari�veis
  struct horario //defini��o da estrutura, o que ela � capaz de fazer
  {
    int horas;
    int minutos;
    int segundos;
  };

  struct horario agora; //declara��o de um estrutura de tipo HORARIO e nome AGORA. Antes de declarar � preciso definir.

  agora.horas = 15; //acessar o campo HOAS dentro da estrutura AGORA definida com o tipo HORARIO
  agora.minutos = 17;
  agora.segundos = 30;

  printf("%i:%i:%i", agora.horas, agora.minutos, agora.segundos);

  return 0;
}

