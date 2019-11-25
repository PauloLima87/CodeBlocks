#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/*Crie um programa que possui uma fun��o que recebe como argumento um vetor de tamanho 5
de tipo estrutura sendo que essa estrutura deve armazenar um determinado hor�rio no formato hh:mm:ss,
pe�a que o usu�rio digite 5 hor�rios diversos que dever�o ser armazendos no argumento recebido.
Crie uma segunda fun��o que receber� este msmo vetor estrutura mas dessa vez a fun��o dever� apenas ler
os valores armazendos no vetor estrtura mostrando uma mensagem apropriada.

RESPOSTA AULA 45*/

struct horario
{
  int hora;
  int min;
  int seg;
};

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR

//defini��o do vetor
struct horario mEstrutura[5]={};

//defini��o das fun��es
void armazenaHorario(struct horario vetor[]);
void imprimeHorario(struct horario cadeia[]);

//leitura dos valores do vetor
  printf("====Entre com os Hor�rios====\n\n");
  armazenaHorario(mEstrutura);

//Mostra as respostas
  imprimeHorario(mEstrutura);

  return 0;
}
void armazenaHorario(struct horario vetor[])
{
  for (int i =0;i<5 ;i++ )
      {
        printf("Hora %i: ",i+1);
        scanf("%i", &vetor[i].hora);
        printf("Minuto %i: ",i+1);
        scanf("%i", &vetor[i].min);
        printf("Seg %i:",i+1);
        scanf("%i", &vetor[i].seg);
        printf("==========\n");

      };
};

void imprimeHorario(struct horario cadeia[])
{
  for (int i =0;i<5 ;i++ )
      {
        printf("RESPOSTA [%i] %i:%i:%i\n", i+1,cadeia[i].hora, cadeia[i].min, cadeia[i].seg);
      };
};


