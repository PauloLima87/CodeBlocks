#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

  //inicializando estruturas 1
  struct horario{
    int horas;
    int minutos;
    int segundos;
    char teste;
  }proxima = {100,100,100};

  //inicializando estruturas 2
  struct horario agora;
  agora.horas = 10;
  agora.minutos = 42;
  agora.segundos = 58;

  //inicializando estruturas 3
  struct horario novamente = {};; //adiciona os valores de acordo com o que foi declarado na estrututra,
                                  //se não digitar nada td preenche com 0 ou nada se char (teste 3)

  struct horario denovo = {.segundos = 99, .horas = 77, .minutos = 88};; //inicialização fora de ordem

  printf("PRINT DA INICIALIZAÇÂO  1  %i:%i:%i\n", proxima.horas,
                       proxima.minutos,
                       proxima.segundos);

  printf("PRINT DA INICIALIZAÇÂO  2  %i:%i:%i\n", agora.horas,
                       agora.minutos,
                       agora.segundos);

  printf("PRINT DA INICIALIZAÇÂO  3  %i:%i:%i  %c\n", novamente.horas,
                       novamente.minutos,
                       novamente.segundos,
                       novamente.teste);

  printf("PRINT DA INICIALIZAÇÂO  4  %i:%i:%i  %c\n", denovo.horas,
                       denovo.minutos,
                       denovo.segundos);


  return 0;
}



