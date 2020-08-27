#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{

    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR


    int x =1;
    int y =0;

    y = x++;//PósIncremento
    /*equivalente a fazer
                y = x
                x = x+1 */

    y = ++x; //PréIncremento
    /*equivalente a fazer
                x = x+1
                y = x   */

    y = x++;//PósDecremento
    /*equivalente a fazer
                y = x
                x = x-1 */

    y = --x; //PréDecremento
    /*equivalente a fazer
                x = x-1
                y = x   */

    printf("X = %i\n", x);
    printf("Y = %i\n", y);

getchar(); //desnecessário para o CODE BLOCKS.
return 0;
}


