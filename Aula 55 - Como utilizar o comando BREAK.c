#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR
    int i;
    for (i=1;i<=20 ;i++ )
        {
            if (i%3==0 && i%9==0)
                {
                    printf("%i � Divisivel por 3 e 9\n", i);
                    break; //ao atender as condi��es para a execu��o;
                }else{
                    printf("%i Pr�ximo n�mero %i\n", i, i+1);
                };
        };


system("PAUSE");
return 0;
}
