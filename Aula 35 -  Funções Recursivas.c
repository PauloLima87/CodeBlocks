#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

  int fatorial(int x);
  int num, resultado;

  printf("Numero: ", num);
  scanf("%i", &num);

  resultado = fatorial(num);
  printf("O Fatorial é : %i", resultado);
  return 0;
}

  int fatorial(int x){
    int resultado;
    if (x==0){
      resultado = 1;
    }else{
      resultado = x * fatorial(x-1);
                //3 x 2! (exemplo x = 3)
                //2 x 1!
                //1 x 0!
                //0 x (-1) X == 0 logo retorna 1
                //assim
                //0 x -1! vira 1
                //1 x 0! vira 1 x 1 retorna 1
                //2 x 1! vira 2 x 1 retorna 2
                //3 x 2! vira 3 x 2 retorna 6
                //resultado = 6
    }
    return resultado;
  }
