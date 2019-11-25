#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//como estamos passando uma estrutura para uma função, a definição da estrutura precisa ser de maneira global
//assim a função será capaz de identificar o que é a tipagem STRUCT HORARIO antes de entrar na função
  struct horario{
    int horas;
    int minutos;
    int segundos;
  };

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

  //definindo a função
  //função do tipo STRUCT HORARIO de nome TESTE que passa como parametro X do tipo STRUCT HORARIO
  struct horario teste(struct horario x);

  struct horario agora;
  agora.horas = 10;
  agora.minutos = 42;
  agora.segundos = 58;

  struct horario proxima;
  proxima = teste(agora);

  printf("PRINT DENTRO DA MAIN   %i:%i:%i\n", proxima.horas,
                       proxima.minutos,
                       proxima.segundos);


  return 0;
}

struct horario teste(struct horario x)
{
  printf("PRINT DENTRO DA FUNÇÂO %i:%i:%i\n", x.horas,
                       x.minutos,
                       x.segundos);

  x.horas=100;
  x.minutos=100;
  x.segundos=100;
  return x;
};


