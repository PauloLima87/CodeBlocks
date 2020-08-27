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
                        //por ser vetor nao preciso &vetor
/*
    printf("%i\n", ponteiro); //print no endereço de memoria onde o ponteiro esta apontando
    printf("%p\n", ponteiro); //Maneira correta do print no endereço de memoria CORRETO
*/

   //mostrando que um vetor ocupa espaços sequenciais na memoria
    /*ponteiro =&vetor[0];
    printf("%p\n", ponteiro);

    ponteiro =&vetor[1];
    printf("%p\n", ponteiro);

    ponteiro =&vetor[2];
    printf("%p\n", ponteiro);*/
/*
    ++ponteiro; //incrementando a posição a ser apontada
    printf("%i\n", *ponteiro); //mostrando valor pós incremento

    ++ponteiro; //incrementando a posição a ser apontada
    printf("%i\n", *ponteiro); //mostrando valor pos incremento
*/

    //alterando o valor do vetor
    *(ponteiro + 1) =10; //o endereço de memoria do ponteiro + 1
                        //(ou seja ele aponta pra 0 logo posição 0+1
                        //e a i pega o endereço de memoria da posição correspondente,
                        //e assim altera o valor ou seja o valor 2 passa a ser 10)
    printf("%i : %i : %i", vetor[0], vetor[1], vetor[2]);
getchar(); //desnecessário para o CODE BLOCKS.
return 0;
}


