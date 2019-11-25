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
  };

  struct horario minhaEstrutura[5] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}};

 //atribuindo valores 1
 /*minhaEstrutura[0].horas = 10;
 minhaEstrutura[0].minutos = 20;
 minhaEstrutura[0].segundos = 30;*/

 for (int i=0;i<5 ;i++ )
     {
       printf("Bloco [%i] : %i:%i:%i\n", i+1,
                   minhaEstrutura[i].horas,
                   minhaEstrutura[i].minutos,
                   minhaEstrutura[i].segundos);
     };


  return 0;
}



