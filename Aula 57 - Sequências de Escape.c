#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

    printf("TESTANDO SEQUENCIAS DE ESCAPE");
    printf("\nAlarme sonoro: \\a\a");
    printf("\nMove Cursor para Esquerda: \\b\b");
    printf("\nTAB: \\t\t\tcontinua depois do TAB");
    printf("\nINICIO DA LINHA: \\r\r");
    printf("\nFIM DA CADEIA DE CARACTERES: \\0\0");
    printf("\nFIM DA CADEIA\0 DE CARACTERES: \\0\0");
    printf("\nESCREVER ASPAS SIMPLES: \\' ");
    printf("\nESCREVER ASPAS DUPLAS: \" ");




getchar(); //desnecessário para o CODE BLOCKS.

return 0;
}
