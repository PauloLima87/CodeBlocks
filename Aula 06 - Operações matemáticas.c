#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR
    int minhaidade = 35, maeidade = 55, paiidade =60, irmaoidade = 15, totalidade = minhaidade+maeidade+paiidade+irmaoidade;


    printf("As idades da s�o fam�lia s�o...\n M�e : %i\n Pai : %i\n Minha : %i\n\n", maeidade, paiidade, minhaidade);
    printf("A Soma das idades �: %i,\n\n total = %d \n\n", minhaidade+maeidade+paiidade+irmaoidade, totalidade);

    maeidade = paiidade; //variavel maeidade recebe valor da paiidade
    printf("Atribui��o M�e = Pai %d", maeidade);
system("PAUSE");
return 0;
}
