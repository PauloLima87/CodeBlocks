#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
void copiaString (char *copiarDaqui, char *colarAqui){
    while(*copiarDaqui != '\0'){
        *colarAqui = *copiarDaqui;
        ++copiarDaqui;
        ++colarAqui;

    }
        *colarAqui = '\0';
}


int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR

    void copiaString (char *copiarDaqui, char *colarAqui);

    char string1[] = "P�o com Mortadela";
    char string2[20];

    copiaString(string1, string2);
    printf("%s", string2);

getchar(); //desnecess�rio para o CODE BLOCKS.
return 0;
}


