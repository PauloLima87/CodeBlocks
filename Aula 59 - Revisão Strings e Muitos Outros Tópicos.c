#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <stdbool.h>

struct dicionario{
        char palavra[30];
        char definicao[100];
};

bool comparaString(const char palavra1[], const char palavra2[]){
    //palavra 1 e nao nao poderão ser alteradas
    //no escopo da função, pois foram definidas como CONST
    int i=0;
    while(palavra1[i] == palavra2[i] && palavra1[i] !='\0' && palavra2[i]!= '\0'){
            ++i;
    }
    if (palavra1[i]=='\0' && palavra2[i]=='\0'){
      return true;
    }else{
        return false;
    };
};

int procurarStrings(const struct dicionario lingua[], const char procurar[], const int numDePalavras){

    bool comparaString(const char palavra1[], const char palavra2[]);
    int i = 0;
    while (i< numDePalavras){
        if (comparaString(procurar,lingua[i].palavra)){
          return i;
        }else{
          ++i;
        };
    };

    return  -1;
}
int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontuação em PT-BR

int procurarStrings(const struct dicionario lingua[], const char procurar[], const int numDePalavras);

const int NUMERODEDEFINICOES = 7;
char palavra[20] = {'\0'};
int resultadoPesquisa;

const struct dicionario portugues[7] = {
{"pao","comida de farinha"},
{"mortadela","massaroca de td e fica bom"},
{"feijao","te faz peidar pra cacete"},
{"tropeiro","peida seco"},
{"queijo","top de linha"},
{"macarronada","coisa de italiano"},
{"pizza","coisa de italiano preguiçoso"}};

printf("Digite uma palavra : ");
scanf("%s", palavra);

resultadoPesquisa = procurarStrings(portugues,palavra,NUMERODEDEFINICOES);

 if (resultadoPesquisa!= -1){
  printf("%s\n", portugues[resultadoPesquisa].definicao);
 }else{
     printf("Palavra não encontrada");

 };

getchar(); //desnecessário para o CODE BLOCKS.
return 0;
}


