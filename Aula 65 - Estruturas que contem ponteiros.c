#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>



int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

struct horario{
    int *pHora;
    int *pMin;
    int *pSeg;
};

struct horario hoje;

int hora = 200;
int minuto = 300;
int segundo = 400;

hoje.pHora = &hora;
hoje.pMin = &minuto;
hoje.pSeg = &segundo;

printf("Hora :%i \nMinuto:%i \nSegundo :%i", *hoje.pHora, *hoje.pMin, *hoje.pSeg); //"*" utilizado no inicio e nao para cada ponteiro (hoje.*pSeg  ERRADO)

*hoje.pSeg = 1000;

printf("\nHora :%i \nMinuto:%i \nSegundo :%i", *hoje.pHora, *hoje.pMin, *hoje.pSeg); //"*" utilizado no inicio e nao para cada ponteiro (hoje.*pSeg  ERRADO)

getchar(); //desnecessário para o CODE BLOCKS.
return 0;
}


