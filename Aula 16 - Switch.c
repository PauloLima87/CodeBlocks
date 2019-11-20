#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR
  int num;

 while (num>0 &&num<=5){
  printf("Favor informar número de 1 a 5 : ");
  scanf("%i", &num);
  switch (num){
  case 1:
    printf("Primeiro\n\n");
    break; //se nao colocar passar por todos

  case 2:
    printf("Segundo\n\n");
    break; //se nao colocar passar por todos

  case 3:
    printf("Terceiro\n\n");
    break; //se nao colocar passar por todos

  case 4:
    printf("Quarto\n\n");
    break; //se nao colocar passar por todos

  case 5:
    printf("Quinto\n\n");
    break; //se nao colocar passar por todos

  default:
    printf("Opção Inválida\n\n");
    break; //se nao colocar passar por todos

  }
  };


  system("PAUSE");
return 0;
}
