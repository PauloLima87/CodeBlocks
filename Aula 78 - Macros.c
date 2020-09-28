#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

#define PI 3.14159
#define DOIS_PI 2 * PI

//macro
#define AREA_CIRCULO(raio) raio*raio*PI


int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

    printf("%f\n", PI);
    printf("%f\n", DOIS_PI);
    printf("%f\n", AREA_CIRCULO(10));

getchar(); //desnecessário para o CODE BLOCKS.
return 0;
}


