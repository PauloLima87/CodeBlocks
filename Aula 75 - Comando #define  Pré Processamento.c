#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

#define SIM 100
#define NAO -100

int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

    int x;
    printf("Digigte um valor inteiro:\n");
    scanf("%i", &x);

    if(x<= 10){
        printf("%i", NAO);
    } else {
        printf("%i", SIM);
    }
getchar(); //desnecessário para o CODE BLOCKS.
return 0;
}


