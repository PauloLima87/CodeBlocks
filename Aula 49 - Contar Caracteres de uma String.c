#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

  int tamanhoString (char string[]);
  char stringUsuario[20];

  printf("Entre com a Palavra? ");
  scanf("%s", &stringUsuario); //%s para captar string

  int res = tamanhoString(stringUsuario);

  printf("STRING DIGITADA: %s\n", stringUsuario);
  printf("NUMERO TOTAL: %i\n", res);
  return 0;
}

int tamanhoString (char string[])
{
  int numeCaracteres = 0;
  do
  {
    numeCaracteres+=1;
  } while (string[numeCaracteres]!='\0');
      numeCaracteres+=1;//para contar letras tem que ignorar essa linha
      //para contar caracteres é preciso incluir '\0'

  return numeCaracteres;
}
