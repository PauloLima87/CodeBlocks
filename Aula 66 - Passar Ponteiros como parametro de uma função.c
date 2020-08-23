#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>



int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

    void testeVariavel(int x);
    void testePonteiro(int *pX);
    int teste =1;
    int *pTeste =&teste;

    testeVariavel(teste);  // qdo se passa para funçao a variavel teste a funçao cria uma copia em outro local da memoria
    testePonteiro(pTeste); //aqui nao exite uma copia, é passado pra função o endereço de memori\a da função teste, ou seja
                           //é definido que a função irá na posição de memoria e irá alterar o valor presente la dentro

    printf("%i\n" , teste);  //valor da variavel
    printf("%i\n" , &teste); //Posição de memoria onde está o valor da varial
    printf("%i\n" , pTeste); //posição de memoria do ponteiro *pTeste
    printf("%i\n" , *pTeste);// valor que esta dentro da posição de memoria apontada por *pTeste



getchar(); //desnecessário para o CODE BLOCKS.
return 0;
}


    void testeVariavel(int x ){
        ++x;
        printf("X = %i   Na posição: %i \n", x, &x);
    }
    void testePonteiro(int *pX ){
        ++*pX;
    }
