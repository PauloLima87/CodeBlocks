#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{

    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

    /*int x =10;
    int *ponteiro = &x;*/

    int vetor[3] ={1,2,3};
    int *ponteiro =vetor; //ponteiro vai apontar para um endereço de memoria nao precisando mostrar tamanho como no vetor
                        //por ser vetor nao preciso &vetor, nesse caso aponta para a primera posição
    int *ponteiro2 = &vetor[2];//quero que o ponteiro aponte para a posiçao de memoria 2 do vetor, ouseja onde esta o valor 3

    printf("%i\n", *ponteiro);
    printf("%i\n", *ponteiro2);

getchar(); //desnecessário para o CODE BLOCKS.
return 0;
}


