#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


//se fun��o antes de MAIN n�o precisa declarar, porem por conven�o
//declara-se as fun��es na MAIN e estabelece as funcionalidades ap�s o MAIN

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR

  int x;
  void imprimeMsg(void); //declara��o da fun��o


  imprimeMsg(); //chamada da fun��o

return 0;
}

void imprimeMsg(void){  //construtor da fun��o
printf("teste");        //o que ela vai fazer
}
