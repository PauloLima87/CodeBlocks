#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>



int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

struct horario{
    int hora;
    int min;
    int seg;
};

struct horario agora, *depois; //variavel do tipo estrutura horario de nome agora
//um ponterio que aponta para estruturas de tipo horario denominado *depois

depois = &agora; //depois appnta para endereço de memoria da estrutura agora

//maneira 1 de acessar ponteiro
(*depois).hora = 11;
(*depois).min = 25;
(*depois).seg = 13;

//maneira 2 de acessar ponteiro
depois->hora = 01;
depois->min = 22;
depois->seg = 50;

int somatorio = 100;

struct horario antes;

antes.hora = somatorio + depois->seg; //soma de valor de variavel + valor de ponteiro
antes.min = agora.hora + depois->min; //soma de valor de variavel + valor de ponteiro
antes.seg = depois->min + depois->seg; //soma de valor de variavel + valor de ponteiro

printf("%i\n", antes.hora);
printf("%i\n", antes.min);
printf("%i\n", antes.seg);

printf("%i:%i:%i\n", antes.hora, antes.min, antes.seg);
printf("%i:%i:%i\n", agora.hora, agora.min, agora.seg);

getchar(); //desnecessário para o CODE BLOCKS.
return 0;
}


