#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//  Escreva um programa que pe�a que o usu�rio digite dois n�meros INTEIROS.
//O seu programa deve verificar se o primeiro n�mero � divis�vel pelo segundo
//e retornar na tela do usu�rio uma mensagem apropriada a verifica��o feita.

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR
  int num1, num2, res;
    printf("Digite o primeiro valor: ");
    scanf("%i", &num1);
    printf("Digite o segundo valor: ");
    scanf("%i", &num2);
     if ( num2 == 0){
    printf("Imposs�vel dividir por 0 (zero) ");}
    res = num1 % num2;
  //if ( num2 == 0){
  //  printf("Imposs�vel dividir por 0 (zero) ");}
  //else{
    if (res==0){
      printf("O Numero %i � divis�vel por %i", num1, num2);
    } else {
      printf("O Numero %i N�O � divis�vel por %i", num1, num2);
    }
    //}
  printf("\nNumero 1: %i \nNumero 2: %i\n\n", num1, num2);

  system("PAUSE");
return 0;
}
