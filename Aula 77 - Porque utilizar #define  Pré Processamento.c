#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

#define NUM_MAX 10

//SEM DEFINE
double umaFuncao (void){
    printf("%i\n", 1000);
}


double umaOutraFuncao (void){
    printf("%i\n", 1000);
}

//USANDO DEFINE
double umaFuncao2 (void){
    printf("%i\n", NUM_MAX);
}


double umaOutraFuncao2 (void){
    printf("%i\n", NUM_MAX);
}
int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR
    double umaFuncao (void);
    double umaOutraFuncao (void);

    //SEM DEFINE
    printf("%i\n", 1000);
    umaFuncao();
    umaOutraFuncao();

    //COM DEFINE
    printf("%i\n", NUM_MAX);
    umaFuncao2();
    umaOutraFuncao2();

getchar(); //desnecessário para o CODE BLOCKS.
return 0;
}


