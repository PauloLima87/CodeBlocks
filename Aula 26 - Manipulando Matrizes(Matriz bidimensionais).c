#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR


  int matriz[5][5] ={{ 1, 2, 3, 4, 5},
                     { 6, 7, 8, 9,10},
                     {11,12,13,14,15},
                     {16,17,18,19,20},
                     {21,22,23,24,25}};
  for (int i=0;i<5 ;i++)
      {
        printf("LINHA [%i]\n", i+1);
        for (int j=0;j<5 ;j++ )
            {
              printf("%i", matriz[i][j]);
            };
        printf("\n");
      };
return 0;
}
