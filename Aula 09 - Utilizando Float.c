#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR
    float num1= 5;
    int num2 = 2;
    float resultado = num1/num2;
    int res = num1/num2;
    printf("Ressultado armazenado em Int: %i\n\n", res);
    printf("Resultado armazenado em Float: %f\n\n", resultado);

system("PAUSE");
return 0;
}
