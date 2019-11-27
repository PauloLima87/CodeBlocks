#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR
  int idade;

  printf("Digite Idade: ");
  scanf("%i", &idade);

  printf("TESTANDO Op E (&&) \n\n");

  /*TABELA VERDADE
  V e V  = V (1 x 1 = 1)
  V e F  = F (1 x 0 = 0)
  F e V  = F (0 x 1 = 0)
  F e F  = F (0 x 0 = 0)
  */
  if (idade>= 20 && idade<=40)
    {
      printf("Deu Certo");
    }else
    {
      printf("Não deu Certo");
    }

    printf("\nTESTANDO Op OU (||)\n\n");

   /*TABELA VERDADE
  V ou V  = V  (1+1 = 1)
  V ou F  = V  (1+0 = 1)
  F ou V  = V  (0+1 = 1)
  F ou F  = F  (0+0 = 0)
  */
  if (idade>= 20 || idade<=40)
    {
      printf("Deu Certo");
    }else
    {
      printf("Não deu Certo");
    }

   return 0;
}
