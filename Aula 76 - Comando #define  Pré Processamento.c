#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

#define PI 3.14159
#define NULO 0

double areaCirculo (double raio){
    return raio*raio*PI;
}

int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR
    double areaCirculo (double raio);
    double r;
    int i=3;

    while (i!= NULO){
    printf("Entre com o raio : ");
    scanf("%lf", &r);
    printf("%lf\n", areaCirculo(r));
    i--;
    }

getchar(); //desnecessário para o CODE BLOCKS.
return 0;
}


