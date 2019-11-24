#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

  //capaz de armazenar multiplos tipos de variáveis
  struct horario //definição da estrutura, o que ela é capaz de fazer
  {
    int horas;
    int minutos;
    int segundos;
    double teste;
    char letra;
  };

  struct horario agora; //declaração de um estrutura de tipo HORARIO e nome AGORA. Antes de declarar é preciso definir.
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

