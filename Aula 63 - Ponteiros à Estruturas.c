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

depois = &agora; //depois aponta para endereço de memoria da estrutura agora

//maneira 1 de acessar ponteiro
(*depois).hora = 11;
(*depois).min = 25;
(*depois).seg = 13;

//mareira 2 de acessar ponteiro
depois->hora = 22; //nesse caso apesar de nao possuir o "*" ele passa o valor 22 e não a posição de memoria onde o 22 esta
depois->min = 22;
depois->seg = 22;

printf("%i:%i:%i", agora.hora, agora.min, agora.seg);

getchar(); //desnecessário para o CODE BLOCKS.
return 0;
}


