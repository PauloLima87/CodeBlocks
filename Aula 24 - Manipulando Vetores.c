#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

  float nota[5] ={0};
  int total = 0;
  double media=0;

  printf("\nTOTAL INICIO: %i", total);

  for (int i=0; i<5; i++ )
      {
        printf("\nQual a NOTA %i? ", i+1);
        scanf("%f", &nota[i]);
        total +=nota[i];
      };
  media = total/5;
  printf("\nTOTAL FIM: %i \n Média Final: %f", total, media);

return 0;
}
