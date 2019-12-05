#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

    void verificaLetra(char stringCadeia);
    char nome[30];
    int aux = 0;

    //entrada da cadeia a ser verificada
    printf("Digite o Nome: ");
    scanf("%s", nome);

    while (nome[aux]!='\0')
        {
            verificaLetra(nome[aux]);
            ++aux;
        }

system("PAUSE");
return 0;
}
void verificaLetra(char stringCadeia)
{
    if ((stringCadeia>='a' && stringCadeia<='z')||
        (stringCadeia>='A' && stringCadeia<='Z'))
    {
        printf("É Letra\n");
    }else
    {
        printf("Não é Letra\n");
    }
}
