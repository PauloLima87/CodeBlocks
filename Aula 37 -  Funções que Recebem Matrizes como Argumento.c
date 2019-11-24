#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

  int matriz[3][3] ={1,2,3,4,5,6,7,8,9};

  void mostraMatrix(int cadeia[][3], int linha);//ao passar uma matrix obrigatoriamente devemos passar o parametro da coluna

  mostraMatrix(matriz,3);
  return 0;
}

void mostraMatrix(int cadeia[][3], int linha){

  for (int i=0;i<linha;i++)
      {
      printf("|");

        for (int j=0;j<3;j++ )
            {
              printf(" %i ", cadeia[i][j]);
            };
        printf("|\n");

      };
};
