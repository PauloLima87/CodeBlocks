#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR

  int intVar = 9999999;
  int intVar2 = 10;
  double doubleVar = 100.1293456789;



  //Tipos de sa�da pra inteiras
  printf("Vari�vel inteira(%%d) = %10d\n", intVar); //vem de digito numero antes significa alinhamento de 10 espa�os
  printf("Vari�vel inteira(%%i) = %i\n", intVar); //variavel tipo inteira
  printf("Vari�vel inteira(%%x) = %x\n", intVar); //base 16 hexadecimal
  printf("Vari�vel inteira(%%o) = %o\n", intVar); //base 8 octal

  //Tipos de sa�da pra inteiras
  printf("\n");
  printf("Vari�vel inteira(%%d) = %d\n", intVar2); //vem de digito
  printf("Vari�vel inteira(%%i) = %i\n", intVar2); //variavel tipo inteira
  printf("Vari�vel inteira(%%x) = %x\n", intVar2); //base 16 hexadecimal
  printf("Vari�vel inteira(%%o) = %o\n", intVar2); //base 8 octal

  //Tipos de Sa�da para Double e Float
  printf("\n");
  printf("Vari�vel Double(%%f) = %f\n", doubleVar); //maxima precisao arredondando depois das 6 casa depois da virgula
  printf("Vari�vel Double(%%e) = %e\n", doubleVar); //Apresenta��o em nota��o cient�fica
  printf("Vari�vel Double(%%g) = %g\n", doubleVar); //perde a precis�o (3 casas depois da virgula), porem nao arredonda o numero
  printf("Vari�vel Double(%%a) = %a\n", doubleVar); //Apresenta��o em nota��o cient�fica utilizando virgulas
  printf("Vari�vel Double(%%f) = %.2f\n", doubleVar); //Apresenta��o formatada para 2 casas depois da virgula, ele arredonda automaticamente


  return 0;
}
