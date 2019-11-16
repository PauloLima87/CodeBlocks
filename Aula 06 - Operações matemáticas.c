#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR
    int minhaidade = 35, maeidade = 55, paiidade =60, irmaoidade = 15, totalidade = minhaidade+maeidade+paiidade+irmaoidade;


    printf("As idades da são família são...\n Mãe : %i\n Pai : %i\n Minha : %i\n\n", maeidade, paiidade, minhaidade);
    printf("A Soma das idades é: %i,\n\n total = %d \n\n", minhaidade+maeidade+paiidade+irmaoidade, totalidade);

    maeidade = paiidade; //variavel maeidade recebe valor da paiidade
    printf("Atribuição Mãe = Pai %d", maeidade);
system("PAUSE");
return 0;
}
