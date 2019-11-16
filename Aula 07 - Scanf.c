#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR
    int base, altura, area;

    printf("Valor da base: ");
    scanf("%i", &base);

    printf("Valor da altura: ");
    scanf("%i", &altura);

    area = base*altura;
    printf("Area total: %i\n\n", area);


system("PAUSE");
return 0;
}
