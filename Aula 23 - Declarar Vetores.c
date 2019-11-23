#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

  int nota1[5] ={5,4,3,2,1}; //indices de 0 a 4, foi criado 5 espaços indexados de 0 a 4.
  int nota2[5] = {2,9}; //preenche posições 0 e 1 com 2 e 9 e o restantq vira 0
  int nota3[5] = {0}; //preenche todas as posições com 0, so funciona com 0
 // int teste[3] ={nota1[5],nota2[5],nota3[5]};
 /* for (int j=0 ; j < 3 ;j++)
      {

         printf("\nTESTE %i\n\n", j+1);
            for (int i=0 ; i < 5 ;i++)
          {
            printf(" Nota[%i] : %i \n", i, teste[j]);

          };

      };*/
     printf("\nTESTE 1\n\n");

     for (int i=0 ; i < 5 ;i++)
          {
            printf(" Nota[%i] : %i \n", i, nota1[i]);

          };
     printf("\nTESTE 2\n\n");

     for (int i=0 ; i < 5 ;i++)
          {
            printf(" Nota[%i] : %i \n", i, nota2[i]);

          };
     printf("\nTESTE 3\n\n");

     for (int i=0 ; i < 5 ;i++)
          {
            printf(" Nota[%i] : %i \n", i, nota3[i]);

          };
return 0;
}
