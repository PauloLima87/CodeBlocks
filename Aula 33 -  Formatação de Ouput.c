#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

  int intVar = 9999999;
  int intVar2 = 10;
  double doubleVar = 100.1293456789;



  //Tipos de saída pra inteiras
  printf("Variável inteira(%%d) = %10d\n", intVar); //vem de digito numero antes significa alinhamento de 10 espaços
  printf("Variável inteira(%%i) = %i\n", intVar); //variavel tipo inteira
  printf("Variável inteira(%%x) = %x\n", intVar); //base 16 hexadecimal
  printf("Variável inteira(%%o) = %o\n", intVar); //base 8 octal

  //Tipos de saída pra inteiras
  printf("\n");
  printf("Variável inteira(%%d) = %d\n", intVar2); //vem de digito
  printf("Variável inteira(%%i) = %i\n", intVar2); //variavel tipo inteira
  printf("Variável inteira(%%x) = %x\n", intVar2); //base 16 hexadecimal
  printf("Variável inteira(%%o) = %o\n", intVar2); //base 8 octal

  //Tipos de Saída para Double e Float
  printf("\n");
  printf("Variável Double(%%f) = %f\n", doubleVar); //maxima precisao arredondando depois das 6 casa depois da virgula
  printf("Variável Double(%%e) = %e\n", doubleVar); //Apresentação em notação científica
  printf("Variável Double(%%g) = %g\n", doubleVar); //perde a precisão (3 casas depois da virgula), porem nao arredonda o numero
  printf("Variável Double(%%a) = %a\n", doubleVar); //Apresentação em notação científica utilizando virgulas
  printf("Variável Double(%%f) = %.2f\n", doubleVar); //Apresentação formatada para 2 casas depois da virgula, ele arredonda automaticamente


  return 0;
}
