#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int somaVetor(int vetor[], const int n){
    int soma = 0;
    int *ponteiro;
    int *const finalponteiro = vetor + n;
    //sabendo que um ponteiro aponta para a posi��o inicial do vetor
    //ao somar "n" ao vetor, temos que agora o *finalponteiro aponta para a ultima posi��o de vetor

    for(ponteiro=vetor;ponteiro < finalponteiro; ++ponteiro){
        soma += *ponteiro;
    }

    return soma;

}

int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR
    int somaVetor(int vetor[], const int n);
    int vetor[10] = {5,5,5,5,5,5,5,5,5,5};

    printf("A soma do vetor � : %i", somaVetor(vetor,10));
getchar(); //desnecess�rio para o CODE BLOCKS.
return 0;
}


