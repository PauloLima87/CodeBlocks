#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR
    int minhaidade = 32, maeidade = 54, paiidade =59;

    printf("As idades da são família são...\n Mãe : %i\n Pai : %i\n Minha : %i\n\n", maeidade, paiidade, minhaidade);

system("PAUSE");
return 0;
}
