#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

struct horario
{
  int hora;
  int min;
  int seg;
};

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

void receberHorario(struct horario list[5]);
void printarHorario(struct horario list[5]);
struct horario listaHorarios[5];

receberHorario(listaHorarios);
printarHorario(listaHorarios);


  return 0;
}

void receberHorario(struct horario list[5])
{
    int i;
    for (int i=0;i<5 ;++i )
        {
            //o horario digitado aqui é na mascarfa HH:MM:SS
            printf("Digite o %i Horario (hh:mm:ss)", i+1);
            scanf("%i:%i:%i", &list[i].hora,
                              &list[i].min,
                              &list[i].seg);
        };
}
void printarHorario(struct horario list[5])
{
    for (int i=0;i<5 ;++i )
        {
          printf("O %iº horário é %i:%i:%i\n", i+1,list[i].hora,
                                                  list[i].min,
                                                  list[i].seg);
        };
}

