#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

  //definindo a função
  //função do tipo STRUCT HORARIO de nome TESTE que passa como parametro X do tipo STRUCT HORARIO
  struct horario teste(struct horario x);

  struct horario
  {
    int horas;
    int minutos;
    int segundos;
  };

  struct horario agora;
  struct horario depois;

  agora.horas = 15;
  agora.minutos = 17;
  agora.segundos = 30;

  depois.horas = agora.horas + 10;
  depois.minutos = agora.minutos;
  depois.teste = 50.55/123;
  depois.letra ='a';

  printf("%i\n%i\n%f\n%c", depois.horas, depois.minutos, depois.teste, depois.letra);

  return 0;
}

