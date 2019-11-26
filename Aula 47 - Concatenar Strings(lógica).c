#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

  //função para concaternar strings
  void concatenaString (char string1[], int tamS1,
                        char string2[], int tamS2,
                        char stringResult[]);

  char palavra1[] = {'P','Ã','O',' '};
  char palavra2[] = {'M','O','R','T','A','D','E','L','A'};
  char novaPalavra[13];

  concatenaString(palavra1, 4, palavra2, 9,novaPalavra);

  for (int i = 0;i < 13 ; i++)
      {
        printf("%c", novaPalavra[i]);
      };

  return 0;
}

void concatenaString (char string1[], int tamS1,
                        char string2[], int tamS2,
                        char stringResult[])
{
  for (int i = 0;i < tamS1; i++) //print inicial de tamanho da string 1
      {
        stringResult[i]=string1[i];
      };
  for(int j =0; j< tamS2; j++) //nova função indo da posição final de string 1 ate o fim da string 2 cvariando com J
   {
    stringResult[tamS1+j]=string2[j];
   };
}
