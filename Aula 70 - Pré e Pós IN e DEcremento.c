#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{

    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR


    int x =1;
    int y =0;

    y = x++;//P�sIncremento
    /*equivalente a fazer
                y = x
                x = x+1 */

    y = ++x; //Pr�Incremento
    /*equivalente a fazer
                x = x+1
                y = x   */

    y = x++;//P�sDecremento
    /*equivalente a fazer
                y = x
                x = x-1 */

    y = --x; //Pr�Decremento
    /*equivalente a fazer
                x = x-1
                y = x   */

    printf("X = %i\n", x);
    printf("Y = %i\n", y);

getchar(); //desnecess�rio para o CODE BLOCKS.
return 0;
}


