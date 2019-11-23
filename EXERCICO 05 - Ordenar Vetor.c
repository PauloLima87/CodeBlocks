#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//Crie um programa que possui na função principal um vetor de tamanho 10 de número inteiros
//e defina diversos valores inteiros para o seu vetor de tamanho 10.
//Crie uma função chamada ordemCrescente é capaz de ordenar os 10 valores do seu vetor em ordem crescente.
//Após a ordenação dos valores dê um printf para confirmar que os valores do vetor foram ordenados
//corretamente em ordem crescente.

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

  int vetor[10] ={6,4,1,9,8,0,5,7,3,2};
  int aux;

  void ordemCrescente(int cadeia[], int tam);

  ordemCrescente(vetor,10);//passar vetor nao necessita tem o indice, pode passar so o nome
  for (int i = 0; i<10 ;i++)
  printf("%i", vetor[i]);

  return 0;
}

void ordemCrescente(int cadeia[], int tam)
{
    int tmp;
    for (int i=0;i<tam ;i++ )
        {
        for (int j=i+1; j<tam ;j++ )
            {
              if (cadeia[i]>cadeia[j])
              {
                    tmp = cadeia[i];
                    cadeia[i]= cadeia[j];
                    cadeia[j]=tmp;
              }
            }
        };
    //semreturn ALGUMA COISA, função definida como VOID
}
