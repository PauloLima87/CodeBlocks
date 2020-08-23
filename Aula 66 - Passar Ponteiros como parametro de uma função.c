#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>



int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR

    void testeVariavel(int x);
    void testePonteiro(int *pX);
    int teste =1;
    int *pTeste =&teste;

    testeVariavel(teste);  // qdo se passa para fun�ao a variavel teste a fun�ao cria uma copia em outro local da memoria
    testePonteiro(pTeste); //aqui nao exite uma copia, � passado pra fun��o o endere�o de memori\a da fun��o teste, ou seja
                           //� definido que a fun��o ir� na posi��o de memoria e ir� alterar o valor presente la dentro

    printf("%i\n" , teste);  //valor da variavel
    printf("%i\n" , &teste); //Posi��o de memoria onde est� o valor da varial
    printf("%i\n" , pTeste); //posi��o de memoria do ponteiro *pTeste
    printf("%i\n" , *pTeste);// valor que esta dentro da posi��o de memoria apontada por *pTeste



getchar(); //desnecess�rio para o CODE BLOCKS.
return 0;
}


    void testeVariavel(int x ){
        ++x;
        printf("X = %i   Na posi��o: %i \n", x, &x);
    }
    void testePonteiro(int *pX ){
        ++*pX;
    }
