#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>



int main (int argc, char *argv[])
{
    struct lista{
        int valor;
        struct lista *proximo; //aponta para o endereço de memoria de uma lista
    };

    struct lista m1, m2, m3;
    struct lista *gancho=&m1;

    m1.valor=10;
    m2.valor=20;
    m3.valor=30;

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = (struct lista *) 0 ; //fecha a lista apontando para uma strutura de lista de valor nulo

    while(gancho != (struct lista *)0){
        printf("%i\n", gancho->valor);
        gancho = gancho->proximo;
    }

getchar(); //desnecessário para o CODE BLOCKS.
return 0;
}


