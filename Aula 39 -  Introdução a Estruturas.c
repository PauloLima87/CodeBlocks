#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR
  void funcaoPrint(int x , int vetor[]);
  int x = 10;
  int vetor[3] = {10};

  funcaoPrint(x, vetor);

  //qdo passr uma variavel Int, FLoat Double, Char para uma função
  //a variavel dentro da função é uma copia da anterior, assim a original nao tem o valor alterado
  //para altgerar a original  função deveria ter um retorno par armazenal o valor alterado an original, nesse caso a função é void
  printf("Váriável int na função principal = %i \n", x);

  //qdo passr um vetor ou  uma matriz para uma função, passamos não uma cópoia mas um endereço de memória
  //de tal modo que se realizar uma alteração dentro da função altera tbm o valor tbm onde ela foi colocada originalmente
  printf("Vetor na função principal = %i \n", vetor[1]);

  return 0;
}

void funcaoPrint(int x , int vetor[]){
  x +=10;
  vetor[1]=20;

  printf("Váriável int na função print = %i \n", x);
  printf("Vetor na função print = %i \n\n", vetor[1]);
}
