#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR
  int idade;

  printf("Favor informar idade: ");
  scanf("%i", &idade);
  if (idade<=5)
    printf("Bebê\n\n");
  else if (5 < idade && idade <=10)
    printf("Criança\n\n");
  else if (10 < idade && idade <=17)
    printf("Adolecente\n\n");
  else if (17< idade && idade<65)
    printf("Adulto\n\n");
  else
    printf("Idoso\n\n");


  system("PAUSE");
return 0;
}
