#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR
  void funcaoPrint(int x , int vetor[]);
  int x = 10;
  int vetor[3] = {10};

  funcaoPrint(x, vetor);

  //qdo passr uma variavel Int, FLoat Double, Char para uma fun��o
  //a variavel dentro da fun��o � uma copia da anterior, assim a original nao tem o valor alterado
  //para altgerar a original  fun��o deveria ter um retorno par armazenal o valor alterado an original, nesse caso a fun��o � void
  printf("V�ri�vel int na fun��o principal = %i \n", x);

  //qdo passr um vetor ou  uma matriz para uma fun��o, passamos n�o uma c�poia mas um endere�o de mem�ria
  //de tal modo que se realizar uma altera��o dentro da fun��o altera tbm o valor tbm onde ela foi colocada originalmente
  printf("Vetor na fun��o principal = %i \n", vetor[1]);

  return 0;
}

void funcaoPrint(int x , int vetor[]){
  x +=10;
  vetor[1]=20;

  printf("V�ri�vel int na fun��o print = %i \n", x);
  printf("Vetor na fun��o print = %i \n\n", vetor[1]);
}
