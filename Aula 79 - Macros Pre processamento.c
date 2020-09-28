#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//macro
//x maior que y? se verdade mostra X senao mostra Y
#define MAIOR(x,y) x > y ? x : y
#define E_MINUSCULO(char) char >= 'a' && char <= 'z'

int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR
    char x = 'F';
    if (E_MINUSCULO(x)){
        printf("É uma letra minuscula \n");
    }else{
        printf("Não é uma letra minuscula \n");
    }
    printf("O numero Maior é : %d\n", MAIOR(400,50));


getchar(); //desnecessário para o CODE BLOCKS.
return 0;
}


