#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//Escreva um programa que inverta as cifras de um número INTEIRO POSITIVO digitado pelo usuário.
//Exemplo: Se o usuário digitar 1234 o programa deve retornar na tela 4321.

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR
  int numero, invertido;
  printf("Qual Número deseja inverter? \n\n");
  scanf("%i", &numero);
  if (numero>=0){
      do
          {
            invertido = numero%10;
            printf("%i", invertido);
            numero = numero/10;

          }while (numero!=0);

      printf("\n\n");
  }else{
    numero*=-1;

    printf("-");
    do
          {
            invertido = numero%10;
            printf("%i", invertido);
            numero = numero/10;

          }while (numero!=0);

    printf("\n\n");

  }
  system("PAUSE");
return 0;
}
