#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

  float somaNumeros(float num1, float num2);
  float n1, n2, res;
  printf("Quais numeros você irá somar? \n");
  printf("NUM 1: ");
  scanf("%f", &n1);
  printf("NUM 2: ");
  scanf("%f", &n2);
  res = somaNumeros(n1,n2);

  printf("Soma dos valores ABS: %.2f", res);



  return 0;
}
float somaNumeros(float num1, float num2){
      //float total;
      float valorABS(float numero);

     /* if (num1 > 0 && num2 > 0)
          {
            total = num1 + num2;
          }else if (num1<0 && num2>0)
          {
              num1 = valorABS(num1);
              total = num1+num2;
          }else if(num1 >0 && num2<0)
          {
              num2 = valorABS(num2);
              total = num1+num2;
          }else{
              num1 = valorABS(num1);
              num2 = valorABS(num2);
              total = num1+num2;
          };
  return total; O QUE EU FIZ FICOU MUITO EXTENSO*/
  if (num1<0)
      num1 = valorABS(num1);
  if (num2<0)
      num2 = valorABS(num2);

  return num1+num2;
}
float valorABS(float numero)
{
  return numero*-1;
}
