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
    double teste;
    char letra;
  };

  struct horario agora; //declara��o de um estrutura de tipo HORARIO e nome AGORA. Antes de declarar � preciso definir.
  struct horario depois;

  agora.horas = 15; //acessar o campo HOAS dentro da estrutura AGORA definida com o tipo HORARIO
  agora.minutos = 17;
  agora.segundos = 30;

  depois.horas = agora.horas + 10; //25
  depois.minutos = agora.minutos; //17
  depois.teste = 50.55/123;
  depois.letra ='a';

  printf("%i\n%i\n%f\n%c", depois.horas, depois.minutos, depois.teste, depois.letra);

  return 0;
}

