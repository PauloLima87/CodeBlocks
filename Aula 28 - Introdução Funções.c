#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


//se função antes de MAIN não precisa declarar, porem por convenão
//declara-se as funções na MAIN e estabelece as funcionalidades após o MAIN

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

  int x;
  void imprimeMsg(void); //declaração da função


  imprimeMsg(); //chamada da função

return 0;
}

void imprimeMsg(void){  //construtor da função
printf("teste");        //o que ela vai fazer
}
