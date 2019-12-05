#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

  char linha[100];
  char caractere;
  int i=0;

  do
  {
      caractere = getchar();
      linha[i] = caractere;
      i++;
  } while (caractere!='\n'); //ate o usuário der ENTER

  //SUBSTITUINDO ENTER(\n) por \0

  /* Exemplo:   1 2 3 4 5   6
                C A S A \n  #

  Ao digitar casa e dar enter a saida é exatamente a acima, e o cursor
  irá se posicionar em seguida (posição 6)
  logo e preciso voltar uma posiçaõ para trocar o ENTER por \0              */

  linha[i-1] = '\0'; //"\0" é diferente de '0'

    printf("%s\n",linha);


   return 0;
}
