#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//  Escreva um programa que peça que o usuário digite dois números INTEIROS.
//O seu programa deve verificar se o primeiro número é divisível pelo segundo
//e retornar na tela do usuário uma mensagem apropriada a verificação feita.

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR
  int num1, num2, res;
    printf("Digite o primeiro valor: ");
    scanf("%i", &num1);
    printf("Digite o segundo valor: ");
    scanf("%i", &num2);
     if ( num2 == 0){
    printf("Impossível dividir por 0 (zero) ");}
    res = num1 % num2;
  //if ( num2 == 0){
  //  printf("Impossível dividir por 0 (zero) ");}
  //else{
    if (res==0){
      printf("O Numero %i É divisível por %i", num1, num2);
    } else {
      printf("O Numero %i NÃO É divisível por %i", num1, num2);
    }
    //}
  printf("\nNumero 1: %i \nNumero 2: %i\n\n", num1, num2);

  system("PAUSE");
return 0;
}
