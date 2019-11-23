#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Crie um programa que que pede que o usuário digite 4 notas de 0 a 10 (tipo float) de 4 alunos
e os valores deverão ser armazendos em uma matriz bidimensional.
Faça a média das notas de cada aluno e armazene as 4 médias em um vetor.
Por última coloque na tela do usuário uma mensagem informando a média de cada aluno.*/

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

  float nota[4][4], soma=0, media[4]={0};


  for (int i=0;i<4 ;i++ )
      {
        printf("\n-- Aluno %i --\n\n", i+1);
        for (int j=0;j<4 ;j++ )
            {
              printf("Aluno %i - Nota %i: \n", i+1,j+1);
              scanf("%f", &nota[i][j]);
              soma+=nota[i][j];
            };
        media[i]=soma;
        printf("SOMA: %f", media[i]);
        soma=0;
      };
  for (int i=0; i<4;i++ )
      {
        printf("\n-- Aluno %i --", i+1);
        printf("Média: %f", media[i]/4);
      };


return 0;
}
