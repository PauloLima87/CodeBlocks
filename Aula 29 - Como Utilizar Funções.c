#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR
  float areaRetangulo(float x, float y),total, base, altura;

  //leitura de parametros
  printf("Base:");
  scanf("%f",&base);
  printf("Altura:");
  scanf("%f",&altura);

  //chamada e apresenta��o de resultado
  total = areaRetangulo(base,altura);
  printf("Area: %f",total);
return 0;
}
float areaRetangulo(float x, float y){ //fun��o transmite X e Y e retorna obrigatoriamente um Float
    float area = x * y;
  return area;
}
